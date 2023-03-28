# Standard Python Packages
from typing import Union

# PyQt5 Packages
from PyQt5 import QtWidgets
from PyQt5.Qt import QIntValidator
from PyQt5.QtGui import QDoubleValidator
from PyQt5.QtWidgets import QGridLayout

# pglive Packages
from pglive.kwargs import Axis
from pglive.sources.data_connector import DataConnector
from pglive.sources.live_axis import LiveAxis
from pglive.sources.live_plot import LiveLinePlot
from pglive.sources.live_plot import LiveScatterPlot
from pglive.sources.live_plot_widget import LivePlotWidget

# Stuff From Project - May show as an error but it works
from generated.NewBalanceBeamWidgetUI import Ui_NewBalanceBeamWidget


class BalanceBeamModeWidget(QtWidgets.QWidget, Ui_NewBalanceBeamWidget):
    """Balance Beam mode window. Allows the use of the balance beam tool with custom settings."""

    def __init__(self, mainWindow, cyDAQModeWidget):
        super(BalanceBeamModeWidget, self).__init__()
        self.setupUi(self)

        self.mainWindow = mainWindow
        self.cyDAQModeWidget = cyDAQModeWidget

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper

        # Start Balance Beam Mode w/ Default Values
        self.paused = False
        self.running = False

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
        self.send_constants_btn.clicked.connect(self.sendConstants)
        self.send_set_point_btn.clicked.connect(self.sendSetPoint)
        self.save_step_btn.clicked.connect(self.saveStep)
        self.save_plot_data_btn.clicked.connect(self.savePlotData)
        self.offset_inc_btn.clicked.connect(self.wrapper.offset_inc)
        self.offset_dec_btn.clicked.connect(self.wrapper.offset_dec)
        self.pause_btn.clicked.connect(self.pause)

        # Graph Initialization
        self.graph = LivePlotWidget()

        self.mid_connector = None
        self.low_connector = None
        self.high_connector = None
        self.low_plot = None
        self.high_plot = None
        self.mid_plot = None
        layout = QGridLayout(self)
        self.low_sample: Union[float, None] = 0.2
        self.high_sample: Union[float, None] = 0.3

        # Setup bottom axis with TIME tick format
        bottom_axis = LiveAxis("bottom", **{Axis.TICK_FORMAT: Axis.TIME})

        # Create plot itself
        self.graph = LivePlotWidget(title="Ball Position Vs. Time", axisItems={'bottom': bottom_axis})

        # Create one curve per dataset & add them to the view
        #self.gen_plots()

        # Show grid
        self.graph.showGrid(x=True, y=True, alpha=0.3)

        # Set labels
        self.graph.setLabel('bottom', 'Time', units="s")
        self.graph.setLabel('left', 'Distance', units="cm")

        # Using -1 to span through all rows available in the window
        #layout.addWidget(self.graph)

        #self.plot_curve = LiveLinePlot()
        #self.graph.addItem(self.plot_curve)
        

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
            self.wrapper.stop_bb()
            self.mainWindow.startPingTimer()
        self.mainWindow.resize(400, 590)
        self.mainWindow.switchToModeSelector()

    # Start the balance beam with default values
    def start(self):
        self.running = True
        self.mainWindow.stopPingTimer()
        self.wrapper.start_bb()

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
    def savePlotData(self):
        pass

    # Increase the offset
    def offsetInc(self):
        self.wrapper.offset_inc()

    # Decrease the offset
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

