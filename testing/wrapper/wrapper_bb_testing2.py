import sys
from threading import Thread
sys.path.insert(0, "cli")
import CLIWrapper
from time import sleep

cli = CLIWrapper.CLI()

cli.enable_mock()

print(str(cli.start_bb()))
sleep(1)
print(str(cli.stop_bb()))
