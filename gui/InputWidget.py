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
        input_widget.resize(247, 178)
        input_widget.setStyleSheet("QWidget {\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: #033f63;\n"
"}\n"
"")
        self.horizontalLayout = QtWidgets.QHBoxLayout(input_widget)
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.input_list = QtWidgets.QListWidget(input_widget)
        self.input_list.setMaximumSize(QtCore.QSize(16777215, 300))
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
        self.horizontalLayout.addWidget(self.input_list)

        self.retranslateUi(input_widget)
        self.input_list.setCurrentRow(3)
        QtCore.QMetaObject.connectSlotsByName(input_widget)

    def retranslateUi(self, input_widget):
        _translate = QtCore.QCoreApplication.translate
        input_widget.setWindowTitle(_translate("input_widget", "Form"))
        __sortingEnabled = self.input_list.isSortingEnabled()
        self.input_list.setSortingEnabled(False)
        item = self.input_list.item(0)
        item.setText(_translate("input_widget", "5 Volt"))
        item = self.input_list.item(1)
        item.setText(_translate("input_widget", "3.3 Volt"))
        item = self.input_list.item(2)
        item.setText(_translate("input_widget", "1.8 Volt"))
        item = self.input_list.item(3)
        item.setText(_translate("input_widget", "Analog In"))
        item = self.input_list.item(4)
        item.setText(_translate("input_widget", "Audio In"))
        item = self.input_list.item(5)
        item.setText(_translate("input_widget", "Digital I2C Bus"))
        item = self.input_list.item(6)
        item.setText(_translate("input_widget", "Digital SPI Bus"))
        item = self.input_list.item(7)
        item.setText(_translate("input_widget", "Digital UART"))
        self.input_list.setSortingEnabled(__sortingEnabled)

