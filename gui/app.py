import sys
from PyQt5 import QtWidgets, uic

from MainWindow import Ui_MainWindow


class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.setupUi(self)

        button = self.basic_operation_btn
        button.setCheckable(True)
        button.clicked.connect(self.was_clicked)

    def was_clicked(self):
        print('you clicked basic operation mode!')


app = QtWidgets.QApplication(sys.argv)

window = MainWindow()
window.show()
app.exec()

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
