# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/ModeSelectorWidget.ui'
#
# Created by: PyQt5 UI code generator 5.15.9
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_ModeSelectorWidget(object):
    def setupUi(self, ModeSelectorWidget):
        ModeSelectorWidget.setObjectName("ModeSelectorWidget")
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(ModeSelectorWidget.sizePolicy().hasHeightForWidth())
        ModeSelectorWidget.setSizePolicy(sizePolicy)
        ModeSelectorWidget.setStyleSheet("QWidget {\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 20px;\n"
"    color: #033f63;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #033f63;\n"
"    color: #d9d9d9;\n"
"    border-radius: 4px;\n"
"    padding: 10px 26px;\n"
"    width: 200px;\n"
"    margin: 10px 0;\n"
"}\n"
"\n"
"#select_mode_header {\n"
"    font-size: 31px;\n"
"}")
        self.verticalLayout = QtWidgets.QVBoxLayout(ModeSelectorWidget)
        self.verticalLayout.setObjectName("verticalLayout")
        self.logo = QtWidgets.QLabel(ModeSelectorWidget)
        self.logo.setEnabled(True)
        self.logo.setMaximumSize(QtCore.QSize(418, 218))
        self.logo.setText("")
        self.logo.setTextFormat(QtCore.Qt.RichText)
        self.logo.setPixmap(QtGui.QPixmap(":/assets/assets/CyDAQ_Logo_vector.png"))
        self.logo.setScaledContents(True)
        self.logo.setObjectName("logo")
        self.verticalLayout.addWidget(self.logo, 0, QtCore.Qt.AlignHCenter)
        spacerItem = QtWidgets.QSpacerItem(368, 37, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Minimum)
        self.verticalLayout.addItem(spacerItem)
        self.select_mode_header = QtWidgets.QLabel(ModeSelectorWidget)
        self.select_mode_header.setMaximumSize(QtCore.QSize(275, 100))
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(-1)
        self.select_mode_header.setFont(font)
        self.select_mode_header.setScaledContents(True)
        self.select_mode_header.setAlignment(QtCore.Qt.AlignLeading|QtCore.Qt.AlignLeft|QtCore.Qt.AlignVCenter)
        self.select_mode_header.setWordWrap(False)
        self.select_mode_header.setObjectName("select_mode_header")
        self.verticalLayout.addWidget(self.select_mode_header, 0, QtCore.Qt.AlignHCenter)
        self.basic_operation_btn = QtWidgets.QPushButton(ModeSelectorWidget)
        self.basic_operation_btn.setMinimumSize(QtCore.QSize(0, 0))
        self.basic_operation_btn.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.basic_operation_btn.setCursor(QtGui.QCursor(QtCore.Qt.ArrowCursor))
        self.basic_operation_btn.setObjectName("basic_operation_btn")
        self.verticalLayout.addWidget(self.basic_operation_btn, 0, QtCore.Qt.AlignHCenter)
        self.livestream_btn = QtWidgets.QPushButton(ModeSelectorWidget)
        self.livestream_btn.setMinimumSize(QtCore.QSize(0, 0))
        self.livestream_btn.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.livestream_btn.setObjectName("livestream_btn")
        self.verticalLayout.addWidget(self.livestream_btn, 0, QtCore.Qt.AlignHCenter)
        self.balance_beam_btn = QtWidgets.QPushButton(ModeSelectorWidget)
        self.balance_beam_btn.setMinimumSize(QtCore.QSize(0, 0))
        self.balance_beam_btn.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.balance_beam_btn.setObjectName("balance_beam_btn")
        self.verticalLayout.addWidget(self.balance_beam_btn, 0, QtCore.Qt.AlignHCenter)
        self.external_adc_btn = QtWidgets.QPushButton(ModeSelectorWidget)
        self.external_adc_btn.setMinimumSize(QtCore.QSize(0, 0))
        self.external_adc_btn.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.external_adc_btn.setObjectName("external_adc_btn")
        self.verticalLayout.addWidget(self.external_adc_btn, 0, QtCore.Qt.AlignHCenter)

        self.retranslateUi(ModeSelectorWidget)
        QtCore.QMetaObject.connectSlotsByName(ModeSelectorWidget)

    def retranslateUi(self, ModeSelectorWidget):
        _translate = QtCore.QCoreApplication.translate
        ModeSelectorWidget.setWindowTitle(_translate("ModeSelectorWidget", "Form"))
        self.select_mode_header.setText(_translate("ModeSelectorWidget", "Select Mode"))
        self.basic_operation_btn.setText(_translate("ModeSelectorWidget", "Basic Operation"))
        self.livestream_btn.setText(_translate("ModeSelectorWidget", "Disabled"))
        self.balance_beam_btn.setText(_translate("ModeSelectorWidget", "Disabled"))
        self.external_adc_btn.setText(_translate("ModeSelectorWidget", "Disabled"))
from . import main_window_rc
