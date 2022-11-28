import sys
from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QFileDialog
from PyQt5.QtGui import QIntValidator

from MainWindow import Ui_MainWindow
from BasicOperation import Ui_basic_operation
from DacModeWidget import Ui_DAC_mode_widget
# from SamplingRateWidget import Ui_sampling_rate_widget
# from InputWidget import Ui_input_widget
# from FilterWidget import Ui_filter_widget
# from CornersWidget import Ui_corners_widget

#  from cli import CLIWrapper

page_dict = {0: "DAC Mode",
             1: "Sampling Rate",
             2: "Input",
             3: "Filter",
             4: "Corners"}

allData = {}
#  TODO Figure out connection to CLIWrapper
#  cli = CLIWrapper.CLI("main.py")
generationFilename = ""


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


def validateInput(data, index):
    page = page_dict.get(index)

    if page == "DAC Mode" and data.get('Dac Mode') != "Disabled":
        if data.get('Dac Reps') is None or data.get('Dac Reps') == "":
            raise InvalidInputException("DAC Repetetor Field is Empty!")
        rep = int(data.get('Dac Reps').replace(',', ''))
        if rep > 2147483647 or rep < 1:
            raise InvalidInputException(
                str(rep) + " is an invalid input for the Repetitions! Must be 1 <= x <= 2147483647.")
        if data.get('Dac Generation Rate') is None or data.get('Dac Generation Rate') == "":
            raise InvalidInputException("DAC Generation Rate is Empty!")
        gen = int(data.get('Dac Generation Rate').replace(',', ''))
        if gen > 200000 or gen < 100:
            raise InvalidInputException(str(gen) + " is an invalid input for the Generation! Must be 100 <= x <= 200000.")
        return
    elif page == "Sampling Rate":
        if data.get('Sample Rate') is None or data.get('Sample Rate') == "":
            raise InvalidInputException("Sample Rate is Empty!")
        sample = int(data.get('Sample Rate').replace(',', ''))
        if sample > 50000 or sample < 100:
            raise InvalidInputException(
                str(sample) + "is an invalid input for the Sample Rate! Must be 100 <= x <= 50000.")
        return
    elif page == "Corners":
        if data.get('Mid Corner') is None or data.get('Mid Corner') == "":
            raise InvalidInputException("Mid Corner value is Empty!")
        midCorner = int(data.get('Mid Corner').replace(',', ''))
        if midCorner > 40000 or midCorner < 100:
            raise InvalidInputException(
                str(midCorner) + "is an invalid input for the Mid Corner! Must be 100 <= x <= 40000.")
        return

class BasicOperationWindow(QtWidgets.QMainWindow, Ui_basic_operation):
    def __init__(self, inwidget, inwindows):
        super(BasicOperationWindow, self).__init__()
        self.setupUi(self)

        self.widget = inwidget
        self.windows = inwindows

        # Sample Rate
        self.sample_rate_presets.currentItemChanged.connect(
            lambda: self.sample_rate_input.setText(self.sample_rate_presets.currentItem().text()))
        self.sample_rate_max_btn.clicked.connect(
            lambda: self.sample_rate_input.setText(self.sample_rate_max_btn.text().replace(',', '')))
        self.sample_rate_min_btn.clicked.connect(
            lambda: self.sample_rate_input.setText(self.sample_rate_min_btn.text()))
        onlyInt = QIntValidator()
        onlyInt.setRange(100, 50000)
        self.sample_rate_input.setValidator(onlyInt)

        # Input

        # Filter

        # Corners
        self.corner_presets.currentItemChanged.connect(
            lambda: self.corner_input.setText(self.corner_presets.currentItem().text()))
        self.corner_max_btn.clicked.connect(
            lambda: self.corner_input.setText(self.corner_max_btn.text().replace(',', '')))
        self.corner_min_btn.clicked.connect(
            lambda: self.corner_input.setText(self.corner_min_btn.text()))
        onlyInt = QIntValidator()
        onlyInt.setRange(100, 40000)
        self.corner_input.setValidator(onlyInt)

        # Sampling
        self.start_stop_sampling_btn.clicked.connect(lambda: print(self.getData())) # TODO used for debug, remove!

    def getData(self):
        return {
            "Sample Rate": self.sample_rate_input.text(),
            "Input": self.input_list.currentItem().text(),
            "Filter": self.filter_list.currentItem().text(),
            "Upper Corner": 40000,
            "Mid Corner": self.corner_input.text(),
            "Lower Corner": 100,

        }

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

if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    widget = QtWidgets.QStackedWidget()

    windows = []
    windows += [
        MainWindow(widget, windows),
        BasicOperationWindow(widget, windows)
    ]

    for window in windows:
        widget.addWidget(window)

    # set current widget to MainWindow
    widget.setCurrentWidget(windows[0])
    widget.show()

    sys.exit(app.exec())
