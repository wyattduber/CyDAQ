#!/bin/bash

export PATH=$PATH://my.files.iastate.edu/Profiles/$(whoami)/AppData/Roaming/Python/Python38/Scripts

python -m PyQt5.uic.pyuic qtdesigner/BasicOperation.ui -o BasicOperation.py
python -m PyQt5.uic.pyuic qtdesigner/BalanceBeam.ui -o BalanceBeam.py
python -m PyQt5.uic.pyuic qtdesigner/MainWindow.ui -o MainWindow.py 
python -m PyQt5.uic.pyuic qtdesigner/DacModeWidget.ui -o DacModeWidget.py
python -m PyQt5.uic.pyuic qtdesigner/SamplingGenerationStart.ui -o SamplingGenerationStart.py
python -m PyQt5.uic.pyuic qtdesigner/ModeSelectorWidget.ui -o ModeSelectorWidget.py

python -m PyQt5.pyrcc_main  qtdesigner/main_window.qrc -o main_window_rc.py
python -m PyQt5.pyrcc_main  qtdesigner/basic_operation.qrc -o basic_operation_rc.py
python -m PyQt5.pyrcc_main  qtdesigner/balance_beam.qrc -o balance_beam_rc.py
