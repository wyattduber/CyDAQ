# Standard Python Packages
import time
import os
import re
import shutil
from waiting import wait
from typing import Union
from threading import Thread
from PyQt5.QtWidgets import QFileDialog
import pandas as pd
import scipy

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

# Config
from widgets import config

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
        self.savemat_thread = None
        self.pre_error = False
        self.plot_data = {}
        self.start_time = 0
        self.filename = ""
        self.temp_filename = config.DEFAULT_BB_DATA_FILE

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

        self.mid_connector = DataConnector(self.mid_plot, max_points=config.BB_MAX_POINTS)
        self.low_connector = DataConnector(self.low_plot, max_points=config.BB_MAX_POINTS)
        self.high_connector = DataConnector(self.high_plot, max_points=config.BB_MAX_POINTS)

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
                Thread(target=self.savePlotData).start()
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

        # Alert the user
        self.logger.debug("Attempting to start Balance Beam")

        def start_bb_mode(**_):
            """
            Starts the Balance Beam and live graphing of the data.
            """

            # Start checking connection
            self.checking_connection = True

            # Get the latest version of constants from the GUI
            self._update_constants_in_memory()

            # Start Balance Beam Mode from Wrapper
            try:
                if not self.wrapper.start_bb(self.kp, self.ki, self.kd, self.N, self.setcm):
                    # self._show_error(message="Balance Beam Module not Connected!",
                    #                 subtext="If you are using the new firmware, Balance Beam mode will not work.")
                    self.checking_connection = False

                    # Resume the timer and log
                    self.stop(error=True)
                    self.pre_error = True

                    # Throw error letting user see it
                    self.logger.error("Balance Beam Not Connected!")
                    raise BalanceBeamNotConnectedException(config.BALANCE_BEAM_NOT_CONNECTED_MSG)
                self.checking_connection = False
            except BalanceBeamNotConnectedException:
                raise
            except:
                # self._show_error(message="Balance Beam Module not Connected!",
                #                 subtext="If you are using the new firmware, Balance Beam mode will not work.")
                self.checking_connection = False

                # Resume the timer and log
                self.stop(error=True)
                self.pre_error = True

                # Throw error letting the user see it
                self.logger.error("Balance Beam Not Connected!")
                raise BalanceBeamNotConnectedException(config.BALANCE_BEAM_NOT_CONNECTED_MSG)
            # Once balance beam is connected, start beam mode
            self.running = True
            self.start_time = time.time()
            self.pre_error = False
            self.logger.debug("Balance Beam Started")

        def start_graphing(**_):
            if self.pre_error:
                self.pre_error = False
                return

            self.runInWorkerThread(
                func=self.graph_data,
                finished_func=self.stop,
                error_func=lambda x: self.showError(config.BALANCE_BEAM_NOT_CONNECTED_MSG)
                if type(x[1]) == BalanceBeamNotConnectedException else self.showError(x[2])
            )

        self.runInWorkerThread(
            func=start_bb_mode,
            finished_func=start_graphing,
            error_func=lambda x: self.showError(config.BALANCE_BEAM_NOT_CONNECTED_MSG)
            if type(x[1]) == BalanceBeamNotConnectedException else self.showError(x[2])
        )

        # Stop ping timer from other window, set log to update instantly for live data
        self.mainWindow.stopPingTimer()

        # Let the user know what is happening
        self._show_bb_connection_msg()

    def stop(self, error=False):
        """
        Sends the stop command to the CyDAQ and ends all threads
        Also re-enables the ping timer in the background for connectivity
        """
        self.logger.debug("Stopping Beam")
        self.running = False
        self.savemat_thread = None
        if not error:
            self.wrapper.stop_bb()
        self.mainWindow.startPingTimer()

        # Delete the old temp file
        # try:
        #    os.remove(self.temp_filename)
        # except PermissionError:
        #    self.logger.error("Unable to delete temp file: " + self.temp_filename)

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
                                                       DEFAULT_SAVE_LOCATION, "MATLAB Files (*.mat);;CSV Files (*.csv)",
                                                       options=options)
        if self.filename.strip() == "":  # no file chosen
            self.logger.debug("No file chosen. Picking " + self.temp_filename + "to write sample data")
            self.filename = self.temp_filename
        else:
            self.logger.debug("User chose " + self.filename + " to save samples")

        # self.savemat_thread = Thread(target=self.copyTempFile)
        self.savemat_thread = Thread(target=scipy.io.savemat, args=[self.filename, self.plot_data])
        self.savemat_thread.start()

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

    def copyTempFile(self):
        """
        When the temp file is done being written to and the new filename
        is input, copy the tmp file contents over and remove the old one.
        """
        # Wait to make sure that the filename has actually been entered
        wait(lambda: self.filename != "" and self.filename is not None)

        # Put a few checks here for if file is not writeable
        # This will throw an exception if the file is not writeable
        # It will append the file in the same place as the original filename with a _1 appended
        # If there is already a _#.csv, it will then append _#+1.csv to new file
        base, ext = os.path.splitext(self.filename)
        try:
            if os.path.exists(self.filename):
                open(self.filename, 'w')
        except PermissionError:
            if val := re.search('_[0-9]+', base):
                # Check for existing single/double-digit filenames
                i = int(val.string[-1])
                # Check for double digits
                try:
                    if val.string[-2].isnumeric():
                        i = int(f"{val.string[-2]}{val.string[-1]}")
                except IndexError:
                    pass  # Do nothing, it's a single digit
                new_filename = base + str(i) + ext
            else:
                new_filename = base + '_1' + ext
                i = 1
            while os.path.exists(new_filename):
                i += 1
                new_filename = base + f'_{i}' + ext
            self.logger.info("Unable to write to file path " + self.filename + ". Picked new name: " + new_filename)
            self.filename = new_filename

        # If the filename is still the temp filename, no file was selected
        # We can assume that they don't want to save the data, so skip copying
        # and remove the temp file

        if self.filename != self.temp_filename:
            # Copy the temp file over to the new one. If the user chose a matlab file, convert the csv to matlab first
            if ext == ".mat":
                scipy.io.savemat(self.filename, {"data": pd.read_csv(self.temp_filename).values})
                self.logger.info(".mat file chosen. Converted and written to " + self.filename)
            else:
                self.logger.info("Copying file from " + self.temp_filename + " to " + self.filename)
                shutil.copyfile(self.temp_filename, self.filename)

        # Reset the temp filename and the existing filename
        # Causes an ask for filename every sample
        self.filename = None

    def graph_data(self, **_):
        """
        Method that runs the graphing, usually in another thread.
        Retrieves the data from the CyDAQ using the wrapper,
        and plots it live using pglive
        """
        while self.running:
            try:
                current_data = self.wrapper.retrieve_bb_pos()
            except Exception:
                self.logger.error("Balance Beam Not Connected!")
                return True

            # Don't graph anything if paused or paused to run a command
            while self.paused or self.cmd_paused:
                pass

            # Check if the data isn't actually coming through
            if current_data == "":
                continue
            #    i = + 1
            #    if i > 100:
            #        self._show_error("Balance Beam Not Connected! 4 ")
            #        return
            #    continue

            # Check that input is valid and not some other kind of string
            try:
                self.mainWindow.connected = True
                curr_time = time.time() - self.start_time
                self.plot_data[f"{curr_time}"] = current_data
                # df = pd.DataFrame({f"{curr_time}": current_data})
                # df.to_csv(self.temp_filename, mode='a', header=False)
                # self.outfile.write({f"{curr_time}": {current_data}})
                self.mid_connector.cb_append_data_point(float(current_data), curr_time)
                self.low_connector.cb_append_data_point(self.low_sample, curr_time)
                self.high_connector.cb_append_data_point(self.high_sample, curr_time)
            except ValueError as e:
                self.logger.error(f"Error plotting data! Current data is {current_data}. Exception: {e}")
                return True

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
        messagebox.show()
        return messagebox

    def _update_constants_in_memory(self):
        self.kp = float(self.kp_input.text()) or 0
        self.ki = float(self.ki_input.text()) or 0
        self.kd = float(self.kd_input.text()) or 0
        self.N = int(self.n_input.text()) or 0
        self.setcm = float(self.set_cm_input.text()) or 0

    def _show_bb_connection_msg(self):
        # Method that waits for the connection to be checked and then closes this window
        def waitClose():
            while self.checking_connection:
                pass
            pb.close()

        pb = self._show_message(title="Checking CyDAQ...",
                                message="Checking CyDAQ to see if the Balance Beam Module is connected...",
                                subtext="This will take a few seconds.")
        Thread(target=waitClose).start()


class BalanceBeamNotConnectedException(Exception):
    """Thrown when the balance beam module is not physically connected to the CyDAQ or the new firmware is installed"""

    def __init__(self, message):
        self.message = message
        super().__init__(self.message)
