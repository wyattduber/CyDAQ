from pexpect import popen_spawn

"""
A class that handles communication with the cyDAQ. Uses the library pexpect to initialize and communicate with the CLI tool

example usage: 
cli = CLI("../cli/main.py")
print(cli.ping())
"""
class CLI:
    def __init__(self, cli_main_path):
        self.END_CHAR = "> "
        self.NOT_CONNECTED = "Zybo not connected"
        self.p = popen_spawn.PopenSpawn("python " + cli_main_path)
        
        # wait for cli to start up
        self.p.expect(self.END_CHAR)

    """
    Send a command to the cyDAQ and returns the result
    """
    def _send_command(self, command):
        self.p.sendline(command)
        self.p.expect(self.END_CHAR)
        return self.p.before.decode()

    """
    Ping cyDAQ, returns the response time in microseconds or -1 if error
    """
    def ping(self):
        response = self._send_command("ping")
        if response == self.NOT_CONNECTED:
            return -1
        return int(''.join(filter(str.isdigit, response)))