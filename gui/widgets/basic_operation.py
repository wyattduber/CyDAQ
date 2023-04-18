# Standard Python Packages
import os
import re
import time
import json
import shutil
from waiting import wait
from threading import Thread

# PyQt5 Packages
from PyQt5 import QtWidgets
from PyQt5.QtGui import QIntValidator
from PyQt5.QtGui import QDoubleValidator
from PyQt5.QtWidgets import QFileDialog
from PyQt5.QtWidgets import QMessageBox

# Stuff From Project - May show as an error but it works
from generated.BasicOperationWidgetUI import Ui_BasicOpetaionWidget

# Constants
DEFAULT_SAVE_LOCATION = "U:\\"


class BasicOperationModeWidget(QtWidgets.QWidget, Ui_BasicOpetaionWidget):
    """Basic operation mode window. Allows for basic sampling of data with basic filters and presets. """

    def __init__(self, mainWindow, cyDAQModeWidget):
        super(BasicOperationModeWidget, self).__init__()
        self.setupUi(self)

        self.mainWindow = mainWindow
        self.cyDAQModeWidget = cyDAQModeWidget

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper

        # Some flag booleans to determine what mode the basic operation mode is in
        self.sampling = False
        self.writing = False
        self.shouldTimeout = False
        self.filename = None
        self.temp_filename = None
        self.file_error = True  # Start true then change later if successful

        ### Below are the methods called when buttons are pressed ###

        # Home Button
        self.home_btn.clicked.connect(lambda: self.pre_btn_check("home"))

        # Bottom Buttons
        self.send_config_btn.clicked.connect(lambda: self.pre_btn_check("send_config_only"))

        # Sample Rate
        self.sample_rate_max_btn.clicked.connect(
            lambda: self.sample_rate_input_box.setEditText(self.sample_rate_max_btn.text().replace(',', '')))
        self.sample_rate_min_btn.clicked.connect(
            lambda: self.sample_rate_input_box.setEditText(self.sample_rate_min_btn.text()))

        # Sample Rate Input Validation
        validator = QDoubleValidator(100, 50000, 4)
        self.sample_rate_input_box.setValidator(validator)

        # Corners
        self.low_corner_min_btn.clicked.connect(
            lambda: self.low_corner_input.setText(self.low_corner_min_btn.text().replace(',', '')))
        self.low_corner_max_btn.clicked.connect(
            lambda: self.low_corner_input.setText(self.low_corner_max_btn.text().replace(',', '')))
        self.mid_corner_min_btn.clicked.connect(
            lambda: self.mid_corner_input_box.setEditText(self.mid_corner_min_btn.text().replace(',', '')))
        self.mid_corner_max_btn.clicked.connect(
            lambda: self.mid_corner_input_box.setEditText(self.mid_corner_max_btn.text().replace(',', '')))
        self.high_corner_min_btn.clicked.connect(
            lambda: self.high_corner_input.setText(self.high_corner_min_btn.text().replace(',', '')))
        self.high_corner_max_btn.clicked.connect(
            lambda: self.high_corner_input.setText(self.high_corner_max_btn.text().replace(',', '')))

        # Corner Input Validation
        validator = QDoubleValidator(200, 20000, 4)
        self.low_corner_input.setValidator(validator)

        validator = QDoubleValidator(200, 40000, 4)
        self.mid_corner_input_box.setValidator(validator)

        validator = QDoubleValidator(2000, 40000, 4)
        self.high_corner_input.setValidator(validator)

        validator = QIntValidator(0, 9999)
        self.sampling_time_input.setValidator(validator)

        # Sampling
        self.start_stop_sampling_btn.clicked.connect(lambda: self.pre_btn_check("start_stop_sampling"))

        def onFilterChange():
            midCorner = [
                self.mid_corner_label,
                self.lessThan1,
                self.lessThan2,
                self.mid_corner_input_box,
                self.mid_corner_max_btn,
                self.mid_corner_min_btn,
            ]

            lowHighCorner = [
                self.low_corner_label,
                self.label_3,
                self.label_2,
                self.low_corner_input,
                self.low_corner_max_btn,
                self.low_corner_min_btn,
                self.high_corner_label,
                self.label_4,
                self.label_5,
                self.high_corner_input,
                self.high_corner_max_btn,
                self.high_corner_min_btn,
            ]

            if self.filter_input_box.currentIndex() == 0 or self.filter_input_box.currentIndex() == 1:
                for hide in midCorner:
                    hide.hide()
                for hide in lowHighCorner:
                    hide.hide()

            elif self.filter_input_box.currentIndex() == 6 or self.filter_input_box.currentIndex() == 7:
                for hide in midCorner:
                    hide.hide()
                for show in lowHighCorner:
                    show.show()

            else:
                for show in midCorner:
                    show.show()
                for hide in lowHighCorner:
                    hide.hide()

        self.filter_input_box.currentIndexChanged.connect(onFilterChange)
        onFilterChange()

    def cyDaqConnected(self):
        """When CyDAQ changes from disconnected to connected"""
        self.connection_status_label.setText("CyDAQ Status: Connected!")

    def cyDaqDisconnected(self):
        """When CyDAQ changes from connected to disconnected"""
        self.connection_status_label.setText("CyDAQ Status: Not Connected!")

    def writingData(self):
        """When the cyDAQ is sending data to the frontend, and it's writing it to a file."""
        self.writing = True
        self.mainWindow.pingTimer.stop()
        self.start_stop_sampling_btn.setText("Writing...")

    def writingDataFinished(self):
        """When the cyDAQ is finished writing data."""
        print("writing data finished")
        # Adds the filename to the plotter window for ease of use
        # self.mainWindow.livestream.infile_line.setText(self.filename)
        self.writing = False
        self.mainWindow.startPingTimer()
        self.start_stop_sampling_btn.setText("Start")

        Thread(target=self.copyTempFile).start()

    def copyTempFile(self):
        """
        When the temp file is done being written to and the new filename
        is input, copy the tmp file contents over and remove the old one.
        """
        # Wait to make sure that the filename has actually been entered
        wait(lambda: self.filename != "" and self.filename is not None)

        # Put a few checks here for if file is not writeable
        # This will throw an exception if the file is not writeable
        # It will append the file in the same place as the original filename with a _1 appended
        # If there is already a _#, it will then append _#+1 to new file
        try:
            if os.path.exists(self.filename):
                open(self.filename, 'w')
        except PermissionError:
            self.filename = self.filename.replace('.csv', '_1.csv')

        # Copy the temp file over to the new one
        shutil.copyfile(self.temp_filename, self.filename)

        # Delete the old temp file
        os.remove(self.temp_filename)

        # Reset the temp filename and the existing filename
        # Causes an ask for filename every sample
        self.filename = self.temp_filename = None

    # Function to get the data from the GUI and format it into a JSON Dictionary
    # Each try/catch statement is to determine if the input is in scientific notation
    # If so, and the input is exceedingly high (returns "inf") then just set it to a num higher than the max
    def getData(self):
        # Temporary Dictionary
        tmp_dict = {}

        try:
            tmp = "{:.0f}".format(float(self.sample_rate_input_box.currentText()))
            if tmp == "inf":
                tmp_dict["Sample Rate"] = "99999999"
            else:
                tmp_dict["Sample Rate"] = tmp
        except ValueError:
            tmp_dict["Sample Rate"] = "0"

        tmp_dict["Input"] = self.input_input_box.currentText()
        tmp_dict["Filter"] = self.filter_input_box.currentText()

        try:
            tmp = "{:.0f}".format(float(self.high_corner_input.text()))
            if tmp == "inf":
                tmp_dict["Upper Corner"] = "99999999"
            else:
                tmp_dict["Upper Corner"] = tmp
        except ValueError:
            tmp_dict["Upper Corner"] = "0"

        try:
            tmp = "{:.0f}".format(float(self.mid_corner_input_box.currentText()))
            if tmp == "inf":
                tmp_dict["Mid Corner"] = "99999999"
            else:
                tmp_dict["Mid Corner"] = tmp
        except ValueError:
            tmp_dict["Mid Corner"] = "0"

        try:
            tmp = "{:.0f}".format(float(self.low_corner_input.text()))
            if tmp == "inf":
                tmp_dict["Lower Corner"] = "99999999"
            else:
                tmp_dict["Lower Corner"] = tmp
        except ValueError:
            tmp_dict["Lower Corner"] = "0"

        tmp_dict["Sampling Time"] = self.sampling_time_input.text() or 0

        return tmp_dict

    def timeout(self):
        time.sleep(float(self.sampling_time_input.text()))

        # Check if timer was already stopped
        if self.shouldTimeout is False:
            print("Sampling already stopped, timeout cancelled")
            return

        print(f"{self.sampling_time_input.text()}s reached, timeout")
        self.stop_sampling()

    def pre_btn_check(self, btn):
        """
        When a button is pressed, check the various conditions
        that need to be met for each button to work properly
        """
        # First, buttons that don't require an active CyDAQ connection
        if btn == "home":
            if self.sampling:
                self.stop_sampling()
            self.mainWindow.switchToModeSelector()

        # Now handle that commands that require an active CyDAQ connection
        if not self.mainWindow.connected:
            self._show_error("CyDAQ is not Connected!")
            return

        # Send start/stop sample command
        if btn == "start_stop_sampling":
            self.startStopSampling()

        # Now check if already sampling
        if self.sampling:
            self._show_error("You cannot send the config when already sampling!")

        # Send the config only
        if btn == "send_config_only":
            self.send_config_only()

    def stop_sampling(self):
        self.shouldTimeout = False
        self.sampling = False

        # Set the filename to a temp filename in the user's temp directory for writing
        self.temp_filename = 'C:\Temp\sample_{}.csv'.format(time.strftime('%Y%m%d-%H%M%S'))

        self.writingData()

        # Then tell the cydaq to stop sampling and writing to a temp file
        # This will happen while the user is working on the actual filename 
        self.cyDAQModeWidget.runInWorkerThread(
            self,
            func=self.wrapper.stop_sampling,
            func_args=self.temp_filename,
            finished_func=self.writingDataFinished,
            error_func=lambda x: self.mainWindow.showError(str(x[1]))
        )

        # Get the filename after the user stopped sampling
        options = QFileDialog.Options()
        self.filename, _ = QFileDialog.getSaveFileName(self, "Pick a location to save the sample!",
                                                       DEFAULT_SAVE_LOCATION, "CSV Files (*.csv);;MATLAB Files (*.mat)",
                                                       options=options)
        if self.filename.strip() == "":  # no file chosen
            self.filename = self.temp_filename

    # Method that is run both to start and stop sampling
    # Runs in a worker thread to keep the GUI from freezing and to allow use of other features
    # Allows for the user to input a pre-determined time to sample for or just click when to start/stop
    def startStopSampling(self):
        if not self.mainWindow.connected:
            return

        if self.writing:
            return

        if not self.sampling:
            """ start sampling """

            # validate input
            wrong = self.validateInput()
            self.updateWrongs(wrong)
            s = ""
            for title, message in wrong.items():
                if message != "":
                    s += title + ": " + message + "\n"
            if s != "":
                self.showInfo(s)
                return

            def handleError(x):
                self.startSamplingError = True
                self.mainWindow.showError(x[2])

            def step1():
                if self.startSamplingError:
                    return
                self.cyDAQModeWidget.runInWorkerThread(
                    self,
                    func=self.wrapper.send_config_to_cydaq,
                    finished_func=step2,
                    error_func=handleError
                )

            def step2():
                if self.startSamplingError:
                    return
                self.sampling = True
                self.mainWindow.stopPingTimer()
                self.cyDAQModeWidget.runInWorkerThread(
                    self,
                    func=self.wrapper.start_sampling,
                    finished_func=step3,
                    error_func=handleError
                )

            def step3():
                if self.startSamplingError:
                    self.sampling = False
                    self.filename = None
                    return
                self.start_stop_sampling_btn.setText("Stop")

            self.startSamplingError = False

            self.cyDAQModeWidget.runInWorkerThread(
                self,
                func=self.wrapper.set_values,
                func_args=json.dumps(self.getData()),
                finished_func=step1,
                error_func=handleError
            )

            # Start timeout, if number given
            try:
                if self.sampling_time_input.text() != "":
                    if float(self.sampling_time_input.text()) > 0:
                        self.shouldTimeout = True
                        Thread(target=self.timeout).start()
            except:
                print("There was an exception!")

        else:
            # Stop sampling
            self.stop_sampling()

    # Validate configuration and populate a return dictionary with any error messages
    # An empty string means there is no error
    def validateInput(self):
        data = self.getData()
        wrong = {"Sample Rate": "",
                 "Upper Corner": "",
                 "Mid Corner": "",
                 "Lower Corner": ""}

        # Sample Rate
        if data.get('Sample Rate') is None or data.get('Sample Rate') == "":
            wrong.update({"Sample Rate": "Field cannot be empty."})
        elif int(data.get('Sample Rate').replace(',', '')) > 50000 or int(
                data.get('Sample Rate').replace(',', '')) < 100:
            wrong.update({
                "Sample Rate": f"{str(int(data.get('Sample Rate').replace(',', '')))} is an invalid input for the Sample "
                               f"Rate! Must be 100 ≤ x ≤ 50000."})
        else:
            wrong.update({"Sample Rate": ""})

        filter_val = data.get("Filter")
        filters = [
            "All Pass",
            "60 hz Notch",
            "1st Order High Pass",
            "1st Order Low Pass",
            "6th Order High Pass",
            "6th Order Low Pass",
            "2nd Order Band Pass",
            "6th Order Band Pass"
        ]
        # Mid Corner
        if filter_val in filters[2: 6]:  # 1st and 6th Order High/Low Pass
            if data.get('Mid Corner') is None or data.get('Mid Corner') == "":
                wrong.update({"Mid Corner": "Field cannot be empty."})
            elif int(data.get('Mid Corner').replace(',', '')) > 40000 or int(
                    data.get('Mid Corner').replace(',', '')) < 100:
                wrong.update({
                    "Mid Corner": f"{str(int(data.get('Mid Corner').replace(',', '')))} is an invalid input "
                                  f"for the Mid Corner! Must be 100 ≤ x ≤ 40000."})
            else:
                wrong.update({"Mid Corner": ""})

        # Low Corner
        if filter_val in filters[6:8]:  # 2nd and 6th Order Band Pass
            if data.get('Lower Corner') is None or data.get('Lower Corner') == "":
                wrong.update({"Lower Corner": "Field cannot be empty."})
            elif int(data.get('Lower Corner').replace(',', '')) > 20000 or int(
                    data.get('Lower Corner').replace(',', '')) < 100:
                wrong.update({
                    "Lower Corner": f"{str(int(data.get('Lower Corner').replace(',', '')))} is an invalid "
                                    f"input for the Low Corner! Must be 100 ≤ x ≤ 20000."})
            else:
                wrong.update({"Lower Corner": ""})

        # High Corner
        if filter_val in filters[6:8]:  # 2nd and 6th Order Band Pass
            if data.get('Upper Corner') is None or data.get('Upper Corner') == "":
                wrong.update({"Upper Corner": "Field cannot be empty."})
            elif int(data.get('Upper Corner').replace(',', '')) > 40000 or int(
                    data.get('Upper Corner').replace(',', '')) < 2000:
                wrong.update({
                    "Upper Corner": f"{str(int(data.get('Upper Corner').replace(',', '')))} is an invalid "
                                    f"input for the Mid Corner! Must be 2000 ≤ x ≤ 40000."})
            else:
                wrong.update({"Upper Corner": ""})

        return wrong

    # If there is anything wrong with the inputs, show it on the GUI
    # Updates each individual field if the input in question is invalid in red
    # If the input is correct, or was fixed and another input is incorrect, then adjust them as such
    def updateWrongs(self, wrong):
        wrong_dict = {
            "Sample Rate": lambda: self.sample_rate_input_box.setStyleSheet("background: rgb(247, 86, 74);"),
            "Lower Corner": lambda: self.low_corner_input.setStyleSheet("background: rgb(247, 86, 74);"),
            "Mid Corner": lambda: self.mid_corner_input_box.setStyleSheet("background: rgb(247, 86, 74);"),
            "Upper Corner": lambda: self.high_corner_input.setStyleSheet("background: rgb(247, 86, 74);")
        }

        right_dict = {
            "Sample Rate": lambda: self.sample_rate_input_box.setStyleSheet("background: rgb(217, 217, 217);"),
            "Lower Corner": lambda: self.low_corner_input.setStyleSheet("background: rgb(217, 217, 217);"),
            "Mid Corner": lambda: self.mid_corner_input_box.setStyleSheet("background: rgb(217, 217, 217);"),
            "Upper Corner": lambda: self.high_corner_input.setStyleSheet("background: rgb(217, 217, 217);")
        }

        for i in wrong.keys():
            if wrong.get(i) == "":
                right_dict.get(i)()
            else:
                wrong_dict.get(i)()

    # If the CyDAQ is to be used in a circuit or as a filter, send only the config
    # Still validates input, but just sends the config to the CyDAQ and implements it
    def send_config_only(self):
        # Changing the button
        if not self.mainWindow.connected or self.writing or self.sampling:
            return

        # validate input
        wrong = self.validateInput()
        self.updateWrongs(wrong)
        s = ""
        for title, message in wrong.items():
            if message != "":
                s += title + ": " + message + "\n"
        if s != "":
            self.showInfo(s)
            return

        def resetSendConfigBtn():
            print("Resetting Config Button!")
            time.sleep(2)
            self.send_config_btn.setText("Send Config")
            self.send_config_btn.setStyleSheet("#send_config_btn"
                                               "{"
                                               "color: #033f63;"
                                               "background-color: #d9d9d9;"
                                               "border: 1px solid #033f63;"
                                               "}")

        # send config
        self.wrapper.set_values(json.dumps(self.getData()))
        self.wrapper.send_config_to_cydaq()
        print(self.wrapper.get_config())
        send_config = self.send_config_btn
        send_config.setText("Config Sent")
        send_config.setStyleSheet("#send_config_btn"
                                  "{"
                                  "background-color: #0ead69;"
                                  "border-color: #0ead69;"
                                  "color: #02324F;"
                                  "}")
        Thread(target=resetSendConfigBtn).start()
        # TODO Eventual feedback from CyDAQ that config was received and successfully implemented

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
