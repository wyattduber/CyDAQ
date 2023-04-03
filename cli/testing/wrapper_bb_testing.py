import sys
sys.path.insert(0, "../../cli")
import CLIWrapper
from time import sleep

cli = CLIWrapper.CLI()

cli._send_command("bb_start")
sleep(3)
print(cli._send_command("bb_stop"))