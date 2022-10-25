from pexpect import popen_spawn
import json

import pexpect

class CLI:
    """
    A class that handles communication with the cyDAQ. Uses the library pexpect to initialize and communicate with the CLI tool

    example usage: 
    cli = CLI("../cli/main.py")
    print(cli.ping())
    """
    def __init__(self, cli_main_path):
        self.END_CHAR = ">"
        self.NOT_CONNECTED = "Zybo not connected"
        self.p = popen_spawn.PopenSpawn("python " + cli_main_path)
        
        # wait for cli to start up
        self.p.expect("CyDAQ Command Line Interface")

        try:
            self.p.expect(self.NOT_CONNECTED, timeout=0)
            raise cyDAQNotConnectedException
        except pexpect.exceptions.TIMEOUT:
            pass

        # wait for command input
        self.p.expect(self.END_CHAR, timeout=5)

    def _send_command(self, command):
        """
        Send a command to the cyDAQ and returns the result
        """
        self.p.sendline(command)
        self.p.expect(self.END_CHAR)
        response = self.p.before
        if response is None:
            raise CLINoResponseException
        response = response.decode()
        if response == self.NOT_CONNECTED:
            raise cyDAQNotConnectedException
        return response

    def ping(self):
        """
        Ping cyDAQ, returns the response time in microseconds or -1 if error
        """
        response = self._send_command("ping")
        print("response: ", response)
        return int(''.join(filter(str.isdigit, response)))

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
            return json.loads(response.replace("\'","\""))
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
        pass


    def set_values(self, json):
        """
        Set multiple config values. Takes a json string
        Note: This only updates the stored config in the CLI tool. To update the cyDAQ device, 
        you must use send_config_to_cydaq()
        """
        pass

    def start_sampling(self):
        pass

    def stop_sampling(self):
        pass


class CLIException(Exception):
    """
    Exception raised for errors when using the CLI tool
    """

    def __init__(self, message):
        self.message = message
        super().__init__(self.message)

class CLINoResponseException(Exception):
    pass

class cyDAQNotConnectedException(Exception):
    pass