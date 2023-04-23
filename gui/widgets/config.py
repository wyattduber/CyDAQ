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
    DEFAULT_LOG_FILE = f"C:\\Temp\\cydaq_current_log.log"
else:
    DEFAULT_LOG_FILE = f"/tmp/cydaq_current_log.log"
