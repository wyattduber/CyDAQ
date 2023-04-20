# Standard Python Packages
import shutil
from datetime import datetime

# PyQt5 Packages
from PyQt5 import QtWidgets
from PyQt5.QtCore import QTimer
from PyQt5.QtWidgets import QFileDialog
from PyQt5.QtWidgets import QMessageBox

# Stuff From Project - May show as an error but it works
from generated.DebugWidgetUI import Ui_DebugWidget

# Constants
LOG_TIMER_DELAY = 1000
DEFAULT_SAVE_LOCATION = "U:\\"

class DebugWidget(QtWidgets.QWidget, Ui_DebugWidget):

    def __init__(self, mainWindow, cyDAQModeWidget):
        super(DebugWidget, self).__init__()
        self.setupUi(self)

        self.mainWindow = mainWindow
        self.cyDAQModeWidget = cyDAQModeWidget

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper

        self.prev_index = 0

        # Home Button
        self.home_btn.clicked.connect(self.home)

        # Widget Buttons (Disabled for Lab Launch)
        # self.write_btn.clicked.connect(self.writeData)
        # self.write2_btn.clicked.connect(self.writeDataV2)
        # self.read_btn.clicked.connect(self.readData)
        self.export_logs_btn.clicked.connect(self.exportLogs)
        self.mock_checkBox.clicked.connect(self.mockClicked)
        self.clear_log_btn.clicked.connect(self.clearLog)

        self.log_timer = QTimer()
        self.log_timer.timeout.connect(self.logUpdate)
        self.log_timer.start(LOG_TIMER_DELAY)

        self.snapLogScrollToTop()


    # CyDAQ Connection Label
    def home(self):
        """Return to whatever the previous window was before switching to debug"""
        tmp = self.prev_index
        if self.prev_index == 0:
            self.mainWindow.switchToModeSelector()
        elif self.prev_index == 1:
            self.mainWindow.switchToBasicOperation()
        elif self.prev_index == 2:
            self.mainWindow.switchToBalanceBeam()
        elif self.prev_index == 3:
            self.mainWindow.switchToLiveStream()
        elif self.prev_index == 4:
            self.prev_index = tmp
            self.home()

    """ 
    Below are some tests that we came up with to test the reading/writing
    speed of python an the GUI that we created to make sure that it can 
    handle large amounts of data
    """

    def writeData(self):
        """Test Method to write data as fast as python can handle"""
        self.cyDAQModeWidget.runInWorkerThread(
            self,
            func=self.wrapper.writeALotOfData,
            finished_func=lambda: print("Success!"),
            error_func=lambda x: self.mainWindow.showError(x)
        )

    def writeDataV2(self):
        """Second Test Method to write data as fast as python can handle"""
        self.cyDAQModeWidget.runInWorkerThread(
            self,
            func=self.wrapper.writeALotOfDataV2,
            finished_func=lambda: print("Success!"),
            error_func=lambda x: self.mainWindow.showError(x)
        )

    def readData(self):
        """Test Method to read data as fast as python can handle"""
        self.cyDAQModeWidget.runInWorkerThread(
            self,
            func=self.wrapper.readALotOfData,
            finished_func=lambda: print("Success"),
            error_func=lambda x: self.mainWindow.showError(x)
        )

    # Allows the user to export the debug logs for further inspection
    def exportLogs(self):
        options = QFileDialog.Options()
        filename, _ = QFileDialog.getSaveFileName(self, "Pick a location to save the logs!",
                                                       DEFAULT_SAVE_LOCATION, "Text Files (*.txt);;",
                                                       options=options)
        # Default Filename
        if filename.strip() == "":
            return # User cancelled export

        # Save the logs to the file
        try:
            shutil.copyfile("C:\\Temp\\cydaq_current_log.log", filename)
        except PermissionError:
            self._show_error("Unable to save logs due to permission error!")
            return

    # Enables mocking of the project
    def mockClicked(self):
        if self.mock_checkBox.isChecked():
            self.wrapper.enable_mock()
        else:
            self.wrapper.disable_mock()
        
        self.mock_checkBox.setChecked(self.wrapper.isMocking())

    def logUpdate(self):
        old_pos = self.log_textBrowser.verticalScrollBar().value()
        self.log_textBrowser.setText(self.wrapper.getLog())
        if(old_pos == 0):
            self.snapLogScrollToTop()
        else:
            self.log_textBrowser.verticalScrollBar().setSliderPosition(old_pos)

    def snapLogScrollToTop(self):
        self.log_textBrowser.verticalScrollBar().setSliderPosition(
            self.log_textBrowser.verticalScrollBar().minimum())

    def clearLog(self):
        self.wrapper.clearLog()
        self.logUpdate()

    def _show_error(self, message):
        """Private method to just show an error message box with a custom message"""
        errorbox = QMessageBox(self)
        errorbox.setWindowTitle("Error")
        errorbox.setText(message)
        errorbox.setIcon(QMessageBox.Critical)
        errorbox.exec()