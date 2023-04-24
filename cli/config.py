import serial
from sys import platform

# misc CLI
INPUT_CHAR = ">"

# serial communication
START_BYTE = "@"
END_BYTE = "!"
SERIAL_BAUDRATE = 921600 
SERIAL_BYTESIZE = serial.EIGHTBITS
SERIAL_STOPBITS = serial.STOPBITS_ONE
SERIAL_XONXOFF = False
SERIAL_RTSCTS = False
SERIAL_DSRDTR = False
SERIAL_PARITY = serial.PARITY_NONE # PARITY_EVEN
SERIAL_TIMEOUT = 4
SERIAL_ORDER = "little"

# Default device names for the correct COMM port to communicate with the CyDAQ with 
# Can be checked in Windows Devie Manager. In the event other connected devices have these
# descriptions, things could break...
OLD_COMM_PORT_DESCRIPTION = "USB Serial Port" # old firmware (debug port)
NEW_COMM_PORT_DESCRIPTION = "USB Serial Device" # new firmware (USB Serial gadget)

# SCP to petalinux
SSH_NUM_RETRIES = 10 # number of times to retry the SCP connection
SSH_SLEEP_TIME = 2 # time to wait between retries (seconds)
SSH_HOSTNAME = "169.254.7.2" # statically assigned IP by petalinux. Every CyDAQ has this IP
SSH_PORT = 22
SSH_USERNAME = "root"
SSH_PASSWORD = "root"
SCP_REMOTE_PATH = "/tmp/sample_data.bin" # where on petalinux the sample data is located
SCP_LOCAL_PATH = "C:\Temp\sample_data.bin" # where to put the sample data on the PC from petalinux 

# Shared messages
CYDAQ_NOT_CONNECTED = "CyDAQ not connected"
CLI_START_MESSAGE = "CyDAQ Command Line Interface"
BALANCE_BEAM_NOT_CONNECTED = "Balance Beam is not connected!"
ERROR_OPENING_FILE = "Error opening file!"

# Wrapper log message types
WRAPPER_INFO = "INFO"
WRAPPER_ERROR = "ERROR"
WRAPPER_IGNORE = "IGNORE"
WRAPPER_BB_LIVE = "BB_LIVE"

# Balance beam
BB_CMD_SERVO_OFFSET = "SOI"
BB_CMD_STOP_BB = '!q'
BB_CMD_PAUSE = "pause on!"
BB_CMD_RESUME = "pause off!"
# Balance Beam Default Values
DEFAULT_KP = 0
DEFAULT_KI = 0
DEFAULT_KD = 0
DEFAULT_N = 0
DEFAULT_SET = 0

# CLI wrapper 
CLI_MAIN_FILE_NAME = "main.py"
NOT_CONNECTED = "Zybo not connected"
LOG_MAX_LENGTH = 10000 # number of log lines that can be made before needing to be written to file
# Log file location for different OS's (development)
if platform == "win32":
    DEFAULT_LOG_FILE = f"C:\\Temp\\cydaq_current_log.log"
else:
    DEFAULT_LOG_FILE = f"/tmp/cydaq_current_log.log"
# Default timeout for all commands (in seconds). May be increased if some commands take longer
WRAPPER_TIMEOUT = 20