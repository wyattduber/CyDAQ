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

int main(void) {
	u8 recvBuf[TEST_BUFFER_SIZE];
	u8 txBuf[TEST_BUFFER_SIZE];
	u8 bytes, payloadLength;
	int cmd;

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
					xil_printf("Error: Incorrect Format\n\r");
				}
			}
			else{
				//If valid
				cmd = recvBuf[COMM_NUM_START_CHARS + COMM_MODE_SIZE];
//				int cmd2 = 0;
//				cmd2 += (recvBuf[1] - 48) * 10000000;
//				cmd2 += (recvBuf[2] - 48) * 1000000;
//				cmd2 += (recvBuf[3] - 48)* 100000;
//				cmd2 += (recvBuf[4] - 48) * 10000;
//				cmd2 += (recvBuf[5] - 48) * 1000;
//				cmd2 += (recvBuf[6] - 48) * 100;
//				cmd2 += (recvBuf[7] - 48) * 10;
//				cmd2 += recvBuf[8] - 48;
//
//			    int dec_value = 0;
//			    // Initializing base value to 1, i.e 2^0
//			    int base = 1;
//
//			    int temp = cmd2;
//			    while (temp) {
//			        int last_digit = temp % 10;
//			        temp = temp / 10;
//
//			        dec_value += last_digit * base;
//
//			        base = base * 2;
//			    }
//
//			    cmd = dec_value - 48;


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
				xil_printf("ARM0: Cmd is %d\n\r",cmd);
//
				if(cmd >= NUM_COMMANDS){
					sprintf(txBuf,"%cERR%c",COMM_START_CHAR,COMM_STOP_CHAR);
					usb_commSend(txBuf, 5);
					if(DEBUG){

						xil_printf("Error: Invalid Command\n\r");
					}
					continue;
				}

				if(cmd == START_SAMPLING){
					for(i=0;i<SAMPLE_BUFFER_SIZE*sizeof(u16)-1;i+=2){
						(*bufStart)[i] = (u16)(128*(sin(2*3.1415*i/SAMPLE_BUFFER_SIZE)+1)) >> 8;
						(*bufStart)[i+1] = 0x00FF & (u16)(128*(sin(2*3.1415*i/SAMPLE_BUFFER_SIZE)+1));
//						xil_printf("Val: %d\r\n", (*bufStart)[i+1]);
					}
					usb_commSend(*(u8**)startPtr, SAMPLE_BUFFER_SIZE*sizeof(u16));

//					*flagPtr |= 0x10;
//					*bufStart = *bufEnd;
					xil_printf("ARM0: Start Sampling\n\r");
				}

				if(cmd == STOP_SAMPLING){
					*flagPtr &= ~0x10;
					xil_printf("ARM0: Stop Sampling\n\r");
				}

				if(cmd == PING) {
					xil_printf("ARM0: NEVER GONNA GIVE YOU UP");
				}

				//Share values with CPU1
				for(i = 0; i < payloadLength; i++){
					pyldPtr[i] = recvBuf[COMM_NUM_START_CHARS + COMM_CMD_SIZE
											  + COMM_MODE_SIZE + i];
				}

				*(u8*)modePtr = recvBuf[COMM_NUM_START_CHARS];
				*(u8*)cmdPtr = cmd;

				//Set command ready flag
				*flagPtr |= 0x01;

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
