#!/bin/bash

pyuic5 qtdesigner/BasicOperation.ui -o BasicOperation.py
pyuic5 qtdesigner/BalanceBeam.ui -o BalanceBeam.py
pyuic5 qtdesigner/LiveStream.ui -o LiveStream.py
pyuic5 qtdesigner/MainWindow.ui -o MainWindow.py
pyuic5 qtdesigner/Debug.ui -o Debug.py
pyuic5 qtdesigner/DacModeWidget.ui -o DacModeWidget.py
pyuic5 qtdesigner/SamplingGenerationStart.ui -o SamplingGenerationStart.py
pyuic5 qtdesigner/ModeSelectorWidget.ui -o ModeSelectorWidget.py

pyrcc5 qtdesigner/main_window.qrc -o main_window_rc.py
pyrcc5 qtdesigner/basic_operation.qrc -o basic_operation_rc.py
pyrcc5 qtdesigner/balance_beam.qrc -o balance_beam_rc.py