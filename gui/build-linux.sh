#!/bin/bash

pyuic5 qtdesigner/BasicOperation.ui -o BasicOperation.py
pyuic5 qtdesigner/MainWindow.ui -o MainWindow.py 
pyuic5 qtdesigner/DacModeWidget.ui -o DacModeWidget.py
pyuic5 qtdesigner/SamplingGenerationStart.ui -o SamplingGenerationStart.py

pyrcc5 qtdesigner/main_window.qrc -o main_window_rc.py