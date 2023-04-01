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

#include "comm.h"
#include "main.h"

int main(int argc, char **argv){

	printf("cydaq-comm starting\n");

	//TODO error handling from these functions
	commInit();
	commRXTask();

    return 0;
}
