import datetime
import json
import sys, sched, time, threading
from threading import Event, Thread, Timer
from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QFileDialog
from PyQt5.QtGui import QIntValidator
from PyQt5.QtCore import QObject

from MainWindow import Ui_MainWindow
from BasicOperation import Ui_basic_operation
from DacModeWidget import Ui_DAC_mode_widget

# from SamplingRateWidget import Ui_sampling_rate_widget
# from InputWidget import Ui_input_widget
# from FilterWidget import Ui_filter_widget
# from CornersWidget import Ui_corners_widget

# This path must be appended because the CLI and GUI aren't in packages. 
# If both were in python packages, this issue wouldn't be here.
sys.path.append("../cli")
import CLIWrapper

page_dict = {0: "DAC Mode",
             1: "Sampling Rate",
             2: "Input",
             3: "Filter",
             4: "Corners"}

allData = {}
generationFilename = ""
cyDaqConnected = False
wrapper: CLIWrapper.CLI or None

PING_TIMER_DELAY_SECONDS = 1

class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self, inwidget, inwindows):
        super(MainWindow, self).__init__()
        self.setupUi(self)

        self.widget = inwidget
        self.windows = inwindows

        button = self.basic_operation_btn
        button.setCheckable(True)
        button.clicked.connect(self.was_clicked)

    def was_clicked(self):
        widget.setCurrentWidget(self.windows[1])
        # self.w = BasicOperationWindow()
        # self.w.show()
        # self.close()

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

def validateInput(data):
    wrong = {}

    # Sample Rate
    if data.get('Sample Rate') is None or data.get('Sample Rate') == "":
        wrong.update({"Sample Rate": "Field cannot be empty."})
    else:
        sample = int(data.get('Sample Rate').replace(',', ''))
        if sample > 50000 or sample < 100:
            wrong.update({"Sample Rate": f"{str(sample)} + is an invalid input for the Sample Rate! Must be 100 ≤ "
                                         f"x ≤ 50000."})

    # Mid Corner
    if data.get('Mid Corner') is None or data.get('Mid Corner') == "":
        wrong.update({"Mid Corner": "Field cannot be empty."})
    else:
        midCorner = int(data.get('Mid Corner').replace(',', ''))
        if midCorner > 40000 or midCorner < 100:
            wrong.update({"Mid Corner": f"{str(midCorner)} + is an invalid input for the Mid Corner! Must be 100 "
                                        f"≤ x ≤ 40000."})

    # Low Corner
    if data.get('Lower Corner') is None or data.get('Lower Corner') == "":
        wrong.update({"Lower Corner": "Field cannot be empty."})
    else:
        lowCorner = int(data.get('Lower Corner').replace(',', ''))
        if lowCorner > 20000 or lowCorner < 100:
            wrong.update({"Lower Corner": f"{str(lowCorner)} + is an invalid input for the Low Corner! Must be 100 "
                                          f"≤ x ≤ 20000."})

    # High Corner
    if data.get('Upper Corner') is None or data.get('Upper Corner') == "":
        wrong.update({"Upper Corner": "Field cannot be empty."})
    else:
        midCorner = int(data.get('Upper Corner').replace(',', ''))
        if midCorner > 40000 or midCorner < 2000:
            wrong.update(
                {"Upper Corner": f"{str(midCorner)} + is an invalid input for the Mid Corner! Must be 2000 "
                                 f"≤ x ≤ 40000."})

    return wrong


def bind(objectName, propertyName):
    def getter(self):
        return self.findChild(QObject, objectName).property(propertyName)

    def setter(self, value):
        self.findChild(QObject, objectName).setProperty(propertyName, value)

    return property(getter, setter)

