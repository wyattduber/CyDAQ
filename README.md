# CyDAQ - ISU Senior Design 22-23
- Blake Fisher
- Cole Langner
- Corbin Kems
- Jens Rasmussen
- Long Zeng
- Wyatt Duberstein
- Yohan Bopearatchy
---

# Wiki
To view all of our official documentation for this project, check out our [wiki](https://git.ece.iastate.edu/sd/sdmay23-47/-/wikis/home)!

# Firmware

> TODO

# CLI
The Command Line Tool, or CLI for short, is a console-based application used to interface directly with the cyDAQ. 

It works by storing a local configuration for the cyDAQ, making it easily editable without sending any data to the cyDAQ itself. Then, when the config is ready, a command can be used to send all config values to the cyDAQ at once.  

![CLI Help Menu](images/CLI_Example.png)

## Install
```bash
python -m pip install -r requirements.txt --user
```

## Run
```bash
python cli/main.py
```

## CLIWrapper
CLIWrapper.py contains a class created to make running the CLI tool in other python scripts very easy. It is used by the GUI to communicate with the cyDAQ, but can also be used by other python scripts. 

Below is a very simple example of how to use it. 
```python
import CLIWrapper

cli = CLIWrapper.CLI()

print(cli.ping())
cli.set_values("{\"Sample Rate\": 500}")
print(cli.get_config())
cli.start_sampling()
cli.stop_sampling("smallSample.csv")
```

# GUI
The GUI is a PyQt5 application that uses the CLIWrapper to communicate with the cyDAQ. It's purpose is to allow for students to configure the cyDAQ quickly and easily. 

QTDesigner was used to create most of the layout/styling. The official documentation can be found [here](https://doc.qt.io/qt-5/qtdesigner-manual.html). 

Our additional documentation can be found [here](https://git.ece.iastate.edu/sd/sdmay23-47/-/wikis/GUI).


## Install
```bash
pip install -r requirements.txt
```
## Run
Then, you should just be able to start the GUI by running the following command:
```bash
python gui/app.py
```

> Note: If the "python" command does not work, you might want to try a variant of the command, such as "py app.py" or "python3 app.py".






