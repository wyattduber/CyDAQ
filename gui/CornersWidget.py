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
        corners_widget.resize(611, 480)
        corners_widget.setStyleSheet("QWidget {\n"
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
"    text-align: center;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    border-radius: 4px;\n"
"    border: 2px solid #033f63;\n"
"    padding: 4px 8px;\n"
"    height: 25px;\n"
"}")

        self.retranslateUi(corners_widget)
        QtCore.QMetaObject.connectSlotsByName(corners_widget)

    def retranslateUi(self, corners_widget):
        _translate = QtCore.QCoreApplication.translate
        corners_widget.setWindowTitle(_translate("corners_widget", "Form"))

