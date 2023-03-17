# Standard Python Packages
import csv
import time
from typing import Union
from threading import Thread

# PyQt5 Packages
from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QFileDialog, QMessageBox, QWidget, QGridLayout

# pglive Packages for LiveStreaming
from pglive.kwargs import Axis
from pglive.sources.data_connector import DataConnector
from pglive.sources.live_axis import LiveAxis
from pglive.sources.live_plot import LiveLinePlot
from pglive.sources.live_plot import LiveScatterPlot
from pglive.sources.live_plot_widget import LivePlotWidget

# Stuff From Project - May show as an error but it works
from generated.LiveStreamUI import Ui_live_stream

# Constants
DEFAULT_SAVE_LOCATION = "U:\\"
CONVERT_SEC_TO_MS = 1000


class LiveStreamModeWidget(QtWidgets.QMainWindow, Ui_live_stream):
    running = False
    in_thread = False
    window = None
    file_name = ""
    came_from_basic = False

    """ 
    Widget that allows for the live plotting of sampled data that is received from the CyDAQ.
    As it stands now, this widget only inputs an already written sample file and plots it live. 
    It will eventually be used to livestream the data from the CyDAQ directly as it is sampled, 
    and then will have the option to save it in a file or discard it. 
    """

    def __init__(self, mainWindow, cyDAQModeWidget):
        super(LiveStreamModeWidget, self).__init__()
        self.setupUi(self)

        self.mainWindow = mainWindow
        self.cyDAQModeWidget = cyDAQModeWidget

        # Share resources from main window
        self.threadpool = self.mainWindow.threadpool
        self.wrapper = mainWindow.wrapper

        ### Below are the methods called when buttons are pressed ###

        # Home Button
        self.home_btn.clicked.connect(self.home)

        # Widget Buttons
        self.start_btn.clicked.connect(self.start_graph)
        self.choose_file_btn.clicked.connect(self.chooseFile)
        self.clear_btn.clicked.connect(self.clear)
        self.pause_btn.clicked.connect(self.pause)
        self.reload_btn.clicked.connect(self.reload)

    # CyDAQ Connection Label
    # Pinged every second to confirm if the CyDAQ is connected (allows hotplugging)
    def cyDaqConnected(self):
        """When CyDAQ changes from disconnected to connected"""
        self.connection_status_label.setText("CyDAQ Status: Connected!")
        pass

    def cyDaqDisconnected(self):
        """When CyDAQ changes from connected to disconnected"""
        self.connection_status_label.setText("CyDAQ Status: Not Connected!")
        pass

    # Called to open the plotter window
    # Called when user switches to livestream window or resets the graph
    @staticmethod
    def show_window(self):
        if self.window is None:
            self.window = LiveStreamGraph()
            self.window.setWindowTitle("CyDAQ Live Plotting Graph")
            self.window.show()
        else:
            self.window.show()

    # Button to either accept the user-entered filename
    # or give the user the option to find a file on the system with the windows file box
    def chooseFile(self):
        # get file save location
        if self.infile_line.text() != "":
            self.file_name = self.infile_line.text()
            return
        options = QFileDialog.Options()
        self.file_name, _ = QFileDialog.getOpenFileName(self, "Pick a file!",
                                                        DEFAULT_SAVE_LOCATION, "CSV Files (*.csv);;",
                                                        options=options)
        print("filename: |", self.file_name, "|")
        if self.file_name.strip() == "":  # no file chosen
            return
        self.infile_line.setText(self.file_name)
        self.infile_line.setStyleSheet("background: rgb(217, 217, 217);")

    # Calls the start_app method in the child plotter window
    # Starts live plotting with the file send from the UI
    def start_graph(self):

        # Check if the window is already plotting or has plotted
        if self.window.running or self.window.plotted:
            return

        # Check for filename and validity of filename
        if self.file_name == "":
            self.chooseFile()
            return
        elif self.file_name is None:
            self.filename_wl.setText("Invalid Filename!")
            self.infile_line.setStylesheet("background: rgb(247, 86, 74);")
            return

        # Once everything is validated, start plotting the actual graph
        self.filename_wl.setText("")
        self.infile_line.setStyleSheet("background: rgb(217, 217, 217);")
        self.start_btn.setText("Running...")
        self.start_btn.setCheckable(False)
        self.reload_btn.setCheckable(False)
        self.window.start_app(self.file_name, int(self.speed_slider.value()), self.graph_type_dropdown.currentText())
        self.cyDAQModeWidget.runInWorkerThread(
            self,
            func=self.updateSpeed,
            finished_func=self.finishedStartBtn,
            error_func=self.mainWindow.showError
        )

    # Pause live plotting
    def pause(self):
        if self.window.running:
            if self.window.pause is True:
                self.window.pause = False
                self.pause_btn.setText("Pause")
            else:
                self.window.pause = True
                self.pause_btn.setText("Resume")

    # Return to the home page
    # Removes the graph window as it's not longer needed on another page
    def home(self):
        self.window.running = False
        self.window.in_thread = False
        self.window.close()
        self.window = None
        if self.came_from_basic:
            self.mainWindow.switchToBasicOperation()
        else:
            self.mainWindow.switchToModeSelector()

    # Changes the buttons back to their non-running state
    def finishedStartBtn(self):
        self.start_btn.setText("Start")
        self.start_btn.setCheckable(True)
        self.pause_btn.setText("Pause")
        self.reload_btn.setCheckable(True)

    # Clears the graph
    def clear(self):
        self.finishedStartBtn()
        self.window.clear()

    # Changes the speed at which the points are plotted
    # Not working at the moment
    def updateSpeed(self):
        while self.window.running:
            pass
        self.finishedStartBtn()

    # Clears and reopens the graph window to reset any issues with it
    def reload(self):
        if not self.window.running:
            self.window.running = False
            self.window.in_thread = False
            self.window.plotted = False
            self.window.close()
            self.window = None
            self.show_window(self)
            self.finishedStartBtn()

    # Custom-defined close event to make sure the graph isn't
    # Accidentally closed when currently plotting
    def closeEvent(self, event):
        if self.running:
            close = QMessageBox.question(self,
                                         "Close Graph",
                                         "Really Close Graph While Plotting?",
                                         QMessageBox.Yes | QMessageBox.No)
            if close == QMessageBox.Yes:
                self.running = False
                self.window.running = False
                self.window.in_thread = False
                self.window.clearMask()
                self.window.clearFocus()
                self.window.close()
                event.accept()
            else:
                event.ignore()


