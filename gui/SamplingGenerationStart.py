# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'qtdesigner/SamplingGenerationStart.ui'
#
# Created by: PyQt5 UI code generator 5.10.1
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_Form(object):
    def setupUi(self, Form):
        Form.setObjectName("Form")
        Form.resize(620, 515)
        self.startSampling = QtWidgets.QPushButton(Form)
        self.startSampling.setGeometry(QtCore.QRect(190, 120, 201, 81))
        font = QtGui.QFont()
        font.setPointSize(24)
        self.startSampling.setFont(font)
        self.startSampling.setObjectName("startSampling")
        self.samplingLabel = QtWidgets.QLabel(Form)
        self.samplingLabel.setGeometry(QtCore.QRect(110, 80, 181, 16))
        self.samplingLabel.setObjectName("samplingLabel")
        self.startGeneration = QtWidgets.QPushButton(Form)
        self.startGeneration.setGeometry(QtCore.QRect(190, 260, 201, 81))
        font = QtGui.QFont()
        font.setPointSize(24)
        self.startGeneration.setFont(font)
        self.startGeneration.setObjectName("startGeneration")
        self.generationLabel = QtWidgets.QLabel(Form)
        self.generationLabel.setGeometry(QtCore.QRect(110, 220, 181, 16))
        self.generationLabel.setObjectName("generationLabel")

        self.retranslateUi(Form)
        QtCore.QMetaObject.connectSlotsByName(Form)

    def retranslateUi(self, Form):
        _translate = QtCore.QCoreApplication.translate
        Form.setWindowTitle(_translate("Form", "Form"))
        self.startSampling.setText(_translate("Form", "Start"))
        self.samplingLabel.setText(_translate("Form", "Sampling"))
        self.startGeneration.setText(_translate("Form", "Start"))
        self.generationLabel.setText(_translate("Form", "Generation"))

