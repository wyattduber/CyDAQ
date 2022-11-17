# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/DacModeWidget.ui'
#
# Created by: PyQt5 UI code generator 5.10.1
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_DAC_mode_widget(object):
    def setupUi(self, DAC_mode_widget):
        DAC_mode_widget.setObjectName("DAC_mode_widget")
        DAC_mode_widget.resize(919, 476)
        DAC_mode_widget.setMinimumSize(QtCore.QSize(919, 476))
        DAC_mode_widget.setMaximumSize(QtCore.QSize(919, 476))
        DAC_mode_widget.setStyleSheet("QWidget {\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: #033f63;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #033f63;\n"
"    color: #d9d9d9;\n"
"    border-radius: 4px;\n"
"    padding: 8px 21px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QComboBox {\n"
"    border-radius: 4px;\n"
"    border: 2px solid #033f63;\n"
"    padding: 4px 8px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    border-radius: 4px;\n"
"    border: 2px solid #033f63;\n"
"    padding: 4px 8px;\n"
"}\n"
"\n"
"#dac_gen_rate_label, #dac_mode_label, #dac_repetitions_label {\n"
"    font-size: 25px;\n"
"}\n"
"\n"
"#gen_rate_max_limit_btn, #gen_rate_min_limit_btn, #repetitions_max_limit_btn, #repetitions_min_limit_btn {\n"
"    width: 55px;\n"
"    height: 25px; \n"
"}\n"
"\n"
"\n"
"\n"
"")
        DAC_mode_widget.setInputMethodHints(QtCore.Qt.ImhNone)
        self.dac_mode_dropdown = QtWidgets.QComboBox(DAC_mode_widget)
        self.dac_mode_dropdown.setGeometry(QtCore.QRect(339, 80, 241, 31))
        self.dac_mode_dropdown.setMinimumSize(QtCore.QSize(0, 0))
        self.dac_mode_dropdown.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.dac_mode_dropdown.setObjectName("dac_mode_dropdown")
        self.dac_mode_dropdown.addItem("")
        self.dac_mode_dropdown.addItem("")
        self.dac_mode_dropdown.addItem("")
        self.dac_mode_label = QtWidgets.QLabel(DAC_mode_widget)
        self.dac_mode_label.setGeometry(QtCore.QRect(399, 40, 121, 21))
        self.dac_mode_label.setObjectName("dac_mode_label")
        self.dac_gen_rate_label = QtWidgets.QLabel(DAC_mode_widget)
        self.dac_gen_rate_label.setGeometry(QtCore.QRect(339, 270, 241, 31))
        self.dac_gen_rate_label.setObjectName("dac_gen_rate_label")
        self.dac_repetitions_label = QtWidgets.QLabel(DAC_mode_widget)
        self.dac_repetitions_label.setGeometry(QtCore.QRect(369, 140, 181, 31))
        self.dac_repetitions_label.setObjectName("dac_repetitions_label")
        self.layoutWidget = QtWidgets.QWidget(DAC_mode_widget)
        self.layoutWidget.setGeometry(QtCore.QRect(250, 190, 422, 55))
        self.layoutWidget.setObjectName("layoutWidget")
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout(self.layoutWidget)
        self.horizontalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.repetitions_min_limit_btn = QtWidgets.QPushButton(self.layoutWidget)
        self.repetitions_min_limit_btn.setObjectName("repetitions_min_limit_btn")
        self.horizontalLayout_2.addWidget(self.repetitions_min_limit_btn, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        self.label_5 = QtWidgets.QLabel(self.layoutWidget)
        self.label_5.setObjectName("label_5")
        self.horizontalLayout_2.addWidget(self.label_5, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        self.repetitions_input = QtWidgets.QLineEdit(self.layoutWidget)
        self.repetitions_input.setInputMethodHints(QtCore.Qt.ImhNone)
        self.repetitions_input.setObjectName("repetitions_input")
        self.horizontalLayout_2.addWidget(self.repetitions_input)
        self.label_6 = QtWidgets.QLabel(self.layoutWidget)
        self.label_6.setObjectName("label_6")
        self.horizontalLayout_2.addWidget(self.label_6, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        self.repetitions_max_limit_btn = QtWidgets.QPushButton(self.layoutWidget)
        self.repetitions_max_limit_btn.setObjectName("repetitions_max_limit_btn")
        self.horizontalLayout_2.addWidget(self.repetitions_max_limit_btn, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        self.horizontalLayoutWidget = QtWidgets.QWidget(DAC_mode_widget)
        self.horizontalLayoutWidget.setGeometry(QtCore.QRect(250, 320, 422, 55))
        self.horizontalLayoutWidget.setObjectName("horizontalLayoutWidget")
        self.horizontalLayout_3 = QtWidgets.QHBoxLayout(self.horizontalLayoutWidget)
        self.horizontalLayout_3.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.gen_rate_min_limit_btn = QtWidgets.QPushButton(self.horizontalLayoutWidget)
        self.gen_rate_min_limit_btn.setObjectName("gen_rate_min_limit_btn")
        self.horizontalLayout_3.addWidget(self.gen_rate_min_limit_btn)
        self.label_7 = QtWidgets.QLabel(self.horizontalLayoutWidget)
        self.label_7.setObjectName("label_7")
        self.horizontalLayout_3.addWidget(self.label_7)
        self.gen_rate_input = QtWidgets.QLineEdit(self.horizontalLayoutWidget)
        self.gen_rate_input.setObjectName("gen_rate_input")
        self.horizontalLayout_3.addWidget(self.gen_rate_input)
        self.label_8 = QtWidgets.QLabel(self.horizontalLayoutWidget)
        self.label_8.setObjectName("label_8")
        self.horizontalLayout_3.addWidget(self.label_8)
        self.gen_rate_max_limit_btn = QtWidgets.QPushButton(self.horizontalLayoutWidget)
        self.gen_rate_max_limit_btn.setObjectName("gen_rate_max_limit_btn")
        self.horizontalLayout_3.addWidget(self.gen_rate_max_limit_btn)
        self.horizontalLayoutWidget_2 = QtWidgets.QWidget(DAC_mode_widget)
        self.horizontalLayoutWidget_2.setGeometry(QtCore.QRect(250, 410, 421, 51))
        self.horizontalLayoutWidget_2.setObjectName("horizontalLayoutWidget_2")
        self.horizontalLayout = QtWidgets.QHBoxLayout(self.horizontalLayoutWidget_2)
        self.horizontalLayout.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.input_file_name = QtWidgets.QLineEdit(self.horizontalLayoutWidget_2)
        self.input_file_name.setObjectName("input_file_name")
        self.horizontalLayout.addWidget(self.input_file_name)
        self.file_upload_btn = QtWidgets.QPushButton(self.horizontalLayoutWidget_2)
        self.file_upload_btn.setObjectName("file_upload_btn")
        self.horizontalLayout.addWidget(self.file_upload_btn)

        self.retranslateUi(DAC_mode_widget)
        QtCore.QMetaObject.connectSlotsByName(DAC_mode_widget)

    def retranslateUi(self, DAC_mode_widget):
        _translate = QtCore.QCoreApplication.translate
        DAC_mode_widget.setWindowTitle(_translate("DAC_mode_widget", "Form"))
        self.dac_mode_dropdown.setItemText(0, _translate("DAC_mode_widget", "Disabled"))
        self.dac_mode_dropdown.setItemText(1, _translate("DAC_mode_widget", "Dataset"))
        self.dac_mode_dropdown.setItemText(2, _translate("DAC_mode_widget", "Passthrough"))
        self.dac_mode_label.setText(_translate("DAC_mode_widget", "DAC Mode"))
        self.dac_gen_rate_label.setText(_translate("DAC_mode_widget", "DAC Generation Rate"))
        self.dac_repetitions_label.setText(_translate("DAC_mode_widget", "DAC Repetitions"))
        self.repetitions_min_limit_btn.setText(_translate("DAC_mode_widget", "0"))
        self.label_5.setText(_translate("DAC_mode_widget", "<html><head/><body><p><span style=\" font-size:12pt;\">≤</span></p></body></html>"))
        self.label_6.setText(_translate("DAC_mode_widget", "<"))
        self.repetitions_max_limit_btn.setText(_translate("DAC_mode_widget", "2^(31)"))
        self.gen_rate_min_limit_btn.setText(_translate("DAC_mode_widget", "100"))
        self.label_7.setText(_translate("DAC_mode_widget", "≤"))
        self.label_8.setText(_translate("DAC_mode_widget", "≤"))
        self.gen_rate_max_limit_btn.setText(_translate("DAC_mode_widget", "200,000"))
        self.file_upload_btn.setText(_translate("DAC_mode_widget", "DAC Datafile"))

