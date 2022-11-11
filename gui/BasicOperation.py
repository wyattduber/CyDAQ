# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/BasicOperation.ui'
#
# Created by: PyQt5 UI code generator 5.10.1
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_basic_operation(object):
    def setupUi(self, basic_operation):
        basic_operation.setObjectName("basic_operation")
        basic_operation.setEnabled(True)
        basic_operation.resize(947, 692)
        basic_operation.setMaximumSize(QtCore.QSize(947, 692))
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(12)
        font.setUnderline(False)
        basic_operation.setFont(font)
        basic_operation.setStyleSheet("background-color: #d9d9d9;")
        self.centralwidget = QtWidgets.QWidget(basic_operation)
        self.centralwidget.setStyleSheet("QWidget {\n"
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
"#dac_btn, #sampling_rate_btn, #input_btn, #filter_btn, #corners_btn {\n"
"    margin: 0 4px;\n"
"}\n"
"\n"
"#dac_btn {\n"
"    border: 2px solid #033f63;\n"
"}\n"
"\n"
"#sampling_rate_btn, #input_btn, #filter_btn, #corners_btn, #previous_btn {\n"
"    background-color: none;\n"
"    border: 2px solid #033f63;\n"
"    color: #033f63;\n"
"}\n"
"\n"
"")
        self.centralwidget.setObjectName("centralwidget")
        self.horizontalLayoutWidget_2 = QtWidgets.QWidget(self.centralwidget)
        self.horizontalLayoutWidget_2.setGeometry(QtCore.QRect(720, 600, 221, 51))
        self.horizontalLayoutWidget_2.setObjectName("horizontalLayoutWidget_2")
        self.horizontalLayout_3 = QtWidgets.QHBoxLayout(self.horizontalLayoutWidget_2)
        self.horizontalLayout_3.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.previous_btn = QtWidgets.QPushButton(self.horizontalLayoutWidget_2)
        self.previous_btn.setObjectName("previous_btn")
        self.horizontalLayout_3.addWidget(self.previous_btn)
        self.next_btn = QtWidgets.QPushButton(self.horizontalLayoutWidget_2)
        self.next_btn.setObjectName("next_btn")
        self.horizontalLayout_3.addWidget(self.next_btn)
        self.layoutWidget = QtWidgets.QWidget(self.centralwidget)
        self.layoutWidget.setGeometry(QtCore.QRect(10, 10, 931, 51))
        self.layoutWidget.setObjectName("layoutWidget")
        self.nav_layout = QtWidgets.QHBoxLayout(self.layoutWidget)
        self.nav_layout.setContentsMargins(0, 0, 0, 0)
        self.nav_layout.setObjectName("nav_layout")
        self.dac_btn = QtWidgets.QPushButton(self.layoutWidget)
        self.dac_btn.setEnabled(True)
        self.dac_btn.setMinimumSize(QtCore.QSize(0, 0))
        self.dac_btn.setMaximumSize(QtCore.QSize(16777215, 16777215))
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(-1)
        self.dac_btn.setFont(font)
        self.dac_btn.setFocusPolicy(QtCore.Qt.StrongFocus)
        self.dac_btn.setCheckable(False)
        self.dac_btn.setChecked(False)
        self.dac_btn.setAutoRepeat(False)
        self.dac_btn.setDefault(False)
        self.dac_btn.setFlat(False)
        self.dac_btn.setObjectName("dac_btn")
        self.nav_layout.addWidget(self.dac_btn)
        self.sampling_rate_btn = QtWidgets.QPushButton(self.layoutWidget)
        self.sampling_rate_btn.setMinimumSize(QtCore.QSize(0, 0))
        self.sampling_rate_btn.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.sampling_rate_btn.setObjectName("sampling_rate_btn")
        self.nav_layout.addWidget(self.sampling_rate_btn)
        self.input_btn = QtWidgets.QPushButton(self.layoutWidget)
        self.input_btn.setMinimumSize(QtCore.QSize(0, 0))
        self.input_btn.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.input_btn.setObjectName("input_btn")
        self.nav_layout.addWidget(self.input_btn)
        self.filter_btn = QtWidgets.QPushButton(self.layoutWidget)
        self.filter_btn.setMinimumSize(QtCore.QSize(0, 0))
        self.filter_btn.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.filter_btn.setObjectName("filter_btn")
        self.nav_layout.addWidget(self.filter_btn)
        self.corners_btn = QtWidgets.QPushButton(self.layoutWidget)
        self.corners_btn.setMinimumSize(QtCore.QSize(0, 0))
        self.corners_btn.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.corners_btn.setCheckable(False)
        self.corners_btn.setChecked(False)
        self.corners_btn.setObjectName("corners_btn")
        self.nav_layout.addWidget(self.corners_btn)
        self.gridLayoutWidget = QtWidgets.QWidget(self.centralwidget)
        self.gridLayoutWidget.setGeometry(QtCore.QRect(20, 80, 881, 501))
        self.gridLayoutWidget.setObjectName("gridLayoutWidget")
        self.testLayout = QtWidgets.QGridLayout(self.gridLayoutWidget)
        self.testLayout.setContentsMargins(0, 0, 0, 0)
        self.testLayout.setObjectName("testLayout")
        basic_operation.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(basic_operation)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 947, 19))
        font = QtGui.QFont()
        font.setPointSize(8)
        self.menubar.setFont(font)
        self.menubar.setObjectName("menubar")
        self.menuFile = QtWidgets.QMenu(self.menubar)
        self.menuFile.setObjectName("menuFile")
        self.menuHelp = QtWidgets.QMenu(self.menubar)
        self.menuHelp.setObjectName("menuHelp")
        basic_operation.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(basic_operation)
        self.statusbar.setObjectName("statusbar")
        basic_operation.setStatusBar(self.statusbar)
        self.actionRestart = QtWidgets.QAction(basic_operation)
        self.actionRestart.setObjectName("actionRestart")
        self.actionQuit = QtWidgets.QAction(basic_operation)
        self.actionQuit.setObjectName("actionQuit")
        self.actionPing_CyDAQ = QtWidgets.QAction(basic_operation)
        self.actionPing_CyDAQ.setObjectName("actionPing_CyDAQ")
        self.menuFile.addAction(self.actionRestart)
        self.menuFile.addAction(self.actionQuit)
        self.menuHelp.addAction(self.actionPing_CyDAQ)
        self.menubar.addAction(self.menuFile.menuAction())
        self.menubar.addAction(self.menuHelp.menuAction())

        self.retranslateUi(basic_operation)
        QtCore.QMetaObject.connectSlotsByName(basic_operation)

    def retranslateUi(self, basic_operation):
        _translate = QtCore.QCoreApplication.translate
        basic_operation.setWindowTitle(_translate("basic_operation", "CyDAQ"))
        self.previous_btn.setText(_translate("basic_operation", "Previous"))
        self.next_btn.setText(_translate("basic_operation", "Next"))
        self.dac_btn.setText(_translate("basic_operation", "DAC"))
        self.sampling_rate_btn.setText(_translate("basic_operation", "Sampling Rate"))
        self.input_btn.setText(_translate("basic_operation", "Input"))
        self.filter_btn.setText(_translate("basic_operation", "Filter"))
        self.corners_btn.setText(_translate("basic_operation", "Corners"))
        self.menuFile.setTitle(_translate("basic_operation", "Fi&le"))
        self.menuHelp.setTitle(_translate("basic_operation", "Help"))
        self.actionRestart.setText(_translate("basic_operation", "&Restart"))
        self.actionQuit.setText(_translate("basic_operation", "&Quit"))
        self.actionPing_CyDAQ.setText(_translate("basic_operation", "&Ping CyDAQ"))

