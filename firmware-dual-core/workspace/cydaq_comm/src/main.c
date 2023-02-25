/******************************************************************************
*
* Copyright (C) 2010 - 2015 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* XILINX CONSORTIUM BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/
/***************************** Include Files *********************************/

#include "xparameters.h"		/* XPAR parameters */
#include "xusbps.h"			/* USB controller driver */
#include "xscugic.h"
#include "xusbps_cdc_ch9.h"		/* Generic Chapter 9 handling code */
#include "xusbps_cdc_ch9_cdc.h"	/* Storage class handling code */
#include "xil_exception.h"
#include "xpseudo_asm.h"
#include "xreg_cortexa9.h"
#include "xil_cache.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xusbps_cdc.h"
#include "xusbps_cdc_irq.h"		/* USB interrupt processing code */
#include "xusbps_cdc_buffer.h"

#include "xil_util.h"
#include "usb_comm.h"
#include <stdio.h>
#include <sleep.h>
#include "xil_io.h"
#include "xil_mmu.h"
#include "platform.h"
#include "xil_printf.h"

#include "math.h"


#define sev() __asm__("sev")
#define ARM1_STARTADR 0xFFFFFFF0
#define ARM1_BASEADDR 0x10000000



u8 payloadSize[NUM_COMMANDS] = {1,4,1,4,0,
		1,0,0,0,1,
		4,4,4,0,0,
		0};

volatile u8* cmdPtr = (u8 *)cmdShare;
volatile u8* pyldPtr = (u8 *)payloadShare;
volatile u8* modePtr = (u8 *)modeShare;
volatile u8* intrptPtr = (u8 *)intrptShare;
volatile u8* flagPtr = (u8 *)flagShare;

volatile u8** bufStart = (volatile u8**)startPtr;
volatile u8** bufEnd = (volatile u8**)endPtr;

u32 bytesReady, maxAddr, baseAddr;

u32 streamData(){
	//Check transmit flag
	if(*flagPtr & 0x10){
		//Transmit available samples FIXME Header Packets
		if(*bufStart > *bufEnd){

			bytesReady = (u8*)maxAddr - *bufStart;
			if(usb_commSend(*(u8**)startPtr, bytesReady) == XST_SUCCESS){
				*bufStart = baseAddr;
			}
			else{
				return XST_FAILURE;
			}
		}

		bytesReady = *bufEnd - *bufStart;
		if(usb_commSend(*(u8**)startPtr, bytesReady) == XST_SUCCESS){
			*bufStart += bytesReady;
			xil_printf("startPtr++ \n\r");
		}
		else{
			xil_printf("startPtr \n\r");
			return XST_FAILURE;
		}
		xil_printf("%x,%x,%x\n\r",*bufStart,*bufEnd,*flagPtr);
	}

	return XST_SUCCESS;
}

void print_buf(){
	for(int i = 0; i < SAMPLE_BUFFER_SIZE; i++){
		if(i!= 0 && i % 10 == 0){
			xil_printf("\r\n");
		}
		xil_printf("%lu ", (*bufStart)[i]);
	}
	xil_printf("\r\n");

}

void fill_buf_with_num(u16 num){
	for(int i = 0; i < SAMPLE_BUFFER_SIZE; i++){
		(*bufStart)[i] = num;
	}
}

void fill_buf_with_incrementing(){
	for(int i = 0; i < SAMPLE_BUFFER_SIZE; i++){
		(*bufStart)[i] = i % 256;
	}
}

u32 input_feedback(u8 cmd){//sends the received command back to frontend when successful
	u8 txBuf[TEST_BUFFER_SIZE];
	sprintf(txBuf,"%cSUC%u%c",COMM_START_CHAR,cmd,COMM_STOP_CHAR);
	return usb_commSend(txBuf, 5);//AWW, WHO'S BEING A GOOD BOY
}

u32 error_feedback(u8 err){//sends a error message back to frontend to indicated the error
	//TODO
	u8 txBuf[TEST_BUFFER_SIZE];
	sprintf(txBuf,"%cERR%u%c",COMM_START_CHAR,err,COMM_STOP_CHAR);
	return usb_commSend(txBuf, 5);//WHO SENT THE NAUGHTY INPUT? CYDAQ GON SPANK YOU!
}

