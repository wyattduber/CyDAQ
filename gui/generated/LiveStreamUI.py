# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/LiveStream.ui'
#
# Created by: PyQt5 UI code generator 5.15.9
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_live_stream(object):
    def setupUi(self, live_stream):
        live_stream.setObjectName("live_stream")
        live_stream.setEnabled(True)
        live_stream.resize(452, 734)
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
"#clear_btn {\n"
"    background-color: #98012e;\n"
"}\n"
"\n"
"#label, #label_2, #label_3 {\n"
"    font-size: 20px;\n"
"    text-align: center;\n"
"    color: #98012e;\n"
"}")
        self.centralwidget.setObjectName("centralwidget")
        self.verticalLayout = QtWidgets.QVBoxLayout(self.centralwidget)
        self.verticalLayout.setObjectName("verticalLayout")
        self.home_btn = QtWidgets.QPushButton(self.centralwidget)
        self.home_btn.setMinimumSize(QtCore.QSize(52, 32))
        self.home_btn.setMaximumSize(QtCore.QSize(52, 32))
        self.home_btn.setText("")
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(":/assets/assets/home_icon.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.home_btn.setIcon(icon)
        self.home_btn.setObjectName("home_btn")
        self.verticalLayout.addWidget(self.home_btn, 0, QtCore.Qt.AlignLeft)
        self.verticalLayout_3 = QtWidgets.QVBoxLayout()
        self.verticalLayout_3.setObjectName("verticalLayout_3")
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setMaximumSize(QtCore.QSize(16777215, 50))
        self.label.setObjectName("label")
        self.verticalLayout_3.addWidget(self.label, 0, QtCore.Qt.AlignHCenter)
        self.horizontalLayout_3 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.infile_line = QtWidgets.QLineEdit(self.centralwidget)
        self.infile_line.setMinimumSize(QtCore.QSize(190, 30))
        self.infile_line.setObjectName("infile_line")
        self.horizontalLayout_3.addWidget(self.infile_line)
        self.choose_file_btn = QtWidgets.QPushButton(self.centralwidget)
        self.choose_file_btn.setObjectName("choose_file_btn")
        self.horizontalLayout_3.addWidget(self.choose_file_btn)
        self.verticalLayout_3.addLayout(self.horizontalLayout_3)
        self.filename_wl = QtWidgets.QLabel(self.centralwidget)
        self.filename_wl.setMaximumSize(QtCore.QSize(16777215, 50))
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(-1)
        self.filename_wl.setFont(font)
        self.filename_wl.setText("")
        self.filename_wl.setAlignment(QtCore.Qt.AlignLeading|QtCore.Qt.AlignLeft|QtCore.Qt.AlignVCenter)
        self.filename_wl.setObjectName("filename_wl")
        self.verticalLayout_3.addWidget(self.filename_wl)
        spacerItem = QtWidgets.QSpacerItem(10, 10, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Minimum)
        self.verticalLayout_3.addItem(spacerItem)
        self.label_3 = QtWidgets.QLabel(self.centralwidget)
        self.label_3.setMaximumSize(QtCore.QSize(16777215, 50))
        self.label_3.setObjectName("label_3")
        self.verticalLayout_3.addWidget(self.label_3, 0, QtCore.Qt.AlignHCenter)
        self.graph_type_dropdown = QtWidgets.QComboBox(self.centralwidget)
        self.graph_type_dropdown.setMinimumSize(QtCore.QSize(190, 30))
        self.graph_type_dropdown.setObjectName("graph_type_dropdown")
        self.graph_type_dropdown.addItem("")
        self.graph_type_dropdown.addItem("")
        self.verticalLayout_3.addWidget(self.graph_type_dropdown, 0, QtCore.Qt.AlignHCenter)
        spacerItem1 = QtWidgets.QSpacerItem(10, 10, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Minimum)
        self.verticalLayout_3.addItem(spacerItem1)
        self.label_2 = QtWidgets.QLabel(self.centralwidget)
        self.label_2.setMaximumSize(QtCore.QSize(16777215, 50))
        self.label_2.setObjectName("label_2")
        self.verticalLayout_3.addWidget(self.label_2)
        self.speed_slider = QtWidgets.QSlider(self.centralwidget)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.speed_slider.sizePolicy().hasHeightForWidth())
        self.speed_slider.setSizePolicy(sizePolicy)
        self.speed_slider.setMinimum(1)
        self.speed_slider.setMaximum(100)
        self.speed_slider.setSingleStep(10)
        self.speed_slider.setPageStep(10)
        self.speed_slider.setProperty("value", 1)
        self.speed_slider.setTracking(False)
        self.speed_slider.setOrientation(QtCore.Qt.Horizontal)
        self.speed_slider.setTickPosition(QtWidgets.QSlider.TicksBelow)
        self.speed_slider.setTickInterval(10)
        self.speed_slider.setObjectName("speed_slider")
        self.verticalLayout_3.addWidget(self.speed_slider)
        self.label_5 = QtWidgets.QLabel(self.centralwidget)
        self.label_5.setObjectName("label_5")
        self.verticalLayout_3.addWidget(self.label_5)
        self.start_btn = QtWidgets.QPushButton(self.centralwidget)
        self.start_btn.setObjectName("start_btn")
        self.verticalLayout_3.addWidget(self.start_btn)
        self.verticalLayout.addLayout(self.verticalLayout_3)
        self.horizontalLayout = QtWidgets.QHBoxLayout()
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.clear_btn = QtWidgets.QPushButton(self.centralwidget)
        self.clear_btn.setMinimumSize(QtCore.QSize(0, 37))
        self.clear_btn.setObjectName("clear_btn")
        self.horizontalLayout.addWidget(self.clear_btn)
        self.pause_btn = QtWidgets.QPushButton(self.centralwidget)
        self.pause_btn.setMinimumSize(QtCore.QSize(0, 37))
        self.pause_btn.setObjectName("pause_btn")
        self.horizontalLayout.addWidget(self.pause_btn)
        self.verticalLayout.addLayout(self.horizontalLayout)
        self.horizontalLayout_4 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_4.setObjectName("horizontalLayout_4")
        self.reload_btn = QtWidgets.QPushButton(self.centralwidget)
        self.reload_btn.setObjectName("reload_btn")
        self.horizontalLayout_4.addWidget(self.reload_btn)
        self.verticalLayout.addLayout(self.horizontalLayout_4)
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.connection_status_label = QtWidgets.QLabel(self.centralwidget)
        self.connection_status_label.setMinimumSize(QtCore.QSize(219, 32))
        self.connection_status_label.setMaximumSize(QtCore.QSize(109, 32))
        self.connection_status_label.setObjectName("connection_status_label")
        self.horizontalLayout_2.addWidget(self.connection_status_label, 0, QtCore.Qt.AlignLeft|QtCore.Qt.AlignBottom)
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
        self.label.setText(_translate("live_stream", "Input File"))
        self.choose_file_btn.setText(_translate("live_stream", "Choose File"))
        self.label_3.setText(_translate("live_stream", "Graph Type"))
        self.graph_type_dropdown.setItemText(0, _translate("live_stream", "Line"))
        self.graph_type_dropdown.setItemText(1, _translate("live_stream", "Scatter"))
        self.label_2.setText(_translate("live_stream", "Graphing Speed (Delay in ms)"))
        self.label_5.setText(_translate("live_stream", "1                                                                                              100"))
        self.start_btn.setText(_translate("live_stream", "Start"))
        self.clear_btn.setText(_translate("live_stream", "Clear"))
        self.pause_btn.setText(_translate("live_stream", "Pause"))
        self.reload_btn.setText(_translate("live_stream", "Reload Graph"))
        self.connection_status_label.setText(_translate("live_stream", "CyDAQ Status: Not Connected!"))
        self.actionRestart.setText(_translate("live_stream", "&Restart"))
        self.actionQuit.setText(_translate("live_stream", "&Quit"))
        self.actionPing_CyDAQ.setText(_translate("live_stream", "&Ping CyDAQ"))
from . import balance_beam_rc
from . import basic_operation_rc
