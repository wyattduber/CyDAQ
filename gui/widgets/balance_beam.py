# PyQt5 Packages
from PyQt5 import QtWidgets

# Stuff From Project - May show as an error but it works
from generated.BalanceBeamWidgetUI import Ui_BalanceBeamWidget


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

        # Balance Beam Input Values
        self.kp = 0
        self.ki = 0
        self.kd = 0
        self.N = 0
        self.setcm = 0
        self.offset = 0

        # Input Validation
        validator = QDoubleValidator(0, 3, 6)
        self.kp_input.setValidator(validator)

        validator = QDoubleValidator(0, 2, 6)
        self.ki_input.setValidator(validator)
        self.kd_input.setValidator(validator)

        validator = QIntValidator(0, 1000)
        self.n_input.setValidator(validator)

        ### Below are the methods called when buttons are pressed ###

        # Home Button
        self.home_btn.clicked.connect(self.mainWindow.switchToModeSelector)

        # Widget Buttons
        self.send_constants_btn.clicked.connect(self.sendConstants)
        self.send_set_point_btn.clicked.connect(self.sendSetPoint)
        self.save_step_btn.clicked.connect(self.saveStep)
        self.save_plot_data_btn.clicked.connect(self.savePlotData)
        self.offset_inc_btn.clicked.connect(self.offsetInc)
        self.offset_dec_btn.clicked.connect(self.offsetDec)
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

    # Send in the user-defined constants
    # Each try/catch statement is to determine if the input is in scientific notation
    # If so, and the input is exceedingly high (returns "inf") then just set it to a num higher than the max
    def sendConstants(self):
        self.kp =  or 0
        self.ki = self.ki_input.currentText() or 0
        self.kd = self.kd_input.currentText() or 0
        self.n = self.n_input.currentText() or 0

        try:
            tmp = "{:.0f}".format(float(self.kp_input.currentText()))
            if tmp == "inf":
                self.kp = "99999999"
            else:
                self.kp = tmp
        except ValueError:
            self.kp = "0"

        try:
            tmp = "{:.0f}".format(float(self.ki_input.currentText()))
            if tmp == "inf":
                self.ki = "99999999"
            else:
                self.ki = tmp
        except ValueError:
            self.ki = "0"

        try:
            tmp = "{:.0f}".format(float(self.kd_input.currentText()))
            if tmp == "inf":
                self.kd = "99999999"
            else:
                self.kd = tmp
        except ValueError:
            self.kd = "0"

        try:
            tmp = "{:.0f}".format(float(self.n_input.currentText()))
            if tmp == "inf":
                self.N = "99999999"
            else:
                self.N = tmp
        except ValueError:
            self.N = "0"

        self.wrapper.set_constants(self.kp, self.ki, self.kd, self.N)

    # Send in the user-defined set point in cm
    def sendSetPoint(self):
        self.setcm = self.set_cm_input.currentText() or 0

    # Save the step (?)
    def saveStep(self):
        pass

    # Save the plot data to a file (?)
    def savePlotData(self):
        pass

    # Increase the offset
    def offsetInc(self):
        self.offset += 1

    # Decrease the offset
    def offsetDec(self):
        self.offset -= 1

    # Pause the plotting / balancing
    def pause(self):
        pass