class LiveStreamGraph(QWidget):
    running = False
    in_thread = False
    filename = ""
    speed = 0
    chart_view = None
    pause = False
    plotType = ""
    thread = None
    parent = None
    plotted = False

    def __init__(self, parent=None):
        # super().__init__(parent)
        super(LiveStreamGraph, self).__init__()

        self.mid_connector = None
        self.low_connector = None
        self.high_connector = None
        self.low_plot = None
        self.high_plot = None
        self.mid_plot = None
        layout = QGridLayout(self)
        self.low_sample: Union[float, None] = 0.2
        self.high_sample: Union[float, None] = 0.3
        self.parent = parent

        # Setup bottom axis with TIME tick format
        bottom_axis = LiveAxis("bottom", **{Axis.TICK_FORMAT: Axis.TIME})

        # Create plot itself
        self.chart_view = LivePlotWidget(title="Line Plot - CyDAQ Data Sample", axisItems={'bottom': bottom_axis})

        # Create one curve per dataset & add them to the view
        # self.gen_plots()

        # Show grid
        self.chart_view.showGrid(x=True, y=True, alpha=0.3)

        # Set labels
        self.chart_view.setLabel('bottom', 'Time', units="s")
        self.chart_view.setLabel('left', 'Samples')

        # Using -1 to span through all rows available in the window
        layout.addWidget(self.chart_view)

    def update(self):

        print("Started!")

        with open(self.filename, 'r') as file:
            csvreader = csv.reader(file)

            for row in csvreader:
                if self.running is False:
                    return

                # If paused, just spin in a loop and do nothing until un-paused
                while self.pause is True:
                    pass

                timestamp = float(row[0])
                mid_px = float(row[1])

                self.mid_connector.cb_append_data_point(mid_px, timestamp)
                self.low_connector.cb_append_data_point(self.low_sample, timestamp)
                self.high_connector.cb_append_data_point(self.high_sample, timestamp)

                # print(f"epoch: {timestamp}, mid: {mid_px:.2f}")
                time.sleep((self.speed / CONVERT_SEC_TO_MS))
        self.running = False
        self.in_thread = False
        self.plotted = True

    def start_app(self, filename, speed, plotType):
        self.running = True
        self.filename = filename
        self.speed = speed
        self.plotType = plotType
        self.gen_plots()
        self.thread = Thread(target=self.update)
        self.thread.start()

    def clear(self):
        # Delete the plot lines from the graph
        self.chart_view.removeItem(self.mid_plot)
        self.chart_view.removeItem(self.low_plot)
        self.chart_view.removeItem(self.high_plot)

        # Nullify them so they lose their data
        self.mid_plot = None
        self.low_plot = None
        self.high_plot = None

        # Re-create them and re-add them to the graph
        self.gen_plots()

        # End thread in process and reset thread in memory
        self.running = False
        self.in_thread = False
        self.pause = False
        self.plotted = False
        self.thread = None

    def gen_plots(self):
        # Determine plotter type
        if self.plotType == "Line":
            self.mid_plot = LiveLinePlot(pen="green")
            self.low_plot = LiveLinePlot(pen="orange")
            self.high_plot = LiveLinePlot(pen="blue")
        elif self.plotType == "Scatter":
            self.mid_plot = LiveScatterPlot(pen="green")
            self.low_plot = LiveScatterPlot(pen="orange")
            self.high_plot = LiveScatterPlot(pen="blue")

        self.high_connector = DataConnector(self.high_plot)
        self.low_connector = DataConnector(self.low_plot)
        self.mid_connector = DataConnector(self.mid_plot)

        self.chart_view.addItem(self.mid_plot)
        self.chart_view.addItem(self.low_plot)
        self.chart_view.addItem(self.high_plot)

    def closeEvent(self, event):
        self.running = False
        self.in_thread = False
        self.pause = False
        self.plotted = False
        event.accept()
