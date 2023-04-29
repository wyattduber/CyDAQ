# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/BalanceBeamWidget.ui'
#
# Created by: PyQt5 UI code generator 5.15.9
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_BalanceBeamWidget(object):
    def setupUi(self, BalanceBeamWidget):
        BalanceBeamWidget.setObjectName("BalanceBeamWidget")
        BalanceBeamWidget.resize(1165, 709)
        BalanceBeamWidget.setMinimumSize(QtCore.QSize(1165, 709))
        BalanceBeamWidget.setStyleSheet("QWidget {\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: #033f63;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #033f63;\n"
"    color: #d9d9d9;\n"
"    border-radius: 4px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"#sampling_rate_label, #input_label, #filter_label, #mid_corner_label, #low_corner_label, #high_corner_label {\n"
"    font-size: 20px;\n"
"    text-align: center;\n"
"    color: #98012e;\n"
"}\n"
"\n"
"background-color: #d9d9d9;")
        self.home_btn = QtWidgets.QPushButton(BalanceBeamWidget)
        self.home_btn.setGeometry(QtCore.QRect(10, 10, 52, 32))
        self.home_btn.setText("")
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(":/assets/assets/home_icon.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.home_btn.setIcon(icon)
        self.home_btn.setObjectName("home_btn")
        self.gridLayoutWidget = QtWidgets.QWidget(BalanceBeamWidget)
        self.gridLayoutWidget.setGeometry(QtCore.QRect(60, 120, 171, 151))
        self.gridLayoutWidget.setObjectName("gridLayoutWidget")
        self.gridLayout = QtWidgets.QGridLayout(self.gridLayoutWidget)
        self.gridLayout.setContentsMargins(0, 0, 0, 0)
        self.gridLayout.setObjectName("gridLayout")
        self.label_2 = QtWidgets.QLabel(self.gridLayoutWidget)
        self.label_2.setObjectName("label_2")
        self.gridLayout.addWidget(self.label_2, 1, 0, 1, 1)
        self.label_3 = QtWidgets.QLabel(self.gridLayoutWidget)
        self.label_3.setObjectName("label_3")
        self.gridLayout.addWidget(self.label_3, 2, 0, 1, 1)
        self.kp_input = QtWidgets.QLineEdit(self.gridLayoutWidget)
        self.kp_input.setObjectName("kp_input")
        self.gridLayout.addWidget(self.kp_input, 0, 1, 1, 1)
        self.label = QtWidgets.QLabel(self.gridLayoutWidget)
        self.label.setObjectName("label")
        self.gridLayout.addWidget(self.label, 0, 0, 1, 1)
        self.label_4 = QtWidgets.QLabel(self.gridLayoutWidget)
        self.label_4.setObjectName("label_4")
        self.gridLayout.addWidget(self.label_4, 3, 0, 1, 1)
        self.ki_input = QtWidgets.QLineEdit(self.gridLayoutWidget)
        self.ki_input.setObjectName("ki_input")
        self.gridLayout.addWidget(self.ki_input, 1, 1, 1, 1)
        self.kd_input = QtWidgets.QLineEdit(self.gridLayoutWidget)
        self.kd_input.setObjectName("kd_input")
        self.gridLayout.addWidget(self.kd_input, 2, 1, 1, 1)
        self.n_input = QtWidgets.QLineEdit(self.gridLayoutWidget)
        self.n_input.setObjectName("n_input")
        self.gridLayout.addWidget(self.n_input, 3, 1, 1, 1)
        self.ki_output = QtWidgets.QLineEdit(self.gridLayoutWidget)
        self.ki_output.setReadOnly(True)
        self.ki_output.setObjectName("ki_output")
        self.gridLayout.addWidget(self.ki_output, 1, 2, 1, 1)
        self.kd_output = QtWidgets.QLineEdit(self.gridLayoutWidget)
        self.kd_output.setReadOnly(True)
        self.kd_output.setObjectName("kd_output")
        self.gridLayout.addWidget(self.kd_output, 2, 2, 1, 1)
        self.n_output = QtWidgets.QLineEdit(self.gridLayoutWidget)
        self.n_output.setReadOnly(True)
        self.n_output.setObjectName("n_output")
        self.gridLayout.addWidget(self.n_output, 3, 2, 1, 1)
        self.kp_output = QtWidgets.QLineEdit(self.gridLayoutWidget)
        self.kp_output.setObjectName("kp_output")
        self.gridLayout.addWidget(self.kp_output, 0, 2, 1, 1)
        self.line = QtWidgets.QFrame(BalanceBeamWidget)
        self.line.setGeometry(QtCore.QRect(290, 0, 20, 741))
        self.line.setFrameShape(QtWidgets.QFrame.VLine)
        self.line.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.line.setObjectName("line")
        self.send_constants_btn = QtWidgets.QPushButton(BalanceBeamWidget)
        self.send_constants_btn.setGeometry(QtCore.QRect(50, 290, 191, 41))
        self.send_constants_btn.setObjectName("send_constants_btn")
        self.horizontalLayoutWidget = QtWidgets.QWidget(BalanceBeamWidget)
        self.horizontalLayoutWidget.setGeometry(QtCore.QRect(40, 350, 211, 41))
        self.horizontalLayoutWidget.setObjectName("horizontalLayoutWidget")
        self.horizontalLayout = QtWidgets.QHBoxLayout(self.horizontalLayoutWidget)
        self.horizontalLayout.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.label_5 = QtWidgets.QLabel(self.horizontalLayoutWidget)
        self.label_5.setObjectName("label_5")
        self.horizontalLayout.addWidget(self.label_5)
        self.set_cm_input = QtWidgets.QLineEdit(self.horizontalLayoutWidget)
        self.set_cm_input.setObjectName("set_cm_input")
        self.horizontalLayout.addWidget(self.set_cm_input)
        self.set_cm_output = QtWidgets.QLineEdit(self.horizontalLayoutWidget)
        self.set_cm_output.setReadOnly(True)
        self.set_cm_output.setObjectName("set_cm_output")
        self.horizontalLayout.addWidget(self.set_cm_output)
        self.send_set_point_btn = QtWidgets.QPushButton(BalanceBeamWidget)
        self.send_set_point_btn.setGeometry(QtCore.QRect(50, 410, 191, 41))
        self.send_set_point_btn.setObjectName("send_set_point_btn")
        self.save_plot_data_btn = QtWidgets.QPushButton(BalanceBeamWidget)
        self.save_plot_data_btn.setGeometry(QtCore.QRect(50, 470, 191, 41))
        self.save_plot_data_btn.setObjectName("save_plot_data_btn")
        self.horizontalLayoutWidget_2 = QtWidgets.QWidget(BalanceBeamWidget)
        self.horizontalLayoutWidget_2.setGeometry(QtCore.QRect(20, 530, 261, 71))
        self.horizontalLayoutWidget_2.setObjectName("horizontalLayoutWidget_2")
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout(self.horizontalLayoutWidget_2)
        self.horizontalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.offset_inc_btn = QtWidgets.QPushButton(self.horizontalLayoutWidget_2)
        self.offset_inc_btn.setObjectName("offset_inc_btn")
        self.horizontalLayout_2.addWidget(self.offset_inc_btn)
        self.offset_dec_btn = QtWidgets.QPushButton(self.horizontalLayoutWidget_2)
        self.offset_dec_btn.setObjectName("offset_dec_btn")
        self.horizontalLayout_2.addWidget(self.offset_dec_btn)
        self.pause_btn = QtWidgets.QPushButton(BalanceBeamWidget)
        self.pause_btn.setGeometry(QtCore.QRect(50, 620, 191, 41))
        self.pause_btn.setObjectName("pause_btn")
        self.graph = QtWidgets.QWidget(BalanceBeamWidget)
        self.graph.setGeometry(QtCore.QRect(340, 30, 801, 641))
        self.graph.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.graph.setObjectName("graph")
        self.horizontalLayoutWidget_3 = QtWidgets.QWidget(BalanceBeamWidget)
        self.horizontalLayoutWidget_3.setGeometry(QtCore.QRect(49, 50, 191, 51))
        self.horizontalLayoutWidget_3.setObjectName("horizontalLayoutWidget_3")
        self.horizontalLayout_3 = QtWidgets.QHBoxLayout(self.horizontalLayoutWidget_3)
        self.horizontalLayout_3.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.start_btn = QtWidgets.QPushButton(self.horizontalLayoutWidget_3)
        self.start_btn.setObjectName("start_btn")
        self.horizontalLayout_3.addWidget(self.start_btn)
        self.stop_btn = QtWidgets.QPushButton(self.horizontalLayoutWidget_3)
        self.stop_btn.setObjectName("stop_btn")
        self.horizontalLayout_3.addWidget(self.stop_btn)

        self.retranslateUi(BalanceBeamWidget)
        QtCore.QMetaObject.connectSlotsByName(BalanceBeamWidget)

    def retranslateUi(self, BalanceBeamWidget):
        _translate = QtCore.QCoreApplication.translate
        BalanceBeamWidget.setWindowTitle(_translate("BalanceBeamWidget", "Form"))
        self.label_2.setText(_translate("BalanceBeamWidget", "Ki"))
        self.label_3.setText(_translate("BalanceBeamWidget", "Kd"))
        self.kp_input.setText(_translate("BalanceBeamWidget", "0"))
        self.label.setText(_translate("BalanceBeamWidget", "Kp"))
        self.label_4.setText(_translate("BalanceBeamWidget", "N"))
        self.ki_input.setText(_translate("BalanceBeamWidget", "0"))
        self.kd_input.setText(_translate("BalanceBeamWidget", "0"))
        self.n_input.setText(_translate("BalanceBeamWidget", "0"))
        self.send_constants_btn.setText(_translate("BalanceBeamWidget", "Set Constants"))
        self.label_5.setText(_translate("BalanceBeamWidget", "Set(cm)"))
        self.set_cm_input.setText(_translate("BalanceBeamWidget", "0"))
        self.send_set_point_btn.setText(_translate("BalanceBeamWidget", "Set Set Point"))
        self.save_plot_data_btn.setText(_translate("BalanceBeamWidget", "Save Plot Data"))
        self.offset_inc_btn.setText(_translate("BalanceBeamWidget", "Offset +"))
        self.offset_dec_btn.setText(_translate("BalanceBeamWidget", "Offset -"))
        self.pause_btn.setText(_translate("BalanceBeamWidget", "Pause"))
        self.start_btn.setText(_translate("BalanceBeamWidget", "Start"))
        self.stop_btn.setText(_translate("BalanceBeamWidget", "Stop"))
from . import basic_operation_rc
