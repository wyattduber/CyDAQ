import sys
from PyQt5 import QtWidgets, uic, QtCore, QtGui
from PyQt5.QtWidgets import QInputDialog, QFileDialog
from PyQt5.QtGui import QIntValidator

from MainWindow import Ui_MainWindow
from BasicOperation import Ui_basic_operation
from DacModeWidget import Ui_DAC_mode_widget
# from SamplingRateWidget import Ui_sampling_rate_widget
# from InputWidget import Ui_input_widget
# from FilterWidget import Ui_filter_widget
# from CornersWidget import Ui_corners_widget


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

class BasicOperationWindow(QtWidgets.QMainWindow, Ui_basic_operation):
    def __init__(self, widget, windows):
        super(BasicOperationWindow, self).__init__()
        self.setupUi(self)

        self.widget = widget
        self.windows = windows

        # Sample Rate
        self.sample_rate_presets.currentItemChanged.connect(lambda: self.sample_rate_input.setText(self.sample_rate_presets.currentItem().text()))
        self.sample_rate_max_btn.clicked.connect(lambda: self.sample_rate_input.setText(self.sample_rate_max_btn.text()))
        self.sample_rate_min_btn.clicked.connect(lambda: self.sample_rate_input.setText(self.sample_rate_min_btn.text()))

        onlyInt = QIntValidator()
        onlyInt.setRange(100, 50000)
        self.sample_rate_input.setValidator(onlyInt)

        # Input

        # Filter

        # Corners
        onlyInt = QIntValidator()
        onlyInt.setRange(100, 40000)
        self.corner_input.setValidator(onlyInt)



    def getData(self):
        r = {
            "Input": self.input_list.currentItem().text()
        }
        return r

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
            fileName, _ = QFileDialog.getOpenFileName(self,"QFileDialog.getOpenFileName()", "","CSV Files (*.csv);;", options=options)
            if fileName:
                self.input_file_name.setText(fileName)

                #TODO do something with file path
                print(fileName)
        
        self.file_upload_btn.clicked.connect(onFileOpenBtnClicked)
        self.repetitions_min_limit_btn.clicked.connect(lambda: self.repetitions_input.setText(self.repetitions_min_limit_btn.text()))
        self.repetitions_max_limit_btn.clicked.connect(lambda: self.repetitions_input.setText(str(2**31-1)))
        self.gen_rate_min_limit_btn.clicked.connect(lambda: self.gen_rate_input.setText(self.gen_rate_min_limit_btn.text()))
        self.gen_rate_max_limit_btn.clicked.connect(lambda: self.gen_rate_input.setText(self.gen_rate_max_limit_btn.text()))

    def getData(self):
        # TODO change these to match the exact values in the CLI config
        return {
            "mode": self.dac_mode_dropdown.currentText(),
            "repetitions": self.repetitions_input.text(),
            "genRate": self.gen_rate_input.text()
        }

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