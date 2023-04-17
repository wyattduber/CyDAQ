# PyQt5 Packages
from PyQt5 import QtWidgets

# Stuff From Project - May show as an error but it works
from generated.ModeSelectorWidgetUI import Ui_ModeSelectorWidget


class ModeSelectorWidget(QtWidgets.QWidget, Ui_ModeSelectorWidget):
    """Starter widget that allows the user to switch between all other generated"""

    def __init__(self, mainWindow, cyDAQModeWidget):
        super(ModeSelectorWidget, self).__init__()
        self.setupUi(self)

        self.mainWindow = mainWindow
        self.cyDAQModeWidget = cyDAQModeWidget

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper

        ### Mode Selector Buttons and what they do when clicked ###

        basicOperationButton = self.basic_operation_btn
        basicOperationButton.setCheckable(True)
        basicOperationButton.setText("Basic Operation")
        basicOperationButton.clicked.connect(lambda: self.mainWindow.switchToBasicOperation())

        balanceBeamButton = self.balance_beam_btn
        balanceBeamButton.setCheckable(True)
        balanceBeamButton.setText("Balance Beam")
        balanceBeamButton.clicked.connect(lambda: self.mainWindow.switchToBalanceBeam())

        # TODO disabled for lab testing
        # liveStreamButton = self.livestream_btn
        # liveStreamButton.setCheckable(True)
        # liveStreamButton.setText("Plotter")
        # liveStreamButton.clicked.connect(lambda: self.mainWindow.switchToLiveStream(False))

    # These do nothing since the mode selector window doesn't have a status
    # Necessary for app to function since the cydaq ping method is called on every window
    def cyDaqConnected(self):
        """When CyDAQ changes from disconnected to connected"""

    def cyDaqDisconnected(self):
        """When CyDAQ changes from connected to disconnected"""
