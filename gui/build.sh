#!/bin/bash

export PATH=$PATH://my.files.iastate.edu/Profiles/$(whoami)/AppData/Roaming/Python/Python38/Scripts

python -m PyQt5.uic.pyuic qtdesigner/BasicOperation.ui -o generated/BasicOperationUI.py
python -m PyQt5.uic.pyuic qtdesigner/BalanceBeam.ui -o generated/BalanceBeamUI.py
python -m PyQt5.uic.pyuic qtdesigner/LiveStream.ui -o generated/LiveStreamUI.py
python -m PyQt5.uic.pyuic qtdesigner/Debug.ui -o generated/DebugUI.py
python -m PyQt5.uic.pyuic qtdesigner/MainWindow.ui -o generated/MainWindowUI.py
python -m PyQt5.uic.pyuic qtdesigner/DacModeWidget.ui -o generated/DacModeWidgetUI.py
python -m PyQt5.uic.pyuic qtdesigner/SamplingGenerationStart.ui -o generated/SamplingGenerationStartUI.py
python -m PyQt5.uic.pyuic qtdesigner/ModeSelectorWidget.ui -o generated/ModeSelectorWidgetUI.py

python -m PyQt5.pyrcc_main  qtdesigner/main_window.qrc -o generated/main_window_rc.py
python -m PyQt5.pyrcc_main  qtdesigner/basic_operation.qrc -o generated/basic_operation_rc.py
python -m PyQt5.pyrcc_main  qtdesigner/balance_beam.qrc -o generated/balance_beam_rc.py