class BasicOperationWindow(QtWidgets.QMainWindow, Ui_basic_operation):
    test = bind("connection_status_label", "cyDaqConnected")

    def __init__(self, inwidget, inwindows):
        super(BasicOperationWindow, self).__init__()
        self.setupUi(self)

        self.widget = inwidget
        self.windows = inwindows
        self.sampling = False

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
        self.start_stop_sampling_btn.clicked.connect(self.start_stop_sampling)  # TODO used for debug, remove!

    def cyDaqConnected(self):
        """
        What happens to the UI when the cyDaq changes to connected
        """
        self.connection_status_label.setText("Connected!")

    def cyDaqDisconnected(self):
        """
        What happens to the UI when the cyDaq changes to disconnected
        """
        self.connection_status_label.setText("Not Connected!")

    def getData(self):
        return {
            "Sample Rate": self.sample_rate_input_box.currentText(),
            "Input": self.input_input_box.currentText(),
            "Filter": self.filter_input_box.currentText(),
            "Upper Corner": self.high_corner_input.text(),
            "Mid Corner": self.mid_corner_input_box.currentText(),
            "Lower Corner": self.low_corner_input.text(),

        }

    def start_stop_sampling(self):
        if not self.sampling:
            # start sampling
            wrong = validateInput(self.getData())
            if len(wrong) > 0:
                print("HANDLE ERRORS")
                print(wrong)
                return  # TODO Do something with the error messages for invalid inputs
            else:
                wrapper.set_values(json.dumps(self.getData()))
                wrapper.send_config_to_cydaq()
                wrapper.start_sampling()
                self.sampling = True
                self.start_stop_sampling_btn.setText("Stop")
                print("started sampling!")
    
        else:
            # stop sampling
            wrapper.stop_sampling()
            self.sampling = False
            self.start_stop_sampling_btn.setText("Start")
            print("stopped sampling!")



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
                global generationFilename
                generationFilename = fileName

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
        global generationFilename
        if generationFilename is None or generationFilename == "":
            generationFilename = self.input_file_name.text()
        allData.update({
            "Dac Mode": self.dac_mode_dropdown.currentText(),
            "Dac Reps": self.repetitions_input.text(),
            "Dac Generation Rate": self.gen_rate_input.text()
        })
        return allData


class InvalidInputException(IOError):
    pass

class RepeatedTimer(object):
    def __init__(self, interval, function, *args, **kwargs):
        self._timer     = None
        self.interval   = interval
        self.function   = function
        self.args       = args
        self.kwargs     = kwargs
        self.is_running = False
        self.start()

    def _run(self):
        self.is_running = False
        self.start()
        self.function(*self.args, **self.kwargs)

    def start(self):
        if not self.is_running:
            self._timer = Timer(self.interval, self._run)
            self._timer.start()
            self.is_running = True

    def stop(self):
        if self._timer is not None:
            self._timer.cancel()
        self.is_running = False

def updateWindowsConnected(windows, connectedBool):
    for window in windows:
        if connectedBool:
            window.cyDaqConnected()
        else:  
            window.cyDaqDisconnected()

def createNewWrapper(windows):
    print("createNewWrapper")
    wrapper = None
    try:
        wrapper = CLIWrapper.CLI("../cli/main.py")
        ping = wrapper.ping()
        print("create wrapper ping: ", ping)
        cyDaqConnected = (ping >= 0)
        updateWindowsConnected(windows, cyDaqConnected)
    except CLIWrapper.cyDAQNotConnectedException:
        cyDaqConnected = False
        if wrapper is not None:
            wrapper.closeConnection()
            return None
        updateWindowsConnected(windows, cyDaqConnected)
    return wrapper

if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    widget = QtWidgets.QStackedWidget()
    rt = None
    try:
        windows = []
        windows += [
            MainWindow(widget, windows),
            BasicOperationWindow(widget, windows)
        ]

        # global
        wrapper = createNewWrapper(windows)  # type: ignore

        def timerHandler():
            global cyDaqConnected
            global wrapper
            print("wrapper: ", wrapper)
            if wrapper is None:
                wrapper = createNewWrapper(windows)  # type: ignore
                return
            try:
                ping = wrapper.ping()
            except CLIWrapper.cyDAQNotConnectedException:
                # cyDAQ must have disconnected, we will need a new wrapper instance
                cyDaqConnected = False
                updateWindowsConnected(windows, cyDaqConnected)
                wrapper.closeConnection()
                wrapper = None  # type: ignore
                return
            before = cyDaqConnected
            cyDaqConnected = (ping >= 0)
            if before != cyDaqConnected:
                updateWindowsConnected(windows, cyDaqConnected)
            print(cyDaqConnected, ": ", ping)

        # Uncomment to enable periodic checking of connection. Currently throws some weird errors when turning the cyDAQ on and off. Still working on it...
        # rt = RepeatedTimer(PING_TIMER_DELAY_SECONDS, timerHandler)

        for window in windows:
            widget.addWidget(window)

        # set current widget to MainWindow
        widget.setCurrentWidget(windows[0])
        widget.show()

        app.exec()
    finally:
        if rt is not None:
            rt.stop()
        # sys.exit()
