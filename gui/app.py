# Standard Python Packages
import os
import sys
import ctypes
import pexpect
import logging
from sys import platform
from waiting import wait, TimeoutExpired

# PyQt5 Packages
from PyQt5 import QtWidgets
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
from widgets import config

# Stuff From Project
from widgets import ModeSelectorWidget
from widgets import BasicOperationModeWidget
from widgets import LiveStreamModeWidget
from widgets import BalanceBeamModeWidget
from widgets import DACModeWidget
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

        # logging
        if os.path.exists(config.DEFAULT_LOG_FILE):
            try:
                os.remove(config.DEFAULT_LOG_FILE)
            except Exception as e:
                # throws an error if restart button is clicked as the logger is still running. Just don't delete the
                # file in this case
                print(f"Error removing log file {config.DEFAULT_LOG_FILE}! Exception: {e}")
        logging.basicConfig(level=config.CONSOLE_LOG_LEVEL, format=config.LOG_FORMAT)
        self.logger = logging.getLogger(__name__)
        fh = logging.FileHandler(config.DEFAULT_LOG_FILE)
        fh.setLevel(config.FILE_LOG_LEVEL)
        formatter = logging.Formatter(config.LOG_FORMAT)
        fh.setFormatter(formatter)
        self.logger.addHandler(fh)

        if platform == "win32":
            myappid = 'mycompany.myproduct.subproduct.version'  # arbitrary string
            ctypes.windll.shell32.SetCurrentProcessExplicitAppUserModelID(myappid)
            self.setWindowIcon(QIcon('../images/CyDAQ.jpg'))

        self.setupUi(self)
        self.threadpool = QThreadPool()
        self.exception_close = False

        # CyDAQ communication
        self.wrapper = None
        self.init_wrapper()

        # Widgets
        self.livestream = LiveStreamModeWidget(self)
        self.mode_selector = ModeSelectorWidget(self)
        self.basic_operation = BasicOperationModeWidget(self)
        self.balance_beam = BalanceBeamModeWidget(self)
        self.external_adc = DACModeWidget(self)
        self.debug = DebugWidget(self)  # Note, anything that happens before this line won't show up in the debug widget's log, but will show up in console/file logging

        self.deleteTempSampleData()

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
        self.widgets.append(self.external_adc)
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

        self.show()

    # Method that initializes the wrapper. This is used in the inital setup of the program. 
    def init_wrapper(self):
        self.wrapper = None
        try:
            self.wrapper = CLIWrapper.CLI(self.logger)
            self.connected = self.wrapper.ping() >= 0
        except CLIWrapper.cyDAQNotConnectedException:
            self.logger.debug("wrapper threw cyDAQNotConnectedException")
            self.connected = False
        except (CLIWrapper.CLIException, pexpect.exceptions.EOF) as e:
            self.logger.debug("wrapper threw CLIException")
            self.logger.error(str(e))
            self.connected = False
            self._show_wrapper_error("Unable to connect to CyDAQ through wrapper. Is the CyDAQ on? Is there another instance running/connected to the CyDAQ? Is there another program using that com port?", e)
        except pexpect.exceptions.TIMEOUT as e:
            self.logger.debug("wrapper threw pexpect timeout exception")
            self.logger.error(str(e))
            self.connected = False
            self._show_wrapper_error("Unable to connect to CyDAQ through wrapper due to timeout. Restart the CyDAQ and try again.", e)

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
                self.logger.error("Trying to ping CyDAQ with wrapper returned unknown error: " + traceback_msg)

        self.runInWorkerThread(
            self.wrapper.ping,
            result_func=setConnected,
            error_func=lambda x: setConnectedError(x)
        )

    def updateWidgetConnectionStatus(self):
        if self.connected:
            self.logger.debug("Setting connected status green")
            self.connectionWidget.connectionIndicator.setStyleSheet("#connectionIndicator"
                                                                    "{"
                                                                    "color: #0EAD69;"
                                                                    "}")
        else:
            self.logger.debug("Setting connected status red")
            self.connectionWidget.connectionIndicator.setStyleSheet("#connectionIndicator"
                                                                    "{"
                                                                    "color: #DE3C4B;"
                                                                    "}")

    def startPingTimer(self):
        self.logger.debug("Starting ping timer at interval: " + str(self.pingTimerInterval) + "ms")
        self.pingTimer.start(self.pingTimerInterval)

    def stopPingTimer(self):
        self.logger.debug("Stopping ping timer")
        self.pingTimer.stop()

    ### The following are methods for switching to different widgets of the gui application. ###

    def switchToModeSelector(self, prev_geometry=None):
        if prev_geometry is not None:
            self.setMaximumSize(16777215, 16777215)  # Reset maximum size
            self.setMinimumSize(0, 0)  # Reset minimum size
            self.setGeometry(prev_geometry)
        self.stack.setCurrentIndex(0)
        self.current_index = 0
        self.logger.debug("Switched to Mode Selector")

    def switchToBasicOperation(self):
        self.stack.setCurrentIndex(1)
        self.current_index = 1
        self.logger.debug("Switched to Basic Operation")

    def switchToBalanceBeam(self):
        # Check that the cydaq is connected and that balance beam mode isn't already on
        self.balance_beam.prev_geometry = self.geometry()
        self.stack.setCurrentIndex(2)
        self.current_index = 2
        self.logger.debug("Switched to Balance Beam")

    def switchToLiveStream(self, came_from_basic):
        self.stack.setCurrentIndex(3)
        self.current_index = 3
        self.livestream.show_window(self.livestream)
        self.livestream.came_from_basic = came_from_basic
        self.logger.debug("Switched to Live Stream Plotter")

    def switchToExternalADC(self):
        self.stack.setCurrentIndex(4)
        self.current_index = 4
        self.logger.debug("Switched to External ADC")

    def switchToDebug(self):
        self.debug.prev_index = self.current_index
        self.stack.setCurrentIndex(5)
        self.logger.debug("Switched to Debug Page")

    def restartWindow(self):
        self.pingTimer.stop()
        self.pingTimer.killTimer(0)
        self.pingTimer = None
        self.wrapper.close()
        self.wrapper = None
        self.logger.debug("Restarted Window")
        qApp.exit(MainWindow.EXIT_CODE_REBOOT)

    def _show_wrapper_error(self, message, e=None):
        errorbox = QMessageBox(self)
        errorbox.setWindowTitle("Error")
        errorbox.setText(message)
        if e is not None:
            errorbox.setInformativeText(str(e))
        errorbox.setIcon(QMessageBox.Critical)
        errorbox.exec()

    # Override of the closeEvent method to add a confirmation box 
    def closeEvent(self, event):
        if self.exception_close:
            self.logger.debug("Exited window from exception")
            if self.connected:
                self.balance_beam.running = False
                self.wrapper.stop_bb()
            event.accept()
        close = QMessageBox.question(self,
                                     "Quit CyDAQ",
                                     "Are you sure?",
                                     QMessageBox.Yes | QMessageBox.No)
        if close == QMessageBox.Yes:
            self.logger.debug("Exited window")
            if self.connected:
                self.balance_beam.running = False
                self.wrapper.stop_bb()
            event.accept()
            if main.widgets[3].window is not None:
                main.widgets[3].window.close()
        else:
            event.ignore()

    def deleteTempSampleData(self):
        """Deletes all *.csv files in config.DEFAULT_LOG_FILE save location"""
        if os.path.exists(config.TEMP_DIR):
            for file in os.listdir(config.TEMP_DIR):
                if file.endswith(".csv"):
                    try:
                        os.remove(os.path.join(config.TEMP_DIR, file))
                        self.logger.debug("removed temp file: " + file)
                    except PermissionError:
                        self._show_wrapper_error(f"File {file} cannot be removed! Is it open in another program?")


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
        app = None
