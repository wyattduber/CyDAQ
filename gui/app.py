import sys
from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QFileDialog
from PyQt5.QtGui import QIntValidator

from MainWindow import Ui_MainWindow
from BasicOperation import Ui_basic_operation
from DacModeWidget import Ui_DAC_mode_widget
from SamplingRateWidget import Ui_sampling_rate_widget
from InputWidget import Ui_input_widget
from FilterWidget import Ui_filter_widget
from CornersWidget import Ui_corners_widget

page_dict = {0: "DAC Mode",
             1: "Sampling Rate",
             2: "Input",
             3: "Filter",
             4: "Corners"}

allData = {}

class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self, widget, windows):
        super(MainWindow, self).__init__()
        self.setupUi(self)

        self.widget = widget
        self.windows = windows

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
        rep = int(data.get('Dac Reps'))
        if rep > 2147483647 or rep < 1:
            raise InvalidInputException(str(rep) + " is an invalid input for the Repetitions! Must be 1 ≤ x ≤ 2147483647.")
        gen = int(data.get('genRate'))
        if gen > 200000 or gen < 100:
            raise InvalidInputException(str(gen) + " is an invalid input for the Generation! Must be 100 ≤ x ≤ 200000.")
        return
    elif page == "Sampling Rate":
        sample = int(data.get('Sample Rate'))
        if sample > 50000 or sample < 100:
            raise InvalidInputException(str(sample) + "is an invalid input for the Sample Rate! Must be 100 ≤ x ≤ 50000.")
        return
    elif page == "Corners":
        midCorner = int(data.get('Mid Corner'))
        if midCorner > 40000 or midCorner < 100:
            raise InvalidInputException(str(midCorner) + "is an invalid input for the Mid Corner! Must be 100 ≤ x ≤ 40000.")
        return


class BasicOperationWindow(QtWidgets.QMainWindow, Ui_basic_operation):
    def __init__(self, widget, windows):
        super(BasicOperationWindow, self).__init__()
        self.setupUi(self)

        self.widget = widget
        self.windows = windows

        self.inputPagesWidget = QtWidgets.QStackedWidget()
        self.testLayout.addWidget(self.inputPagesWidget)

        self.inputPages = [
            DACModeWidget(),
            SamplingRateWidget(),
            InputWidget(),
            FilterWidget(),
            CornersWidget()
        ]

        for page in self.inputPages:
            self.inputPagesWidget.addWidget(page)

        # start on DAC mode widget
        self.inputPagesWidget.setCurrentWidget(self.inputPages[0])

        def onNextClicked():
            data = self.getData()
            index = self.inputPagesWidget.currentIndex()
            validateInput(data, index)
            self.inputPagesWidget.setCurrentIndex(index + 1)
            print(data)

        def onPreviousClicked():
            self.inputPagesWidget.setCurrentIndex(self.inputPagesWidget.currentIndex() - 1)

        self.next_btn.clicked.connect(onNextClicked)
        self.previous_btn.clicked.connect(onPreviousClicked)

        self.dac_btn.clicked.connect(lambda: self.inputPagesWidget.setCurrentIndex(0))
        self.sampling_rate_btn.clicked.connect(lambda: self.inputPagesWidget.setCurrentIndex(1))
        self.input_btn.clicked.connect(lambda: self.inputPagesWidget.setCurrentIndex(2))
        self.filter_btn.clicked.connect(lambda: self.inputPagesWidget.setCurrentIndex(3))
        self.corners_btn.clicked.connect(lambda: self.inputPagesWidget.setCurrentIndex(4))

    def getData(self):
        for page in self.inputPages:
            data = page.getData()
            if data is not None:
                allData.update(page.getData())
        return allData


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

                # TODO do something with file path
                print(fileName)

        self.file_upload_btn.clicked.connect(onFileOpenBtnClicked)
        self.repetitions_min_limit_btn.clicked.connect(
            lambda: self.repetitions_input.setText(self.repetitions_min_limit_btn.text()))
        self.repetitions_max_limit_btn.clicked.connect(lambda: self.repetitions_input.setText(str(2 ** 31 - 1)))
        self.gen_rate_min_limit_btn.clicked.connect(
            lambda: self.gen_rate_input.setText(self.gen_rate_min_limit_btn.text()))
        self.gen_rate_max_limit_btn.clicked.connect(
            lambda: self.gen_rate_input.setText(self.gen_rate_max_limit_btn.text()))

    def getData(self):
        allData.update({
            "Dac Mode": self.dac_mode_dropdown.currentText(),
            "Dac Reps": self.repetitions_input.text(),
            "genRate": self.gen_rate_input.text()  # TODO Not seeing this value in the config
        })
        return allData


class SamplingRateWidget(QtWidgets.QWidget, Ui_sampling_rate_widget):
    def __init__(self):
        super(SamplingRateWidget, self).__init__()
        self.setupUi(self)

        self.sample_rate_presets.currentItemChanged.connect(
            lambda: self.sample_rate_input.setText(self.sample_rate_presets.currentItem().text()))
        self.sample_rate_max_btn.clicked.connect(
            lambda: self.sample_rate_input.setText(self.sample_rate_max_btn.text().replace(',', '')))
        self.sample_rate_min_btn.clicked.connect(
            lambda: self.sample_rate_input.setText(self.sample_rate_min_btn.text()))

        onlyInt = QIntValidator()
        onlyInt.setRange(100, 50000)
        self.sample_rate_input.setValidator(onlyInt)

    def getData(self):
        allData.update({"Sample Rate": self.sample_rate_input.text()})


class InputWidget(QtWidgets.QWidget, Ui_input_widget):
    def __init__(self):
        super(InputWidget, self).__init__()
        self.setupUi(self)

    def getData(self):
        return allData.update({"Input": self.input_list.currentItem().text()})


class FilterWidget(QtWidgets.QWidget, Ui_filter_widget):
    def __init__(self):
        super(FilterWidget, self).__init__()
        self.setupUi(self)

    def getData(self):
        allData.update({"Filter": self.filter_list.currentItem().text()})


class CornersWidget(QtWidgets.QWidget, Ui_corners_widget):
    def __init__(self):
        super(CornersWidget, self).__init__()
        self.setupUi(self)

        self.corner_presets.currentItemChanged.connect(
            lambda: self.corner_input.setText(self.corner_input.currentItem().text()))
        self.corner_max_btn.clicked.connect(
            lambda: self.corner_input.setText(self.corner_max_btn.text().replace(',', '')))
        self.corner_min_btn.clicked.connect(
            lambda: self.corner_input.setText(self.corner_min_btn.text()))

        onlyInt = QIntValidator()
        onlyInt.setRange(100, 40000)
        self.corner_input.setValidator(onlyInt)

    def getData(self):
        allData.update({"Upper Corner": 40000,
                        "Mid Corner": self.corner_input.text(),
                        "Lower Corner": 100})


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
