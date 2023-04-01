/*
 *
 */

#ifndef SRC_COMM_H_
#define SRC_COMM_H_

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>

#include "corrections.h"
#include "shared_definitions.h"

#ifdef XPAR_INTC_0_DEVICE_ID
#include "xintc.h"
#else
//#include "xscugic.h"
#endif

#ifdef XPAR_INTC_0_DEVICE_ID
#define INTC		XIntc
#define INTC_DEVICE_ID		XPAR_INTC_0_DEVICE_ID
#define UART_INT_IRQ_ID		XPAR_INTC_0_UARTPS_0_VEC_ID
#else
#define INTC		XScuGic
#define INTC_DEVICE_ID		XPAR_SCUGIC_SINGLE_DEVICE_ID
#define UART_INT_IRQ_ID		XPAR_XUARTPS_1_INTR
#endif

#define COMM_BAUD_RATE 921600U
#define COMM_CMD_SIZE 1			//in bytes
#define COMM_NUM_START_CHARS 1	//in bytes
#define COMM_NUM_STOP_CHARS	1	//in bytes
#define COMM_SAMPLE_RATE_SIZE 4 //in bytes
#define COMM_START_CHAR '@'
#define COMM_STOP_CHAR '!'
#define TEST_BUFFER_SIZE	50
#define DEF_SAMPLE_BURST_SIZE 200 //number of bytes worth of samples to send in single burst (# samples* 2 bytes/sample)

//int commInit();

void commRXTask();
bool commProcessPacket(u8 *buffer, u16 bufSize);

u32 commUartRecv(u8 *bufferPtr, u32 numBytes);
u32 commUartSend(u8 *bufferPtr, u32 numBytes);
//u32 commUartIsTransmitFull(void);
u32 commUartWaitReceive(u8 *bufferPtr, char endChar1, char endChar2);

//XUartPs* commGetUartPtr();

void respond_ack(int serial_port);
void respond_err(int serial_port);

#endif /* SRC_COMM_H_ */