int main(void) {
	u8 recvBuf[TEST_BUFFER_SIZE];
	u8 txBuf[TEST_BUFFER_SIZE];
	u8 bytes, payloadLength;
	u8 cmd = 0;
	int status = 0;

	*bufStart = malloc(SAMPLE_BUFFER_SIZE*sizeof(u16));
	baseAddr = *bufStart;
	maxAddr = *bufStart + SAMPLE_BUFFER_SIZE*sizeof(u16);
	*bufEnd = *bufStart + SAMPLE_BUFFER_SIZE*sizeof(u16);

	int i;
	init_platform();
	usbComm_init();
	xil_printf("Starting... \n\r");
	//Disable cache on OCM to create shareable memory
	Xil_SetTlbAttributes(0xFFFF0000,0x14de2);

//	//******** Start CPU1 here ********
	if(DEBUG){
		print("ARM0: writing start address for ARM1\n\r");
	}
	Xil_Out32(ARM1_STARTADR, ARM1_BASEADDR);
	dmb();
	if(DEBUG){
		print("ARM0: sending the SEV to wake up ARM1\n\r");
	}
	sev();

	//*********************************


	while(1) {
		//Clear buffer
		for(int i = 0; i < TEST_BUFFER_SIZE; i++){
			recvBuf[i] = 0;
		}

		//Receive bytes
		bytes = xusb_cdc_rx_bytes_available();// > 5 ? 5 : xusb_cdc_rx_bytes_available();

		if (bytes > 2) {
			bytes = usb_commRecv(recvBuf, bytes);
			print("ARM0: Message received\n\r");
			//Check message format
			if(recvBuf[0] != COMM_START_CHAR || recvBuf[bytes-1] != COMM_STOP_CHAR){
				sprintf(txBuf,"%cERR%c",COMM_START_CHAR,COMM_STOP_CHAR);
				usb_commSend(txBuf, 5);
				if(DEBUG){
					int i;
					for(i = 0; i < bytes-1; i++){
						xil_printf("array index: %d, data: %d\n\r",i,recvBuf[i]);
					}

					xil_printf("Error: Incorrect Format\n\r");
				}
			}
			else{//If input is valid

				cmd = ((recvBuf[1]-48 << 7) | (recvBuf[2]-48 << 6) | (recvBuf[3]-48 << 5) | (recvBuf[4]-48 << 4) | (recvBuf[5]-48 << 3) | (recvBuf[6]-48 << 2) | (recvBuf[7]-48 << 1) | (recvBuf[8]-48 << 0))-48;

				xil_printf("ARM0 command: %u\r\n", cmd);

				payloadLength = bytes - COMM_CMD_SIZE - COMM_NUM_START_CHARS
						- COMM_MODE_SIZE - COMM_NUM_STOP_CHARS;

//				if(payloadLength != payloadSize[cmd]){
//					sprintf(txBuf,"%cERR%c",COMM_START_CHAR,COMM_STOP_CHAR);
//					usb_commSend(txBuf, 5);
//					if(DEBUG){
//						xil_printf("Error: Incorrect Data Length\n\r");
//					}
//					continue;
//				}

				//speed test testing. Sends "@12...!" depending on size of numSamples
				if(cmd == 192) { //@0! into putty
					//https://support.xilinx.com/s/question/0D52E00006hpUKHSA2/zynq-baremetal-usb-device-running-out-of-dtds?language=en_US
					xil_printf("ARM0: Testing!!\r\n");
//					int numSamples = 100;
//
//					sprintf(txBuf,"%c",COMM_START_CHAR);
//					usb_commSend(txBuf, 1);
//					for(int i=0; i < numSamples; i++){
////						sprintf(txBuf,"12");
//						sprintf(txBuf,"12121212121212121212121212121212121212121212121212");
//						usb_commSend(txBuf, 50);
//					}
//					sprintf(txBuf,"%c",COMM_STOP_CHAR);
//					usb_commSend(txBuf, 1);

//					for(i=0;i<SAMPLE_BUFFER_SIZE-1;i+=2){
//						(*bufStart)[i] = (u16)(128*(sin(2*3.1415*i/SAMPLE_BUFFER_SIZE)+1)) >> 8;
//						(*bufStart)[i+1] = 0x00FF & (u16)(128*(sin(2*3.1415*i/SAMPLE_BUFFER_SIZE)+1));
////						xil_printf("Val: %d\r\n", (*bufStart)[i+1]);
//					}

					fill_buf_with_incrementing(22);
//					print_buf();

					xil_printf("Attempting to send buffer of size: %d bytes\r\n", SAMPLE_BUFFER_SIZE);
					usb_commSend(*(u8**)startPtr, SAMPLE_BUFFER_SIZE);

					//if this sleep isn't here it only sends 4096 values :|
//					usleep(100000);

					sprintf(txBuf,"%c",COMM_STOP_CHAR);
					usb_commSend(txBuf, 1);

					xil_printf("testing command finished\r\n");
					continue;
				}
//
				if(cmd >= NUM_COMMANDS){
					sprintf(txBuf,"%cERR%c",COMM_START_CHAR,COMM_STOP_CHAR);
					usb_commSend(txBuf, 5);
					input_feedback(cmd);
					if(DEBUG){

						xil_printf("Error: Invalid Command\n\r");
					}
					error_feedback(cmd);
					continue;
				}else if(cmd == INPUT_SELECT) {//0
					if(DEBUG)
						xil_printf("ARM0: INPUT_SELECT\n\r");
					if(payloadLength == 0) {
						if(DEBUG)
							xil_printf("Error, payload length too small\n");
						continue;
						error_feedback(cmd);
					} else {
						status = muxSetInputPins(recvBuf[2]);//TODO change the recvBuf[2] to actual payload data
						if (status > 0) {
							error_feedback(cmd);
						}
						input_feedback(cmd);

					}

				/*  ---Select Active Filter---  */
				}else if (cmd == SAMPLE_RATE_SET) {
					if (payloadLength < COMM_SAMPLE_RATE_SIZE) {
						if (DEBUG)
							xil_printf("Error, not enough bytes to represent sample rate\n");
						//TODO error return
					} else {
						u32 rate = (recvBuf[2] << 24) | (recvBuf[2] << 16) | (recvBuf[2] << 8) | (recvBuf[2]);
						//xadcSetSampleRate(rate); TODO pass this to sampling core
						//ads7047_SetSampleRate(rate);TODO pass this to sampling core
						input_feedback(cmd);
					}
				}else if (cmd == FILTER_SELECT) {
					if (payloadLength < 1) {
						if (DEBUG)
							xil_printf("No filter param given to set\n");

						error_feedback(cmd);
					} else {
						status = muxSetActiveFilter(recvBuf[2]);//TODO change the recvBuf[2] to actual payload data
					}

				/*  ---Set Filter Corner Frequencies---  */
				}else if (cmd == CORNER_FREQ_SET) {
					if (payloadLength < 4) {
						if (DEBUG)
							xil_printf("err in filter tune function");

						error_feedback(cmd);
					} else {//TODO add the filter functions
						//https://git.ece.iastate.edu/cydaq/firmware/-/blob/master/zybo_z7_firmware/full_firmware_build/full_firmware_build.sdk/full_firmware_sw/src/filter.c
//						//each frequency should be sent as two bytes each
//						FILTER_FREQ_TYPE lower = ((recvBuf[0] << 8) & 0xFF00)//TODO change the recvBuf[0] to actual payload data
//								+ payload[1];
//						FILTER_FREQ_TYPE upper = ((recvBuf[2] << 8) & 0xFF00)//TODO change the recvBuf[2] to actual payload data
//								+ payload[3];
//
//						//tune filter
//						err = tuneFilter(50, lower, upper);
					}


				/*  ---Respond to Ping---  */
				}else if (cmd == FETCH_SAMPLES) {
					//acknowledge command before returning samples
					xil_printf("%cACK%c", COMM_START_CHAR, COMM_STOP_CHAR);
						//xadcProcessSamples();//TODO sampling core
					input_feedback(cmd);
						continue;

				/*  ---Start Sampling---  */
				}else if(cmd == ADC_SELECT) {//5
					if(DEBUG)
						xil_printf("ARM0: ADC_SELECT\n\r");
					xil_printf("ARM0: not implemented yet\n\r");

				}else if(cmd == PING) {//7 @00110111!
					xil_printf("ARM0: NEVER GONNA GIVE YOU UP!\n\r");
					input_feedback(cmd);
					continue;

				}else if(cmd == START_SAMPLING){//8
					u8 useStreaming = 0;
					if (payloadLength == 1) {
						useStreaming = 1;
					}
						//xadcEnableSampling(useStreaming);//TODO sampling core

					for(i=0;i<SAMPLE_BUFFER_SIZE-1;i+=2){
						(*bufStart)[i] = (u16)(128*(sin(2*3.1415*i/SAMPLE_BUFFER_SIZE)+1)) >> 8;
						(*bufStart)[i+1] = 0x00FF & (u16)(128*(sin(2*3.1415*i/SAMPLE_BUFFER_SIZE)+1));
						//xil_printf("Val: %d\r\n", (*bufStart)[i+1]);
					}

					usb_commSend(*(u8**)startPtr, SAMPLE_BUFFER_SIZE*sizeof(u32));

//					*flagPtr |= 0x10;
//					*bufStart = *bufEnd;
					xil_printf("ARM0: Start Sampling\n\r");
				}else if(cmd == STOP_SAMPLING){//9
					*flagPtr &= ~0x10;
					xil_printf("ARM0: Stop Sampling\n\r");
				}else if(cmd == DAC_MODE_SELECT){//10
					if(DEBUG)
						xil_printf("ARM0: DAC_MODE_SELECT\n\r");
					xil_printf("ARM0: not implemented yet\n\r");
					//TODO
				}else if(cmd == DAC_NUM_REPS_SET){//11
					if(DEBUG)
						xil_printf("ARM0: DAC_NUM_REPS_SET\n\r");
					xil_printf("ARM0: not implemented yet\n\r");
					//TODO
				}else if(cmd == DAC_GEN_RATE_SET){//12
					if(DEBUG)
						xil_printf("ARM0: DAC_GEN_RATE_SET\n\r");
					xil_printf("ARM0: not implemented yet\n\r");
					//TODO
				}else if(cmd == DAC_SEND_DATASET){//13
					if(DEBUG)
						xil_printf("ARM0: DAC_SEND_DATASET\n\r");
					xil_printf("ARM0: not implemented yet\n\r");
					//TODO
				}else if(cmd == START_GENERATION){//14
					if(DEBUG)
						xil_printf("ARM0: START_GENERATION\n\r");
					xil_printf("ARM0: not implemented yet\n\r");
					//TODO
				}else if(cmd == STOP_GENERATION){//15
					if(DEBUG)
						xil_printf("ARM0: STOP_GENERATION\n\r");
					xil_printf("ARM0: not implemented yet\n\r");
					//TODO
				}else if(cmd == START_CONTROLLER){//16
					if(DEBUG)
						xil_printf("ARM0: START_CONTROLLER\n\r");
					xil_printf("ARM0: not implemented yet\n\r");
					//TODO
				}






				//Share values with CPU1
				for(i = 0; i < payloadLength; i++){
					pyldPtr[i] = recvBuf[COMM_NUM_START_CHARS + COMM_CMD_SIZE
											  + COMM_MODE_SIZE + i];
				}

				*(u8*)modePtr = recvBuf[COMM_NUM_START_CHARS];
				*(u8*)cmdPtr = cmd;

				//Set command ready flag
				//*flagPtr |= 0x01;

				//Wait for flag to be cleared by CPU1
				while((*(u8*)flagPtr & 0x01) == 0x01){
					//If CPU1 throws error report to host
					if(*(u8*)flagPtr & 0x02){
						sprintf(txBuf,"%cERR%c",COMM_START_CHAR,COMM_STOP_CHAR);
						usb_commSend(txBuf, 5);
						if(DEBUG){
							xil_printf("Error: Failed to execute\n\r");
						}
						continue;
					}
					//Stream available data while commmand is pending
//					print("ARM0: Loop Stream\n\r");
//					streamData();
				}


				//Report acknowledge to host
				sprintf(txBuf,"%cACK%c",COMM_START_CHAR,COMM_STOP_CHAR);
				usb_commSend(txBuf, 5);
			}
		}

//		streamData();

	}
	cleanup_platform();
	return 0;

}



