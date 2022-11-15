# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/CornersWidget.ui'
#
# Created by: PyQt5 UI code generator 5.15.4
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_corners_widget(object):
    def setupUi(self, corners_widget):
        corners_widget.setObjectName("corners_widget")
        corners_widget.resize(611, 480)
        self.label = QtWidgets.QLabel(corners_widget)
        self.label.setGeometry(QtCore.QRect(80, 30, 221, 16))
        self.label.setObjectName("label")
        self.cornerFrame = QtWidgets.QFrame(corners_widget)
        self.cornerFrame.setGeometry(QtCore.QRect(60, 20, 371, 291))
        self.cornerFrame.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.cornerFrame.setFrameShadow(QtWidgets.QFrame.Raised)
        self.cornerFrame.setObjectName("cornerFrame")
        self.lessThan1 = QtWidgets.QLabel(self.cornerFrame)
        self.lessThan1.setGeometry(QtCore.QRect(120, 40, 16, 16))
        self.lessThan1.setObjectName("lessThan1")
        self.lessThan2 = QtWidgets.QLabel(self.cornerFrame)
        self.lessThan2.setGeometry(QtCore.QRect(220, 40, 16, 16))
        self.lessThan2.setObjectName("lessThan2")
        self.minCornerBox = QtWidgets.QLineEdit(self.cornerFrame)
        self.minCornerBox.setGeometry(QtCore.QRect(60, 40, 41, 20))
        self.minCornerBox.setAlignment(QtCore.Qt.AlignCenter)
        self.minCornerBox.setReadOnly(True)
        self.minCornerBox.setObjectName("minCornerBox")
        self.inputCornerBox = QtWidgets.QLineEdit(self.cornerFrame)
        self.inputCornerBox.setGeometry(QtCore.QRect(150, 40, 51, 20))
        self.inputCornerBox.setAlignment(QtCore.Qt.AlignCenter)
        self.inputCornerBox.setObjectName("inputCornerBox")
        self.maxCornerBox = QtWidgets.QLineEdit(self.cornerFrame)
        self.maxCornerBox.setGeometry(QtCore.QRect(250, 40, 51, 20))
        self.maxCornerBox.setAlignment(QtCore.Qt.AlignCenter)
        self.maxCornerBox.setReadOnly(True)
        self.maxCornerBox.setObjectName("maxCornerBox")
        self.label_2 = QtWidgets.QLabel(self.cornerFrame)
        self.label_2.setGeometry(QtCore.QRect(60, 70, 221, 16))
        self.label_2.setObjectName("label_2")
        self.cornerPresets = QtWidgets.QListWidget(self.cornerFrame)
        self.cornerPresets.setGeometry(QtCore.QRect(50, 90, 256, 192))
        self.cornerPresets.setObjectName("cornerPresets")
        item = QtWidgets.QListWidgetItem()
        font = QtGui.QFont()
        font.setBold(False)
        font.setWeight(50)
        item.setFont(font)
        self.cornerPresets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        font = QtGui.QFont()
        font.setBold(False)
        font.setWeight(50)
        item.setFont(font)
        self.cornerPresets.addItem(item)
        item = QtWidgets.QListWidgetItem()
        font = QtGui.QFont()
        font.setBold(False)
        font.setWeight(50)
        item.setFont(font)
        self.cornerPresets.addItem(item)

        self.retranslateUi(corners_widget)
        QtCore.QMetaObject.connectSlotsByName(corners_widget)

    def retranslateUi(self, corners_widget):
        _translate = QtCore.QCoreApplication.translate
        corners_widget.setWindowTitle(_translate("corners_widget", "Form"))
        self.label.setText(_translate("corners_widget", "Mid Corner"))
        self.lessThan1.setText(_translate("corners_widget", "≤"))
        self.lessThan2.setText(_translate("corners_widget", "≤"))
        self.minCornerBox.setText(_translate("corners_widget", "100"))
        self.inputCornerBox.setText(_translate("corners_widget", "2,000"))
        self.maxCornerBox.setText(_translate("corners_widget", "40,000"))
        self.label_2.setText(_translate("corners_widget", "Presets"))
        __sortingEnabled = self.cornerPresets.isSortingEnabled()
        self.cornerPresets.setSortingEnabled(False)
        item = self.cornerPresets.item(0)
        item.setText(_translate("corners_widget", "100"))
        item = self.cornerPresets.item(1)
        item.setText(_translate("corners_widget", "1000"))
        item = self.cornerPresets.item(2)
        item.setText(_translate("corners_widget", "10000"))
        self.cornerPresets.setSortingEnabled(__sortingEnabled)