/*
Starting point for CyDAQ communication application that runs on petalinux.

It's function is to handle communication between the CyDAQ and the host PC it is plugged into. It does this in two different ways.

1. Serial Communication - Commands
- Reading and writing to /dev/ttyGS0

2. Network Connection - Sending large data - petalinux statically assigns an IP
- Petalinux statically assigns itself an ip of 169.254.7.2


Serial commands come in the following format:  @command!\n
For example: @7!\n = ping
Note: The newline is required at the end for easy serial processing
*/

#include <stdio.h>
#include <fcntl.h>

#include "comm.h"

int main(int argc, char **argv)
{
//    char tty[] = "/dev/ttyGS0";
//    FILE* file = fopen(tty, "r+");

	printf("cydaq-comm starting\n");

	//TODO error handling from these functions
	commInit();
//	commReadTest();
	commRXTask();

//    int serial_port = open("/dev/ttyGS0", O_RDWR);
//    printf("Serial_port: %d\n", serial_port);
//    if(serial_port < 0){
//    	printf("Error opening serial port");
//    	return;
//    }
    //basic example
//    while(1){
//		char read_buf[10];
//		int num_read = read(serial_port, &read_buf, 3);
//		printf("read_buf: |%s|\n", read_buf);
//
//		char msg[] = "@ACK!\n";
//		write(serial_port, msg, 6);
//    }

//    while(1){
//    	char read_buf[10];
//    	int num_read = read(serial_port, &read_buf, 10);
//    	for(int i = 0; i < num_read; i++){
//
//    	}
//    }



    return 0;
}

