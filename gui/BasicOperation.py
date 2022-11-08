# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner\basic_operation.ui'
#
# Created by: PyQt5 UI code generator 5.15.4
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_basic_operation(object):
    def setupUi(self, basic_operation):
        basic_operation.setObjectName("basic_operation")
        basic_operation.resize(947, 692)
        basic_operation.setMaximumSize(QtCore.QSize(947, 692))
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(12)
        font.setUnderline(False)
        basic_operation.setFont(font)
        self.centralwidget = QtWidgets.QWidget(basic_operation)
        self.centralwidget.setObjectName("centralwidget")
        self.widget = QtWidgets.QWidget(self.centralwidget)
        self.widget.setObjectName("widget")
        self.btn_layout = QtWidgets.QHBoxLayout(self.widget)
        self.btn_layout.setContentsMargins(0, 0, 0, 0)
        self.btn_layout.setObjectName("btn_layout")
        self.dac_btn = QtWidgets.QPushButton(self.widget)
        self.dac_btn.setMinimumSize(QtCore.QSize(125, 35))
        self.dac_btn.setMaximumSize(QtCore.QSize(125, 35))
        self.dac_btn.setObjectName("dac_btn")
        self.btn_layout.addWidget(self.dac_btn)
        self.sampling_rate_btn = QtWidgets.QPushButton(self.widget)
        self.sampling_rate_btn.setMinimumSize(QtCore.QSize(125, 35))
        self.sampling_rate_btn.setMaximumSize(QtCore.QSize(125, 35))
        self.sampling_rate_btn.setObjectName("sampling_rate_btn")
        self.btn_layout.addWidget(self.sampling_rate_btn)
        self.input_btn = QtWidgets.QPushButton(self.widget)
        self.input_btn.setMinimumSize(QtCore.QSize(125, 35))
        self.input_btn.setMaximumSize(QtCore.QSize(125, 35))
        self.input_btn.setObjectName("input_btn")
        self.btn_layout.addWidget(self.input_btn)
        self.filter_btn = QtWidgets.QPushButton(self.widget)
        self.filter_btn.setMinimumSize(QtCore.QSize(125, 35))
        self.filter_btn.setMaximumSize(QtCore.QSize(125, 35))
        self.filter_btn.setObjectName("filter_btn")
        self.btn_layout.addWidget(self.filter_btn)
        self.corners_btn = QtWidgets.QPushButton(self.widget)
        self.corners_btn.setMinimumSize(QtCore.QSize(125, 35))
        self.corners_btn.setMaximumSize(QtCore.QSize(125, 35))
        self.corners_btn.setObjectName("corners_btn")
        self.btn_layout.addWidget(self.corners_btn)
        self.widget1 = QtWidgets.QWidget(self.centralwidget)
        self.widget1.setGeometry(QtCore.QRect(260, 270, 379, 124))
        self.widget1.setObjectName("widget1")
        self.verticalLayout_2 = QtWidgets.QVBoxLayout(self.widget1)
        self.verticalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        self.label = QtWidgets.QLabel(self.widget1)
        self.label.setObjectName("label")
        self.verticalLayout_2.addWidget(self.label, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignTop)
        self.comboBox = QtWidgets.QComboBox(self.widget1)
        self.comboBox.setMinimumSize(QtCore.QSize(125, 25))
        self.comboBox.setMaximumSize(QtCore.QSize(125, 25))
        self.comboBox.setObjectName("comboBox")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.verticalLayout_2.addWidget(self.comboBox, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignTop)
        self.label_2 = QtWidgets.QLabel(self.widget1)
        self.label_2.setObjectName("label_2")
        self.verticalLayout_2.addWidget(self.label_2, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignTop)
        self.horizontalLayout = QtWidgets.QHBoxLayout()
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.pushButton = QtWidgets.QPushButton(self.widget1)
        self.pushButton.setObjectName("pushButton")
        self.horizontalLayout.addWidget(self.pushButton, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        self.label_3 = QtWidgets.QLabel(self.widget1)
        self.label_3.setObjectName("label_3")
        self.horizontalLayout.addWidget(self.label_3, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        self.textEdit = QtWidgets.QTextEdit(self.widget1)
        self.textEdit.setMinimumSize(QtCore.QSize(125, 35))
        self.textEdit.setMaximumSize(QtCore.QSize(125, 35))
        self.textEdit.setObjectName("textEdit")
        self.horizontalLayout.addWidget(self.textEdit, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        self.label_4 = QtWidgets.QLabel(self.widget1)
        self.label_4.setObjectName("label_4")
        self.horizontalLayout.addWidget(self.label_4, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        self.pushButton_2 = QtWidgets.QPushButton(self.widget1)
        self.pushButton_2.setObjectName("pushButton_2")
        self.horizontalLayout.addWidget(self.pushButton_2, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        self.verticalLayout_2.addLayout(self.horizontalLayout)
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
        basic_operation.setWindowTitle(_translate("basic_operation", "MainWindow"))
        self.dac_btn.setText(_translate("basic_operation", "DAC"))
        self.sampling_rate_btn.setText(_translate("basic_operation", "Sampling Rate"))
        self.input_btn.setText(_translate("basic_operation", "Input"))
        self.filter_btn.setText(_translate("basic_operation", "Filter"))
        self.corners_btn.setText(_translate("basic_operation", "Corners"))
        self.label.setText(_translate("basic_operation", "DAC Mode"))
        self.comboBox.setItemText(0, _translate("basic_operation", "Disabled"))
        self.comboBox.setItemText(1, _translate("basic_operation", "Dataset"))
        self.comboBox.setItemText(2, _translate("basic_operation", "Passthrough"))
        self.label_2.setText(_translate("basic_operation", "DAC Repetitions"))
        self.pushButton.setText(_translate("basic_operation", "Infinity"))
        self.label_3.setText(_translate("basic_operation", "<="))
        self.label_4.setText(_translate("basic_operation", "<="))
        self.pushButton_2.setText(_translate("basic_operation", "2,147,483,647"))
        self.menuFile.setTitle(_translate("basic_operation", "File"))
        self.menuHelp.setTitle(_translate("basic_operation", "Help"))
        self.actionRestart.setText(_translate("basic_operation", "Restart"))
        self.actionQuit.setText(_translate("basic_operation", "Quit"))
        self.actionPing_CyDAQ.setText(_translate("basic_operation", "Ping CyDAQ"))