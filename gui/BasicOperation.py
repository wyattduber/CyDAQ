# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/BasicOperation.ui'
#
# Created by: PyQt5 UI code generator 5.15.7
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_basic_operation(object):
    def setupUi(self, basic_operation):
        basic_operation.setObjectName("basic_operation")
        basic_operation.setEnabled(True)
        basic_operation.resize(428, 732)
        basic_operation.setMinimumSize(QtCore.QSize(428, 625))
        basic_operation.setMaximumSize(QtCore.QSize(700, 800))
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(12)
        font.setUnderline(False)
        basic_operation.setFont(font)
        basic_operation.setStyleSheet("background-color: #d9d9d9;")
        self.centralwidget = QtWidgets.QWidget(basic_operation)
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
        self.home_btn.setText("")
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(":/assets/assets/home_icon.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.home_btn.setIcon(icon)
        self.home_btn.setObjectName("home_btn")
        self.verticalLayout.addWidget(self.home_btn, 0, QtCore.Qt.AlignLeft)
        self.sampling_rate_label = QtWidgets.QLabel(self.centralwidget)
        self.sampling_rate_label.setMaximumSize(QtCore.QSize(16777215, 50))
        self.sampling_rate_label.setObjectName("sampling_rate_label")
        self.verticalLayout.addWidget(self.sampling_rate_label, 0, QtCore.Qt.AlignHCenter)
        self.sample_rate_bar_layout = QtWidgets.QHBoxLayout()
        self.sample_rate_bar_layout.setObjectName("sample_rate_bar_layout")
        spacerItem = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.sample_rate_bar_layout.addItem(spacerItem)
        self.sample_rate_min_btn = QtWidgets.QPushButton(self.centralwidget)
        self.sample_rate_min_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.sample_rate_min_btn.setObjectName("sample_rate_min_btn")
        self.sample_rate_bar_layout.addWidget(self.sample_rate_min_btn, 0, QtCore.Qt.AlignLeft)
        self.lessThan1Sample = QtWidgets.QLabel(self.centralwidget)
        self.lessThan1Sample.setObjectName("lessThan1Sample")
        self.sample_rate_bar_layout.addWidget(self.lessThan1Sample)
        self.sample_rate_input_box = QtWidgets.QComboBox(self.centralwidget)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.sample_rate_input_box.sizePolicy().hasHeightForWidth())
        self.sample_rate_input_box.setSizePolicy(sizePolicy)
        self.sample_rate_input_box.setMinimumSize(QtCore.QSize(190, 30))
        self.sample_rate_input_box.setEditable(True)
        self.sample_rate_input_box.setObjectName("sample_rate_input_box")
        self.sample_rate_input_box.addItem("")
        self.sample_rate_input_box.addItem("")
        self.sample_rate_input_box.addItem("")
        self.sample_rate_input_box.addItem("")
        self.sample_rate_input_box.addItem("")
        self.sample_rate_input_box.addItem("")
        self.sample_rate_bar_layout.addWidget(self.sample_rate_input_box)
        self.lessThan2Sample = QtWidgets.QLabel(self.centralwidget)
        self.lessThan2Sample.setObjectName("lessThan2Sample")
        self.sample_rate_bar_layout.addWidget(self.lessThan2Sample)
        self.sample_rate_max_btn = QtWidgets.QPushButton(self.centralwidget)
        self.sample_rate_max_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.sample_rate_max_btn.setObjectName("sample_rate_max_btn")
        self.sample_rate_bar_layout.addWidget(self.sample_rate_max_btn, 0, QtCore.Qt.AlignRight)
        spacerItem1 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.sample_rate_bar_layout.addItem(spacerItem1)
        self.verticalLayout.addLayout(self.sample_rate_bar_layout)
        spacerItem2 = QtWidgets.QSpacerItem(10, 10, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Minimum)
        self.verticalLayout.addItem(spacerItem2)
        self.input_label = QtWidgets.QLabel(self.centralwidget)
        self.input_label.setMinimumSize(QtCore.QSize(50, 0))
        self.input_label.setMaximumSize(QtCore.QSize(16777215, 50))
        self.input_label.setObjectName("input_label")
        self.verticalLayout.addWidget(self.input_label, 0, QtCore.Qt.AlignHCenter)
        self.input_input_box = QtWidgets.QComboBox(self.centralwidget)
        self.input_input_box.setMinimumSize(QtCore.QSize(190, 30))
        self.input_input_box.setObjectName("input_input_box")
        self.input_input_box.addItem("")
        self.input_input_box.addItem("")
        self.input_input_box.addItem("")
        self.input_input_box.addItem("")
        self.input_input_box.addItem("")
        self.input_input_box.addItem("")
        self.input_input_box.addItem("")
        self.input_input_box.addItem("")
        self.verticalLayout.addWidget(self.input_input_box, 0, QtCore.Qt.AlignHCenter)
        spacerItem3 = QtWidgets.QSpacerItem(10, 10, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Minimum)
        self.verticalLayout.addItem(spacerItem3)
        self.filter_label = QtWidgets.QLabel(self.centralwidget)
        self.filter_label.setMaximumSize(QtCore.QSize(100, 50))
        self.filter_label.setObjectName("filter_label")
        self.verticalLayout.addWidget(self.filter_label, 0, QtCore.Qt.AlignHCenter)
        self.filter_input_box = QtWidgets.QComboBox(self.centralwidget)
        self.filter_input_box.setMinimumSize(QtCore.QSize(190, 30))
        self.filter_input_box.setObjectName("filter_input_box")
        self.filter_input_box.addItem("")
        self.filter_input_box.addItem("")
        self.filter_input_box.addItem("")
        self.filter_input_box.addItem("")
        self.filter_input_box.addItem("")
        self.filter_input_box.addItem("")
        self.filter_input_box.addItem("")
        self.filter_input_box.addItem("")
        self.verticalLayout.addWidget(self.filter_input_box, 0, QtCore.Qt.AlignHCenter)
        spacerItem4 = QtWidgets.QSpacerItem(10, 10, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Minimum)
        self.verticalLayout.addItem(spacerItem4)
        self.mid_corner_label = QtWidgets.QLabel(self.centralwidget)
        self.mid_corner_label.setMaximumSize(QtCore.QSize(100, 50))
        self.mid_corner_label.setObjectName("mid_corner_label")
        self.verticalLayout.addWidget(self.mid_corner_label, 0, QtCore.Qt.AlignHCenter)
        self.mid_corner_bar_layout = QtWidgets.QHBoxLayout()
        self.mid_corner_bar_layout.setObjectName("mid_corner_bar_layout")
        spacerItem5 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.mid_corner_bar_layout.addItem(spacerItem5)
        self.mid_corner_min_btn = QtWidgets.QPushButton(self.centralwidget)
        self.mid_corner_min_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.mid_corner_min_btn.setObjectName("mid_corner_min_btn")
        self.mid_corner_bar_layout.addWidget(self.mid_corner_min_btn)
        self.lessThan1 = QtWidgets.QLabel(self.centralwidget)
        self.lessThan1.setMaximumSize(QtCore.QSize(16777215, 50))
        self.lessThan1.setObjectName("lessThan1")
        self.mid_corner_bar_layout.addWidget(self.lessThan1)
        self.mid_corner_input_box = QtWidgets.QComboBox(self.centralwidget)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.mid_corner_input_box.sizePolicy().hasHeightForWidth())
        self.mid_corner_input_box.setSizePolicy(sizePolicy)
        self.mid_corner_input_box.setMinimumSize(QtCore.QSize(190, 30))
        self.mid_corner_input_box.setEditable(True)
        self.mid_corner_input_box.setCurrentText("")
        self.mid_corner_input_box.setObjectName("mid_corner_input_box")
        self.mid_corner_input_box.addItem("")
        self.mid_corner_input_box.addItem("")
        self.mid_corner_input_box.addItem("")
        self.mid_corner_bar_layout.addWidget(self.mid_corner_input_box)
        self.lessThan2 = QtWidgets.QLabel(self.centralwidget)
        self.lessThan2.setMaximumSize(QtCore.QSize(16777215, 50))
        self.lessThan2.setObjectName("lessThan2")
        self.mid_corner_bar_layout.addWidget(self.lessThan2)
        self.mid_corner_max_btn = QtWidgets.QPushButton(self.centralwidget)
        self.mid_corner_max_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.mid_corner_max_btn.setObjectName("mid_corner_max_btn")
        self.mid_corner_bar_layout.addWidget(self.mid_corner_max_btn)
        spacerItem6 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.mid_corner_bar_layout.addItem(spacerItem6)
        self.verticalLayout.addLayout(self.mid_corner_bar_layout)
        self.low_corner_label = QtWidgets.QLabel(self.centralwidget)
        self.low_corner_label.setMaximumSize(QtCore.QSize(16777215, 50))
        self.low_corner_label.setObjectName("low_corner_label")
        self.verticalLayout.addWidget(self.low_corner_label, 0, QtCore.Qt.AlignHCenter)
        self.low_corner_bar_layout = QtWidgets.QHBoxLayout()
        self.low_corner_bar_layout.setObjectName("low_corner_bar_layout")
        spacerItem7 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.low_corner_bar_layout.addItem(spacerItem7)
        self.low_corner_min_btn = QtWidgets.QPushButton(self.centralwidget)
        self.low_corner_min_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.low_corner_min_btn.setObjectName("low_corner_min_btn")
        self.low_corner_bar_layout.addWidget(self.low_corner_min_btn)
        self.label_2 = QtWidgets.QLabel(self.centralwidget)
        self.label_2.setObjectName("label_2")
        self.low_corner_bar_layout.addWidget(self.label_2)
        self.low_corner_input = QtWidgets.QLineEdit(self.centralwidget)
        self.low_corner_input.setMinimumSize(QtCore.QSize(190, 30))
        self.low_corner_input.setObjectName("low_corner_input")
        self.low_corner_bar_layout.addWidget(self.low_corner_input)
        self.label_3 = QtWidgets.QLabel(self.centralwidget)
        self.label_3.setObjectName("label_3")
        self.low_corner_bar_layout.addWidget(self.label_3)
        self.low_corner_max_btn = QtWidgets.QPushButton(self.centralwidget)
        self.low_corner_max_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.low_corner_max_btn.setObjectName("low_corner_max_btn")
        self.low_corner_bar_layout.addWidget(self.low_corner_max_btn)
        spacerItem8 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.low_corner_bar_layout.addItem(spacerItem8)
        self.verticalLayout.addLayout(self.low_corner_bar_layout)
        self.high_corner_label = QtWidgets.QLabel(self.centralwidget)
        self.high_corner_label.setMaximumSize(QtCore.QSize(16777215, 50))
        self.high_corner_label.setObjectName("high_corner_label")
        self.verticalLayout.addWidget(self.high_corner_label, 0, QtCore.Qt.AlignHCenter)
        self.high_corner_bar_layout = QtWidgets.QHBoxLayout()
        self.high_corner_bar_layout.setObjectName("high_corner_bar_layout")
        spacerItem9 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.high_corner_bar_layout.addItem(spacerItem9)
        self.high_corner_min_btn = QtWidgets.QPushButton(self.centralwidget)
        self.high_corner_min_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.high_corner_min_btn.setObjectName("high_corner_min_btn")
        self.high_corner_bar_layout.addWidget(self.high_corner_min_btn)
        self.label_4 = QtWidgets.QLabel(self.centralwidget)
        self.label_4.setObjectName("label_4")
        self.high_corner_bar_layout.addWidget(self.label_4)
        self.high_corner_input = QtWidgets.QLineEdit(self.centralwidget)
        self.high_corner_input.setMinimumSize(QtCore.QSize(190, 30))
        self.high_corner_input.setObjectName("high_corner_input")
        self.high_corner_bar_layout.addWidget(self.high_corner_input)
        self.label_5 = QtWidgets.QLabel(self.centralwidget)
        self.label_5.setObjectName("label_5")
        self.high_corner_bar_layout.addWidget(self.label_5)
        self.high_corner_max_btn = QtWidgets.QPushButton(self.centralwidget)
        self.high_corner_max_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.high_corner_max_btn.setObjectName("high_corner_max_btn")
        self.high_corner_bar_layout.addWidget(self.high_corner_max_btn)
        spacerItem10 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.high_corner_bar_layout.addItem(spacerItem10)
        self.verticalLayout.addLayout(self.high_corner_bar_layout)
        self.horizontalLayout = QtWidgets.QHBoxLayout()
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.sampling_time_label = QtWidgets.QLabel(self.centralwidget)
        self.sampling_time_label.setObjectName("sampling_time_label")
        self.horizontalLayout.addWidget(self.sampling_time_label)
        self.sampling_time_input = QtWidgets.QLineEdit(self.centralwidget)
        self.sampling_time_input.setObjectName("sampling_time_input")
        self.horizontalLayout.addWidget(self.sampling_time_input)
        self.start_stop_sampling_btn = QtWidgets.QPushButton(self.centralwidget)
        self.start_stop_sampling_btn.setMinimumSize(QtCore.QSize(190, 0))
        self.start_stop_sampling_btn.setObjectName("start_stop_sampling_btn")
        self.horizontalLayout.addWidget(self.start_stop_sampling_btn)
        self.verticalLayout.addLayout(self.horizontalLayout)
        self.connection_status_label = QtWidgets.QLabel(self.centralwidget)
        self.connection_status_label.setText("")
        self.connection_status_label.setObjectName("connection_status_label")
        self.verticalLayout.addWidget(self.connection_status_label)
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.plotter_btn = QtWidgets.QToolButton(self.centralwidget)
        self.plotter_btn.setMaximumSize(QtCore.QSize(16777215, 128))
        self.plotter_btn.setObjectName("plotter_btn")
        self.horizontalLayout_2.addWidget(self.plotter_btn)
        self.send_config_btn = QtWidgets.QToolButton(self.centralwidget)
        self.send_config_btn.setObjectName("send_config_btn")
        self.horizontalLayout_2.addWidget(self.send_config_btn)
        self.verticalLayout.addLayout(self.horizontalLayout_2)
        basic_operation.setCentralWidget(self.centralwidget)
        self.statusbar = QtWidgets.QStatusBar(basic_operation)
        self.statusbar.setObjectName("statusbar")
        basic_operation.setStatusBar(self.statusbar)
        self.actionRestart = QtWidgets.QAction(basic_operation)
        self.actionRestart.setObjectName("actionRestart")
        self.actionQuit = QtWidgets.QAction(basic_operation)
        self.actionQuit.setObjectName("actionQuit")
        self.actionPing_CyDAQ = QtWidgets.QAction(basic_operation)
        self.actionPing_CyDAQ.setObjectName("actionPing_CyDAQ")

        self.retranslateUi(basic_operation)
        self.sample_rate_input_box.setCurrentIndex(1)
        self.input_input_box.setCurrentIndex(3)
        self.mid_corner_input_box.setCurrentIndex(-1)
        QtCore.QMetaObject.connectSlotsByName(basic_operation)

    def retranslateUi(self, basic_operation):
        _translate = QtCore.QCoreApplication.translate
        basic_operation.setWindowTitle(_translate("basic_operation", "CyDAQ"))
        self.sampling_rate_label.setText(_translate("basic_operation", "Sampling Rate"))
        self.sample_rate_min_btn.setText(_translate("basic_operation", "100"))
        self.lessThan1Sample.setText(_translate("basic_operation", "≤"))
        self.sample_rate_input_box.setItemText(0, _translate("basic_operation", "48000"))
        self.sample_rate_input_box.setItemText(1, _translate("basic_operation", "44100"))
        self.sample_rate_input_box.setItemText(2, _translate("basic_operation", "22050"))
        self.sample_rate_input_box.setItemText(3, _translate("basic_operation", "16000"))
        self.sample_rate_input_box.setItemText(4, _translate("basic_operation", "8000"))
        self.sample_rate_input_box.setItemText(5, _translate("basic_operation", "4000"))
        self.lessThan2Sample.setText(_translate("basic_operation", "≤"))
        self.sample_rate_max_btn.setText(_translate("basic_operation", "50,000"))
        self.input_label.setText(_translate("basic_operation", "Input"))
        self.input_input_box.setItemText(0, _translate("basic_operation", "5 Volt"))
        self.input_input_box.setItemText(1, _translate("basic_operation", "3.3 Volt"))
        self.input_input_box.setItemText(2, _translate("basic_operation", "1.8 Volt"))
        self.input_input_box.setItemText(3, _translate("basic_operation", "Analog In"))
        self.input_input_box.setItemText(4, _translate("basic_operation", "Audio In"))
        self.input_input_box.setItemText(5, _translate("basic_operation", "Digital I2C Bus"))
        self.input_input_box.setItemText(6, _translate("basic_operation", "Digital SPI Bus"))
        self.input_input_box.setItemText(7, _translate("basic_operation", "Digital UART"))
        self.filter_label.setText(_translate("basic_operation", "Filter"))
        self.filter_input_box.setItemText(0, _translate("basic_operation", "All Pass"))
        self.filter_input_box.setItemText(1, _translate("basic_operation", "60 hz Notch"))
        self.filter_input_box.setItemText(2, _translate("basic_operation", "1st Order High Pass"))
        self.filter_input_box.setItemText(3, _translate("basic_operation", "1st Order Low Pass"))
        self.filter_input_box.setItemText(4, _translate("basic_operation", "6th Order High Pass"))
        self.filter_input_box.setItemText(5, _translate("basic_operation", "6th Order Low Pass"))
        self.filter_input_box.setItemText(6, _translate("basic_operation", "2nd Order Band Pass"))
        self.filter_input_box.setItemText(7, _translate("basic_operation", "6th Order Band Pass"))
        self.mid_corner_label.setText(_translate("basic_operation", "Mid Corner"))
        self.mid_corner_min_btn.setText(_translate("basic_operation", "100"))
        self.lessThan1.setText(_translate("basic_operation", "≤"))
        self.mid_corner_input_box.setItemText(0, _translate("basic_operation", "100"))
        self.mid_corner_input_box.setItemText(1, _translate("basic_operation", "1000"))
        self.mid_corner_input_box.setItemText(2, _translate("basic_operation", "10000"))
        self.lessThan2.setText(_translate("basic_operation", "≤"))
        self.mid_corner_max_btn.setText(_translate("basic_operation", "40,000"))
        self.low_corner_label.setText(_translate("basic_operation", "Low Corner"))
        self.low_corner_min_btn.setText(_translate("basic_operation", "100"))
        self.label_2.setText(_translate("basic_operation", "≤"))
        self.label_3.setText(_translate("basic_operation", "≤"))
        self.low_corner_max_btn.setText(_translate("basic_operation", "20,000"))
        self.high_corner_label.setText(_translate("basic_operation", "High Corner"))
        self.high_corner_min_btn.setText(_translate("basic_operation", "2,000"))
        self.label_4.setText(_translate("basic_operation", "≤"))
        self.label_5.setText(_translate("basic_operation", "≤"))
        self.high_corner_max_btn.setText(_translate("basic_operation", "40,000"))
        self.sampling_time_label.setText(_translate("basic_operation", "Sampling Time (s)"))
        self.start_stop_sampling_btn.setText(_translate("basic_operation", "Start"))
        self.plotter_btn.setText(_translate("basic_operation", "Plotter"))
        self.send_config_btn.setText(_translate("basic_operation", "Send Config to CyDAQ"))
        self.actionRestart.setText(_translate("basic_operation", "&Restart"))
        self.actionQuit.setText(_translate("basic_operation", "&Quit"))
        self.actionPing_CyDAQ.setText(_translate("basic_operation", "&Ping CyDAQ"))
import basic_operation_rc
