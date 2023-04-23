# Standard Python Packages
import os
import sys
import traceback
import ctypes
import shutil
from sys import platform
from datetime import datetime

# PyQt5 Packages
from PyQt5 import QtWidgets
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *

# Stuff From Project
from widgets import ModeSelectorWidget
from widgets import BasicOperationModeWidget
from widgets import LiveStreamModeWidget
from widgets import BalanceBeamModeWidget
from widgets import DebugWidget
from widgets import ConnectionWidget
from widgets import CyDAQModeWidget
from generated.MainWindowUI import Ui_MainWindow

DEFAULT_WINDOW_WIDTH = 553
DEFAULT_WINDOW_HEIGHT = 626

def resource_path(relative_path):
    """ Get absolute path to resource, works for dev and for PyInstaller """
    try:
        # PyInstaller creates a temp folder and stores path in _MEIPASS
        base_path = sys._MEIPASS
    except Exception:
        base_path = os.path.abspath(".")

    return os.path.join(base_path, relative_path)

# This path must be appended because the CLI and GUI aren't in packages.
# If both were in python packages, this issue wouldn't be here.
sys.path.insert(0, resource_path("../cli"))
sys.path.insert(0, resource_path("./cli"))
import CLIWrapper

# Constants
PING_TIMER_DELAY_MS = 1000
LOG_TIMER_DELAY = 1000
CONVERT_SEC_TO_MS = 1000
DEFAULT_SAVE_LOCATION = "U:\\"
class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow, CyDAQModeWidget):
    """Main window that contains all other windows within it. 
    Responsible for communicating with CyDAQ through wrapper. """

    EXIT_CODE_REBOOT = -123

    def __init__(self):
        super(MainWindow, self).__init__()

        if platform == "win32":
            myappid = 'mycompany.myproduct.subproduct.version'  # arbitrary string
            ctypes.windll.shell32.SetCurrentProcessExplicitAppUserModelID(myappid)
            self.setWindowIcon(QIcon('../images/CyDAQ.jpg'))
        
        self.setupUi(self)
        self.threadpool = QThreadPool()

        # CyDAQ communication
        self.wrapper = None
        try:
            self.wrapper = CLIWrapper.CLI()
            self.connected = self.wrapper.ping() >= 0
        except CLIWrapper.cyDAQNotConnectedException:
            self.connected = False
        except CLIWrapper.CLIException:
            self.connected = False
            errorbox = QMessageBox(self)
            errorbox.setWindowTitle("Error")
            errorbox.setText("Unable to connect to CyDAQ through wrapper. Is the CyDAQ on? Is there another instance running/connected to the CyDAQ? Is there another program using that com port?")
            errorbox.setInformativeText("Try restarting the CyDAQ.")
            errorbox.setIcon(QMessageBox.Critical)
            errorbox.exec()
            qApp.exit(-2)

        # Widgets
        self.livestream = LiveStreamModeWidget(self)
        self.mode_selector = ModeSelectorWidget(self)
        self.basic_operation = BasicOperationModeWidget(self)
        self.balance_beam = BalanceBeamModeWidget(self)
        self.debug = DebugWidget(self)

        self.stack = StackedLayout() 
        self.connectionWidget = ConnectionWidget()

        self.centerWidget = QtWidgets.QWidget()
        self.centerLayout = QVBoxLayout()
        self.centerLayout.addLayout(self.stack)
        self.centerLayout.addWidget(self.connectionWidget)
        self.centerWidget.setLayout(self.centerLayout)
        self.setCentralWidget(self.centerWidget)

        self.widgets = []
        self.widgets.append(self.mode_selector)
        self.widgets.append(self.basic_operation)
        self.widgets.append(self.balance_beam)
        self.widgets.append(self.livestream)
        self.widgets.append(self.debug)
        for widget in self.widgets:
            self.stack.addWidget(widget)
        self.stack.setCurrentIndex(0)

        self.updateWidgetConnectionStatus()

        self.current_index = 0

        plotterAction = self.actionLaunch_Plotter
        plotterAction.triggered.connect(lambda: self.switchToLiveStream(True))

        debugAction = self.actionDebug
        debugAction.triggered.connect(self.switchToDebug)

        restartAction = self.actionRestart
        restartAction.triggered.connect(self.restartWindow)

        quitAction = self.actionQuit
        quitAction.triggered.connect(self.close)

        # Ping the CyDAQ periodically to verify connection
        self.pingTimerInterval = PING_TIMER_DELAY_MS
        self.pingTimer = QTimer()
        self.pingTimer.timeout.connect(self.pingCyDAQ)
        self.startPingTimer()

        # Temp Log File
        # sys.stdout = self.wrapper.logfile

        self.show()

    # Method that is triggered every second to ping the CyDAQ and determine if it is connected or not.
    # Works with hotplugging the machine, will detect a new connection even without restarting the application
    def pingCyDAQ(self):

        def setConnected(ping_delay):
            before = self.connected
            self.connected = ping_delay >= 0
            if before != self.connected:
                self.updateWidgetConnectionStatus()

        def setConnectedError(errorMsg):
            extype = errorMsg[0]
            traceback_msg = errorMsg[2]
            before = self.connected
            if extype is CLIWrapper.cyDAQNotConnectedException:
                self.connected = False
                if before != self.connected:
                    self.updateWidgetConnectionStatus()
            else:
                # Raise any other exceptions
                print("trying to raise exception with message: ", traceback_msg)
                # raise extype(traceback_msg)

        self.runInWorkerThread(
            self.wrapper.ping,
            result_func=setConnected,
            error_func=setConnectedError
        )

    def updateWidgetConnectionStatus(self):
        if self.connected:
            print("setting green")
            self.connectionWidget.connectionIndicator.setStyleSheet("#connectionIndicator"
                                                   "{"
                                                   "color: #0EAD69;"
                                                   "}")
        else:
            print("setting red")
            self.connectionWidget.connectionIndicator.setStyleSheet("#connectionIndicator"
                                                       "{"
                                                       "color: #DE3C4B;"
                                                       "}")


    def startPingTimer(self):
        self.pingTimer.start(self.pingTimerInterval)

    def stopPingTimer(self):
        self.pingTimer.stop()

    ### The following are methods for switching to different widgets of the gui application. ###

    def switchToModeSelector(self, prev_geometry=None):
        if prev_geometry is not None:
            self.setMaximumSize(16777215, 16777215) # Reset maximum size
            self.setMinimumSize(0, 0) # Reset minimum size
            self.setGeometry(prev_geometry)
        self.stack.setCurrentIndex(0)
        self.current_index = 0

    def switchToBasicOperation(self):
        self.stack.setCurrentIndex(1)
        self.current_index = 1

    def switchToBalanceBeam(self):
        # Check that the cydaq is connected and that balance beam mode isn't already on
        self.balance_beam.prev_geometry = self.geometry()
        self.stack.setCurrentIndex(2)
        self.current_index = 2

    def switchToLiveStream(self, came_from_basic):
        self.stack.setCurrentIndex(3)
        self.current_index = 3
        self.livestream.show_window(self.livestream)
        self.livestream.came_from_basic = came_from_basic

    def switchToDebug(self):
        self.debug.prev_index = self.current_index
        self.stack.setCurrentIndex(4)

    def restartWindow(self):
        self.pingTimer.stop()
        self.pingTimer.killTimer(0)
        self.pingTimer = None
        self.wrapper.close()
        self.wrapper = None
        qApp.exit(MainWindow.EXIT_CODE_REBOOT)

    # Override of the closeEvent method to add a confirmation box 
    def closeEvent(self, event):
        close = QMessageBox.question(self,
                                     "Quit CyDAQ",
                                     "Are you sure?",
                                     QMessageBox.Yes | QMessageBox.No)
        if close == QMessageBox.Yes:
            if self.connected:
                self.balance_beam.running = False
                self.wrapper.stop_bb()
            event.accept()
            if main.widgets[3].window is not None:
                main.widgets[3].window.close()
        else:
            event.ignore()



class StackedLayout(QtWidgets.QStackedLayout):
    def minimumSize(self):
        if self.currentWidget():
            s = self.currentWidget().minimumSize()
            if s.isEmpty():
                s = self.currentWidget().minimumSizeHint()
            return s
        return super().minimumSize()

class InvalidInputException(IOError):
    pass


if __name__ == "__main__":
    app = None
    currentExitCode = MainWindow.EXIT_CODE_REBOOT
    while currentExitCode == MainWindow.EXIT_CODE_REBOOT:
        app = QtWidgets.QApplication(sys.argv)
        main = MainWindow()
        currentExitCode = app.exec_()

        # If exit wasn't normal, save debug logs to location of executable
        if currentExitCode != 0:
            shutil.copyfile("C:\\Temp\\cydaq_current_log.log", f".\\CyDAQ-Crash_{datetime.now().strftime('%d-%m-%Y_%H-%M-%S')}.txt")

        app = None
