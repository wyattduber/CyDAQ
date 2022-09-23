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


def send():
    pass

def print_help():
    print("Unknown command. Command List:")
    print("p\tping zybo")
    print("q\tquit")


def main():
    running = True
    print("CyDAQ Command Line Interface")
    while running:
        command = input("> ")
        if command == 'q':
            print("Terminating...\n")
            running = False
        elif command == 'pr':
            ping()
        elif command == 'pr':
            print_config()
        elif command == 'h':
            print_help()
        elif command == 'f':
            flush()
        elif command == 's':
            send()
        elif command == 'c':
            configure()
        elif command == 'g':
            pass  # Start/Stop Generating TODO
        else:
            print_help()


if __name__ == "__main__":
    main()
