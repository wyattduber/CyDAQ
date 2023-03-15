from PyQt5 import QtCore, QtGui, QtWidgets


class CompanyCommanderLogin(QtWidgets.QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)

        self.groupbox = QtWidgets.QGroupBox(self.tr("Login"))
        self.company_cb = QtWidgets.QComboBox()
        sp = self.company_cb.sizePolicy()
        sp.setHorizontalPolicy(QtWidgets.QSizePolicy.Expanding)
        self.company_cb.setSizePolicy(sp)
        self.xlocation_le = QtWidgets.QLineEdit()
        self.ylocation_le = QtWidgets.QLineEdit()
        self.login_button = QtWidgets.QPushButton(self.tr("Login"))
        self.login_button.setStyleSheet(
            "background-color: rgb(0, 209, 255);\n"
            "color: rgb(255, 255, 255);\n"
            "background-color: rgb(0, 0, 127);"
        )

        font = self.font()
        font.setPointSize(9)
        self.setFont(font)

        central_widget = QtWidgets.QWidget()
        self.setCentralWidget(central_widget)
        lay = QtWidgets.QVBoxLayout(central_widget)
        lay.addWidget(self.groupbox)

        flay = QtWidgets.QFormLayout()

        flay.addRow(
            self.tr("Company Number:"), self.company_cb,
        )
        flay.addRow(
            self.tr("X Location:"), self.xlocation_le,
        )
        flay.addRow(
            self.tr("Y Location:"), self.ylocation_le,
        )

        lay = QtWidgets.QVBoxLayout()
        lay.addLayout(flay)
        lay.addWidget(self.login_button, alignment=QtCore.Qt.AlignHCenter)
        lay.addStretch()
        self.groupbox.setLayout(lay)


if __name__ == "__main__":
    import sys

    if hasattr(QtCore.Qt, "AA_EnableHighDpiScaling"):
        QtCore.QCoreApplication.setAttribute(QtCore.Qt.AA_EnableHighDpiScaling)

    app = QtWidgets.QApplication(sys.argv)
    w = CompanyCommanderLogin()
    w.show()
    sys.exit(app.exec_())