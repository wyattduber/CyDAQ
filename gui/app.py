# Standard Python Packages
import os
import sys
import traceback
import ctypes
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


class CyDAQModeWidget:
    """Parent class for all generated. Holds methods they will all use."""

    def runInWorkerThread(self, func, func_args=None, func_kwargs=None, result_func=None, progress_func=None,
                          finished_func=None, error_func=None):
        """
        Run a function with optional args and kwargs in a seperate thread. The calling class must have self.threadpool created already. 

        The following callback functions can be optinally specified to handle specific scenarios during/after the function's execution.
        result_func: Is called with one parameter, the return value of func, when it has sucessfully completed execution
        progress_func: Is called when func emits a progress signal
        finished_func: Is called when func is finished executing
        error_func: Is called with three parameters, exctype, value, and traceback, if func throws an exception

        The following template can be used:
        self.runInWorkerThread(
            function, 
            func_args=None,
            result_func=None, 
            progress_func=None, 
            finished_func=None, 
            error_func=None
        )
        """
        if func_kwargs is None:
            func_kwargs = {}
        worker = Worker(func, func_args, **func_kwargs)
        if result_func is not None:
            worker.signals.result.connect(result_func)
        if progress_func is not None:
            worker.signals.progress.connect(progress_func)
        if finished_func is not None:
            worker.signals.finished.connect(finished_func)
        if error_func is not None:
            worker.signals.error.connect(error_func)
        self.threadpool.start(worker)

    def showError(self, message):
        """Show a simple error message in the middle of the parent window"""
        print(message)
        dlg = QMessageBox(self)
        dlg.setWindowTitle("Error")
        dlg.setText(message)
        dlg.setIcon(QMessageBox.Critical)
        dlg.exec()

    def showInfo(self, message):
        """Show a simple message in the middle of the parent window"""
        print(message)
        dlg = QMessageBox(self)
        dlg.setWindowTitle("Error")
        dlg.setText(message)
        dlg.setIcon(QMessageBox.Information)
        dlg.exec()


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
        self.livestream = LiveStreamModeWidget(self, CyDAQModeWidget)
        self.mode_selector = ModeSelectorWidget(self, CyDAQModeWidget)
        self.basic_operation = BasicOperationModeWidget(self, CyDAQModeWidget)
        self.balance_beam = BalanceBeamModeWidget(self, CyDAQModeWidget)
        self.debug = DebugWidget(self, CyDAQModeWidget)

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
                raise extype(traceback_msg)

        self.runInWorkerThread(
            self.wrapper.ping,
            result_func=setConnected,
            error_func=setConnectedError
        )

    def updateWidgetConnectionStatus(self):
        if self.connected:
            print("setting green")
            self.connectionWidget.connection_status_label.setText(
                "<html><head/><body><p>CyDAQ Status:<span style=\" color:#0EAD69;\">⬤</span></p></body></html>"
            )
        else:
            print("setting red")
            self.connectionWidget.connection_status_label.setText(
                "<html><head/><body><p>CyDAQ Status:<span style=\" color:#DE3C4B;\">⬤</span></p></body></html>"
            )

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


class WorkerSignals(QObject):
    """
    Defines the signals available from a running worker thread.

    Supported signals are:
    finished: No data
    error: tuple (exctype, value, traceback.format_exc() )
    result: object data returned from processing, anything
    progress: int indicating % progress
    """
    finished = pyqtSignal()
    error = pyqtSignal(tuple)
    result = pyqtSignal(object)
    progress = pyqtSignal(int)


class StackedLayout(QtWidgets.QStackedLayout):
    def minimumSize(self):
        if self.currentWidget():
            s = self.currentWidget().minimumSize()
            if s.isEmpty():
                s = self.currentWidget().minimumSizeHint()
            return s
        return super().minimumSize()

class Worker(QRunnable):
    """
    A worker thread that handles execution of a function with optional arguments.

    Emits a WorkerSignal based on the execution of the function. 
    """

    def __init__(self, fn, args, **kwargs):
        super(Worker, self).__init__()
        # print("__init__: ", "args: ", args, " kwargs: ", kwargs)

        # Store constructor arguments (re-used for processing)
        self.fn = fn
        self.args = args
        self.kwargs = kwargs
        self.signals = WorkerSignals()

        # Add the callback to our kwargs
        self.kwargs['progress_callback'] = self.signals.progress

    @pyqtSlot()
    def run(self):
        """Initialise the runner function with passed args, kwargs."""

        # Retrieve args/kwargs here; and fire processing using them
        # print("fn: ", self.fn, " args: ", self.args, " kwargs: ", self.kwargs)
        try:
            if self.args is None:
                result = self.fn(**self.kwargs)
            else:
                result = self.fn(self.args, **self.kwargs)  # Run the function
        except:
            # traceback.print_exc()
            exectype, value = sys.exc_info()[:2]
            self.signals.error.emit((exectype, value, traceback.format_exc()))
        else:
            self.signals.result.emit(result)  # Return the result of the processing
        finally:
            self.signals.finished.emit()  # Done


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
            filename = f"CyDAQ-Debug_{datetime.now().strftime('%d-%m-%Y_%H:%M:%S')}.txt"
            if main.wrapper is not None:
                logs = main.wrapper.getLog()
                with open(filename, 'w') as file:
                    file.write(logs)

        app = None
