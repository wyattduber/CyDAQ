# Standard Python Packages
import time
from typing import Union
from threading import Thread
from waiting import wait
from PyQt5.QtWidgets import QFileDialog
from scipy.io import savemat

# PyQt5 Packages
from PyQt5 import QtWidgets
from PyQt5.Qt import QIntValidator
from PyQt5.Qt import QMessageBox
from PyQt5.QtGui import QDoubleValidator

# pglive Packages
from pglive.sources.data_connector import DataConnector
from pglive.sources.live_plot import LiveLinePlot
from pglive.sources.live_plot_widget import LivePlotWidget

# Stuff From Project - May show as an error but it works
from generated.BalanceBeamWidgetUI import Ui_BalanceBeamWidget
from widgets.mode_widget import CyDAQModeWidget

CONVERT_SEC_TO_MS = 1000
DEFAULT_SAVE_LOCATION = "U:\\"


class BalanceBeamModeWidget(QtWidgets.QWidget, Ui_BalanceBeamWidget, CyDAQModeWidget):
    """Balance Beam mode window. Allows the use of the balance beam tool with custom settings."""

    def __init__(self, mainWindow):
        super(BalanceBeamModeWidget, self).__init__()
        self.setupUi(self)

        self.mainWindow = mainWindow

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper
        self.prev_geometry = None
        self.logger = self.mainWindow.logger

        # Start Balance Beam Mode w/ Default Values
        self.paused = False
        self.cmd_paused = False
        self.running = False
        self.checking_connection = False
        self.graph_thread = None
        self.connection_thread = None
        self.pre_error = False
        self.savemat_thread = None
        self.plot_data = {}
        self.start_time = 0
        self.filename = f"data-{time.time()}.mat"

        # Balance Beam Input Values (Default)
        self.kp = 0
        self.ki = 0
        self.kd = 0
        self.N = 0
        self.setcm = 0

        # Set current values for reference
        self.kp_output.setText(str(self.kp))
        self.ki_output.setText(str(self.ki))
        self.kd_output.setText(str(self.kd))
        self.n_output.setText(str(self.N))
        self.set_cm_output.setText(str(self.setcm))

        # Input Validation
        validator = QDoubleValidator(0, 3, 6)
        self.kp_input.setValidator(validator)

        validator = QDoubleValidator(0, 2, 6)
        self.ki_input.setValidator(validator)
        self.kd_input.setValidator(validator)

        validator = QIntValidator(0, 1000)
        self.n_input.setValidator(validator)

        validator = QIntValidator(-15, 15)
        self.set_cm_input.setValidator(validator)

        ### Below are the methods called when buttons are pressed ###

        # Home Button
        self.home_btn.clicked.connect(lambda: self.pre_btn_checks("home"))

        # Widget Buttons
        self.start_btn.clicked.connect(lambda: self.pre_btn_checks("start"))
        self.stop_btn.clicked.connect(lambda: self.pre_btn_checks("stop"))
        self.send_constants_btn.clicked.connect(lambda: self.pre_btn_checks("send_constants"))
        self.send_set_point_btn.clicked.connect(lambda: self.pre_btn_checks("send_set"))
        self.save_step_btn.clicked.connect(lambda: self.pre_btn_checks("save_step"))
        self.save_plot_data_btn.clicked.connect(lambda: self.pre_btn_checks("save_plot_data"))
        self.offset_inc_btn.clicked.connect(lambda: self.pre_btn_checks("offset_inc"))
        self.offset_dec_btn.clicked.connect(lambda: self.pre_btn_checks("offset_dec"))
        self.pause_btn.clicked.connect(lambda: self.pre_btn_checks("pause"))

        # Set high and low line values
        self.low_sample: Union[float, None] = -10
        self.high_sample: Union[float, None] = 10

        # Create plot itself
        self.graph_view = LivePlotWidget(title="Ball Position Vs. Time", background="#F2F2F2")

        # Show grid and make it look nice
        self.graph_view.showGrid(x=True, y=True, alpha=0.3)

        # Set labels
        self.graph_view.setLabel('bottom', 'Time', units="s")
        self.graph_view.setLabel('left', 'Distance', units="cm")

        # Init Connectors
        self.mid_plot = LiveLinePlot(pen="green", width=2)
        self.low_plot = LiveLinePlot(pen="orange", width=2)
        self.high_plot = LiveLinePlot(pen="blue", width=2)

        self.mid_connector = DataConnector(self.mid_plot, max_points=100)
        self.low_connector = DataConnector(self.low_plot, max_points=100)
        self.high_connector = DataConnector(self.high_plot, max_points=100)

        # Add the plots and the graph view
        self.graph_view.addItem(self.mid_plot)
        self.graph_view.addItem(self.low_plot)
        self.graph_view.addItem(self.high_plot)

        # Attach graph_view to the widget on the page, then resize it properly
        self.graph_view.setParent(self.graph)
        self.graph_view.setGeometry(0, 0, 801, 641)

    def pre_btn_checks(self, btn):
        """
        When a button is pressed, check the various conditions
        that need to be met for each button to work properly
        """
        if btn == "home":
            if self.running:
                self.stop()
            self.mainWindow.switchToModeSelector(self.prev_geometry)
            self.logger.debug("Switched to Mode Selector from Balance Beam")
            return
        elif btn == "save_plot_data":
            if not self.running and len(self.plot_data) == 0:
                self._show_error("No Plot Data to Save!")
            else:
                self.savePlotData()
            return
        elif btn == "save_step":
            return  # TODO Not sure what save step is

        # Now handle commands that require an active CyDAQ connection
        # Or balance beam mode to be enabled (Seperate checks)

        if not self.mainWindow.connected:
            self._show_error("CyDAQ is not Connected!")
            return

        if btn == "start":
            if self.running:
                self._show_error("Balance Beam is already running!")
            else:
                self.start()
            return

        if not self.running:
            self._show_error("Balance Beam is not running!")
            return

        if btn == "stop":
            self.stop()

        # Pause graphing while the command is sent
        self.cmd_paused = True
        if btn == "send_constants":
            self.sendConstants()
        elif btn == "send_set":
            self.sendSetPoint()
        elif btn == "offset_inc":
            self.offsetInc()
        elif btn == "offset_dec":
            self.offsetDec()
        elif btn == "pause":
            self.pause()
        self.cmd_paused = False

    def start(self):
        """
        Stops the ping timer and does whatever else is needed in the main thread
        Runs the threaded start command as well
        This is because the wrapper call may cause the entire GUI window to freeze
        when it is waiting for a response from the CyDAQ. When run in a thread,
        this does not happen.
        """
        # Start checking status in the background
        # self.connection_thread = Thread(target=self.start_bb_mode)
        # self.connection_thread.start()

        self.runInWorkerThread(
            func=self.start_bb_mode,
            finished_func=self.start_graphing,
            error_func=lambda x: self.showError(x[2])
        )

        # Stop ping timer from other window, set log to update instantly for live data
        self.mainWindow.stopPingTimer()

    def start_bb_mode(self, **_):
        """
        Starts the Balance Beam and live graphing of the data.
        """

        # Get the latest version of constants from the GUI
        self._update_constants_in_memory()

        # Start Balance Beam Mode from Wrapper
        try:
            if not self.wrapper.start_bb(self.kp, self.ki, self.kd, self.N, self.setcm):
                self._show_error("Balance Beam Not Connected! 1")
                self.checking_connection = False
                self.logger.error("Balance Beam Not Connected! 1")

                # Resume the timer and log
                self.stop()
                self.pre_error = True
                return
            self.checking_connection = False
        except Exception as e:
            self._show_error("Balance Beam Not Connected! 2", e)
            self.checking_connection = False
            self.logger.error("Balance Beam Not Connected! 2", e)

            # Resume the timer and log
            self.stop()
            self.pre_error = True
            return

        # Once balance beam is connected, start beam mode
        self.running = True
        self.start_time = time.time()
        self.logger.debug("Balance Beam Started")

    def start_graphing(self, **_):
        if self.pre_error:
            self.pre_error = False
            self.logger.error("Canceling Balance Beam Start!")
            return

        self.runInWorkerThread(
            func=self.start_graphing,
            finished_func=self.stop,
            error_func=lambda x: self.showError(x[2])
        )

        # self.graph_thread = Thread(target=self.graph_data)
        # self.graph_thread.start()

    def stop(self):
        """
        Sends the stop command to the CyDAQ and ends all threads
        Also re-enables the ping timer in the background for connectivity
        """
        self.running = False
        self.graph_thread = None
        self.connection_thread = None
        self.savemat_thread = None
        self.wrapper.stop_bb()
        self.mainWindow.startPingTimer()
        self.logger.debug("Balance Beam Stopped")

    def sendConstants(self):
        """Send in the user-defined constants"""
        self._update_constants_in_memory()

        self.wrapper.set_constants(self.kp, self.ki, self.kd, self.N)

        self.kp_output.setText(str(self.kp))
        self.ki_output.setText(str(self.ki))
        self.kd_output.setText(str(self.kd))
        self.n_output.setText(str(self.N))

        self.logger.debug("Constants Sent!")
        self.logger.debug(f"Constants: kp: {self.kp}, ki: {self.ki}, kd: {self.ki} N: {self.N}")

    def sendSetPoint(self):
        """Send in the user-defined set point in cm"""
        self.setcm = float(self.set_cm_input.text()) or 0
        self.wrapper.send_set_point(self.setcm)
        self.set_cm_output.setText(str(self.setcm))

        self.logger.debug("Set Point Sent!")
        self.logger.debug(f"Set Point: {self.setcm}")

    def saveStep(self):
        """Method that does nothing at the moment according to Matt Post"""
        pass

    def savePlotData(self):
        """Save the plot data to a file"""
        options = QFileDialog.Options()
        self.filename, _ = QFileDialog.getSaveFileName(self, "Pick a location to save the data!",
                                                       DEFAULT_SAVE_LOCATION, "MATLAB Files (*.mat)",
                                                       options=options)
        # Save the current data dictionary to a matlab file
        # Using a thread because this process can take a while and be memory intensive
        self.savemat_thread = Thread(target=savemat, args=[self.filename, self.plot_data]).start()
        self.savemat_thread.start()

        self.logger.debug(f"Saved Plot Data to: {self.filename}")

    def offsetInc(self):
        """Increase the offset for calibration"""
        self.wrapper.offset_inc()
        self.logger.debug("Increased Offset")

    def offsetDec(self):
        """Decrease the offset for calibration"""
        self.wrapper.offset_dec()
        self.logger.debug("Increased Offset")

    def pause(self):
        """Pause the plotting/balancing"""
        if self.paused:
            self.wrapper.resume_bb()
            self.paused = False
            self.logger.debug("Resumed Balance Beam")
        else:
            self.wrapper.pause_bb()
            self.paused = True
            self.logger.debug("Paused Balance Beam")

    def _show_error(self, message):
        """Private method to just show an error message box with a custom message"""
        self.logger.error(message)
        errorbox = QMessageBox(self)
        errorbox.setWindowTitle("Error")
        errorbox.setText(message)
        errorbox.setIcon(QMessageBox.Critical)
        errorbox.exec()

    def _show_message(self, title, message, subtext=None):
        """Private method to just show an info message box with a custom message"""
        self.logger.info(message)
        messagebox = QMessageBox(self)
        messagebox.setWindowTitle(title)
        messagebox.setText(message)
        messagebox.setInformativeText(subtext)
        messagebox.setIcon(QMessageBox.Information)
        messagebox.exec()

    def _update_constants_in_memory(self):
        self.kp = float(self.kp_input.text()) or 0
        self.ki = float(self.ki_input.text()) or 0
        self.kd = float(self.kd_input.text()) or 0
        self.N = int(self.n_input.text()) or 0
        self.setcm = float(self.set_cm_input.text()) or 0

    def graph_data(self):
        """
        Method that runs the graphing, usually in another thread.
        Retrieves the data from the CyDAQ using the wrapper,
        and plots it live using pglive
        """
        while self.running:
            try:
                current_data = self.wrapper.retrieve_bb_pos()
            except Exception:
                self._show_error("Balance Beam Not Connected! 3 ")
                return

            # Don't graph anything if paused or paused to run a command
            while self.paused or self.cmd_paused:
                pass

            # Check if the data isn't actually coming through
            if current_data == "" or current_data == "-9":
                i = + 1
                if i > 100:
                    self._show_error("Balance Beam Not Connected! 4 ")
                    return
                continue

            # Check that input is valid and not some other kind of string
            try:
                curr_time = time.time() - self.start_time
                self.plot_data[f"{curr_time}"] = current_data
                self.mid_connector.cb_append_data_point(float(current_data), curr_time)
                self.low_connector.cb_append_data_point(self.low_sample, curr_time)
                self.high_connector.cb_append_data_point(self.high_sample, curr_time)
            except ValueError:
                self._show_error(f"Error plotting data! Current data is {current_data}")
                return
