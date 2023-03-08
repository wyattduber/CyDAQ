# PyQt5 Packages
from PyQt5 import QtWidgets
from PyQt5.QtCore import QTimer

# Stuff From Project - May show as an error but it works
from generated.DebugUI import Ui_debug

# Constants
LOG_TIMER_DELAY = 1000


class DebugWidget(QtWidgets.QMainWindow, Ui_debug):

    def __init__(self, mainWindow, cyDAQModeWidget):
        super(DebugWidget, self).__init__()
        self.setupUi(self)

        self.mainWindow = mainWindow
        self.cyDAQModeWidget = cyDAQModeWidget

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper

        # Home Button
        self.home_btn.clicked.connect(self.mainWindow.switchToModeSelector)

        # Widget Buttons (Disabled for Lab Launch
        # self.write_btn.clicked.connect(self.writeData)
        # self.write2_btn.clicked.connect(self.writeDataV2)
        # self.read_btn.clicked.connect(self.readData)
        self.mock_checkBox.stateChanged.connect(self.mockToggle)

        self.log_timer = QTimer()
        self.log_timer.timeout.connect(self.logUpdate)
        self.log_timer.start(LOG_TIMER_DELAY)

    # CyDAQ Connection Label
    def cyDaqConnected(self):
        """When CyDAQ changes from disconnected to connected"""
        self.connection_status_label.setText("Connected!")
        pass

    def cyDaqDisconnected(self):
        """When CyDAQ changes from connected to disconnected"""
        self.connection_status_label.setText("Not Connected!")
        pass

    """ 
    Below are some tests that we came up with to test the reading/writing
    speed of python an the GUI that we created to make sure that it can 
    handle large amounts of data
    """

    def writeData(self):
        self.runInWorkerThread(
            self.wrapper.writeALotOfData,
            finished_func=lambda: print("Success!"),
            error_func=lambda x: self.showError(x)
        )

    def writeDataV2(self):
        self.runInWorkerThread(
            self.wrapper.writeALotOfDataV2,
            finished_func=lambda: print("Success!"),
            error_func=lambda x: self.showError(x)
        )

    def readData(self):
        self.runInWorkerThread(
            self.wrapper.readALotOfData,
            finished_func=lambda: print("Success"),
            error_func=lambda x: self.showError(x)
        )

    # Enables mocking of the project
    def mockToggle(self):
        if self.mock_checkBox.isChecked():
            self.wrapper.enable_mock()
        else:
            self.wrapper.disable_mock()

    def logUpdate(self):
        old_pos = self.log_textBrowser.verticalScrollBar().value()
        old_max = self.log_textBrowser.verticalScrollBar().maximum()
        self.log_textBrowser.setText(self.wrapper.getLog())
        if old_max - old_pos <= 10:
            self.log_textBrowser.verticalScrollBar().setSliderPosition(
                self.log_textBrowser.verticalScrollBar().maximum())
        else:
            self.log_textBrowser.verticalScrollBar().setSliderPosition(old_pos)
