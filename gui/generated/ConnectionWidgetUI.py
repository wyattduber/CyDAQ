# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/ConnectionWidget.ui'
#
# Created by: PyQt5 UI code generator 5.15.7
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_ConnectionWidget(object):
    def setupUi(self, ConnectionWidget):
        ConnectionWidget.setObjectName("ConnectionWidget")
        ConnectionWidget.resize(173, 61)
        ConnectionWidget.setStyleSheet("QWidget {\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 14px;\n"
"    color: #033f63;\n"
"}")
        self.horizontalLayout = QtWidgets.QHBoxLayout(ConnectionWidget)
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.connection_status_label = QtWidgets.QLabel(ConnectionWidget)
        self.connection_status_label.setAlignment(QtCore.Qt.AlignCenter)
        self.connection_status_label.setObjectName("connection_status_label")
        self.horizontalLayout.addWidget(self.connection_status_label, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        self.connectionIndicator = QtWidgets.QLabel(ConnectionWidget)
        self.connectionIndicator.setAlignment(QtCore.Qt.AlignCenter)
        self.connectionIndicator.setObjectName("connectionIndicator")
        self.horizontalLayout.addWidget(self.connectionIndicator, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        spacerItem = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout.addItem(spacerItem)

        self.retranslateUi(ConnectionWidget)
        QtCore.QMetaObject.connectSlotsByName(ConnectionWidget)

    def retranslateUi(self, ConnectionWidget):
        _translate = QtCore.QCoreApplication.translate
        ConnectionWidget.setWindowTitle(_translate("ConnectionWidget", "Form"))
        self.connection_status_label.setText(_translate("ConnectionWidget", "CyDAQ Status:"))
        self.connectionIndicator.setText(_translate("ConnectionWidget", "⬤"))
