from distutils.cmd import Command
import os
import argparse

def ping():
    print("running ping: TODO implement lol")

def print_help():
    print("p\t\tping zybo")
    print("q\t\tquit")

def main():
    running = True
    while(running):
        command = input("> ")
        if command == 'q':
            running = False
        elif command == 'p':
            ping()
        else:
           print_help() 


if __name__ == "__main__":
    main()