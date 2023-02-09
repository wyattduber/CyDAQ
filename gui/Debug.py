# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/Debug.ui'
#
# Created by: PyQt5 UI code generator 5.15.4
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_debug(object):
    def setupUi(self, debug):
        debug.setObjectName("debug")
        debug.setEnabled(True)
        debug.resize(428, 625)
        debug.setMinimumSize(QtCore.QSize(428, 625))
        debug.setMaximumSize(QtCore.QSize(700, 800))
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(12)
        font.setUnderline(False)
        debug.setFont(font)
        debug.setStyleSheet("background-color: #d9d9d9;")
        self.centralwidget = QtWidgets.QWidget(debug)
        self.centralwidget.setMaximumSize(QtCore.QSize(700, 900))
        self.centralwidget.setLayoutDirection(QtCore.Qt.LeftToRight)
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
"    padding: 8px 16px;\n"
"}\n"
"\n"
"#sampling_rate_label, #input_label, #filter_label, #mid_corner_label, #low_corner_label, #high_corner_label {\n"
"    font-size: 20px;\n"
"    text-align: center;\n"
"    color: #98012e;\n"
"}")
        self.centralwidget.setObjectName("centralwidget")
        self.verticalLayout = QtWidgets.QVBoxLayout(self.centralwidget)
        self.verticalLayout.setObjectName("verticalLayout")
        self.home_btn = QtWidgets.QPushButton(self.centralwidget)
        self.home_btn.setMaximumSize(QtCore.QSize(69, 16777215))
        self.home_btn.setText("")
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(":/assets/assets/home_icon.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.home_btn.setIcon(icon)
        self.home_btn.setObjectName("home_btn")
        self.verticalLayout.addWidget(self.home_btn)
        self.verticalLayout_3 = QtWidgets.QVBoxLayout()
        self.verticalLayout_3.setObjectName("verticalLayout_3")
        self.label_3 = QtWidgets.QLabel(self.centralwidget)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.label_3.sizePolicy().hasHeightForWidth())
        self.label_3.setSizePolicy(sizePolicy)
        self.label_3.setMinimumSize(QtCore.QSize(104, 50))
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(-1)
        self.label_3.setFont(font)
        self.label_3.setLineWidth(1)
        self.label_3.setAlignment(QtCore.Qt.AlignCenter)
        self.label_3.setObjectName("label_3")
        self.verticalLayout_3.addWidget(self.label_3)
        self.verticalLayout.addLayout(self.verticalLayout_3)
        self.log_textBrowser = QtWidgets.QTextBrowser(self.centralwidget)
        self.log_textBrowser.setObjectName("log_textBrowser")
        self.verticalLayout.addWidget(self.log_textBrowser)
        self.gridLayout = QtWidgets.QGridLayout()
        self.gridLayout.setObjectName("gridLayout")
        self.write_btn = QtWidgets.QPushButton(self.centralwidget)
        self.write_btn.setObjectName("write_btn")
        self.gridLayout.addWidget(self.write_btn, 0, 0, 1, 1)
        self.read_btn = QtWidgets.QPushButton(self.centralwidget)
        self.read_btn.setObjectName("read_btn")
        self.gridLayout.addWidget(self.read_btn, 0, 1, 1, 1)
        self.write2_btn = QtWidgets.QPushButton(self.centralwidget)
        self.write2_btn.setObjectName("write2_btn")
        self.gridLayout.addWidget(self.write2_btn, 1, 0, 1, 1)
        self.mock_checkBox = QtWidgets.QCheckBox(self.centralwidget)
        self.mock_checkBox.setEnabled(True)
        self.mock_checkBox.setChecked(False)
        self.mock_checkBox.setObjectName("mock_checkBox")
        self.gridLayout.addWidget(self.mock_checkBox, 1, 1, 1, 1)
        self.verticalLayout.addLayout(self.gridLayout)
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.label_4 = QtWidgets.QLabel(self.centralwidget)
        self.label_4.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.label_4.setObjectName("label_4")
        self.horizontalLayout_2.addWidget(self.label_4)
        self.connection_status_label = QtWidgets.QLabel(self.centralwidget)
        self.connection_status_label.setMinimumSize(QtCore.QSize(0, 45))
        self.connection_status_label.setObjectName("connection_status_label")
        self.horizontalLayout_2.addWidget(self.connection_status_label)
        self.verticalLayout.addLayout(self.horizontalLayout_2)
        debug.setCentralWidget(self.centralwidget)
        self.statusbar = QtWidgets.QStatusBar(debug)
        self.statusbar.setObjectName("statusbar")
        debug.setStatusBar(self.statusbar)
        self.actionRestart = QtWidgets.QAction(debug)
        self.actionRestart.setObjectName("actionRestart")
        self.actionQuit = QtWidgets.QAction(debug)
        self.actionQuit.setObjectName("actionQuit")
        self.actionPing_CyDAQ = QtWidgets.QAction(debug)
        self.actionPing_CyDAQ.setObjectName("actionPing_CyDAQ")

        self.retranslateUi(debug)
        QtCore.QMetaObject.connectSlotsByName(debug)

    def retranslateUi(self, debug):
        _translate = QtCore.QCoreApplication.translate
        debug.setWindowTitle(_translate("debug", "CyDAQ"))
        self.label_3.setText(_translate("debug", "Debug Menu"))
        self.write_btn.setText(_translate("debug", "Write Speed Test"))
        self.read_btn.setText(_translate("debug", "Read Speed Test"))
        self.write2_btn.setText(_translate("debug", "Write Speed Test 2"))
        self.mock_checkBox.setText(_translate("debug", "Mock CyDAQ - Linux only"))
        self.label_4.setText(_translate("debug", "CyDAQ Status:"))
        self.connection_status_label.setText(_translate("debug", "Not Connected!"))
        self.actionRestart.setText(_translate("debug", "&Restart"))
        self.actionQuit.setText(_translate("debug", "&Quit"))
        self.actionPing_CyDAQ.setText(_translate("debug", "&Ping CyDAQ"))
import balance_beam_rc
import basic_operation_rc
