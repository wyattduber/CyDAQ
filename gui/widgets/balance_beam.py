# PyQt5 Packages
from PyQt5 import QtWidgets
from PyQt5.Qt import QIntValidator
from PyQt5.QtGui import QDoubleValidator

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
