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

#include "comm.h"
#include "main.h"
#include "proxy_app.h" //TODO dont use this in the final version, use rpc.c/rpc.h instead
#include "rpc.h"

int main(int argc, char **argv){

	printf("cydaq-comm starting\n");

	printf("RPC setup starting...\r\n");
	if(rpc_setup() != 0){
		printf("rpc setup failed!\r\n");
		return 0;
	}
	printf("RPC setup finished!\r\n");
	char message[16] = "Hi";
	int data[1] = {1};
	rpc_send_message(message, data, 1);
//	printf("RPC Listener starting...\r\n");
//	rpc_init_listen();
//	printf("RPC Listener stopped!\r\n");

	printf("commInit starting...\r\n");
	commInit();
	printf("commInit finished\n");
	printf("Serial Listener starting...\n");
	commRXTask();
	printf("Serial Listener stopped!\n");

	rpc_tear_down();

	//recieving data from PC (UART/USB) and receiving messages from the sampling core are
	//both blocking, so they must be ran "concurrently"
//	if(fork() == 0){
//		//child
//		printf("RPC setup starting...\r\n");
//		if(rpc_setup() != 0){
//			printf("rpc setup failed!\r\n");
//			return 0;
//		}
//		printf("RPC setup finished!\r\n");
//		char message[16] = "Hi";
//		int data[1] = {1};
//		rpc_send_message(message, data, 1);
//		printf("RPC Listener starting...\r\n");
////		rpc_init_listen();
//		printf("RPC Listener stopped!\r\n");
//	}else{
//		//parent
////		commInit();
//		printf("commInit finished\n");
//		printf("Serial Listener starting...\n");
//		commRXTask();
//		printf("Serial Listener stopped!\n");
//
//		//must wait for RPC Listener to close
//		//TODO maybe force it to close if ever reach here?
//		wait(NULL);
//		printf("Serial Listener fork stopped\n");
//	}

    return 0;
}

