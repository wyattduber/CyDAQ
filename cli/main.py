import os
import argparse


def configure():
    pass


def flush():
    pass


def ping():
    print("running ping: TODO implement lol")  # TODO


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
