#!/bin/bash

pyuic5 --from-imports qtdesigner/BasicOperation.ui -o generated/BasicOperationUI.py
pyuic5 --from-imports qtdesigner/BalanceBeam.ui -o generated/BalanceBeamUI.py
pyuic5 --from-imports qtdesigner/LiveStream.ui -o generated/LiveStreamUI.py
pyuic5 --from-imports qtdesigner/MainWindow.ui -o generated/MainWindowUI.py
pyuic5 --from-imports qtdesigner/Debug.ui -o generated/DebugUI.py
pyuic5 --from-imports qtdesigner/DacModeWidget.ui -o generated/DacModeWidgetUI.py
pyuic5 --from-imports qtdesigner/SamplingGenerationStart.ui -o generated/SamplingGenerationStartUI.py
pyuic5 --from-imports qtdesigner/ModeSelectorWidget.ui -o generated/ModeSelectorWidgetUI.py

pyrcc5 qtdesigner/main_window.qrc -o generated/main_window_rc.py
pyrcc5 qtdesigner/basic_operation.qrc -o generated/basic_operation_rc.py
pyrcc5 qtdesigner/balance_beam.qrc -o generated/balance_beam_rc.py