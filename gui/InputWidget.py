# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/InputWidget.ui'
#
# Created by: PyQt5 UI code generator 5.15.4
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_input_widget(object):
    def setupUi(self, input_widget):
        input_widget.setObjectName("input_widget")
        input_widget.resize(919, 476)
        input_widget.setMinimumSize(QtCore.QSize(919, 476))
        input_widget.setMaximumSize(QtCore.QSize(919, 476))
        input_widget.setStyleSheet("QWidget {\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: #033f63;\n"
"}\n"
"")
        self.inputList = QtWidgets.QListWidget(input_widget)
        self.inputList.setGeometry(QtCore.QRect(374, 138, 171, 201))
        self.inputList.setTabKeyNavigation(True)
        self.inputList.setModelColumn(0)
        self.inputList.setUniformItemSizes(False)
        self.inputList.setObjectName("inputList")
        item = QtWidgets.QListWidgetItem()
        self.inputList.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.inputList.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.inputList.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.inputList.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.inputList.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.inputList.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.inputList.addItem(item)
        item = QtWidgets.QListWidgetItem()
        self.inputList.addItem(item)

        self.retranslateUi(input_widget)
        self.inputList.setCurrentRow(3)
        QtCore.QMetaObject.connectSlotsByName(input_widget)

    def retranslateUi(self, input_widget):
        _translate = QtCore.QCoreApplication.translate
        input_widget.setWindowTitle(_translate("input_widget", "Form"))
        __sortingEnabled = self.inputList.isSortingEnabled()
        self.inputList.setSortingEnabled(False)
        item = self.inputList.item(0)
        item.setText(_translate("input_widget", "5 Volt"))
        item = self.inputList.item(1)
        item.setText(_translate("input_widget", "3.3 Volt"))
        item = self.inputList.item(2)
        item.setText(_translate("input_widget", "1.8 Volt"))
        item = self.inputList.item(3)
        item.setText(_translate("input_widget", "Analog In"))
        item = self.inputList.item(4)
        item.setText(_translate("input_widget", "Audio In"))
        item = self.inputList.item(5)
        item.setText(_translate("input_widget", "Digital I2C Bus"))
        item = self.inputList.item(6)
        item.setText(_translate("input_widget", "Digital SPI Bus"))
        item = self.inputList.item(7)
        item.setText(_translate("input_widget", "Digital UART"))
        self.inputList.setSortingEnabled(__sortingEnabled)
