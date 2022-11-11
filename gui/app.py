import sys
from PyQt5 import QtWidgets, uic

from MainWindow import Ui_MainWindow
from BasicOperation import Ui_basic_operation
from DacModeWidget import Ui_DAC_mode_widget
from SamplingRateWidget import Ui_sampling_rate_widget
from InputWidget import Ui_input_widget
from FilterWidget import Ui_filter_widget
from CornersWidget import Ui_corners_widget


class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self, widget, windows):
        super(MainWindow, self).__init__()
        self.setupUi(self)

        self.widget = widget
        self.windows = windows

        button = self.basic_operation_btn
        button.setCheckable(True)
        button.clicked.connect(self.was_clicked)

    def was_clicked(self):
        widget.setCurrentWidget(self.windows[1])
        # self.w = BasicOperationWindow()
        # self.w.show()
        # self.close()

class BasicOperationWindow(QtWidgets.QMainWindow, Ui_basic_operation):
    def __init__(self, widget, windows):
        super(BasicOperationWindow, self).__init__()
        self.setupUi(self)

        self.widget = widget
        self.windows = windows

        self.inputPagesWidget = QtWidgets.QStackedWidget()
        self.testLayout.addWidget(self.inputPagesWidget)
        
        self.inputPages = [
            DACModeWidget(),
            SamplingRateWidget(),
            InputWidget(),
            FilterWidget(),
            CornersWidget()
        ]

        for page in self.inputPages:
            self.inputPagesWidget.addWidget(page)

        # start on DAC mode widget
        self.inputPagesWidget.setCurrentWidget(self.inputPages[0])

        def onNextClicked():
            self.inputPagesWidget.setCurrentIndex(self.inputPagesWidget.currentIndex()+1)

        def onPreviousClicked():
            self.inputPagesWidget.setCurrentIndex(self.inputPagesWidget.currentIndex()-1)

        self.next_btn.clicked.connect(onNextClicked)
        self.previous_btn.clicked.connect(onPreviousClicked)

        self.dac_btn.clicked.connect(lambda: self.inputPagesWidget.setCurrentIndex(0))
        self.sampling_rate_btn.clicked.connect(lambda: self.inputPagesWidget.setCurrentIndex(1))
        self.input_btn.clicked.connect(lambda: self.inputPagesWidget.setCurrentIndex(2))
        self.filter_btn.clicked.connect(lambda: self.inputPagesWidget.setCurrentIndex(3))
        self.corners_btn.clicked.connect(lambda: self.inputPagesWidget.setCurrentIndex(4))

        

class DACModeWidget(QtWidgets.QWidget, Ui_DAC_mode_widget):
    def __init__(self):
        super(DACModeWidget, self).__init__()
        self.setupUi(self)

class SamplingRateWidget(QtWidgets.QWidget, Ui_sampling_rate_widget):
    def __init__(self):
        super(SamplingRateWidget, self).__init__()
        self.setupUi(self)

class InputWidget(QtWidgets.QWidget, Ui_input_widget):
    def __init__(self):
        super(InputWidget, self).__init__()
        self.setupUi(self)

class FilterWidget(QtWidgets.QWidget, Ui_filter_widget):
    def __init__(self):
        super(FilterWidget, self).__init__()
        self.setupUi(self)

class CornersWidget(QtWidgets.QWidget, Ui_corners_widget):
    def __init__(self):
        super(CornersWidget, self).__init__()
        self.setupUi(self)


app = QtWidgets.QApplication(sys.argv)
widget = QtWidgets.QStackedWidget()

windows = [] 
windows += [
    MainWindow(widget, windows),
    BasicOperationWindow(widget, windows)
]

for window in windows:
    widget.addWidget(window)

# set current widget to MainWindow
widget.setCurrentWidget(windows[0]) 
widget.show()

sys.exit(app.exec())

# import sys
# from PyQt5 import QtWidgets, uic

# from BasicOperation import Ui_basic_operation


# class MainWindow(QtWidgets.QMainWindow, Ui_basic_operation):
#     def __init__(self):
#         super(MainWindow, self).__init__()
#         self.setupUi(self)

# app = QtWidgets.QApplication(sys.argv)

# window = MainWindow()
# window.show()
# app.exec()
