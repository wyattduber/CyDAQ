import sys
import logging

# logging
# LOG_FORMAT = '%(asctime)s - %(name)s - %(levelname)s - %(message)s' # default format for reference
LOG_FORMAT = '%(levelname)s - %(message)s'

# debug, info, warning, error, or critical
FILE_LOG_LEVEL = logging.DEBUG
CONSOLE_LOG_LEVEL = logging.DEBUG
DEBUG_WIDGET_LOG_LEVEL = logging.DEBUG

# Log file location for different OS's (development)
if sys.platform == "win32":
    TEMP_DIR = "C:\\Temp"
    DEFAULT_LOG_FILE = f"C:\\Temp\\cydaq_current_log.log"
    DEFAULT_BB_DATA_FILE = f"C:\\Temp\\bb_data_file.csv"
else:
    TEMP_DIR = "/tmp"
    DEFAULT_LOG_FILE = f"/tmp/cydaq_current_log.log"
    DEFAULT_BB_DATA_FILE = f"/tmp/bb_data_file.csv"
TEMP_SAMPLE_LOCATION = 'C:\\Temp\\sample_{}.csv'  # the {} is where the time is calculated and placed

WRAPPER_FAILED_MSG = "Wrapper failed! Restarting..."

BB_MAX_POINTS = 150
BALANCE_BEAM_NOT_CONNECTED_MSG = "Balance Beam Module Not Connected! If you are using the new firmware, Balance Beam " \
                                 "Mode will not work."
