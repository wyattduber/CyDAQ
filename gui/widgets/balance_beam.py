# Standard Python Packages
import csv
import time
from typing import Union
from threading import Thread

# PyQt5 Packages
from PyQt5 import QtWidgets
from PyQt5.Qt import QIntValidator
from PyQt5.QtGui import QDoubleValidator

# pglive Packages
from pyqtgraph import mkPen
from pglive.sources.data_connector import DataConnector
from pglive.sources.live_axis_range import LiveAxisRange
from pglive.sources.live_plot import LiveLinePlot
from pglive.sources.live_plot_widget import LivePlotWidget

# Stuff From Project - May show as an error but it works
from generated.BalanceBeamWidgetUI import Ui_BalanceBeamWidget

CONVERT_SEC_TO_MS = 1000

class BalanceBeamModeWidget(QtWidgets.QWidget, Ui_BalanceBeamWidget):
    """Balance Beam mode window. Allows the use of the balance beam tool with custom settings."""

    def __init__(self, mainWindow, cyDAQModeWidget):
        super(BalanceBeamModeWidget, self).__init__()
        self.setupUi(self)

        self.mainWindow = mainWindow
        self.cyDAQModeWidget = cyDAQModeWidget

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper
        self.prev_geometry = None

        # Start Balance Beam Mode w/ Default Values
        self.paused = False
        self.running = False
        self.graph_thread = None

        # Balance Beam Input Values (Default)
        self.kp = 0.8
        self.ki = 0.2
        self.kd = 0.4
        self.N = 16
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
        self.home_btn.clicked.connect(self.home)

        # Widget Buttons
        self.start_btn.clicked.connect(self.start)
        self.stop_btn.clicked.connect(self.stop)
        self.send_constants_btn.clicked.connect(self.sendConstants)
        self.send_set_point_btn.clicked.connect(self.sendSetPoint)
        self.save_step_btn.clicked.connect(self.saveStep)
        self.save_plot_data_btn.clicked.connect(lambda: Thread(target=self.savePlotData).start())
        self.offset_inc_btn.clicked.connect(self.wrapper.offset_inc)
        self.offset_dec_btn.clicked.connect(self.wrapper.offset_dec)
        self.pause_btn.clicked.connect(self.pause)

        self.low_sample: Union[float, None] = -5
        self.high_sample: Union[float, None] = 5

        # Setup bottom axis with TIME tick format
        self.axis_limit = LiveAxisRange(fixed_range=[1, 10, 1, 10])

        # Create plot itself
        self.graph_view = LivePlotWidget(title="Ball Position Vs. Time", background="#F2F2F2")

        # Show grid and make it look nice
        self.graph_view.showGrid(x=True, y=True, alpha=0.3)
        self.graph_view.setRange(xRange=[-10, 0], yRange=[-15, 15])
        self.graph_view.getPlotItem().invertX()

        # Set labels
        self.graph_view.setLabel('bottom', 'Time', units="s")
        self.graph_view.setLabel('left', 'Distance', units="cm")

        # Init Connectors
        self.mid_plot = LiveLinePlot(pen="green", width=2)
        self.low_plot = LiveLinePlot(pen="orange", width=2)
        self.high_plot = LiveLinePlot(pen="blue", width=2)

        self.mid_connector = DataConnector(self.mid_plot, max_points=5)
        self.low_connector = DataConnector(self.low_plot, max_points=5)
        self.high_connector = DataConnector(self.high_plot, max_points=5)

        # Add the plots and the graph view
        self.graph_view.addItem(self.mid_plot)
        self.graph_view.addItem(self.low_plot)
        self.graph_view.addItem(self.high_plot)

        # Attach graph_view to the widget on the page, then resize it properly
        self.graph_view.setParent(self.graph)
        self.graph_view.setGeometry(0, 0, 801, 641)

    # CyDAQ Connection Label (disabled until re-layout)
    def cyDaqConnected(self):
        """When CyDAQ changes from disconnected to connected"""
        # self.connection_status_label.setText("Connected!")
        pass

    def cyDaqDisconnected(self):
        """When CyDAQ changes from connected to disconnected"""
        # self.connection_status_label.setText("Not Connected!")
        pass

    def home(self):
        if self.running:
            self.stop()
        self.mainWindow.switchToModeSelector(self.prev_geometry)

    # Start the balance beam with default values
    def start(self):
        if not self.mainWindow.connected or self.running:
            return
        self.running = True
        self.mainWindow.stopPingTimer()
        self.mainWindow.debug.log_timer.setInterval(0)

        #Start Graphing of Data
        #self.graph_thread = Thread(target=self.graph_data)
        #self.graph_thread.start()

        # Start Balance Beam Mode from Wrapper
        # self.wrapper.bb_log_mode = True
        self.wrapper.start_bb()

    def stop(self):
        self.running = False
        self.wrapper.stop_bb()
        self.mainWindow.startPingTimer()

    # Send in the user-defined constants
    def sendConstants(self):
        self.kp = float(self.kp_input.text()) or 0
        self.ki = float(self.ki_input.text()) or 0
        self.kd = float(self.kd_input.text()) or 0
        self.N = int(self.n_input.text()) or 0

        self.wrapper.set_constants(self.kp, self.ki, self.kd, self.N)

        self.kp_output.setText(str(self.kp))
        self.ki_output.setText(str(self.ki))
        self.kd_output.setText(str(self.kd))
        self.n_output.setText(str(self.N))

    # Send in the user-defined set point in cm
    def sendSetPoint(self):
        self.setcm = int(self.set_cm_input.text()) or 0
        self.wrapper.send_set_point(self.setcm)
        self.set_cm_output.setText(str(self.setcm))

    # Save the step (?)
    def saveStep(self):
        pass

    # Save the plot data to a file (?)
    def savePlotData(self): # TODO Change this when data is actually being sent
        with open("sin.csv", 'r') as file:
            csvreader = csv.reader(file)

            for row in csvreader:
                # If paused, just spin in a loop and do nothing until un-paused
                while self.paused:
                    pass

                timestamp = float(row[0])
                mid_px = float(row[1])

                self.mid_connector.cb_append_data_point(mid_px, timestamp)
                self.low_connector.cb_append_data_point(self.low_sample, timestamp)
                self.high_connector.cb_append_data_point(self.high_sample, timestamp)

                print(f"epoch: {timestamp}, mid: {mid_px:.2f}")
                time.sleep((100 / CONVERT_SEC_TO_MS))

    # Increase the offset for calibration
    def offsetInc(self):
        self.wrapper.offset_inc()

    # Decrease the offset for calibration
    def offsetDec(self):
        self.wrapper.offset_dec()

    # Pause the plotting / balancing
    def pause(self):
        if self.paused:
            self.wrapper.resume_bb()
            self.paused = False
        else:
            self.wrapper.pause_bb()
            self.paused = True

    ### TODO Live Graph Widget Below This Line ###

    def graph_data(self):
        while self.running:
            current_data = self.wrapper.retrieve_bb_data()

            data = current_data.split('\n', 1)[0]
            print(data)
