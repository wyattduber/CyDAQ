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
        basic_operation.resize(877, 709)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Ignored, QtWidgets.QSizePolicy.Ignored)
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
        self.verticalLayout_2 = QtWidgets.QVBoxLayout(self.centralwidget)
        self.verticalLayout_2.setSizeConstraint(QtWidgets.QLayout.SetNoConstraint)
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        self.basic_operation_label = QtWidgets.QLabel(self.centralwidget)
        self.basic_operation_label.setMaximumSize(QtCore.QSize(16777215, 50))
        self.basic_operation_label.setObjectName("basic_operation_label")
        self.verticalLayout_2.addWidget(self.basic_operation_label)
        self.config_layout = QtWidgets.QGridLayout()
        self.config_layout.setSizeConstraint(QtWidgets.QLayout.SetDefaultConstraint)
        self.config_layout.setObjectName("config_layout")
        self.filter_layout = QtWidgets.QVBoxLayout()
        self.filter_layout.setObjectName("filter_layout")
        self.filter_label = QtWidgets.QLabel(self.centralwidget)
        self.filter_label.setMaximumSize(QtCore.QSize(100, 50))
        self.filter_label.setObjectName("filter_label")
        self.filter_layout.addWidget(self.filter_label, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignBottom)
        self.filter_list = QtWidgets.QListWidget(self.centralwidget)
        self.filter_list.setMaximumSize(QtCore.QSize(200, 200))
        self.filter_list.setObjectName("filter_list")
        item = QtWidgets.QListWidgetItem()
        self.filter_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.filter_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.filter_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.filter_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.filter_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.filter_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.filter_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.filter_list.addItem(item)
        self.filter_layout.addWidget(self.filter_list, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignTop)
        self.config_layout.addLayout(self.filter_layout, 1, 0, 1, 1)
        self.input_layout = QtWidgets.QGridLayout()
        self.input_layout.setSizeConstraint(QtWidgets.QLayout.SetDefaultConstraint)
        self.input_layout.setContentsMargins(0, 10, 10, 25)
        self.input_layout.setObjectName("input_layout")
        self.input_list = QtWidgets.QListWidget(self.centralwidget)
        self.input_list.setMaximumSize(QtCore.QSize(150, 200))
        self.input_list.setTabKeyNavigation(True)
        self.input_list.setModelColumn(0)
        self.input_list.setUniformItemSizes(False)
        self.input_list.setObjectName("input_list")
        item = QtWidgets.QListWidgetItem()
        self.input_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.input_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.input_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.input_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.input_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.input_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.input_list.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.input_list.addItem(item)
        self.input_layout.addWidget(self.input_list, 1, 0, 1, 1, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignTop)
        self.input_label = QtWidgets.QLabel(self.centralwidget)
        self.input_label.setMinimumSize(QtCore.QSize(50, 0))
        self.input_label.setMaximumSize(QtCore.QSize(16777215, 50))
        self.input_label.setObjectName("input_label")
        self.input_layout.addWidget(self.input_label, 0, 0, 1, 1, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignBottom)
        self.config_layout.addLayout(self.input_layout, 0, 1, 1, 1)
        self.sample_rate_layout = QtWidgets.QGridLayout()
        self.sample_rate_layout.setContentsMargins(10, 10, -1, 25)
        self.sample_rate_layout.setObjectName("sample_rate_layout")
        self.sample_rate_presets = QtWidgets.QListWidget(self.centralwidget)
        self.sample_rate_presets.setMaximumSize(QtCore.QSize(150, 150))
        self.sample_rate_presets.setTabKeyNavigation(True)
        self.sample_rate_presets.setObjectName("sample_rate_presets")
        item = QtWidgets.QListWidgetItem()
        self.sample_rate_presets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.sample_rate_presets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.sample_rate_presets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.sample_rate_presets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.sample_rate_presets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.sample_rate_presets.addItem(item)
        self.sample_rate_layout.addWidget(self.sample_rate_presets, 3, 0, 1, 1, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignTop)
        self.sample_rate_presets_label = QtWidgets.QLabel(self.centralwidget)
        self.sample_rate_presets_label.setObjectName("sample_rate_presets_label")
        self.sample_rate_layout.addWidget(self.sample_rate_presets_label, 1, 0, 1, 1, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignBottom)
        self.sample_rate_bar_layout = QtWidgets.QHBoxLayout()
        self.sample_rate_bar_layout.setObjectName("sample_rate_bar_layout")
        self.sample_rate_min_btn = QtWidgets.QPushButton(self.centralwidget)
        self.sample_rate_min_btn.setObjectName("sample_rate_min_btn")
        self.sample_rate_bar_layout.addWidget(self.sample_rate_min_btn, 0, QtCore.Qt.AlignLeft)
        self.lessThan1Sample = QtWidgets.QLabel(self.centralwidget)
        self.lessThan1Sample.setObjectName("lessThan1Sample")
        self.sample_rate_bar_layout.addWidget(self.lessThan1Sample)
        self.sample_rate_input = QtWidgets.QLineEdit(self.centralwidget)
        self.sample_rate_input.setText("")
        self.sample_rate_input.setAlignment(QtCore.Qt.AlignCenter)
        self.sample_rate_input.setObjectName("sample_rate_input")
        self.sample_rate_bar_layout.addWidget(self.sample_rate_input, 0, QtCore.Qt.AlignHCenter)
        self.lessThan2Sample = QtWidgets.QLabel(self.centralwidget)
        self.lessThan2Sample.setObjectName("lessThan2Sample")
        self.sample_rate_bar_layout.addWidget(self.lessThan2Sample)
        self.sample_rate_max_btn = QtWidgets.QPushButton(self.centralwidget)
        self.sample_rate_max_btn.setObjectName("sample_rate_max_btn")
        self.sample_rate_bar_layout.addWidget(self.sample_rate_max_btn, 0, QtCore.Qt.AlignRight)
        self.sample_rate_layout.addLayout(self.sample_rate_bar_layout, 0, 0, 1, 1)
        self.config_layout.addLayout(self.sample_rate_layout, 0, 0, 1, 1)
        self.corner_layout = QtWidgets.QVBoxLayout()
        self.corner_layout.setObjectName("corner_layout")
        self.mid_corner_label = QtWidgets.QLabel(self.centralwidget)
        self.mid_corner_label.setMaximumSize(QtCore.QSize(100, 50))
        self.mid_corner_label.setObjectName("mid_corner_label")
        self.corner_layout.addWidget(self.mid_corner_label, 0, QtCore.Qt.AlignHCenter)
        self.corner_bar_layout = QtWidgets.QHBoxLayout()
        self.corner_bar_layout.setObjectName("corner_bar_layout")
        self.min_corner_box = QtWidgets.QLineEdit(self.centralwidget)
        self.min_corner_box.setMaximumSize(QtCore.QSize(150, 16777215))
        self.min_corner_box.setAlignment(QtCore.Qt.AlignCenter)
        self.min_corner_box.setReadOnly(True)
        self.min_corner_box.setObjectName("min_corner_box")
        self.corner_bar_layout.addWidget(self.min_corner_box)
        self.lessThan1 = QtWidgets.QLabel(self.centralwidget)
        self.lessThan1.setMaximumSize(QtCore.QSize(16777215, 50))
        self.lessThan1.setObjectName("lessThan1")
        self.corner_bar_layout.addWidget(self.lessThan1)
        self.corner_input = QtWidgets.QLineEdit(self.centralwidget)
        self.corner_input.setMaximumSize(QtCore.QSize(180, 16777215))
        self.corner_input.setAlignment(QtCore.Qt.AlignCenter)
        self.corner_input.setObjectName("corner_input")
        self.corner_bar_layout.addWidget(self.corner_input)
        self.lessThan2 = QtWidgets.QLabel(self.centralwidget)
        self.lessThan2.setMaximumSize(QtCore.QSize(16777215, 50))
        self.lessThan2.setObjectName("lessThan2")
        self.corner_bar_layout.addWidget(self.lessThan2)
        self.max_corner_box = QtWidgets.QLineEdit(self.centralwidget)
        self.max_corner_box.setMaximumSize(QtCore.QSize(150, 16777215))
        self.max_corner_box.setAlignment(QtCore.Qt.AlignCenter)
        self.max_corner_box.setReadOnly(True)
        self.max_corner_box.setObjectName("max_corner_box")
        self.corner_bar_layout.addWidget(self.max_corner_box)
        self.corner_layout.addLayout(self.corner_bar_layout)
        self.corner_presets_label = QtWidgets.QLabel(self.centralwidget)
        self.corner_presets_label.setMaximumSize(QtCore.QSize(100, 50))
        self.corner_presets_label.setObjectName("corner_presets_label")
        self.corner_layout.addWidget(self.corner_presets_label, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignBottom)
        self.corner_presets = QtWidgets.QListWidget(self.centralwidget)
        self.corner_presets.setMaximumSize(QtCore.QSize(150, 100))
        self.corner_presets.setObjectName("corner_presets")
        item = QtWidgets.QListWidgetItem()
        font = QtGui.QFont()
        font.setBold(False)
        font.setWeight(50)
        item.setFont(font)
        self.corner_presets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        font = QtGui.QFont()
        font.setBold(False)
        font.setWeight(50)
        item.setFont(font)
        self.corner_presets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        font = QtGui.QFont()
        font.setBold(False)
        font.setWeight(50)
        item.setFont(font)
        self.corner_presets.addItem(item)
        self.corner_layout.addWidget(self.corner_presets, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignTop)
        self.config_layout.addLayout(self.corner_layout, 1, 1, 1, 1)
        self.verticalLayout_2.addLayout(self.config_layout)
        self.line_2 = QtWidgets.QFrame(self.centralwidget)
        self.line_2.setFrameShape(QtWidgets.QFrame.HLine)
        self.line_2.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.line_2.setObjectName("line_2")
        self.verticalLayout_2.addWidget(self.line_2)
        self.bottom_row_layout = QtWidgets.QHBoxLayout()
        self.bottom_row_layout.setObjectName("bottom_row_layout")
        self.Placeholder1 = QtWidgets.QLabel(self.centralwidget)
        self.Placeholder1.setMinimumSize(QtCore.QSize(1000, 200))
        self.Placeholder1.setMaximumSize(QtCore.QSize(1000, 200))
        self.Placeholder1.setObjectName("Placeholder1")
        self.bottom_row_layout.addWidget(self.Placeholder1)
        self.verticalLayout = QtWidgets.QVBoxLayout()
        self.verticalLayout.setObjectName("verticalLayout")
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setObjectName("label")
        self.verticalLayout.addWidget(self.label)
        self.pushButton = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton.setObjectName("pushButton")
        self.verticalLayout.addWidget(self.pushButton)
        self.bottom_row_layout.addLayout(self.verticalLayout)
        self.verticalLayout_2.addLayout(self.bottom_row_layout)
        basic_operation.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(basic_operation)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 877, 19))
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
        self.input_list.setCurrentRow(3)
        self.sample_rate_presets.setCurrentRow(0)
        QtCore.QMetaObject.connectSlotsByName(basic_operation)

    def retranslateUi(self, basic_operation):
        _translate = QtCore.QCoreApplication.translate
        basic_operation.setWindowTitle(_translate("basic_operation", "CyDAQ"))
        self.basic_operation_label.setText(_translate("basic_operation", "Basic Operation"))
        self.filter_label.setText(_translate("basic_operation", "Filter"))
        __sortingEnabled = self.filter_list.isSortingEnabled()
        self.filter_list.setSortingEnabled(False)
        item = self.filter_list.item(0)
        item.setText(_translate("basic_operation", "All Pass"))
        item = self.filter_list.item(1)
        item.setText(_translate("basic_operation", "60Hz Notch"))
        item = self.filter_list.item(2)
        item.setText(_translate("basic_operation", "1st Order High Pass"))
        item = self.filter_list.item(3)
        item.setText(_translate("basic_operation", "1st Order Low Pass"))
        item = self.filter_list.item(4)
        item.setText(_translate("basic_operation", "6th Order High Pass"))
        item = self.filter_list.item(5)
        item.setText(_translate("basic_operation", "6th Order Low Pass"))
        item = self.filter_list.item(6)
        item.setText(_translate("basic_operation", "2nd Order Band Pass"))
        item = self.filter_list.item(7)
        item.setText(_translate("basic_operation", "6th Order Band Pass"))
        self.filter_list.setSortingEnabled(__sortingEnabled)
        __sortingEnabled = self.input_list.isSortingEnabled()
        self.input_list.setSortingEnabled(False)
        item = self.input_list.item(0)
        item.setText(_translate("basic_operation", "5 Volt"))
        item = self.input_list.item(1)
        item.setText(_translate("basic_operation", "3.3 Volt"))
        item = self.input_list.item(2)
        item.setText(_translate("basic_operation", "1.8 Volt"))
        item = self.input_list.item(3)
        item.setText(_translate("basic_operation", "Analog In"))
        item = self.input_list.item(4)
        item.setText(_translate("basic_operation", "Audio In"))
        item = self.input_list.item(5)
        item.setText(_translate("basic_operation", "Digital I2C Bus"))
        item = self.input_list.item(6)
        item.setText(_translate("basic_operation", "Digital SPI Bus"))
        item = self.input_list.item(7)
        item.setText(_translate("basic_operation", "Digital UART"))
        self.input_list.setSortingEnabled(__sortingEnabled)
        self.input_label.setText(_translate("basic_operation", "Input Type"))
        __sortingEnabled = self.sample_rate_presets.isSortingEnabled()
        self.sample_rate_presets.setSortingEnabled(False)
        item = self.sample_rate_presets.item(0)
        item.setText(_translate("basic_operation", "48000"))
        item = self.sample_rate_presets.item(1)
        item.setText(_translate("basic_operation", "44100"))
        item = self.sample_rate_presets.item(2)
        item.setText(_translate("basic_operation", "22050"))
        item = self.sample_rate_presets.item(3)
        item.setText(_translate("basic_operation", "16000"))
        item = self.sample_rate_presets.item(4)
        item.setText(_translate("basic_operation", "8000"))
        item = self.sample_rate_presets.item(5)
        item.setText(_translate("basic_operation", "4000"))
        self.sample_rate_presets.setSortingEnabled(__sortingEnabled)
        self.sample_rate_presets_label.setText(_translate("basic_operation", "Presets"))
        self.sample_rate_min_btn.setText(_translate("basic_operation", "100"))
        self.lessThan1Sample.setText(_translate("basic_operation", "≤"))
        self.lessThan2Sample.setText(_translate("basic_operation", "≤"))
        self.sample_rate_max_btn.setText(_translate("basic_operation", "50,000"))
        self.mid_corner_label.setText(_translate("basic_operation", "Mid Corner"))
        self.min_corner_box.setText(_translate("basic_operation", "100"))
        self.lessThan1.setText(_translate("basic_operation", "≤"))
        self.corner_input.setText(_translate("basic_operation", "2,000"))
        self.lessThan2.setText(_translate("basic_operation", "≤"))
        self.max_corner_box.setText(_translate("basic_operation", "40,000"))
        self.corner_presets_label.setText(_translate("basic_operation", "Presets"))
        __sortingEnabled = self.corner_presets.isSortingEnabled()
        self.corner_presets.setSortingEnabled(False)
        item = self.corner_presets.item(0)
        item.setText(_translate("basic_operation", "100"))
        item = self.corner_presets.item(1)
        item.setText(_translate("basic_operation", "1000"))
        item = self.corner_presets.item(2)
        item.setText(_translate("basic_operation", "10000"))
        self.corner_presets.setSortingEnabled(__sortingEnabled)
        self.Placeholder1.setText(_translate("basic_operation", "Console"))
        self.label.setText(_translate("basic_operation", "Sampling Time: 00:00:00"))
        self.pushButton.setText(_translate("basic_operation", "Start/Stop"))
        self.menuFile.setTitle(_translate("basic_operation", "Fi&le"))
        self.menuHelp.setTitle(_translate("basic_operation", "Hel&p"))
        self.actionRestart.setText(_translate("basic_operation", "&Restart"))
        self.actionQuit.setText(_translate("basic_operation", "&Quit"))
        self.actionPing_CyDAQ.setText(_translate("basic_operation", "&Ping CyDAQ"))

