# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/CornersWidget.ui'
#
# Created by: PyQt5 UI code generator 5.10.1
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_corners_widget(object):
    def setupUi(self, corners_widget):
        corners_widget.setObjectName("corners_widget")
        corners_widget.resize(400, 300)
        self.label = QtWidgets.QLabel(corners_widget)
        self.label.setGeometry(QtCore.QRect(80, 30, 221, 16))
        self.label.setObjectName("label")

        self.retranslateUi(corners_widget)
        QtCore.QMetaObject.connectSlotsByName(corners_widget)

    def retranslateUi(self, corners_widget):
        _translate = QtCore.QCoreApplication.translate
        corners_widget.setWindowTitle(_translate("corners_widget", "Form"))
        self.label.setText(_translate("corners_widget", "Corners Page"))

