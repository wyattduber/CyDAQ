/*
Starting point for CyDAQ communication application that runs on petalinux.

It's function is to handle communication between the CyDAQ and the host PC it is plugged into. It does this in two different ways.

1. Serial Communication - Commands
- Reading and writing to /dev/ttyGS0

2. Network Connection - Sending large data - petalinux statically assigns an IP
- Petalinux statically assigns itself an ip of 169.254.7.2


Serial commands come in the following format:  @command!
For example: @7! = ping
Note: The character 7 isn't ASCII, but hex. So really it should be 0x40 0x07 0x21
because @ = 0x40 and ! = 0x21
*/

#include <stdio.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>

#include "comm.h"
#include "main.h"
#include "rpc.h"

void exit_action_handler(int signum){
	printf("\r\nComm exit handler!\r\n");
	rpc_teardown();
}

void kill_action_handler(int signum){
	printf("\r\nComm kill handler!\r\n");
	rpc_teardown();
}

int main(int argc, char **argv){
	printf("COMM> CyDAQ-COMM Starting\n");

	//add handlers for program exit/kill
	struct sigaction exit_action;
	struct sigaction kill_action;
	memset(&exit_action, 0, sizeof(struct sigaction));
	memset(&kill_action, 0, sizeof(struct sigaction));
	exit_action.sa_handler = exit_action_handler;
	kill_action.sa_handler = kill_action_handler;
	sigaction(SIGTERM, &exit_action, NULL);
	sigaction(SIGINT, &exit_action, NULL);
	sigaction(SIGKILL, &kill_action, NULL);
	sigaction(SIGHUP, &kill_action, NULL);

	rpc_setup();
	commInit();

	commRXTask(); //when this returns, program is now wanting to stop

	rpc_teardown();

    return 0;
}

