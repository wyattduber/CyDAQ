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
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Fixed, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(basic_operation.sizePolicy().hasHeightForWidth())
        basic_operation.setSizePolicy(sizePolicy)
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
        self.gridLayout = QtWidgets.QGridLayout(self.centralwidget)
        self.gridLayout.setObjectName("gridLayout")
        self.BasicOperationLabel = QtWidgets.QLabel(self.centralwidget)
        self.BasicOperationLabel.setMaximumSize(QtCore.QSize(16777215, 50))
        self.BasicOperationLabel.setObjectName("BasicOperationLabel")
        self.gridLayout.addWidget(self.BasicOperationLabel, 1, 0, 1, 1)
        self.InputLayout = QtWidgets.QGridLayout()
        self.InputLayout.setSizeConstraint(QtWidgets.QLayout.SetDefaultConstraint)
        self.InputLayout.setObjectName("InputLayout")
        self.testLayout_2 = QtWidgets.QGridLayout()
        self.testLayout_2.setObjectName("testLayout_2")
        self.InputLayout.addLayout(self.testLayout_2, 1, 1, 1, 1)
        self.testLayout = QtWidgets.QGridLayout()
        self.testLayout.setObjectName("testLayout")
        self.InputLayout.addLayout(self.testLayout, 1, 0, 1, 1)
        self.testLayout_3 = QtWidgets.QGridLayout()
        self.testLayout_3.setObjectName("testLayout_3")
        self.InputLayout.addLayout(self.testLayout_3, 3, 0, 1, 2)
        self.line = QtWidgets.QFrame(self.centralwidget)
        self.line.setFrameShape(QtWidgets.QFrame.HLine)
        self.line.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.line.setObjectName("line")
        self.InputLayout.addWidget(self.line, 2, 0, 1, 2)
        self.gridLayout.addLayout(self.InputLayout, 2, 0, 1, 1)
        self.horizontalLayout = QtWidgets.QHBoxLayout()
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.Placeholder1 = QtWidgets.QLabel(self.centralwidget)
        self.Placeholder1.setMaximumSize(QtCore.QSize(1000, 300))
        self.Placeholder1.setObjectName("Placeholder1")
        self.horizontalLayout.addWidget(self.Placeholder1)
        self.verticalLayout = QtWidgets.QVBoxLayout()
        self.verticalLayout.setObjectName("verticalLayout")
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setObjectName("label")
        self.verticalLayout.addWidget(self.label)
        self.pushButton = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton.setObjectName("pushButton")
        self.verticalLayout.addWidget(self.pushButton)
        self.horizontalLayout.addLayout(self.verticalLayout)
        self.gridLayout.addLayout(self.horizontalLayout, 3, 0, 1, 1)
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
        self.BasicOperationLabel.setText(_translate("basic_operation", "Basic Operation"))
        self.Placeholder1.setText(_translate("basic_operation", "Console"))
        self.label.setText(_translate("basic_operation", "Sampling Time: 00:00:00"))
        self.pushButton.setText(_translate("basic_operation", "Start/Stop"))
        self.menuFile.setTitle(_translate("basic_operation", "Fi&le"))
        self.menuHelp.setTitle(_translate("basic_operation", "Hel&p"))
        self.actionRestart.setText(_translate("basic_operation", "&Restart"))
        self.actionQuit.setText(_translate("basic_operation", "&Quit"))
        self.actionPing_CyDAQ.setText(_translate("basic_operation", "&Ping CyDAQ"))

