# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/SamplingRateWidget.ui'
#
# Created by: PyQt5 UI code generator 5.10.1
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_sampling_rate_widget(object):
    def setupUi(self, sampling_rate_widget):
        sampling_rate_widget.setObjectName("sampling_rate_widget")
        sampling_rate_widget.resize(806, 541)
        self.label = QtWidgets.QLabel(sampling_rate_widget)
        self.label.setGeometry(QtCore.QRect(20, 30, 261, 21))
        self.label.setObjectName("label")

        self.retranslateUi(sampling_rate_widget)
        QtCore.QMetaObject.connectSlotsByName(sampling_rate_widget)

    def retranslateUi(self, sampling_rate_widget):
        _translate = QtCore.QCoreApplication.translate
        sampling_rate_widget.setWindowTitle(_translate("sampling_rate_widget", "Form"))
        self.label.setText(_translate("sampling_rate_widget", "sampling rate widget"))

