import os
import signal
from pexpect import popen_spawn
from waiting import wait
import json
import re

import pexpect

from main import CyDAQ_CLI

CLI_MAIN_FILE_NAME = "main.py"

# Default timeout for all commands (in seconds). May be increased if some commands take longer
TIMEOUT = 120

class CLI:
    """
    A class that handles communication with the cyDAQ. Uses the library pexpect to initialize and communicate with
    the CLI tool

    example usage: 
    cli = CLI()
    print(cli.ping())
    """

    def __init__(self):
        self.INPUT_CHAR = ">"
        self.NOT_CONNECTED = "Zybo not connected"

        # Run the CLI tool using the pexpect library just like a user would in the terminal
        self.p = popen_spawn.PopenSpawn(timeout = TIMEOUT, cmd = "python " + os.path.join(os.path.dirname(__file__), CLI_MAIN_FILE_NAME))

        self.connectionEnabled = True

        # Wait for cli to start up. It will NOT be in wrapper mode yet
        self.p.expect("CyDAQ Command Line Interface")

        # If the CyDAQ is not connected at this point the CLI will immedately say so
        try:
            self.p.expect(self.NOT_CONNECTED, timeout=0)
            raise cyDAQNotConnectedException
        except pexpect.exceptions.TIMEOUT:
            pass

        # Wait for command input
        self.p.expect(self.INPUT_CHAR, timeout=5)
        
        self.running_command = False

        # Set CLI to wrapper mode. After this, all commands must be parsed in the new mode unless it's specifially toggled off
        self._send_command("wrapper, enable")


    def closeConnection(self, **_):
        """TODO"""
        # TODO send quit command?
        # self._send_command("q") # TODO handle thrown errors?

        self.connectionEnabled = False
        try:
            self.p.kill(signal.SIGTERM)
        except PermissionError:
            # Most likely means already killed, so ignore
            pass

    def _send_command(self, command, wrapper_mode=True, **_):
        """Send a command to the cyDAQ and returns the result"""
        if not self.connectionEnabled:
            return

        # Use the waiting library to prevent two commands from being run at the same time
        wait(lambda: not self.running_command)

        # Send command
        try:
            self.running_command = True
            self.p.sendline(command)
        except OSError:
            print("OSError in wrapper _send_command for command: ", command)
            self.running_command = False
            raise cyDAQNotConnectedException
        
        # Wait for response
        try: 
            self.p.expect(self.INPUT_CHAR)
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
        if wrapper_mode:
            return self._parse_wrapper_mode_message(response)
        else:
            if response.strip() == CyDAQ_CLI.CYDAQ_NOT_CONNECTED:
                raise cyDAQNotConnectedException
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
        """

        pattern = re.compile("%(.+)% (.*)")
        matches = re.findall(pattern, line)
        if len(matches) > 0:
            level = matches[0][0]
            message = matches[0][1]
            if level == CyDAQ_CLI.WRAPPER_INFO:
                return message
            elif level == CyDAQ_CLI.WRAPPER_ERROR:
                self._error_parser(message)
            elif level == CyDAQ_CLI.WRAPPER_IGNORE:
                return ""
            else:
                raise CLIUnknownLogLevelException
        print(line)
        return ""

    def _error_parser(self, message):
        """Parses known error messages and throws the appropiate exception if needed. Otherwise, throws a generic exception."""
        if message == CyDAQ_CLI.CYDAQ_NOT_CONNECTED:
            raise cyDAQNotConnectedException
        else:
            raise CLIException(message)

    def ping(self, **_):
        """Ping cyDAQ, returns the response time in microseconds or -1 if error"""
        response = self._send_command("ping")
        # print("response|", response,"|")
        try:
            return int(''.join(filter(str.isdigit, response)))  # type: ignore
        except ValueError:
            raise CLIException("Unable to parse ping response. Response was: {}".format(response))

    def clear_config(self, **_):
        """Clear the config to its default values"""
        response = self._send_command("clear")
        if response != " success\r\n":
            raise CLIException("Unexpected output from clear: |" + repr(response) + "|")

    def get_config(self, **_):
        """Get the current config stored in the CLI. This doesn't necessarily mean it's the config on the cyDAQ itself."""
        response = self._send_command("print")
        try:
            return json.dumps(json.loads(response))  # type: ignore
        except json.JSONDecodeError:
            raise CLIException("Error parsing json from printed configuration")

    def send_config_to_cydaq(self, **_):
        """Send the current configuration stored in the CLI to the cyDAQ"""
        self._send_command("send")

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

class CLIException(Exception):
    """Generic exception raised for errors when using the CLI tool"""
    def __init__(self, message):
        self.message = message
        super().__init__(self.message)

class CLINoResponseException(Exception):
    pass

class cyDAQNotConnectedException(Exception):
    pass

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