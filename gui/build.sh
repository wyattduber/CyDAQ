#!/bin/bash

export PATH=$PATH://my.files.iastate.edu/Profiles/$(whoami)/AppData/Roaming/Python/Python38/Scripts

pyuic5.exe qtdesigner/BasicOperation.ui -o BasicOperation.py
pyuic5.exe qtdesigner/MainWindow.ui -o MainWindow.py 
pyuic5.exe qtdesigner/DacModeWidget.ui -o DacModeWidget.py
pyuic5.exe qtdesigner/SamplingRateWidget.ui -o SamplingRateWidget.py
pyrcc5 qtdesigner/main_window.qrc -o main_window_rc.py