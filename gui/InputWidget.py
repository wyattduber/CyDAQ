# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/InputWidget.ui'
#
# Created by: PyQt5 UI code generator 5.10.1
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_input_widget(object):
    def setupUi(self, input_widget):
        input_widget.setObjectName("input_widget")
        input_widget.resize(616, 542)
        self.label = QtWidgets.QLabel(input_widget)
        self.label.setGeometry(QtCore.QRect(70, 20, 181, 16))
        self.label.setObjectName("label")

        self.retranslateUi(input_widget)
        QtCore.QMetaObject.connectSlotsByName(input_widget)

    def retranslateUi(self, input_widget):
        _translate = QtCore.QCoreApplication.translate
        input_widget.setWindowTitle(_translate("input_widget", "Form"))
        self.label.setText(_translate("input_widget", "Input Page"))

