import sys
from threading import Thread
sys.path.insert(0, "../../cli")
import CLIWrapper
from time import sleep

cli = CLIWrapper.CLI()

cli.start_bb()
sleep(1)
cli.stop_bb()

cli.start_bb(0.8, 0.2, 0.4, 16, 0)
sleep(1)
cli.stop_bb()
