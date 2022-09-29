import datetime
import os
import argparse

from command_comm import cmd
from serial_comm import get_port

cmd_obj = cmd()
comm_port = get_port()

def configure():
    pass


def flush():
    pass


def ping():
    """
		Sends a command to the device to determine what the latency of the device communication is

		Returns:
			True if the message was acknowleged, False if device is not connected.
        """
    a = datetime.datetime.now()
    cmd_obj.ping_zybo(comm_port)
    b = datetime.datetime.now()
    c = b - a
    print("CyDaq latency {} microseconds".format(c.microseconds))
    return 1


def print_config():
    pass


def sampling():
    pass


def print_help(cmd):
    usages = {}  # TODO dict for individual command usage messages

    if cmd:
        print("\tUnknown command. Command List:")
    else:
        print("\tCommand List & Info")
    helpMsg = """\tc\t\t\t\t Configure Parameters
    f\t\t\t\t Flush Configuration
    g\t\t\t\t Start/Stop DAC Generation
    h\t\t\t\t Print This Help Menu
    pi\t\t\t\t Ping the Zybo
    pr\t\t\t\t Print Current Config
    q\t\t\t\t Exit The Command-Line
    s [filename]\t Start/Stop Sampling"""
    print(helpMsg)

def main():
    running = True
    print("CyDAQ Command Line Interface")

    #try to connect to cyDAQ. If unable, print error and exit CLI
    if(comm_port == "" or comm_port is None):
        print("Zybo not connected")
        return 0

    while running:
        command = input("> ")
        if command == 'q':
            print("Terminating...\n")
            running = False
        elif command == 'pi':
            ping()
        elif command == 'pr':
            print_config()
        elif command == 'h':
            print_help(False)
        elif command == 'f':
            flush()
        elif command == 's':
            sampling()
        elif command == 'c':
            configure()
        elif command == 'g':
            pass  # Start/Stop Generating TODO
        else:
            print_help(True)


if __name__ == "__main__":
    main()
