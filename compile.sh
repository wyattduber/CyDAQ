#!/bin/bash

# works!
#python -m PyInstaller --windowed --add-data="gui;gui" --add-data="cli;cli" --noconfirm gui/app.py cli/*.py

# exclude scipy as it's not necessarily needed (yet). If problems arise, re-enable it.
# It was excluded because it added 50mb to the total exe size...
python -m PyInstaller --windowed --noconfirm -i ".\gui\qtdesigner\assets\CyDAQ_Logo_vector.ico" -n "CyDAQ" --splash ".\images\CyDAQ.jpg" --onefile --add-data="cli;cli" gui/app.py cli/*.py
