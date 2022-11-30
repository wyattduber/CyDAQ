# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/MainWindow.ui'
#
# Created by: PyQt5 UI code generator 5.15.4
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(428, 625)
        MainWindow.setMinimumSize(QtCore.QSize(428, 625))
        MainWindow.setMaximumSize(QtCore.QSize(700, 800))
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(16)
        MainWindow.setFont(font)
        MainWindow.setStyleSheet("background-color: #d9d9d9;")
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setStyleSheet("QWidget {\n"
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
        self.centralwidget.setObjectName("centralwidget")
        self.verticalLayout = QtWidgets.QVBoxLayout(self.centralwidget)
        self.verticalLayout.setObjectName("verticalLayout")
        self.logo = QtWidgets.QLabel(self.centralwidget)
        self.logo.setEnabled(True)
        self.logo.setText("")
        self.logo.setTextFormat(QtCore.Qt.RichText)
        self.logo.setPixmap(QtGui.QPixmap(":/assets/assets/CyDAQ_300x300.png"))
        self.logo.setObjectName("logo")
        self.verticalLayout.addWidget(self.logo, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        spacerItem = QtWidgets.QSpacerItem(20, 40, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Minimum)
        self.verticalLayout.addItem(spacerItem)
        self.select_mode_header = QtWidgets.QLabel(self.centralwidget)
        self.select_mode_header.setMaximumSize(QtCore.QSize(275, 100))
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(-1)
        self.select_mode_header.setFont(font)
        self.select_mode_header.setAlignment(QtCore.Qt.AlignLeading|QtCore.Qt.AlignLeft|QtCore.Qt.AlignVCenter)
        self.select_mode_header.setWordWrap(False)
        self.select_mode_header.setObjectName("select_mode_header")
        self.verticalLayout.addWidget(self.select_mode_header, 0, QtCore.Qt.AlignHCenter)
        spacerItem1 = QtWidgets.QSpacerItem(20, 40, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Minimum)
        self.verticalLayout.addItem(spacerItem1)
        self.basic_operation_btn = QtWidgets.QPushButton(self.centralwidget)
        self.basic_operation_btn.setMinimumSize(QtCore.QSize(0, 0))
        self.basic_operation_btn.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.basic_operation_btn.setCursor(QtGui.QCursor(QtCore.Qt.ArrowCursor))
        self.basic_operation_btn.setObjectName("basic_operation_btn")
        self.verticalLayout.addWidget(self.basic_operation_btn, 0, QtCore.Qt.AlignHCenter)
        self.balance_beam_btn = QtWidgets.QPushButton(self.centralwidget)
        self.balance_beam_btn.setMinimumSize(QtCore.QSize(0, 0))
        self.balance_beam_btn.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.balance_beam_btn.setObjectName("balance_beam_btn")
        self.verticalLayout.addWidget(self.balance_beam_btn, 0, QtCore.Qt.AlignHCenter)
        self.config_btn = QtWidgets.QPushButton(self.centralwidget)
        self.config_btn.setMinimumSize(QtCore.QSize(0, 0))
        self.config_btn.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.config_btn.setObjectName("config_btn")
        self.verticalLayout.addWidget(self.config_btn, 0, QtCore.Qt.AlignHCenter)
        self.external_adc_btn = QtWidgets.QPushButton(self.centralwidget)
        self.external_adc_btn.setMinimumSize(QtCore.QSize(0, 0))
        self.external_adc_btn.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.external_adc_btn.setObjectName("external_adc_btn")
        self.verticalLayout.addWidget(self.external_adc_btn, 0, QtCore.Qt.AlignHCenter)
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 428, 19))
        font = QtGui.QFont()
        font.setPointSize(8)
        self.menubar.setFont(font)
        self.menubar.setObjectName("menubar")
        self.menuFile = QtWidgets.QMenu(self.menubar)
        self.menuFile.setObjectName("menuFile")
        self.menuHelp = QtWidgets.QMenu(self.menubar)
        self.menuHelp.setObjectName("menuHelp")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)
        self.actionRestart = QtWidgets.QAction(MainWindow)
        self.actionRestart.setObjectName("actionRestart")
        self.actionQuit = QtWidgets.QAction(MainWindow)
        self.actionQuit.setObjectName("actionQuit")
        self.actionPing_CyDAQ = QtWidgets.QAction(MainWindow)
        self.actionPing_CyDAQ.setObjectName("actionPing_CyDAQ")
        self.menuFile.addAction(self.actionRestart)
        self.menuFile.addAction(self.actionQuit)
        self.menuHelp.addAction(self.actionPing_CyDAQ)
        self.menubar.addAction(self.menuFile.menuAction())
        self.menubar.addAction(self.menuHelp.menuAction())

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.select_mode_header.setText(_translate("MainWindow", "Select Mode"))
        self.basic_operation_btn.setText(_translate("MainWindow", "Basic Operation"))
        self.balance_beam_btn.setText(_translate("MainWindow", "Balance Beam"))
        self.config_btn.setText(_translate("MainWindow", "Config"))
        self.external_adc_btn.setText(_translate("MainWindow", "External ADC"))
        self.menuFile.setTitle(_translate("MainWindow", "File"))
        self.menuHelp.setTitle(_translate("MainWindow", "Help"))
        self.actionRestart.setText(_translate("MainWindow", "Restart"))
        self.actionQuit.setText(_translate("MainWindow", "Quit"))
        self.actionPing_CyDAQ.setText(_translate("MainWindow", "Ping CyDAQ"))
import main_window_rc
