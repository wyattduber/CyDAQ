import sys
import traceback
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *

class CyDAQModeWidget:
    """Parent class for all widgets. Holds methods they will all use."""

    def runInWorkerThread(self, func, func_args=None, func_kwargs=None, result_func=None, progress_func=None,
                          finished_func=None, error_func=None):
        """
        Run a function with optional args and kwargs in a seperate thread. The calling class must have self.threadpool created already. 

        The following callback functions can be optinally specified to handle specific scenarios during/after the function's execution.
        result_func: Is called with one parameter, the return value of func, when it has sucessfully completed execution
        progress_func: Is called when func emits a progress signal
        finished_func: Is called when func is finished executing
        error_func: Is called with three parameters, exctype, value, and traceback, if func throws an exception

        The following template can be used:
        self.runInWorkerThread(
            function, 
            func_args=None,
            result_func=None, 
            progress_func=None, 
            finished_func=None, 
            error_func=None
        )
        """
        if func_kwargs is None:
            func_kwargs = {}
        worker = Worker(func, func_args, **func_kwargs)
        if result_func is not None:
            worker.signals.result.connect(result_func)
        if progress_func is not None:
            worker.signals.progress.connect(progress_func)
        if finished_func is not None:
            worker.signals.finished.connect(finished_func)
        if error_func is not None:
            worker.signals.error.connect(error_func)
        self.threadpool.start(worker)

    def showError(self, message):
        """Show a simple error message in the middle of the parent window"""
        print(message)
        dlg = QMessageBox(self)
        dlg.setWindowTitle("Error")
        dlg.setText(message)
        dlg.setIcon(QMessageBox.Critical)
        dlg.exec()

    def showInfo(self, message):
        """Show a simple message in the middle of the parent window"""
        print(message)
        dlg = QMessageBox(self)
        dlg.setWindowTitle("Error")
        dlg.setText(message)
        dlg.setIcon(QMessageBox.Information)
        dlg.exec()


class WorkerSignals(QObject):
    """
    Defines the signals available from a running worker thread.

    Supported signals are:
    finished: No data
    error: tuple (exctype, value, traceback.format_exc() )
    result: object data returned from processing, anything
    progress: int indicating % progress
    """
    finished = pyqtSignal()
    error = pyqtSignal(tuple)
    result = pyqtSignal(object)
    progress = pyqtSignal(int)

class Worker(QRunnable):
    """
    A worker thread that handles execution of a function with optional arguments.

    Emits a WorkerSignal based on the execution of the function. 
    """

    def __init__(self, fn, args, **kwargs):
        super(Worker, self).__init__()
        # print("__init__: ", "args: ", args, " kwargs: ", kwargs)

        # Store constructor arguments (re-used for processing)
        self.fn = fn
        self.args = args
        self.kwargs = kwargs
        self.signals = WorkerSignals()

        # Add the callback to our kwargs
        self.kwargs['progress_callback'] = self.signals.progress

    @pyqtSlot()
    def run(self):
        """Initialise the runner function with passed args, kwargs."""

        # Retrieve args/kwargs here; and fire processing using them
        # print("fn: ", self.fn, " args: ", self.args, " kwargs: ", self.kwargs)
        try:
            if self.args is None:
                result = self.fn(**self.kwargs)
            else:
                result = self.fn(self.args, **self.kwargs)  # Run the function
        except:
            # traceback.print_exc()
            exectype, value = sys.exc_info()[:2]
            self.signals.error.emit((exectype, value, traceback.format_exc()))
        else:
            self.signals.result.emit(result)  # Return the result of the processing
        finally:
            self.signals.finished.emit()  # Done
