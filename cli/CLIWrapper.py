import os
import pexpect
from datetime import datetime
from pexpect import popen_spawn
from threading import Thread
from waiting import wait
import json
import re
import csv
import sys
import time
import pandas

from main import CyDAQ_CLI
cli_tool = CyDAQ_CLI()

CLI_MAIN_FILE_NAME = "main.py"
INPUT_CHAR = ">"
NOT_CONNECTED = "Zybo not connected"
DEFAULT_LOG_FILE = f"C:\\Temp\\cydaq_current_log.log"
LOG_MAX_LENGTH = 10000

# Default timeout for all commands (in seconds). May be increased if some commands take longer
TIMEOUT = 20

class CLI:
    """
    A class that handles communication with the cyDAQ. Uses the library pexpect to initialize and communicate with
    the CLI tool

    example usage: 
    cli = CLI()
    print(cli.ping())
    """

    def __init__(self):
        # Global Variables
        self.running_ping_command = False
        self.bb_log_thread = None
        self.bb_log_mode = False

        # Logging
        self.log = ""
        self.log_buffer = ""
        
        # Remove existing file if it exists
        if os.path.exists(DEFAULT_LOG_FILE):
            try:
                os.remove(DEFAULT_LOG_FILE)
            except PermissionError:
                print("Unable to delete temp file!! ", DEFAULT_LOG_FILE)

        # Create log file
        self.logfile = open(DEFAULT_LOG_FILE, 'a+')
        sys.stdout = self.logfile

        # Run the CLI tool using the pexpect library just like a user would in the terminal
        pythonCmd = "python3 "

        dirname = f"\"{os.path.join(os.path.dirname(__file__), CLI_MAIN_FILE_NAME)}\""

        # Create the pexpect shell
        self.p = popen_spawn.PopenSpawn(timeout=TIMEOUT, cmd=pythonCmd + dirname)

        # Enable the connection tracker
        self.connectionEnabled = True

        # Wait for cli to start up. It will NOT be in wrapper mode yet
        # Also, check to make sure that the command shouldn't be another variation of the python command
        try:
            self.p.expect(cli_tool.CLI_START_MESSAGE)  # Check with `python3` first
        except pexpect.exceptions.EOF:
            try:
                pythonCmd = "python "  # Check for `python` next
                self.p = popen_spawn.PopenSpawn(timeout=TIMEOUT, cmd=pythonCmd + dirname)
                self.p.expect(cli_tool.CLI_START_MESSAGE)
            except pexpect.exceptions.EOF:
                pythonCmd = "py "  # Finally, check for `py` last
                self.p = popen_spawn.PopenSpawn(timeout=TIMEOUT, cmd=pythonCmd + dirname)
                self.p.expect(cli_tool.CLI_START_MESSAGE)

        # If the CyDAQ is not connected at this point the CLI will immedately say so
        try:
            self.p.expect(NOT_CONNECTED, timeout=0)
            raise cyDAQNotConnectedException
        except pexpect.exceptions.TIMEOUT:
            pass

        # Wait for command input
        self.p.expect(INPUT_CHAR, timeout=5)

        self.running_command = False

        # Set CLI to wrapper mode. After this, all commands must be parsed in the new mode unless it's specifially toggled off
        self._send_command("wrapper, enable")

    def _send_command(self, command, wrapper_mode=True, force_async=False, **_):
        """Send a command to the cyDAQ and returns the result"""
        if not self.connectionEnabled:
            return

        # Use the waiting library to prevent two commands from being run at the same time
        if not force_async:
            wait(lambda: not self.running_command)

        # Send command
        try:
            if not force_async:
                self.running_command = True
            if command == "ping":
                self.running_ping_command = True
            self.p.sendline(command)
        except OSError as e:
            print("OSError in wrapper _send_command for command:", command)
            print("OsError: ", e)
            if not force_async:
                self.running_command = False
            raise cyDAQNotConnectedException

        if command != "q" and command != "bb_start" and command != "bb_offset_inc" and command != "bb_offset_dec" and not re.search('bb_const, [0-9]*\.[0-9]+ [0-9]*\.[0-9]+ [0-9]*\.[0-9]+ [0-9]+', command) and not re.search('bb_set, [0-9]*\.[0-9]+', command):
            # Wait for response
            try:
                self.p.expect(INPUT_CHAR)
            except pexpect.exceptions.EOF:
                raise CLICloseException(self.p.before)
            except pexpect.exceptions.TIMEOUT:
                raise CLITimeoutException
            finally:
                self.running_command = False
            response = self.p.before

            # Parse response
            if response is None:
                raise CLINoResponseException
            response = response.decode()
            response = response.strip()

            self.writeLog("response", response)
            #print(response)
            if command != "bb_fetch_pos": # Can get a bit spammy
                self.writeLog("cmd", command)
                #print(f"Cmd: {command}")
            if wrapper_mode:
                if command == "ping":
                    self.running_ping_command = False
                return self._parse_wrapper_mode_message(response)
            else:
                if response.strip() == cli_tool.CYDAQ_NOT_CONNECTED:
                    raise cyDAQNotConnectedException
                if command == "ping":
                    self.running_ping_command = False
                return response

    def _parse_wrapper_mode_message(self, line):
        """
        Parse a message in the format "%level% message". For example, the following is returned from the ping command:

        %INFO% CyDaq latency 745161 microseconds

        If a message isn't in the log format, print it to standard output anyway but otherwise don't act upon it.

        Properly formatted messages are treated differently based on their log level. 
        INFO: Message is simply returned
        ERROR: Error message is parsed and the proper exception is thrown, or a generic one is thrown instead.
        IGNORE: Returns an empty string
        BB_LIVE: Data being sent to be graphed in balance beam mode
        """

        pattern = re.compile("%(.+)% (.*)")
        matches = re.findall(pattern, line)
        if len(matches) > 0:
            level = matches[0][0]
            message = matches[0][1].strip()
            if level == cli_tool.WRAPPER_INFO:
                return message
            elif level == cli_tool.WRAPPER_ERROR:
                self._error_parser(message)
            elif level == cli_tool.WRAPPER_IGNORE:
                return ""
            elif level == cli_tool.WRAPPER_BB_LIVE:
                return message
            else:
                raise CLIUnknownLogLevelException
        #print(line)
        return ""

    def _error_parser(self, message):
        """Parses known error messages and throws the appropiate exception if needed. Otherwise, throws a generic exception."""
        if message == cli_tool.CYDAQ_NOT_CONNECTED:
            raise cyDAQNotConnectedException
        elif message == cli_tool.BALANCE_BEAM_NOT_CONNECTED:
            self.stop_bb()
            raise BalanceBeamNotConnectedException
        elif message == "Error opening file!": #TODO make constant
            raise cyDAQFileException("Error opening the file specified! Is it already open in another program?")
        else:
            raise CLIException(message)

    def ping(self, **_):
        """Ping cyDAQ, returns the response time in microseconds or -1 if error"""
        response = self._send_command("ping")
        print("ping response: ", response)
        # if response == "CyDAQ not connected": #TODO make constant
        #     return -1
        try:
            return int(''.join(filter(str.isdigit, response)))  # type: ignore
        except ValueError:
            if response == "":
                raise CLIException("Unable to connect to CyDAQ through wrapper. Is the CyDAQ on? "
                                   "Is there another instance running/connected to the CyDAQ? "
                                   "Is there another program using that com port?")
            else:
                raise CLIException("Unable to parse ping response. Response was: {}".format(response))

    def close(self, **_):
        """Close the CLI tool"""
        self._send_command("q")
        self.logfile.close()

    def clear_config(self, **_):
        """Clear the config to its default values"""
        response = self._send_command("clear")
        if response != " success\r\n":
            raise CLIException("Unexpected output from clear: " + repr(response))

    def get_config(self, **_):
        """Get the current config stored in the CLI. This doesn't necessarily mean it's the config on the cyDAQ itself."""
        response = self._send_command("print")
        try:
            return json.dumps(json.loads(response))  # type: ignore
        except json.JSONDecodeError:
            raise CLIException("Error parsing json from printed configuration")

    def send_config_to_cydaq(self, **_):
        """Send the current configuration stored in the CLI to the cyDAQ"""
        response = self._send_command("send")
        if response == "Config sent successfully!":
            return True
        elif response == "Error sending config!":
            return False

    def set_value(self, key, value, **_):
        """
        Set one config value
        Note: This only updates the stored config in the CLI tool. To update the cyDAQ device, 
        you must use send_config_to_cydaq()
        """
        self._send_command("set, " + key + ", " + value)

    def set_values(self, json_input, **_):
        """
        Set multiple config values. Takes a json string
        Note: This only updates the stored config in the CLI tool. To update the cyDAQ device, 
        you must use send_config_to_cydaq()
        """
        try:
            jsonList = json.loads(json_input)
        except json.JSONDecodeError:
            raise CLIException("Invalid JSON Specified!")

        self._send_command("setm, " + json.dumps(jsonList))

    def start_sampling(self, **_):
        """Send the start sampling command to the CyDAQ. Will not wait for a response"""
        self._send_command("start")

    def stop_sampling(self, fileName=None, **_):
        """Stops sampling, can have a custom filename or generate a timestamped default. Will block until file is transferred"""
        if fileName is None:
            self._send_command("stop")
        else:
            self._send_command("stop, " + fileName)

    def flush(self, **_):
        """Flushes the current values in the cydaq"""
        self._send_command("flush")

    def generate(self, **_):
        """Start/Stop DAC Generation"""
        self._send_command("generate")

    ### Mock Mode Methods ###

    def enable_mock(self, **_):
        """Enable CyDAQ serial connection mocking"""
        self._send_command("mock, enable")

    def disable_mock(self, **_):
        """Disable CyDAQ serial connection mocking"""
        self._send_command("mock, disable")

    def isMocking(self, **_):
        """Returns True if mocking a CyDAQ serial connection, False otherwise"""
        response = self._send_command("mock, status")
        return response == "True"

    ### Balance Beam Wrapper Methods ###

    def start_bb(self, kp=None, ki=None, kd=None, N=None, set=None, **_):
        """Start balance beam mode and live data streaming"""

        # If a ping command is running, wait for it to finish
        wait(lambda: not self.running_ping_command)

        # Check if the balance beam is connected before retrieving data
        response = self._send_command(f"bb_start, {kp} {ki} {kd} {N} {set}")
        if not response == CyDAQ_CLI.BALANCE_BEAM_NOT_CONNECTED:
            self.bb_log_mode = True
            self.bb_log_thread = Thread(target=self.retrieve_bb_pos)
            self.bb_log_thread.start()
            return True
        else:
            return False

    def stop_bb(self, **_):
        """Stop balance beam mode and live data streaming"""
        self.bb_log_mode = False
        self.bb_log_thread = None
        self._send_command("bb_stop")

    def set_constants(self, kp, ki, kd, N, **_):
        """Send balance beam configuration constants"""
        self._send_command(f"bb_const, {kp} {ki} {kd} {N}")

    def send_set_point(self, setv, **_):
        """Send balance beam set point"""
        self._send_command(f"bb_set, {setv}")

    def offset_inc(self, **_):
        """Increase the offset for calibration"""
        self._send_command("bb_offset_inc")

    def offset_dec(self, **_):
        """Decrease the offset for calibration"""
        self._send_command("bb_offset_dec")

    def pause_bb(self, **_):
        """Pause the balance beam, but do not disable it entirely"""
        self._send_command("bb_pause")

    def resume_bb(self, **_):
        """Resume balance beam mode and data streaming"""
        self._send_command("bb_resume")

    def retrieve_bb_pos(self):
        """
        Returns the current balance beam position each call
        In the current configuration, this command needs to run a lot of times to get a live feed
        In order to not conflict with other commands being sent, it needs to not wait for other commands
        to stop sending like the other commands do. Hence, the "force_async" option
        """
        response = self._send_command("bb_fetch_pos", force_async=True)
        return response

    def writeALotOfData(self, **_):
        print("Writing Data for 20 Seconds....")
        start = round(time.time())
        with open('lotsOfData.csv', 'w', encoding='utf-8') as file:
            header = ['Times']
            writer = csv.DictWriter(file, fieldnames=header)
            writer.writeheader()
            curr = round(time.time())
            while curr - start < 20:
                writer.writerows([{'Times': f'{time.time()}'}])
                curr = round(time.time())
            file.close()
        print("Total Lines: " + "{:,}".format(len(pandas.read_csv('lotsOfData.csv'))))
        print("Lines Per Second: " + "{:,}".format(round(len(pandas.read_csv('lotsOfData.csv')) / 20)))

    def writeALotOfDataV2(self, **_):
        start = time.time()
        data = "junk data\n".encode()
        with open('lotsOfData.csv', 'wb', 100 * (2 ** 20)) as f:
            for _ in range(1, 100000000):
                # f.write("{}\n".format(time.time()).encode()) # this takes longer because time.time() and encode() use lots of cpu
                f.write(data)
        delta = time.time() - start
        numLines = len(pandas.read_csv('lotsOfData.csv'))
        print("Total Lines: " + "{:,}".format(numLines))
        print("Time to write: ", delta)
        print("Lines per second: {:,}".format(round(numLines / delta)))

    def readALotOfData(self, label, **_):
        with open('lotsOfData.csv', newline='') as csvfile:
            csvFile = pandas.read_csv('lotsOfData.csv')
            print("Started Reading " + "{:,}".format(len(pandas.read_csv('lotsOfData.csv'))) + " Lines of Data...")
            start = round(time.time())
            file = csv.reader(csvfile)
            for i in file:
                print(str(i))
            stop = round(time.time())
            csvfile.close()
        print("Time Taken: " + str(round(stop - start)))
        print("Total Lines: " + "{:,}".format(len(pandas.read_csv('lotsOfData.csv'))))
        print("Lines Per Second: " + "{:,}".format(round(len(csvFile) / (stop - start))))

    def writeLog(self, type, string, **_):
        if type == "response":
            self.logfile.write(f"{string}\n")
            self.log_buffer = f"{string}\n{self.log_buffer}"
        elif type == "cmd":
            self.logfile.write(f"Cmd: {string}\n")
            self.log_buffer = f"Cmd: {string}\n{self.log_buffer}"

    def getLog(self, **_):
        # pos = 101
        # lines = []
        # while len(lines) <= 100:
        #     try:
        #         self.logfile.seek(-pos, 2)
        #     except IOError:
        #         self.logfile.seek(0)
        #         break
        #     finally:
        #         lines = list(self.logfile)
        #     pos *= 2
        # self.log = '\n'.join(map(str, lines[-100:]))
        if self.log_buffer != "":
            lines = self.log.splitlines()
            if len(lines) > LOG_MAX_LENGTH:
                lines = lines[0:LOG_MAX_LENGTH - len(self.log_buffer.splitlines())]
                self.log = '\n'.join(lines)
            self.log = f"{self.log_buffer}\n{self.log}"
            self.log_buffer = ""
        return self.log

    def clearLog(self, **_):
        self.log = ""
        
    def convertMillis(self, millis, **_):
        seconds = (millis / 1000) % 60
        minutes = (millis / (1000 * 60)) % 60
        hours = (millis / (1000 * 60 * 60)) % 24
        return seconds, minutes, hours

class CLIException(Exception):
    """Generic exception raised for errors when using the CLI tool"""

    def __init__(self, message):
        self.message = message
        super().__init__(self.message)


class CLINoResponseException(Exception):
    """Exception for when the CLI does not send a response in time"""
    pass


class cyDAQNotConnectedException(Exception):
    def __init__(self):
        super().__init__("CyDAQ is not connected properly!")

class cyDAQFileException(Exception):
    def __init__(self, message):
        self.message = message
        super().__init__(self.message)
    
    def getMessage(self):
        return self.message

class BalanceBeamNotConnectedException(Exception):
    def __init__(self):
        super().__init__("The Balance Beam is not connected to the CyDAQ!")

class CLICloseException(Exception):
    """Thrown when the CLI closes unexpectedly. The last message sent to the output should be included in this error. """

    def __init__(self, message):
        self.message = message
        super().__init__(self.message)


class CLITimeoutException(Exception):
    """Thrown when the CLI doesn't write to output in TIMEOUT time"""

    def __init__(self):
        self.message = "CLI didn't write to output in " + str(TIMEOUT) + " seconds."


class CLIUnknownLogLevelException(Exception):
    pass
