import os
import pexpect
from pexpect import popen_spawn
from threading import Thread
from waiting import wait
import json
import re
import csv
import time
import pandas

from main import CyDAQ_CLI
cli_tool = CyDAQ_CLI()

CLI_MAIN_FILE_NAME = "main.py"
INPUT_CHAR = ">"
NOT_CONNECTED = "Zybo not connected"

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
        self.log = ""
        self.bb_log_thread = None
        self.bb_log_mode = False

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
        except OSError as e:
            print("OSError in wrapper _send_command for command:", command)
            print("OsError: ", e)
            self.running_command = False
            raise cyDAQNotConnectedException

        response = ""

        if command != "q":
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

            self.log = response + "\n" + self.log
            if command != "bb_fetch_pos": # Can get a bit spammy
                self.log = "Cmd: " + command + "\n" + self.log + "\n"
            if wrapper_mode:
                return self._parse_wrapper_mode_message(response)
            else:
                if response.strip() == cli_tool.CYDAQ_NOT_CONNECTED:
                    raise cyDAQNotConnectedException
                return response
            if command == "bb_fetch_pos":
                return response

    def _send_command_async(self, command, wrapper_mode=True, **_):
        """Send a command to the cyDAQ and returns the result w/out waiting"""
        if not self.connectionEnabled:
            return

        # Send command
        try:
            self.p.sendline(command)
        except OSError as e:
            print("OSError in wrapper _send_command for command:", command)
            print("OsError: ", e)
            raise cyDAQNotConnectedException

        response = ""

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

        self.log = response + "\n" + self.log
        if wrapper_mode:
            return self._parse_wrapper_mode_message(response)
        else:
            if response.strip() == cli_tool.CYDAQ_NOT_CONNECTED:
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
        print(line)
        return ""

    def _error_parser(self, message):
        """Parses known error messages and throws the appropiate exception if needed. Otherwise, throws a generic exception."""
        if message == cli_tool.CYDAQ_NOT_CONNECTED:
            raise cyDAQNotConnectedException
        else:
            raise CLIException(message)

    def ping(self, **_):
        """Ping cyDAQ, returns the response time in microseconds or -1 if error"""
        response = self._send_command("ping")
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

    def start_bb(self, **_):
        #try:
        #    self.p.expect('Start')
        #    print("flag7")
        #except pexpect.exceptions.EOF:
        #    raise CLICloseException(self.p.before)
        #except pexpect.exceptions.TIMEOUT:
        #    raise CLITimeoutException
        #finally:
        self.bb_log_mode = True
        self.bb_log_thread = Thread(target=self.retrieve_bb_pos)
        self.bb_log_thread.start()
        self._send_command("bb_start")

    def stop_bb(self, **_):
        self.bb_log_mode = False
        self.bb_log_thread = None
        self._send_command("bb_stop")

    def set_constants(self, kp, ki, kd, N, **_):
        self._send_command(f"bb_const, {kp} {ki} {kd} {N}")

    def send_set_point(self, setv, **_):
        self._send_command(f"bb_set, {setv}")

    def offset_inc(self, **_):
        self._send_command("bb_offset_inc")

    def offset_dec(self, **_):
        self._send_command("bb_offset_dec")

    def pause_bb(self, **_):
        self._send_command("bb_pause")

    def resume_bb(self, **_):
        self._send_command("bb_resume")

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

    def getLog(self, **_):
        return self.log

    def clearLog(self, **_):
        self.log = ""
        
    def convertMillis(self, millis, **_):
        seconds = (millis / 1000) % 60
        minutes = (millis / (1000 * 60)) % 60
        hours = (millis / (1000 * 60 * 60)) % 24
        return seconds, minutes, hours

    def retrieve_bb_pos(self):
        #print(f"Incoming data: {self.p.read()}")
        #print(f"RESPONSE: {self.p.before}")
        response = self._send_command("bb_fetch_pos")

        #print(f"RESPONSE: {response}")

        #currentData = cli_tool.get_bb_data()
        #print(response)
        #self.log = self.log + '\n' + response
        #self.log = self.log + '\n' + "proof that this is working"
        return response

class CLIException(Exception):
    """Generic exception raised for errors when using the CLI tool"""

    def __init__(self, message):
        self.message = message
        super().__init__(self.message)


class CLINoResponseException(Exception):
    pass


class cyDAQNotConnectedException(Exception):
    def __init__(self):
        super().__init__()


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
