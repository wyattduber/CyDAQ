# CyDAQ - ISU Senior Design 22-23
- Blake Fisher
- Cole Langner
- Corbin Kems
- Jens Rasmussen
- Long Zeng
- Wyatt Duberstein
- Yohan Bopearatchy
---

# Firmware

# CLI
The Command Line Tool, or CLI for short, is a console-based application used to interface directly with the cyDAQ. 

It works by storing a local configuration for the cyDAQ, making it easily editable without sending any data to the cyDAQ itself. Then, when the config is ready, a command can be used to send all config values to the cyDAQ at once.  

## Install
python -m pip install -r cli/requirements.txt --user

## Run
python cli/main.py

## CLIWrapper
CLIWrapper.py is a class created to make running the CLI tool in other python scripts very easy. It is used by the GUI to communicate with the cyDAQ, but can also be used by other python scripts. 

Below is a very simple example of how to use it. 
```python
import CLIWrapper

cli = CLIWrapper.CLI("main.py")

print(cli.ping())
print(cli.get_config())
cli.send_config_to_cydaq()
```

# GUI
The GUI is a PyQt5 application that uses the CLIWrapper to communicate with the cyDAQ. It's purpose is to allow for students to configure the cyDAQ quickly and easily. 

QTDesigner was used to create most of the layout/styling. The documentation can be found [here](https://doc.qt.io/qt-5/qtdesigner-manual.html). 

## Making Changes
> Note: Any changes to the *.ui or *.qrc files in gui/qtdesigner requires re-building the python files. 

First make sure you have pyqt5-tools installed
```bash
pip install pyqt5-tools
```

> Note: You might need to do the following (in git bash) to get the command to work. Just replace "crkems" with your netid:
```bash
export PATH=$PATH://my.files.iastate.edu/Profiles/crkems/AppData/Roaming/Python/Python38/Scripts
```

Now, the following two commands can be used to update the .ui and .qrc files you made changes to. The naming of the files should follow the same structure. For example, basic_operation.ui outputs to BasicOperation.py or main_window.qrc outputs to main_window_rc.py. 
```bash
pyuic5 -x yourform.ui -o file.py
```
```bash
pyrcc5 resource.qrc -o resource_rc.py
```



