# PyQt5 Packages
from PyQt5 import QtWidgets

# Stuff From Project - May show as an error but it works
from generated.ModeSelectorWidgetUI import Ui_ModeSelectorWidget
from widgets.mode_widget import CyDAQModeWidget


class ModeSelectorWidget(QtWidgets.QWidget, Ui_ModeSelectorWidget, CyDAQModeWidget):
    """Starter widget that allows the user to switch between all other generated"""

    def __init__(self, mainWindow):
        super(ModeSelectorWidget, self).__init__()
        self.setupUi(self)

        self.mainWindow = mainWindow

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper

        ### Mode Selector Buttons and what they do when clicked ###

        basicOperationButton = self.basic_operation_btn
        basicOperationButton.setCheckable(True)
        basicOperationButton.setText("Basic Operation")
        basicOperationButton.clicked.connect(lambda: self.mainWindow.switchToBasicOperation())

        # TODO disabled for lab testing
        # liveStreamButton = self.livestream_btn
        # liveStreamButton.setCheckable(True)
        # liveStreamButton.setText("Plotter")
        # liveStreamButton.clicked.connect(lambda: self.mainWindow.switchToLiveStream(False))

        balanceBeamButton = self.balance_beam_btn
        balanceBeamButton.setCheckable(True)
        balanceBeamButton.setText("Balance Beam")
        balanceBeamButton.clicked.connect(lambda: self.mainWindow.switchToBalanceBeam())

        # TODO Disabled due to no DAC implementation yet
        # dacModeButton = self.external_adc_btn
        # dacModeButton.setCheckable(True)
        # dacModeButton.setText("External ADC")
        # dacModeButton.clicked.connect(lambda: self.mainWindow.switchToExternalADC())
