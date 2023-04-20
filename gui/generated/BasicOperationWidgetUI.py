# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/BasicOperationWidget.ui'
#
# Created by: PyQt5 UI code generator 5.15.9
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_BasicOpetaionWidget(object):
    def setupUi(self, BasicOpetaionWidget):
        BasicOpetaionWidget.setObjectName("BasicOpetaionWidget")
        BasicOpetaionWidget.resize(575, 622)
        BasicOpetaionWidget.setStyleSheet("QWidget {\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: #033f63;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #033f63;\n"
"    color: #d9d9d9;\n"
"    border: 1px solid #033f63;\n"
"    border-radius: 4px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"#sampling_rate_label, #input_label, #filter_label, #mid_corner_label, #low_corner_label, #high_corner_label, #sampling_time_label {\n"
"    font-size: 20px;\n"
"    text-align: center;\n"
"    color: #98012e;\n"
"}\n"
"\n"
"#send_config_btn {\n"
"    color: #033f63;\n"
"    background-color: #d9d9d9;\n"
"    border: 1px solid #033f63;\n"
"}")
        self.verticalLayout = QtWidgets.QVBoxLayout(BasicOpetaionWidget)
        self.verticalLayout.setSpacing(1)
        self.verticalLayout.setObjectName("verticalLayout")
        self.home_btn = QtWidgets.QPushButton(BasicOpetaionWidget)
        self.home_btn.setText("")
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(":/assets/assets/home_icon.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.home_btn.setIcon(icon)
        self.home_btn.setObjectName("home_btn")
        self.verticalLayout.addWidget(self.home_btn, 0, QtCore.Qt.AlignLeft)
        self.sampling_rate_label = QtWidgets.QLabel(BasicOpetaionWidget)
        self.sampling_rate_label.setMaximumSize(QtCore.QSize(16777215, 50))
        self.sampling_rate_label.setObjectName("sampling_rate_label")
        self.verticalLayout.addWidget(self.sampling_rate_label, 0, QtCore.Qt.AlignHCenter)
        self.sample_rate_bar_layout = QtWidgets.QHBoxLayout()
        self.sample_rate_bar_layout.setObjectName("sample_rate_bar_layout")
        spacerItem = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.sample_rate_bar_layout.addItem(spacerItem)
        self.sample_rate_min_btn = QtWidgets.QPushButton(BasicOpetaionWidget)
        self.sample_rate_min_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.sample_rate_min_btn.setObjectName("sample_rate_min_btn")
        self.sample_rate_bar_layout.addWidget(self.sample_rate_min_btn, 0, QtCore.Qt.AlignLeft)
        self.lessThan1Sample = QtWidgets.QLabel(BasicOpetaionWidget)
        self.lessThan1Sample.setObjectName("lessThan1Sample")
        self.sample_rate_bar_layout.addWidget(self.lessThan1Sample)
        self.sample_rate_input_box = QtWidgets.QComboBox(BasicOpetaionWidget)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Fixed)
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
        self.lessThan2Sample = QtWidgets.QLabel(BasicOpetaionWidget)
        self.lessThan2Sample.setObjectName("lessThan2Sample")
        self.sample_rate_bar_layout.addWidget(self.lessThan2Sample)
        self.sample_rate_max_btn = QtWidgets.QPushButton(BasicOpetaionWidget)
        self.sample_rate_max_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.sample_rate_max_btn.setObjectName("sample_rate_max_btn")
        self.sample_rate_bar_layout.addWidget(self.sample_rate_max_btn, 0, QtCore.Qt.AlignRight)
        spacerItem1 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.sample_rate_bar_layout.addItem(spacerItem1)
        self.verticalLayout.addLayout(self.sample_rate_bar_layout)
        self.input_label = QtWidgets.QLabel(BasicOpetaionWidget)
        self.input_label.setMinimumSize(QtCore.QSize(50, 0))
        self.input_label.setMaximumSize(QtCore.QSize(16777215, 50))
        self.input_label.setObjectName("input_label")
        self.verticalLayout.addWidget(self.input_label, 0, QtCore.Qt.AlignHCenter)
        self.input_input_box = QtWidgets.QComboBox(BasicOpetaionWidget)
        self.input_input_box.setMinimumSize(QtCore.QSize(190, 30))
        self.input_input_box.setObjectName("input_input_box")
        self.input_input_box.addItem("")
        self.input_input_box.addItem("")
        self.input_input_box.addItem("")
        self.input_input_box.addItem("")
        self.verticalLayout.addWidget(self.input_input_box, 0, QtCore.Qt.AlignHCenter)
        self.filter_label = QtWidgets.QLabel(BasicOpetaionWidget)
        self.filter_label.setMaximumSize(QtCore.QSize(100, 50))
        self.filter_label.setObjectName("filter_label")
        self.verticalLayout.addWidget(self.filter_label, 0, QtCore.Qt.AlignHCenter)
        self.filter_input_box = QtWidgets.QComboBox(BasicOpetaionWidget)
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
        self.mid_corner_label = QtWidgets.QLabel(BasicOpetaionWidget)
        self.mid_corner_label.setMaximumSize(QtCore.QSize(100, 50))
        self.mid_corner_label.setObjectName("mid_corner_label")
        self.verticalLayout.addWidget(self.mid_corner_label, 0, QtCore.Qt.AlignHCenter)
        self.mid_corner_bar_layout = QtWidgets.QHBoxLayout()
        self.mid_corner_bar_layout.setObjectName("mid_corner_bar_layout")
        spacerItem2 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.mid_corner_bar_layout.addItem(spacerItem2)
        self.mid_corner_min_btn = QtWidgets.QPushButton(BasicOpetaionWidget)
        self.mid_corner_min_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.mid_corner_min_btn.setObjectName("mid_corner_min_btn")
        self.mid_corner_bar_layout.addWidget(self.mid_corner_min_btn)
        self.lessThan1 = QtWidgets.QLabel(BasicOpetaionWidget)
        self.lessThan1.setMaximumSize(QtCore.QSize(16777215, 50))
        self.lessThan1.setObjectName("lessThan1")
        self.mid_corner_bar_layout.addWidget(self.lessThan1)
        self.mid_corner_input_box = QtWidgets.QComboBox(BasicOpetaionWidget)
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
        self.lessThan2 = QtWidgets.QLabel(BasicOpetaionWidget)
        self.lessThan2.setMaximumSize(QtCore.QSize(16777215, 50))
        self.lessThan2.setObjectName("lessThan2")
        self.mid_corner_bar_layout.addWidget(self.lessThan2)
        self.mid_corner_max_btn = QtWidgets.QPushButton(BasicOpetaionWidget)
        self.mid_corner_max_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.mid_corner_max_btn.setObjectName("mid_corner_max_btn")
        self.mid_corner_bar_layout.addWidget(self.mid_corner_max_btn)
        spacerItem3 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.mid_corner_bar_layout.addItem(spacerItem3)
        self.verticalLayout.addLayout(self.mid_corner_bar_layout)
        self.low_corner_label = QtWidgets.QLabel(BasicOpetaionWidget)
        self.low_corner_label.setMaximumSize(QtCore.QSize(16777215, 50))
        self.low_corner_label.setObjectName("low_corner_label")
        self.verticalLayout.addWidget(self.low_corner_label, 0, QtCore.Qt.AlignHCenter)
        self.low_corner_bar_layout = QtWidgets.QHBoxLayout()
        self.low_corner_bar_layout.setObjectName("low_corner_bar_layout")
        spacerItem4 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.low_corner_bar_layout.addItem(spacerItem4)
        self.low_corner_min_btn = QtWidgets.QPushButton(BasicOpetaionWidget)
        self.low_corner_min_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.low_corner_min_btn.setObjectName("low_corner_min_btn")
        self.low_corner_bar_layout.addWidget(self.low_corner_min_btn)
        self.label_2 = QtWidgets.QLabel(BasicOpetaionWidget)
        self.label_2.setObjectName("label_2")
        self.low_corner_bar_layout.addWidget(self.label_2)
        self.low_corner_input = QtWidgets.QLineEdit(BasicOpetaionWidget)
        self.low_corner_input.setMinimumSize(QtCore.QSize(190, 30))
        self.low_corner_input.setObjectName("low_corner_input")
        self.low_corner_bar_layout.addWidget(self.low_corner_input)
        self.label_3 = QtWidgets.QLabel(BasicOpetaionWidget)
        self.label_3.setObjectName("label_3")
        self.low_corner_bar_layout.addWidget(self.label_3)
        self.low_corner_max_btn = QtWidgets.QPushButton(BasicOpetaionWidget)
        self.low_corner_max_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.low_corner_max_btn.setObjectName("low_corner_max_btn")
        self.low_corner_bar_layout.addWidget(self.low_corner_max_btn)
        spacerItem5 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.low_corner_bar_layout.addItem(spacerItem5)
        self.verticalLayout.addLayout(self.low_corner_bar_layout)
        self.high_corner_label = QtWidgets.QLabel(BasicOpetaionWidget)
        self.high_corner_label.setMaximumSize(QtCore.QSize(16777215, 50))
        self.high_corner_label.setObjectName("high_corner_label")
        self.verticalLayout.addWidget(self.high_corner_label, 0, QtCore.Qt.AlignHCenter)
        self.high_corner_bar_layout = QtWidgets.QHBoxLayout()
        self.high_corner_bar_layout.setObjectName("high_corner_bar_layout")
        spacerItem6 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.high_corner_bar_layout.addItem(spacerItem6)
        self.high_corner_min_btn = QtWidgets.QPushButton(BasicOpetaionWidget)
        self.high_corner_min_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.high_corner_min_btn.setObjectName("high_corner_min_btn")
        self.high_corner_bar_layout.addWidget(self.high_corner_min_btn)
        self.label_4 = QtWidgets.QLabel(BasicOpetaionWidget)
        self.label_4.setObjectName("label_4")
        self.high_corner_bar_layout.addWidget(self.label_4)
        self.high_corner_input = QtWidgets.QLineEdit(BasicOpetaionWidget)
        self.high_corner_input.setMinimumSize(QtCore.QSize(190, 30))
        self.high_corner_input.setObjectName("high_corner_input")
        self.high_corner_bar_layout.addWidget(self.high_corner_input)
        self.label_5 = QtWidgets.QLabel(BasicOpetaionWidget)
        self.label_5.setObjectName("label_5")
        self.high_corner_bar_layout.addWidget(self.label_5)
        self.high_corner_max_btn = QtWidgets.QPushButton(BasicOpetaionWidget)
        self.high_corner_max_btn.setMinimumSize(QtCore.QSize(80, 0))
        self.high_corner_max_btn.setObjectName("high_corner_max_btn")
        self.high_corner_bar_layout.addWidget(self.high_corner_max_btn)
        spacerItem7 = QtWidgets.QSpacerItem(80, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.high_corner_bar_layout.addItem(spacerItem7)
        self.verticalLayout.addLayout(self.high_corner_bar_layout)
        spacerItem8 = QtWidgets.QSpacerItem(20, 30, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Fixed)
        self.verticalLayout.addItem(spacerItem8)
        self.sampling_time_label = QtWidgets.QLabel(BasicOpetaionWidget)
        self.sampling_time_label.setMaximumSize(QtCore.QSize(16777215, 50))
        self.sampling_time_label.setObjectName("sampling_time_label")
        self.verticalLayout.addWidget(self.sampling_time_label, 0, QtCore.Qt.AlignHCenter)
        self.sampling_time_input = QtWidgets.QLineEdit(BasicOpetaionWidget)
        self.sampling_time_input.setMinimumSize(QtCore.QSize(190, 30))
        self.sampling_time_input.setObjectName("sampling_time_input")
        self.verticalLayout.addWidget(self.sampling_time_input, 0, QtCore.Qt.AlignHCenter)
        spacerItem9 = QtWidgets.QSpacerItem(20, 10, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Fixed)
        self.verticalLayout.addItem(spacerItem9)
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.send_config_btn = QtWidgets.QPushButton(BasicOpetaionWidget)
        self.send_config_btn.setMinimumSize(QtCore.QSize(200, 0))
        self.send_config_btn.setMaximumSize(QtCore.QSize(250, 16777215))
        self.send_config_btn.setObjectName("send_config_btn")
        self.horizontalLayout_2.addWidget(self.send_config_btn, 0, QtCore.Qt.AlignRight)
        spacerItem10 = QtWidgets.QSpacerItem(10, 10, QtWidgets.QSizePolicy.Fixed, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout_2.addItem(spacerItem10)
        self.start_stop_sampling_btn = QtWidgets.QPushButton(BasicOpetaionWidget)
        self.start_stop_sampling_btn.setMinimumSize(QtCore.QSize(200, 0))
        self.start_stop_sampling_btn.setMaximumSize(QtCore.QSize(250, 16777215))
        self.start_stop_sampling_btn.setObjectName("start_stop_sampling_btn")
        self.horizontalLayout_2.addWidget(self.start_stop_sampling_btn, 0, QtCore.Qt.AlignLeft)
        self.verticalLayout.addLayout(self.horizontalLayout_2)

        self.retranslateUi(BasicOpetaionWidget)
        self.sample_rate_input_box.setCurrentIndex(1)
        self.input_input_box.setCurrentIndex(2)
        self.mid_corner_input_box.setCurrentIndex(-1)
        QtCore.QMetaObject.connectSlotsByName(BasicOpetaionWidget)

    def retranslateUi(self, BasicOpetaionWidget):
        _translate = QtCore.QCoreApplication.translate
        BasicOpetaionWidget.setWindowTitle(_translate("BasicOpetaionWidget", "Form"))
        self.sampling_rate_label.setText(_translate("BasicOpetaionWidget", "Sampling Rate"))
        self.sample_rate_min_btn.setText(_translate("BasicOpetaionWidget", "100"))
        self.lessThan1Sample.setText(_translate("BasicOpetaionWidget", "≤"))
        self.sample_rate_input_box.setItemText(0, _translate("BasicOpetaionWidget", "48000"))
        self.sample_rate_input_box.setItemText(1, _translate("BasicOpetaionWidget", "44100"))
        self.sample_rate_input_box.setItemText(2, _translate("BasicOpetaionWidget", "22050"))
        self.sample_rate_input_box.setItemText(3, _translate("BasicOpetaionWidget", "16000"))
        self.sample_rate_input_box.setItemText(4, _translate("BasicOpetaionWidget", "8000"))
        self.sample_rate_input_box.setItemText(5, _translate("BasicOpetaionWidget", "4000"))
        self.lessThan2Sample.setText(_translate("BasicOpetaionWidget", "≤"))
        self.sample_rate_max_btn.setText(_translate("BasicOpetaionWidget", "50,000"))
        self.input_label.setText(_translate("BasicOpetaionWidget", "Input"))
        self.input_input_box.setCurrentText(_translate("BasicOpetaionWidget", "Analog In"))
        self.input_input_box.setItemText(0, _translate("BasicOpetaionWidget", "5 Volt"))
        self.input_input_box.setItemText(1, _translate("BasicOpetaionWidget", "3.3 Volt"))
        self.input_input_box.setItemText(2, _translate("BasicOpetaionWidget", "Analog In"))
        self.input_input_box.setItemText(3, _translate("BasicOpetaionWidget", "Audio In"))
        self.filter_label.setText(_translate("BasicOpetaionWidget", "Filter"))
        self.filter_input_box.setItemText(0, _translate("BasicOpetaionWidget", "All Pass"))
        self.filter_input_box.setItemText(1, _translate("BasicOpetaionWidget", "60 hz Notch"))
        self.filter_input_box.setItemText(2, _translate("BasicOpetaionWidget", "1st Order High Pass"))
        self.filter_input_box.setItemText(3, _translate("BasicOpetaionWidget", "1st Order Low Pass"))
        self.filter_input_box.setItemText(4, _translate("BasicOpetaionWidget", "6th Order High Pass"))
        self.filter_input_box.setItemText(5, _translate("BasicOpetaionWidget", "6th Order Low Pass"))
        self.filter_input_box.setItemText(6, _translate("BasicOpetaionWidget", "2nd Order Band Pass"))
        self.filter_input_box.setItemText(7, _translate("BasicOpetaionWidget", "6th Order Band Pass"))
        self.mid_corner_label.setText(_translate("BasicOpetaionWidget", "Mid Corner"))
        self.mid_corner_min_btn.setText(_translate("BasicOpetaionWidget", "200"))
        self.lessThan1.setText(_translate("BasicOpetaionWidget", "≤"))
        self.mid_corner_input_box.setItemText(0, _translate("BasicOpetaionWidget", "100"))
        self.mid_corner_input_box.setItemText(1, _translate("BasicOpetaionWidget", "1000"))
        self.mid_corner_input_box.setItemText(2, _translate("BasicOpetaionWidget", "10000"))
        self.lessThan2.setText(_translate("BasicOpetaionWidget", "≤"))
        self.mid_corner_max_btn.setText(_translate("BasicOpetaionWidget", "40,000"))
        self.low_corner_label.setText(_translate("BasicOpetaionWidget", "Low Corner"))
        self.low_corner_min_btn.setText(_translate("BasicOpetaionWidget", "200"))
        self.label_2.setText(_translate("BasicOpetaionWidget", "≤"))
        self.label_3.setText(_translate("BasicOpetaionWidget", "≤"))
        self.low_corner_max_btn.setText(_translate("BasicOpetaionWidget", "20,000"))
        self.high_corner_label.setText(_translate("BasicOpetaionWidget", "High Corner"))
        self.high_corner_min_btn.setText(_translate("BasicOpetaionWidget", "2,000"))
        self.label_4.setText(_translate("BasicOpetaionWidget", "≤"))
        self.label_5.setText(_translate("BasicOpetaionWidget", "≤"))
        self.high_corner_max_btn.setText(_translate("BasicOpetaionWidget", "40,000"))
        self.sampling_time_label.setText(_translate("BasicOpetaionWidget", "Sampling Duration (seconds)"))
        self.send_config_btn.setText(_translate("BasicOpetaionWidget", "Send Config"))
        self.start_stop_sampling_btn.setText(_translate("BasicOpetaionWidget", "Start"))
from . import basic_operation_rc
