#!/bin/bash

# with splash screen
python -m PyInstaller --windowed --noconfirm -i ".\gui\qtdesigner\assets\CyDAQ_Logo_vector.ico" -n "CyDAQ" --splash ".\images\CyDAQ-480.png" --hidden-import=pyi_splash --onefile --add-data="cli;cli" gui/app.py cli/*.py

# without splash screen
# python -m PyInstaller --windowed --noconfirm -i ".\gui\qtdesigner\assets\CyDAQ_Logo_vector.ico" -n "CyDAQ-nosplash" --hidden-import=pyi_splash --onefile --add-data="cli;cli" gui/app.py cli/*.py
