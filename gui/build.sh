#!/bin/bash

export PATH=$PATH://my.files.iastate.edu/Profiles/$(whoami)/AppData/Roaming/Python/Python38/Scripts

pyuic5.exe qtdesigner/BasicOperation.ui -o BasicOperation.py
pyuic5.exe qtdesigner/MainWindow.ui -o MainWindow.py 
pyuic5.exe qtdesigner/DacModeWidget.ui -o DacModeWidget.py
pyuic5.exe qtdesigner/SamplingGenerationStart.ui -o SamplingGenerationStart.py

pyrcc5.exe qtdesigner/main_window.qrc -o main_window_rc.py
pyrcc5.exe qtdesigner/basic_operation.qrc -o basic_operation_rc.py
