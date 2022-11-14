# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/DacModeWidget.ui'
#
# Created by: PyQt5 UI code generator 5.15.7
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_DAC_mode_widget(object):
    def setupUi(self, DAC_mode_widget):
        DAC_mode_widget.setObjectName("DAC_mode_widget")
        DAC_mode_widget.resize(616, 543)
        DAC_mode_widget.setInputMethodHints(QtCore.Qt.ImhNone)
        self.dac_mode_dropdown = QtWidgets.QComboBox(DAC_mode_widget)
        self.dac_mode_dropdown.setGeometry(QtCore.QRect(80, 50, 241, 31))
        self.dac_mode_dropdown.setMinimumSize(QtCore.QSize(0, 0))
        self.dac_mode_dropdown.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.dac_mode_dropdown.setObjectName("dac_mode_dropdown")
        self.dac_mode_dropdown.addItem("")
        self.dac_mode_dropdown.addItem("")
        self.dac_mode_dropdown.addItem("")
        self.dac_mode_label = QtWidgets.QLabel(DAC_mode_widget)
        self.dac_mode_label.setGeometry(QtCore.QRect(130, 0, 121, 21))
        self.dac_mode_label.setObjectName("dac_mode_label")
        self.dac_gen_rate_label = QtWidgets.QLabel(DAC_mode_widget)
        self.dac_gen_rate_label.setGeometry(QtCore.QRect(90, 240, 241, 31))
        self.dac_gen_rate_label.setObjectName("dac_gen_rate_label")
        self.dac_repetitions_label = QtWidgets.QLabel(DAC_mode_widget)
        self.dac_repetitions_label.setGeometry(QtCore.QRect(110, 110, 181, 31))
        self.dac_repetitions_label.setObjectName("dac_repetitions_label")
        self.layoutWidget = QtWidgets.QWidget(DAC_mode_widget)
        self.layoutWidget.setGeometry(QtCore.QRect(10, 170, 422, 39))
        self.layoutWidget.setObjectName("layoutWidget")
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout(self.layoutWidget)
        self.horizontalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.repetitions_min_limit_btn_2 = QtWidgets.QPushButton(self.layoutWidget)
        self.repetitions_min_limit_btn_2.setObjectName("repetitions_min_limit_btn_2")
        self.horizontalLayout_2.addWidget(self.repetitions_min_limit_btn_2, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
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
        self.repetitions_max_limit_btn_2 = QtWidgets.QPushButton(self.layoutWidget)
        self.repetitions_max_limit_btn_2.setObjectName("repetitions_max_limit_btn_2")
        self.horizontalLayout_2.addWidget(self.repetitions_max_limit_btn_2, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        self.horizontalLayoutWidget = QtWidgets.QWidget(DAC_mode_widget)
        self.horizontalLayoutWidget.setGeometry(QtCore.QRect(10, 290, 422, 41))
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
        self.repetitions_min_limit_btn_2.setText(_translate("DAC_mode_widget", "Infinity"))
        self.label_5.setText(_translate("DAC_mode_widget", "<="))
        self.label_6.setText(_translate("DAC_mode_widget", "<="))
        self.repetitions_max_limit_btn_2.setText(_translate("DAC_mode_widget", "2,147,483,647"))
        self.gen_rate_min_limit_btn.setText(_translate("DAC_mode_widget", "100"))
        self.label_7.setText(_translate("DAC_mode_widget", "<="))
        self.label_8.setText(_translate("DAC_mode_widget", "<="))
        self.gen_rate_max_limit_btn.setText(_translate("DAC_mode_widget", "200,000"))
