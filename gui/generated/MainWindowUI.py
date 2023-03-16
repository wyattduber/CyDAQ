# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/MainWindow.ui'
#
# Created by: PyQt5 UI code generator 5.15.9
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(400, 590)
        font = QtGui.QFont()
        font.setFamily("Segoe UI")
        font.setPointSize(16)
        MainWindow.setFont(font)
        MainWindow.setStyleSheet("background-color: #d9d9d9;")
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Minimum)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.centralwidget.sizePolicy().hasHeightForWidth())
        self.centralwidget.setSizePolicy(sizePolicy)
        self.centralwidget.setMinimumSize(QtCore.QSize(400, 0))
        self.centralwidget.setStyleSheet("")
        self.centralwidget.setObjectName("centralwidget")
        self.verticalLayout = QtWidgets.QVBoxLayout(self.centralwidget)
        self.verticalLayout.setObjectName("verticalLayout")
        self.stack = QtWidgets.QStackedWidget(self.centralwidget)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Ignored, QtWidgets.QSizePolicy.Ignored)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.stack.sizePolicy().hasHeightForWidth())
        self.stack.setSizePolicy(sizePolicy)
        self.stack.setObjectName("stack")
        self.verticalLayout.addWidget(self.stack, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignVCenter)
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 400, 19))
        font = QtGui.QFont()
        font.setPointSize(8)
        self.menubar.setFont(font)
        self.menubar.setObjectName("menubar")
        self.menuFile = QtWidgets.QMenu(self.menubar)
        self.menuFile.setObjectName("menuFile")
        self.menuHelp = QtWidgets.QMenu(self.menubar)
        self.menuHelp.setObjectName("menuHelp")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)
        self.actionRestart = QtWidgets.QAction(MainWindow)
        self.actionRestart.setObjectName("actionRestart")
        self.actionQuit = QtWidgets.QAction(MainWindow)
        self.actionQuit.setObjectName("actionQuit")
        self.actionPing_CyDAQ = QtWidgets.QAction(MainWindow)
        self.actionPing_CyDAQ.setObjectName("actionPing_CyDAQ")
        self.actionDebug = QtWidgets.QAction(MainWindow)
        self.actionDebug.setObjectName("actionDebug")
        self.actionLaunch_Plotter = QtWidgets.QAction(MainWindow)
        self.actionLaunch_Plotter.setEnabled(False)
        self.actionLaunch_Plotter.setObjectName("actionLaunch_Plotter")
        self.menuFile.addAction(self.actionLaunch_Plotter)
        self.menuFile.addSeparator()
        self.menuFile.addAction(self.actionRestart)
        self.menuFile.addAction(self.actionQuit)
        self.menuHelp.addAction(self.actionDebug)
        self.menubar.addAction(self.menuFile.menuAction())
        self.menubar.addAction(self.menuHelp.menuAction())

        self.retranslateUi(MainWindow)
        self.stack.setCurrentIndex(-1)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "CyDAQ"))
        self.menuFile.setTitle(_translate("MainWindow", "File"))
        self.menuHelp.setTitle(_translate("MainWindow", "Help"))
        self.actionRestart.setText(_translate("MainWindow", "Restart"))
        self.actionQuit.setText(_translate("MainWindow", "Quit"))
        self.actionPing_CyDAQ.setText(_translate("MainWindow", "Ping CyDAQ"))
        self.actionDebug.setText(_translate("MainWindow", "Debug"))
        self.actionLaunch_Plotter.setText(_translate("MainWindow", "Launch Plotter"))
from . import main_window_rc
