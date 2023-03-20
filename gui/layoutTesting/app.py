import sys

from PyQt5.QtWidgets import *
from PyQt5 import QtWidgets

from generated.MainWIndow import Ui_MainWindow
from generated.WidgetA import Ui_WidgetA

# command to get this compiled and ran easily (must be ran from within gui/layoutTesting dir)
# python -m PyQt5.uic.pyuic --from-imports MainWindow.ui -o generated/MainWIndow.py && python -m PyQt5.uic.pyuic --from-imports WidgetA.ui -o generated/WidgetA.py && python app.py

class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.setupUi(self)

        self.setSizePolicy(QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Expanding)

        self.centerWidget = QtWidgets.QWidget()
        self.setCentralWidget(self.centerWidget)

        self.widgetA = WidgetA()
        self.widgetB = QWidget()

        self.stackedLayout = StackedLayout(self.centerWidget)
        self.stackedLayout.addWidget(self.widgetA)
        self.stackedLayout.addWidget(self.widgetB)

        self.show()

class StackedLayout(QtWidgets.QStackedLayout):
    # def minimumSize(self):
    #     if self.currentWidget():
    #         s = self.currentWidget().minimumSize()
    #         if s.isEmpty():
    #             s = self.currentWidget().minimumSizeHint()
    #         return s
    #     return super().minimumSize()
    pass

class WidgetA(QtWidgets.QWidget, Ui_WidgetA):
    def __init__(self):
        super(WidgetA, self).__init__()
        self.setupUi(self)


app = QtWidgets.QApplication(sys.argv)
main = MainWindow()
sys.exit(app.exec_())