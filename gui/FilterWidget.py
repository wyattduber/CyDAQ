# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/FilterWidget.ui'
#
# Created by: PyQt5 UI code generator 5.10.1
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_filter_widget(object):
    def setupUi(self, filter_widget):
        filter_widget.setObjectName("filter_widget")
        filter_widget.resize(544, 336)
        self.label = QtWidgets.QLabel(filter_widget)
        self.label.setGeometry(QtCore.QRect(50, 90, 181, 16))
        self.label.setObjectName("label")

        self.retranslateUi(filter_widget)
        QtCore.QMetaObject.connectSlotsByName(filter_widget)

    def retranslateUi(self, filter_widget):
        _translate = QtCore.QCoreApplication.translate
        filter_widget.setWindowTitle(_translate("filter_widget", "Form"))
        self.label.setText(_translate("filter_widget", "Filter Page"))