//int main(void) {
//	int status;
//	XUsbPs usb;
//	XScuGic intc;
//	u8 text_buffer[256];
//	u8 tx_buffer[MSG_SIZE];
//	u32 bytes;
//	int i;
//
//	u8 cmd;
//
//	const char hello[13] = "Received ";
//	const char err[10] = "Error\n\r";
//	const char hai[4]="\n\r";
//	for(i=0;i<MSG_SIZE;i++){
//		tx_buffer[i] = (i%10) + 48;
//	}
//	tx_buffer[MSG_SIZE-1] = '#';
//	xil_printf("\n\n--- USB CDC ACM Test Application ---\n\n");
//
//	reset_usb();
//
//	// Set up and configure the interrupt system
//	status = setup_interrupts(&intc);
//	if (status != XST_SUCCESS) {
//		xil_printf("ERROR: Unable to initialize interrupt system: %d\n", status);
//		exit(1);
//	}
//
//	status = xusbps_cdc_register_interrupt(&intc, &usb, XPAR_PS7_USB_0_INTR);
//	if (status != XST_SUCCESS) {
//		xil_printf("ERROR: Unable to register USB interrupts: %d\n", status);
//		exit(1);
//	}
//
//	// Enable interrupts in the processor
//	Xil_ExceptionEnableMask(XIL_EXCEPTION_IRQ);
//
//	/* Initialize the USB controller */
//	status = xusb_cdc_init(&usb, XPAR_PS7_USB_0_DEVICE_ID, XPAR_PS7_USB_0_INTR, 64 * 1024);
//	if (status != XST_SUCCESS) {
//		xil_printf("ERROR: Unable to set up USB controller: %d\n", status);
//		exit(1);
//	}
//
//
//
//		while(1) {
//
//				bytes = xusb_cdc_rx_bytes_available();// > 5 ? 5 : xusb_cdc_rx_bytes_available();
//				if (bytes != 0) {
//					bytes = xusb_cdc_receive_data(text_buffer, bytes);
//					text_buffer[bytes] = 0;
//
////					xusb_cdc_send_data(&usb, (u8 *)hello, 9);
////					xusb_cdc_send_data(&usb, (u8 *)text_buffer, Xil_Strnlen(text_buffer,30));
////					xusb_cdc_send_data(&usb, (u8 *)hai, 2);
//
//					if(text_buffer[0] != COMM_START_CHAR || text_buffer[bytes-1] != COMM_STOP_CHAR){
//						if(text_buffer[0] != '\r')
//						xusb_cdc_send_data(&usb, (u8 *)err, 7);
//					}
//					else{
//						cmd = text_buffer[1];
//						if(cmd == '0'){
//							xusb_cdc_send_data(&usb, "Received Input Select\n\r", 23);
//						}
//						else if(cmd == '1'){
//							xusb_cdc_send_data(&usb, "Received Sample Rate Set\n\r", 26);
//						}
//						else if(cmd == '2'){
//							xusb_cdc_send_data(&usb, "Received Filter Select\n\r", 24);
//						}
//						else if(cmd == '3'){
//							xusb_cdc_send_data(&usb, "Received Corner Freq Set\n\r", 26);
//						}
//						else if(cmd == '4'){
////							xusb_cdc_send_data(&usb, "@", 1);
//							for(i = 0;i < 15;i++){
//								status = xusb_cdc_send_data(&usb, tx_buffer, MSG_SIZE);
//								if(status != 0){
//									xil_printf("ERROR: Unable send data: %d\n", status);
//								}
//							}
//							xusb_cdc_send_data(&usb, "end\n\r", 5);
//						}
//						else{
//							xusb_cdc_send_data(&usb, "Invalid Command\n\r", 17);
//						}
//					}
//				}
//		}
//	return 0;
//
//}
