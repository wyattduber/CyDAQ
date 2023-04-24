# PyQt5 Packages
from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QFileDialog
from PyQt5.QtGui import QDoubleValidator

# Stuff From Project - May show as an error but it works
from generated.DacModeWidgetUI import Ui_DAC_mode_widget
from widgets.mode_widget import CyDAQModeWidget


# TODO This will get used later - Might not be included for final product in sdmay23-47
class DACModeWidget(QtWidgets.QWidget, Ui_DAC_mode_widget, CyDAQModeWidget):
    def __init__(self, mainWindow):
        super(DACModeWidget, self).__init__()
        self.setupUi(self)
        validator = QDoubleValidator(0, 2147483647, 9)
        self.repetitions_input.setValidator(validator)
        validator = QDoubleValidator(100, 200000, 5)
        self.gen_rate_input.setValidator(validator)

        self.mainWindow = mainWindow
        self.cyDAQModeWidget = CyDAQModeWidget()

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
            fileName, _ = QFileDialog.getOpenFileName(self, "QFileDialog.getOpenFileName()", "", "CSV Files (*.csv);;",
                                                      options=options)
            if fileName:
                self.input_file_name.setText(fileName)

        self.file_upload_btn.clicked.connect(onFileOpenBtnClicked)
        self.repetitions_min_limit_btn.clicked.connect(
            lambda: self.repetitions_input.setText(self.repetitions_min_limit_btn.text()))
        self.repetitions_max_limit_btn.clicked.connect(lambda: self.repetitions_input.setText(str(2 ** 31 - 1)))
        self.gen_rate_min_limit_btn.clicked.connect(
            lambda: self.gen_rate_input.setText(self.gen_rate_min_limit_btn.text()))
        self.gen_rate_max_limit_btn.clicked.connect(
            lambda: self.gen_rate_input.setText(self.gen_rate_max_limit_btn.text()))

    def getData(self):
        pass
