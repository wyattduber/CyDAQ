from PyQt5 import QtWidgets
from generated.ConnectionWidgetUI import Ui_ConnectionWidget

class ConnectionWidget(QtWidgets.QWidget, Ui_ConnectionWidget):
    def __init__(self):
        super(ConnectionWidget, self).__init__()
        self.setupUi(self)
        # self.show()
