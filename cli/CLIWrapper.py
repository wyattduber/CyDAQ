import os
import signal
from pexpect import popen_spawn
import json

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
        self.END_CHAR = ">"
        self.NOT_CONNECTED = "Zybo not connected"
        self.p = popen_spawn.PopenSpawn(timeout = TIMEOUT, cmd = "python " + os.path.join(os.path.dirname(__file__), CLI_MAIN_FILE_NAME))
        self.connectionEnabled = True

        # wait for cli to start up
        self.p.expect("CyDAQ Command Line Interface")

        try:
            self.p.expect(self.NOT_CONNECTED, timeout=0)
            raise cyDAQNotConnectedException
        except pexpect.exceptions.TIMEOUT:
            pass

        # wait for command input
        self.p.expect(self.END_CHAR, timeout=5)

    def closeConnection(self):
        # TODO send quit command?
        # self._send_command("q") # TODO handle thrown errors?

        self.connectionEnabled = False
        try:
            self.p.kill(signal.SIGTERM)
        except PermissionError:
            # Most likely means already killed, so ignore
            pass

    def _send_command(self, command):
        """
        Send a command to the cyDAQ and returns the result
        """
        if not self.connectionEnabled:
            return
        try:
            self.p.sendline(command)
        except OSError:
            print("OSError in wrapper _send_command for command: ", command)
            raise cyDAQNotConnectedException
        try: 
            self.p.expect(self.END_CHAR)
        except pexpect.exceptions.EOF:
            raise CLICloseException(self.p.before)
        except pexpect.exceptions.TIMEOUT:
            raise CLITimeoutException
        response = self.p.before
        if response is None:
            raise CLINoResponseException
        response = response.decode()
        if response.strip() == CyDAQ_CLI.CYDAQ_NOT_CONNECTED:
            raise cyDAQNotConnectedException
        return response

    def ping(self):
        """
        Ping cyDAQ, returns the response time in microseconds or -1 if error
        """
        response = self._send_command("ping")
        # print("response|", response,"|")
        return int(''.join(filter(str.isdigit, response)))  # type: ignore

    def clear_config(self):
        """
        Clear the config to its default values
        """
        response = self._send_command("clear")
        if response != " success\r\n":
            raise CLIException("Unexpected output from clear: |" + repr(response) + "|")

    def get_config(self):
        """
        Get the current config stored in the CLI. This doesn't necessarily 
        mean it's the config on the cyDAQ itself. 
        """
        response = self._send_command("print")
        try:
            return json.dumps(json.loads(response))  # type: ignore
        except json.JSONDecodeError:
            raise CLIException("Error parsing json from printed configuration")

    def send_config_to_cydaq(self):
        """
        Send the current configuration to the cyDAQ
        """
        self._send_command("send")

    def set_value(self, key, value):
        """
        Set one config value
        Note: This only updates the stored config in the CLI tool. To update the cyDAQ device, 
        you must use send_config_to_cydaq()
        """
        self._send_command("set, " + key + ", " + value)

    def set_values(self, json_input):
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

    def start_sampling(self):
        """
        Starts sampling
        """
        self._send_command("start")

    def stop_sampling(self, fileName=None):
        """
        Stops sampling, can have a custom filename or generate a timestamped default
        """
        if fileName is None:
            self._send_command("stop")
        else:
            self._send_command("stop, " + fileName)

            

    def flush(self):
        """
        Flushes the current values in the cydaq
        """
        self._send_command("flush")

    def generate(self):
        """
        Start/Stop DAC Generation
        """
        self._send_command("generate")


class CLIException(Exception):
    """
    Generic exception raised for errors when using the CLI tool
    """

    def __init__(self, message):
        self.message = message
        super().__init__(self.message)


class CLINoResponseException(Exception):
    pass


class cyDAQNotConnectedException(Exception):
    pass


class CLICloseException(Exception):
    """
    Thrown when the CLI closes unexpectedly. The last message sent to the output should be included in this error. 
    """

    def __init__(self, message):
        self.message = message
        super().__init(self.message)

class CLITimeoutException(Exception):
    """
    Thrown when the CLI doesn't write to output in TIMEOUT time
    """

    def __init__(self):
        self.message = "CLI didn't write to output in " + str(TIMEOUT) + " seconds." 