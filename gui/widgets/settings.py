# Standard Python Packages

# PyQt5 Packages
from PyQt5 import QtWidgets
from PyQt5.Qt import QMessageBox
from PyQt5.QtCore import QSettings

# Stuff from Project - May show as an error but it works
from generated.SettingsWidgetUI import Ui_SettingsWidget

# Constants

class SettingsWidget(QtWidgets.QWidget, Ui_SettingsWidget):
    """Settings mode. Allows for changing of certain cli/gui values in real time, and saving them"""

    def __init__(self, mainWindow, cyDAQModeWidget):
        super(SettingsWidget, self).__init__()
        self.setupUi(self)

        # Share resources from main window
        self.mainWindow = mainWindow
        self.cyDAQModeWidget = cyDAQModeWidget

        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper

        # Setting Containers
        self.cli_settings = QSettings("CyDAQ", "CLI")
        self.gui_settings = QSettings("CyDAQ", "GUI")

        # Buttons
        self.home_btn.clicked.connect(lambda: self.pre_btn_check("home"))


    def pre_btn_check(self, btn):
        """
        When a button is pressed, check the various conditions
        that need to be met for each button to work properly
        """

        # First, buttons that don't require an active CyDAQ connection
        if btn == "home":
            self.mainWindow.switchToModeSelector()

        # Now, handle buttons that require an active CyDAQ connection
        if not self.mainWindow.conected:
            self._show_error("CyDAQ is not connected! You cannot edit this setting.")

    def _show_error(self, message):
        """Private method to just show an error message box with a custom message"""
        errorbox = QMessageBox(self)
        errorbox.setWindowTitle("Error")
        errorbox.setText(message)
        errorbox.setIcon(QMessageBox.Critical)
        errorbox.exec()

    def _show_message(self, title, message, subtext=None):
        """Private method to just show an info message box with a custom message"""
        messagebox = QMessageBox(self)
        messagebox.setWindowTitle(title)
        messagebox.setText(message)
        messagebox.setInformativeText(subtext)
        messagebox.setIcon(QMessageBox.Information)
        messagebox.exec()