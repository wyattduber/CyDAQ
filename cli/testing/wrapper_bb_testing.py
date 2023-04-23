import sys
from threading import Thread
sys.path.insert(0, "../../cli")
import CLIWrapper
from time import sleep

cli = CLIWrapper.CLI()
runbool = True

def main():
    cli._send_command("bb_start")
    thread = Thread(target=print_data)
    thread.start()
    sleep(10)
    global runbool
    runbool = False
    thread = None
    cli._send_command("bb_stop")
    cli.close()

def print_data():
    global runbool
    while runbool:
        data = cli.retrieve_bb_pos()
        print(f"Data: {data}")

if __name__ == "__main__":
    main()