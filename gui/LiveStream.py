# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/LiveStream.ui'
#
# Created by: PyQt5 UI code generator 5.15.4
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_live_stream(object):
    def setupUi(self, live_stream):
        live_stream.setObjectName("live_stream")
        live_stream.setEnabled(True)
        live_stream.resize(428, 625)
        live_stream.setMinimumSize(QtCore.QSize(428, 625))
        live_stream.setMaximumSize(QtCore.QSize(700, 800))
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(12)
        font.setUnderline(False)
        live_stream.setFont(font)
        live_stream.setStyleSheet("background-color: #d9d9d9;")
        self.centralwidget = QtWidgets.QWidget(live_stream)
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
        self.logo = QtWidgets.QLabel(self.centralwidget)
        self.logo.setText("")
        self.logo.setPixmap(QtGui.QPixmap(":/assets/assets/CyDAQ_300x300.png"))
        self.logo.setAlignment(QtCore.Qt.AlignCenter)
        self.logo.setObjectName("logo")
        self.verticalLayout_3.addWidget(self.logo)
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
        self.start_btn = QtWidgets.QPushButton(self.centralwidget)
        self.start_btn.setObjectName("start_btn")
        self.verticalLayout_3.addWidget(self.start_btn)
        self.pause_btn = QtWidgets.QPushButton(self.centralwidget)
        self.pause_btn.setObjectName("pause_btn")
        self.verticalLayout_3.addWidget(self.pause_btn)
        self.clear_btn = QtWidgets.QPushButton(self.centralwidget)
        self.clear_btn.setObjectName("clear_btn")
        self.verticalLayout_3.addWidget(self.clear_btn)
        self.verticalLayout.addLayout(self.verticalLayout_3)
        self.gridLayout = QtWidgets.QGridLayout()
        self.gridLayout.setObjectName("gridLayout")
        self.infile_line = QtWidgets.QLineEdit(self.centralwidget)
        self.infile_line.setObjectName("infile_line")
        self.gridLayout.addWidget(self.infile_line, 0, 1, 1, 1)
        self.label_2 = QtWidgets.QLabel(self.centralwidget)
        self.label_2.setObjectName("label_2")
        self.gridLayout.addWidget(self.label_2, 2, 0, 1, 1)
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setObjectName("label")
        self.gridLayout.addWidget(self.label, 0, 0, 1, 1)
        self.speed_line = QtWidgets.QLineEdit(self.centralwidget)
        self.speed_line.setObjectName("speed_line")
        self.gridLayout.addWidget(self.speed_line, 2, 1, 1, 1)
        self.filename_wl = QtWidgets.QLabel(self.centralwidget)
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(-1)
        self.filename_wl.setFont(font)
        self.filename_wl.setText("")
        self.filename_wl.setAlignment(QtCore.Qt.AlignLeading|QtCore.Qt.AlignLeft|QtCore.Qt.AlignVCenter)
        self.filename_wl.setObjectName("filename_wl")
        self.gridLayout.addWidget(self.filename_wl, 1, 1, 1, 1)
        self.speed_wl = QtWidgets.QLabel(self.centralwidget)
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(-1)
        self.speed_wl.setFont(font)
        self.speed_wl.setText("")
        self.speed_wl.setObjectName("speed_wl")
        self.gridLayout.addWidget(self.speed_wl, 3, 1, 1, 1)
        self.graph_type_dropdown = QtWidgets.QComboBox(self.centralwidget)
        self.graph_type_dropdown.setObjectName("graph_type_dropdown")
        self.graph_type_dropdown.addItem("")
        self.graph_type_dropdown.addItem("")
        self.gridLayout.addWidget(self.graph_type_dropdown, 1, 0, 1, 1)
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
        live_stream.setCentralWidget(self.centralwidget)
        self.statusbar = QtWidgets.QStatusBar(live_stream)
        self.statusbar.setObjectName("statusbar")
        live_stream.setStatusBar(self.statusbar)
        self.actionRestart = QtWidgets.QAction(live_stream)
        self.actionRestart.setObjectName("actionRestart")
        self.actionQuit = QtWidgets.QAction(live_stream)
        self.actionQuit.setObjectName("actionQuit")
        self.actionPing_CyDAQ = QtWidgets.QAction(live_stream)
        self.actionPing_CyDAQ.setObjectName("actionPing_CyDAQ")

        self.retranslateUi(live_stream)
        QtCore.QMetaObject.connectSlotsByName(live_stream)

    def retranslateUi(self, live_stream):
        _translate = QtCore.QCoreApplication.translate
        live_stream.setWindowTitle(_translate("live_stream", "CyDAQ"))
        self.label_3.setText(_translate("live_stream", "Plotting Tool"))
        self.start_btn.setText(_translate("live_stream", "Start"))
        self.pause_btn.setText(_translate("live_stream", "Pause"))
        self.clear_btn.setText(_translate("live_stream", "Clear Graph"))
        self.label_2.setText(_translate("live_stream", "Graphing Speed:"))
        self.label.setText(_translate("live_stream", "Input Filename:"))
        self.graph_type_dropdown.setItemText(0, _translate("live_stream", "Scatter"))
        self.graph_type_dropdown.setItemText(1, _translate("live_stream", "Line"))
        self.label_4.setText(_translate("live_stream", "CyDAQ Status:"))
        self.connection_status_label.setText(_translate("live_stream", "Not Connected!"))
        self.actionRestart.setText(_translate("live_stream", "&Restart"))
        self.actionQuit.setText(_translate("live_stream", "&Quit"))
        self.actionPing_CyDAQ.setText(_translate("live_stream", "&Ping CyDAQ"))
import balance_beam_rc
import basic_operation_rc
