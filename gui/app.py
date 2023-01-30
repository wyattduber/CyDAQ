import json
import sys
import traceback
import time
from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QFileDialog
from PyQt5.QtGui import QIntValidator
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *

import pyqtgraph as pg
import random
from pglive.kwargs import Axis
from pglive.sources.data_connector import DataConnector
from pglive.sources.live_axis import LiveAxis
from pglive.sources.live_plot import LiveLinePlot
from pglive.sources.live_plot_widget import LivePlotWidget
from threading import Thread
from typing import Union

from MainWindow import Ui_MainWindow
from BasicOperation import Ui_basic_operation
from BalanceBeam import Ui_balance_beam
from LiveStream import Ui_live_stream
from DacModeWidget import Ui_DAC_mode_widget
from ModeSelectorWidget import Ui_ModeSelectorWidget

# This path must be appended because the CLI and GUI aren't in packages. 
# If both were in python packages, this issue wouldn't be here.
sys.path.insert(0, "./cli")
import CLIWrapper

# Constants
PING_TIMER_DELAY_SECONDS = 1
DEFAULT_SAVE_LOCATION = "U:\\"


class CyDAQModeWidget:
    """Parent class for all widgets. Holds methods they will all use."""

    def runInWorkerThread(self, func, func_args=None, func_kwargs={}, result_func=None, progress_func=None,
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
    """Holds all other widgets. Responsible for communicating with CyDAQ through wrapper. """

    def __init__(self):
        super(MainWindow, self).__init__()
        self.setupUi(self)

        self.threadpool = QThreadPool()

        # CyDAQ communication
        self.wrapper = None
        try:
            self.wrapper = CLIWrapper.CLI()
            self.connected = self.wrapper.ping() >= 0
        except CLIWrapper.cyDAQNotConnectedException:
            self.connected = False

        # Widgets
        self.stack = QtWidgets.QStackedWidget(self)
        self.verticalLayout.addWidget(self.stack)
        self.widgets = []
        self.widgets.append(ModeSelectorWidget(self))
        self.widgets.append(BasicOperationModeWidget(self))
        self.widgets.append(BalanceBeamWidget(self))
        self.widgets.append(LiveStreamWidget(self))
        for widget in self.widgets:
            self.stack.addWidget(widget)
        self.stack.setCurrentIndex(0)

        self.updateWidgetConnectionStatus()

        # Ping the CyDAQ periodically to verify connection
        self.pingTimerInterval = 1000
        self.pingTimer = QTimer()
        self.pingTimer.timeout.connect(self.pingCyDAQ)
        self.startPingTimer()

        self.show()

    def pingCyDAQ(self):
        def setConnected(x):
            before = self.connected
            self.connected = x >= 0
            if before != self.connected:
                self.updateWidgetConnectionStatus()

        def setConnectedError(a):
            extype = a[0]
            value = a[1]
            traceback = a[2]
            before = self.connected
            if extype is CLIWrapper.cyDAQNotConnectedException:
                self.connected = False
                if before != self.connected:
                    self.updateWidgetConnectionStatus()
            else:
                # Raise any other exceptions
                raise extype(traceback)

        self.runInWorkerThread(
            self.wrapper.ping,
            result_func=setConnected,
            error_func=setConnectedError
        )

    def updateWidgetConnectionStatus(self):
        for widget in self.widgets:
            if self.connected:
                widget.cyDaqConnected()
            else:
                widget.cyDaqDisconnected()

    def startPingTimer(self):
        self.pingTimer.start(self.pingTimerInterval)

    def stopPingTimer(self):
        self.pingTimer.stop()

    def switchToModeSelector(self):
        self.stack.setCurrentIndex(0)

    def switchToBasicOperation(self):
        self.stack.setCurrentIndex(1)

    def switchToBalanceBeam(self):
        self.stack.setCurrentIndex(2)

    def switchToLiveStream(self):
        self.stack.setCurrentIndex(3)


class ModeSelectorWidget(QtWidgets.QWidget, Ui_ModeSelectorWidget, CyDAQModeWidget):
    """Starter widget that allows the user to switch between all other widgets"""

    def __init__(self, mainWindow: MainWindow):
        super(ModeSelectorWidget, self).__init__()
        self.setupUi(self)

        self.mainWindow = mainWindow

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper

        basicOperationButton = self.basic_operation_btn
        basicOperationButton.setCheckable(True)
        basicOperationButton.clicked.connect(lambda: self.mainWindow.switchToBasicOperation())

        balanceBeamButton = self.balance_beam_btn
        balanceBeamButton.setCheckable(True)
        balanceBeamButton.clicked.connect(lambda: self.mainWindow.switchToBalanceBeam())

        liveStreamButton = self.livestream_btn
        liveStreamButton.setCheckable(True)
        liveStreamButton.clicked.connect(lambda: self.mainWindow.switchToLiveStream())

    def cyDaqConnected(self):
        """When CyDAQ changes from disconnected to connected"""

    def cyDaqDisconnected(self):
        """When CyDAQ changes from connected to disconnected"""


class BasicOperationModeWidget(QtWidgets.QMainWindow, Ui_basic_operation, CyDAQModeWidget):
    """Basic operation mode window. Allows for basic sampling of data with basic filters and presets. """

    def __init__(self, mainWindow: MainWindow):
        super(BasicOperationModeWidget, self).__init__()
        self.setupUi(self)

        self.mainWindow = mainWindow

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper

        self.sampling = False
        self.writing = False
        self.filename = None

        # Home Button
        self.home_btn.clicked.connect(lambda: self.mainWindow.switchToModeSelector())

        # Sample Rate
        self.sample_rate_max_btn.clicked.connect(
            lambda: self.sample_rate_input_box.setEditText(self.sample_rate_max_btn.text().replace(',', '')))
        self.sample_rate_min_btn.clicked.connect(
            lambda: self.sample_rate_input_box.setEditText(self.sample_rate_min_btn.text()))
        onlyInt = QIntValidator()
        onlyInt.setRange(100, 50000)
        self.sample_rate_input_box.setValidator(onlyInt)

        # Input

        # Filter

        # Corners
        self.low_corner_min_btn.clicked.connect(
            lambda: self.low_corner_input.setText(self.low_corner_min_btn.text().replace(',', '')))
        self.low_corner_max_btn.clicked.connect(
            lambda: self.low_corner_input.setText(self.low_corner_max_btn.text().replace(',', '')))
        self.mid_corner_min_btn.clicked.connect(
            lambda: self.mid_corner_input_box.setEditText(self.mid_corner_min_btn.text().replace(',', '')))
        self.mid_corner_max_btn.clicked.connect(
            lambda: self.mid_corner_input_box.setEditText(self.mid_corner_max_btn.text().replace(',', '')))
        self.high_corner_min_btn.clicked.connect(
            lambda: self.high_corner_input.setText(self.high_corner_min_btn.text().replace(',', '')))
        self.high_corner_max_btn.clicked.connect(
            lambda: self.high_corner_input.setText(self.high_corner_max_btn.text().replace(',', '')))

        onlyInt = QIntValidator()
        onlyInt.setRange(100, 20000)
        self.low_corner_input.setValidator(onlyInt)

        onlyInt = QIntValidator()
        onlyInt.setRange(100, 40000)
        self.mid_corner_input_box.setValidator(onlyInt)

        onlyInt = QIntValidator()
        onlyInt.setRange(2000, 40000)
        self.high_corner_input.setValidator(onlyInt)

        # Sampling
        self.start_stop_sampling_btn.clicked.connect(self.startStopSampling)

        def onFilterChange():
            midCorner = [
                self.mid_corner_label,
                self.lessThan1,
                self.lessThan2,
                self.mid_corner_input_box,
                self.mid_corner_max_btn,
                self.mid_corner_min_btn,
            ]

            lowHighCorner = [
                self.low_corner_label,
                self.label_3,
                self.label_2,
                self.low_corner_input,
                self.low_corner_max_btn,
                self.low_corner_min_btn,
                self.high_corner_label,
                self.label_4,
                self.label_5,
                self.high_corner_input,
                self.high_corner_max_btn,
                self.high_corner_min_btn,
            ]

            if self.filter_input_box.currentIndex() == 0 or self.filter_input_box.currentIndex() == 1:
                for hide in midCorner:
                    hide.hide()
                for hide in lowHighCorner:
                    hide.hide()

            elif self.filter_input_box.currentIndex() == 6 or self.filter_input_box.currentIndex() == 7:
                for hide in midCorner:
                    hide.hide()
                for show in lowHighCorner:
                    show.show()

            else:
                for show in midCorner:
                    show.show()
                for hide in lowHighCorner:
                    hide.hide()

        self.filter_input_box.currentIndexChanged.connect(onFilterChange)
        onFilterChange()

    def cyDaqConnected(self):
        """When CyDAQ changes from disconnected to connected"""
        self.connection_status_label.setText("Connected!")

    def cyDaqDisconnected(self):
        """When CyDAQ changes from connected to disconnected"""
        self.connection_status_label.setText("Not Connected!")

    def writingData(self):
        """When the cyDAQ is sending data to the frontend and it's writing it to a file."""
        self.writing = True
        self.mainWindow.pingTimer.stop()
        self.start_stop_sampling_btn.setText("Writing...")

    def writingDataFinished(self):
        """When the cyDAQ is finished writing data."""
        print("writing data finished")
        self.filename = None  # Causes an ask for filename every sample
        self.writing = False
        self.mainWindow.startPingTimer()
        self.start_stop_sampling_btn.setText("Start")

    def getData(self):
        return {
            "Sample Rate": self.sample_rate_input_box.currentText(),
            "Input": self.input_input_box.currentText(),
            "Filter": self.filter_input_box.currentText(),
            "Upper Corner": self.high_corner_input.text() or 0,
            "Mid Corner": self.mid_corner_input_box.currentText() or 0,
            "Lower Corner": self.low_corner_input.text() or 0,
        }

    def startStopSampling(self):
        if not self.mainWindow.connected:
            return

        if self.writing:
            return

        if not self.sampling:
            # start sampling
            wrong = self.validateInput()
            self.updateWrongs(wrong)
            s = ""
            for title, message in wrong.items():
                if message != "":
                    s += title + ": " + message + "\n"
            if s != "":
                self.showInfo(s)
                return

            if self.filename is None or self.filename.strip() == "":
                # get file save location
                options = QFileDialog.Options()
                self.filename, _ = QFileDialog.getSaveFileName(self, "Pick a location to save the sample!",
                                                               DEFAULT_SAVE_LOCATION, "CSV Files (*.csv);;",
                                                               options=options)
                print("filename: |", self.filename, "|")
                if self.filename.strip() == "":  # no file chosen
                    return

            def handleError(x):
                self.startSamplingError = True
                self.showError(x[2])

            def step1():
                if self.startSamplingError:
                    return
                self.runInWorkerThread(
                    self.wrapper.send_config_to_cydaq,
                    finished_func=step2,
                    error_func=handleError
                )

            def step2():
                if self.startSamplingError:
                    return
                self.sampling = True
                self.mainWindow.stopPingTimer()
                self.runInWorkerThread(
                    self.wrapper.start_sampling,
                    finished_func=step3,
                    error_func=handleError
                )

            def step3():
                if self.startSamplingError:
                    self.sampling = False
                    self.filename = None
                    return
                self.start_stop_sampling_btn.setText("Stop")

            self.startSamplingError = False

            self.runInWorkerThread(
                self.wrapper.set_values,
                func_args=json.dumps(self.getData()),
                finished_func=step1,
                error_func=handleError
            )

        else:
            # Stop sampling
            self.sampling = False
            self.writingData()
            self.runInWorkerThread(
                self.wrapper.stop_sampling,
                func_args=self.filename,
                finished_func=self.writingDataFinished,
                error_func=lambda x: self.showError(x)
            )

    def validateInput(self):
        """Validate configuration and populate a return dictionary with any error messages. An empty string means there is no error."""
        data = self.getData()
        wrong = {"Sample Rate": "",
                 "Upper Corner": "",
                 "Mid Corner": "",
                 "Lower Corner": ""}

        # Sample Rate
        if data.get('Sample Rate') is None or data.get('Sample Rate') == "":
            wrong.update({"Sample Rate": "Field cannot be empty."})
        elif int(data.get('Sample Rate').replace(',', '')) > 50000 or int(
                data.get('Sample Rate').replace(',', '')) < 100:
            wrong.update({
                "Sample Rate": f"{str(int(data.get('Sample Rate').replace(',', '')))} is an invalid input for the Sample "
                               f"Rate! Must be 100 ≤ x ≤ 50000."})
        else:
            wrong.update({"Sample Rate": ""})

        filter_val = data.get("Filter")
        filters = [
            "All Pass",
            "60 hz Notch",
            "1st Order High Pass",
            "1st Order Low Pass",
            "6th Order High Pass",
            "6th Order Low Pass",
            "2nd Order Band Pass",
            "6th Order Band Pass"
        ]
        # Mid Corner
        if filter_val in filters[2: 6]:  # 1st and 6th Order High/Low Pass
            if data.get('Mid Corner') is None or data.get('Mid Corner') == "":
                wrong.update({"Mid Corner": "Field cannot be empty."})
            elif int(data.get('Mid Corner').replace(',', '')) > 40000 or int(
                    data.get('Mid Corner').replace(',', '')) < 100:
                wrong.update({
                    "Mid Corner": f"{str(int(data.get('Mid Corner').replace(',', '')))} is an invalid input "
                                  f"for the Mid Corner! Must be 100 ≤ x ≤ 40000."})
            else:
                wrong.update({"Mid Corner": ""})

        # Low Corner
        if filter_val in filters[6:8]:  # 2nd and 6th Order Band Pass
            if data.get('Lower Corner') is None or data.get('Lower Corner') == "":
                wrong.update({"Lower Corner": "Field cannot be empty."})
            elif int(data.get('Lower Corner').replace(',', '')) > 20000 or int(
                    data.get('Lower Corner').replace(',', '')) < 100:
                wrong.update({
                    "Lower Corner": f"{str(int(data.get('Lower Corner').replace(',', '')))} is an invalid "
                                    f"input for the Low Corner! Must be 100 ≤ x ≤ 20000."})
            else:
                wrong.update({"Lower Corner": ""})

        # High Corner
        if filter_val in filters[6:8]:  # 2nd and 6th Order Band Pass
            if data.get('Upper Corner') is None or data.get('Upper Corner') == "":
                wrong.update({"Upper Corner": "Field cannot be empty."})
            elif int(data.get('Upper Corner').replace(',', '')) > 40000 or int(
                    data.get('Upper Corner').replace(',', '')) < 2000:
                wrong.update({
                    "Upper Corner": f"{str(int(data.get('Upper Corner').replace(',', '')))} is an invalid "
                                    f"input for the Mid Corner! Must be 2000 ≤ x ≤ 40000."})
            else:
                wrong.update({"Upper Corner": ""})

        return wrong

    def updateWrongs(self, wrong):
        wrong_dict = {
            "Sample Rate": lambda: self.sample_rate_input_box.setStyleSheet("background: rgb(247, 86, 74);"),
            "Lower Corner": lambda: self.low_corner_input.setStyleSheet("background: rgb(247, 86, 74);"),
            "Mid Corner": lambda: self.mid_corner_input_box.setStyleSheet("background: rgb(247, 86, 74);"),
            "Upper Corner": lambda: self.high_corner_input.setStyleSheet("background: rgb(247, 86, 74);")
        }

        right_dict = {
            "Sample Rate": lambda: self.sample_rate_input_box.setStyleSheet("background: rgb(217, 217, 217);"),
            "Lower Corner": lambda: self.low_corner_input.setStyleSheet("background: rgb(217, 217, 217);"),
            "Mid Corner": lambda: self.mid_corner_input_box.setStyleSheet("background: rgb(217, 217, 217);"),
            "Upper Corner": lambda: self.high_corner_input.setStyleSheet("background: rgb(217, 217, 217);")
        }

        for i in wrong.keys():
            if wrong.get(i) == "":
                right_dict.get(i)()
            else:
                wrong_dict.get(i)()


class BalanceBeamWidget(QtWidgets.QMainWindow, Ui_balance_beam, CyDAQModeWidget):
    # Balance Beam Input Values
    kp = 0
    ki = 0
    kd = 0
    n = 0
    setcm = 0
    offset = 0

    """Balance Beam mode window. Allows the use of the balance beam tool with custom settings."""

    def __init__(self, mainWindow: MainWindow):
        super(BalanceBeamWidget, self).__init__()
        self.setupUi(self)

        self.mainWindow = mainWindow

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper

        # Home Button
        self.home_btn.clicked.connect(self.mainWindow.switchToModeSelector)

        # Widget Buttons
        self.send_constants_btn.clicked.connect(self.sendConstants)
        self.send_set_point_btn.clicked.connect(self.sendSetPoint)
        self.save_step_btn.clicked.connect(self.saveStep)
        self.save_plot_data_btn.clicked.connect(self.savePlotData)
        self.offset_inc_btn.clicked.connect(self.writeData)
        self.offset_dec_btn.clicked.connect(self.readData)
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

    def writeData(self):
        self.runInWorkerThread(
            self.wrapper.writeALotOfDataV2,
            finished_func=lambda: print("Success!"),
            error_func=lambda x: self.showError(x)
        )

    def readData(self):
        self.runInWorkerThread(
            self.wrapper.readALotOfData,
            func_args=self.graph_label,
            finished_func=lambda: print("Success"),
            error_func=lambda x: self.showError(x)
        )


class LiveStreamWidget(QtWidgets.QMainWindow, Ui_live_stream, CyDAQModeWidget):
    running = False
    in_thread = False

    def __init__(self, mainWindow: MainWindow, parent=None):
        super(LiveStreamWidget, self).__init__()
        self.setupUi(self)

        #super().__init__(parent)

        layout = QGridLayout(self)
        self.low_sample: Union[float, None] = 0
        self.high_sample: Union[float, None] = 1

        # Create one curve pre dataset
        high_plot = LiveLinePlot(pen="blue")
        low_plot = LiveLinePlot(pen="orange")
        mid_plot = LiveLinePlot(pen="green")

        # Data Connectors for each plot with dequeue of 600 points
        self.high_connector = DataConnector(high_plot, max_points=600)
        self.low_connector = DataConnector(low_plot, max_points=600)
        self.mid_connector = DataConnector(mid_plot, max_points=600)

        # Setup bottom axis with TIME tick format
        bottom_axis = LiveAxis("bottom", **{Axis.TICK_FORMAT: Axis.TIME})

        # Create plot itself
        self.chart_view = LivePlotWidget(title="Line Plot - CyDAQ Data Sample", axisItems={'bottom': bottom_axis})

        # Show grid
        self.chart_view.showGrid(x=True, y=True, alpha=0.3)

        # Set labels
        self.chart_view.setLabel('bottom', 'Time (s)', units="s")
        self.chart_view.setLabel('left', 'Samples')

        # Add all three curves
        self.chart_view.addItem(mid_plot)
        self.chart_view.addItem(low_plot)
        self.chart_view.addItem(high_plot)

        # Using -1 to span through all rows available in the window
        layout.addWidget(self.chart_view, 2, 0, -1, 3)

        self.mainWindow = mainWindow

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper

        # Home Button
        self.home_btn.clicked.connect(self.mainWindow.switchToModeSelector)

        # Widget Buttons
        self.start_btn.clicked.connect(self.start_app)
        self.stop_btn.clicked.connect(self.stop)

        # CyDAQ Connection Label (disabled until re-layout)

    def cyDaqConnected(self):
        """When CyDAQ changes from disconnected to connected"""
        # self.connection_status_label.setText("Connected!")
        pass

    def cyDaqDisconnected(self):
        """When CyDAQ changes from connected to disconnected"""
        # self.connection_status_label.setText("Not Connected!")
        pass

#    def start(self):
#        if self.infile_line.text() is None or "":
#            print("A filename is needed!")
#            return
#        filename = self.infile_line.text()
#        with open(filename, 'r') as file:
#            self.graphWidget = pg.PlotWidget()
#            self.setCentralWidget(self.graphWidget)
#
#            hour = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
#            temperature = [30, 32, 34, 32, 33, 31, 29, 32, 35, 45]
#
#            self.graphWidget.setBackground('w')
#            self.graphWidget.plot(hour, temperature)
#
#            time.sleep(5)
#
#           file.close()

    def update(self):

        print("Started!")
        if self.in_thread is True:
            self.running = True
            return

        start = time.time()
        while self.running:
            timestamp = round(time.time() - start)

            mid_px = random.random()

            self.mid_connector.cb_append_data_point(mid_px, timestamp)
            self.low_connector.cb_append_data_point(self.low_sample, timestamp)
            self.high_connector.cb_append_data_point(self.high_sample, timestamp)

            print(f"epoch: {timestamp}, mid: {mid_px:.2f}")
            time.sleep(0.5)

    def start_app(self):
        self.running = True
        Thread(target=self.update).start()

    def stop(self):
        self.running = False
        print("Stopped!")


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
            exctype, value = sys.exc_info()[:2]
            self.signals.error.emit((exctype, value, traceback.format_exc()))
        else:
            self.signals.result.emit(result)  # Return the result of the processing
        finally:
            self.signals.finished.emit()  # Done


# TODO this will get used later
class DACModeWidget(QtWidgets.QWidget, Ui_DAC_mode_widget):
    def __init__(self):
        super(DACModeWidget, self).__init__()
        self.setupUi(self)
        onlyInt = QIntValidator()
        onlyInt.setRange(0, 2147483647)
        self.repetitions_input.setValidator(onlyInt)
        onlyInt = QIntValidator()
        onlyInt.setRange(100, 200000)
        self.gen_rate_input.setValidator(onlyInt)

        def onDropdownChanged():

            toHideOrShow = [
                self.dac_repetitions_label,
                self.repetitions_min_limit_btn,
                self.label_5,
                self.repetitions_input,
                self.label_6,
                self.repetitions_max_limit_btn,
                self.dac_gen_rate_label,
                self.gen_rate_min_limit_btn,
                self.label_7,
                self.gen_rate_input,
                self.label_8,
                self.gen_rate_max_limit_btn,
                self.input_file_name,
                self.file_upload_btn,
            ]

            if self.dac_mode_dropdown.currentText() == "Disabled":
                for hide in toHideOrShow:
                    hide.hide()

            else:
                for show in toHideOrShow:
                    show.show()

        self.dac_mode_dropdown.currentTextChanged.connect(onDropdownChanged)
        onDropdownChanged()

        def onFileOpenBtnClicked():
            options = QFileDialog.Options()
            # options |= QFileDialog.DontUseNativeDialog
            fileName, _ = QFileDialog.getOpenFileName(self, "QFileDialog.getOpenFileName()", "", "CSV Files (*.csv);;",
                                                      options=options)
            if fileName:
                self.input_file_name.setText(fileName)
                # global generationFilename
                # generationFilename = fileName

        self.file_upload_btn.clicked.connect(onFileOpenBtnClicked)
        self.repetitions_min_limit_btn.clicked.connect(
            lambda: self.repetitions_input.setText(self.repetitions_min_limit_btn.text()))
        self.repetitions_max_limit_btn.clicked.connect(lambda: self.repetitions_input.setText(str(2 ** 31 - 1)))
        self.gen_rate_min_limit_btn.clicked.connect(
            lambda: self.gen_rate_input.setText(self.gen_rate_min_limit_btn.text()))
        self.gen_rate_max_limit_btn.clicked.connect(
            lambda: self.gen_rate_input.setText(self.gen_rate_max_limit_btn.text()))

    def cyDaqConnected(self):
        """
        What happens to the UI when the cyDaq changes to connected
        """
        pass

    def cyDaqDisconnected(self):
        """
        What happens to the UI when the cyDaq changes to disconnected
        """
        pass

    def getData(self):
        pass
        # global generationFilename
        # if generationFilename is None or generationFilename == "":
        #     generationFilename = self.input_file_name.text()
        # allData.update({
        #     "Dac Mode": self.dac_mode_dropdown.currentText(),
        #     "Dac Reps": self.repetitions_input.text(),
        #     "Dac Generation Rate": self.gen_rate_input.text()
        # })
        # return allData


class InvalidInputException(IOError):
    pass


if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    main = MainWindow()
    sys.exit(app.exec_())
