# PyQt5 Packages
from PyQt5 import QtWidgets

# Stuff From Project
from gui.app import MainWindow
from gui.app import CyDAQModeWidget
from gui.generated.BalanceBeamUI import Ui_balance_beam

class BalanceBeamModeWidget(QtWidgets.QMainWindow, Ui_balance_beam, CyDAQModeWidget):
    # Balance Beam Input Values
    kp = 0
    ki = 0
    kd = 0
    n = 0
    setcm = 0
    offset = 0

    """Balance Beam mode window. Allows the use of the balance beam tool with custom settings."""

    def __init__(self, mainWindow: MainWindow):
        super(BalanceBeamModeWidget, self).__init__()
        self.setupUi(self)

        self.mainWindow = mainWindow

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper

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
    def sendConstants(self):
        self.kp = self.kp_input.currentText() or 0
        self.ki = self.ki_input.currentText() or 0
        self.kd = self.kd_input.currentText() or 0
        self.n = self.n_input.currentText() or 0

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