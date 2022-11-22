# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/SamplingRateWidget.ui'
#
# Created by: PyQt5 UI code generator 5.10.1
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_sampling_rate_widget(object):
    def setupUi(self, sampling_rate_widget):
        sampling_rate_widget.setObjectName("sampling_rate_widget")
        sampling_rate_widget.resize(943, 570)
        sampling_rate_widget.setStyleSheet("QWidget {\n"
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
"QLineEdit {\n"
"    border-radius: 4px;\n"
"    border: 2px solid #033f63;\n"
"    padding: 4px 8px;\n"
"    height: 25px;\n"
"}\n"
"\n"
"#presets_label {\n"
"    font-size: 25px;\n"
"}\n"
"\n"
"#sample_rate_min_btn, #sample_rate_max_btn {\n"
"    width: 55px;\n"
"    height: 25px; \n"
"}")
        self.verticalLayout = QtWidgets.QVBoxLayout(sampling_rate_widget)
        self.verticalLayout.setObjectName("verticalLayout")
        self.horizontalLayout = QtWidgets.QHBoxLayout()
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.sample_rate_min_btn = QtWidgets.QPushButton(sampling_rate_widget)
        self.sample_rate_min_btn.setObjectName("sample_rate_min_btn")
        self.horizontalLayout.addWidget(self.sample_rate_min_btn, 0, QtCore.Qt.AlignLeft)
        self.lessThan1Sample = QtWidgets.QLabel(sampling_rate_widget)
        self.lessThan1Sample.setObjectName("lessThan1Sample")
        self.horizontalLayout.addWidget(self.lessThan1Sample)
        self.sample_rate_input = QtWidgets.QLineEdit(sampling_rate_widget)
        self.sample_rate_input.setText("")
        self.sample_rate_input.setAlignment(QtCore.Qt.AlignCenter)
        self.sample_rate_input.setObjectName("sample_rate_input")
        self.horizontalLayout.addWidget(self.sample_rate_input, 0, QtCore.Qt.AlignHCenter)
        self.lessThan2Sample = QtWidgets.QLabel(sampling_rate_widget)
        self.lessThan2Sample.setObjectName("lessThan2Sample")
        self.horizontalLayout.addWidget(self.lessThan2Sample)
        self.sample_rate_max_btn = QtWidgets.QPushButton(sampling_rate_widget)
        self.sample_rate_max_btn.setObjectName("sample_rate_max_btn")
        self.horizontalLayout.addWidget(self.sample_rate_max_btn, 0, QtCore.Qt.AlignRight)
        self.verticalLayout.addLayout(self.horizontalLayout)
        self.presets_label = QtWidgets.QLabel(sampling_rate_widget)
        self.presets_label.setObjectName("presets_label")
        self.verticalLayout.addWidget(self.presets_label)
        self.sample_rate_presets = QtWidgets.QListWidget(sampling_rate_widget)
        self.sample_rate_presets.setTabKeyNavigation(True)
        self.sample_rate_presets.setObjectName("sample_rate_presets")
        item = QtWidgets.QListWidgetItem()
        self.sample_rate_presets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.sample_rate_presets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.sample_rate_presets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.sample_rate_presets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.sample_rate_presets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.sample_rate_presets.addItem(item)
        self.verticalLayout.addWidget(self.sample_rate_presets)

        self.retranslateUi(sampling_rate_widget)
        self.sample_rate_presets.setCurrentRow(0)
        QtCore.QMetaObject.connectSlotsByName(sampling_rate_widget)

    def retranslateUi(self, sampling_rate_widget):
        _translate = QtCore.QCoreApplication.translate
        sampling_rate_widget.setWindowTitle(_translate("sampling_rate_widget", "Form"))
        self.sample_rate_min_btn.setText(_translate("sampling_rate_widget", "100"))
        self.lessThan1Sample.setText(_translate("sampling_rate_widget", "≤"))
        self.lessThan2Sample.setText(_translate("sampling_rate_widget", "≤"))
        self.sample_rate_max_btn.setText(_translate("sampling_rate_widget", "50,000"))
        self.presets_label.setText(_translate("sampling_rate_widget", "Presets"))
        __sortingEnabled = self.sample_rate_presets.isSortingEnabled()
        self.sample_rate_presets.setSortingEnabled(False)
        item = self.sample_rate_presets.item(0)
        item.setText(_translate("sampling_rate_widget", "48000"))
        item = self.sample_rate_presets.item(1)
        item.setText(_translate("sampling_rate_widget", "44100"))
        item = self.sample_rate_presets.item(2)
        item.setText(_translate("sampling_rate_widget", "22050"))
        item = self.sample_rate_presets.item(3)
        item.setText(_translate("sampling_rate_widget", "16000"))
        item = self.sample_rate_presets.item(4)
        item.setText(_translate("sampling_rate_widget", "8000"))
        item = self.sample_rate_presets.item(5)
        item.setText(_translate("sampling_rate_widget", "4000"))
        self.sample_rate_presets.setSortingEnabled(__sortingEnabled)

