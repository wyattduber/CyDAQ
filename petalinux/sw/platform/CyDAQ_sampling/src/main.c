/*
 * main.c
 *
 *  Created on: Oct 7, 2019
 *      Author: tdempsay
 *
 *  Revised: Oct 4, 2020
 *  	Author: bcra
 */

#include <sleep.h>
#include <stdio.h>
#include <xparameters.h>

#include "hardware/platform.h"
#include "xil_printf.h"
#include "hardware/x9258.h"
#include "hardware/dac80501.h"
#include "hardware/ads7047.h"
#include "hardware/filter.h"
#include "hardware/mux_driver.h"
#include "hardware/comm.h"
#include "stdlib.h"
#include "hardware/xadc.h"
#include "hardware/shared_definitions.h"
#include "remoteproc/rpc.h"


/* Constant definitions */
#define BUTTON_BASE_ADDR	XPAR_GPIO_0_BASEADDR

/* Function definitions */
void xadcTest();
void commTest();
void filterTest();
void initButtons();
u8 getButtons();
u8 getButtonChangeBlocking();

/**
 * Firmware main function. Idles in commRXTask() under normal operation. Runs various system
 *   tests prior to operation if DEBUG is defined as true.
 */
int main(int argc, char *argv[]) {

	xil_printf("SAMP> Starting to init all hardware...\r\n");
	///TODO add return checking for all these inits
	init_platform();
	muxInit();
	if(xadcInit() != XST_SUCCESS){
		xil_printf("SAMP> ERROR! xadcInit failed!\r\n");
	}

	if(init_x9258_i2c() != XST_SUCCESS){
		xil_printf("SAMP> ERROR! x9258_i2c init failed!\r\n");
	}
	shared_InitSpi();
	init_dac80501();
	init_ads7047();
	xil_printf("SAMP> Finished init all hardware\r\n");
	xil_printf("SAMP> Starting RPC\r\n");
	rpc_setup();

	return 0;

//
//	xil_printf("Starting to init remoteproc\r\n");
//	rpc_setup();
//	xil_printf("Finished init remoteproc\r\n");
//
//	xil_printf("Starting to init all hardware...\r\n");
//	init_platform();
////    commInit();
//    muxInit();
//    xadcInit();
//    init_x9258_i2c();
//    shared_InitSpi();
//    init_dac80501();
//    init_ads7047();
//    xil_printf("Finished init all hardware...\r\n");

    //TODO delete - Uncomment this to uncontrollably send captured samples to console.
    //just for sanity check I guess
//    while(1) {
//        	u16 x = ads7047_CaptureSample();
//        	xil_printf("%d\r\n", x);
//
//        	usleep(1);
//	}

//    xadcTest();
//    xil_printf("Finished xadc test...\r\n");
//    commTest();
//    filterTest();
//    xil_printf("Finished filter test...\r\n");

//    rpc_listen();
//    rpc_listen();
//
//    cleanup_platform();
//    xil_printf("Finished clean up program...\r\n");
//
//    xil_printf("Starting to tear down remoteproc\r\n");
//	rpc_tear_down();
//	xil_printf("Finished tearing down remoteproc\r\n");

    return 0;
}

/**
 * Test for XADC
 */
void xadcTest(){
	xil_printf("*****XADC Test*****\nEnter '1' for data streaming, '0' else\n");
	xil_printf("Note faster sample rates may be affected by real-time streaming\n");
	xil_printf("if streaming is enabled, type ! to stop program\n");
//	u8 buffer[10];
//	u8 numBytes = 0;
//	while(buffer[numBytes-1] != '\r' && buffer[numBytes-1] != '\n'){
//		numBytes += commUartRecv(&buffer[numBytes], 1);
//	}
//	buffer[numBytes-1] = 0;
//	u8 streaming = (buffer[0] == '1') ? 1 : 0;
	u8 streaming = 0;
//	numBytes = 0;
//	xil_printf("Enter sample rate in samples/second and hit enter\n");
//	while(1){
//		numBytes += commUartRecv(&buffer[numBytes], 2);
//		if(buffer[numBytes-1] == '\r' || buffer[numBytes-1] == '\n'){
//			buffer[numBytes-1] = '\0';
//			u32 rate = atoi((const char*) buffer);
//			if(xadcSetSampleRate(rate) == 0){
//				break;
//			}else{
//				xil_printf("Error, invalid input, using default (10,000)\n");
//				xadcSetSampleRate(10000);
//				break;
//			}
//		}
//	}
	xadcSetSampleRate(10000);
    xadcEnableSampling(streaming);
    if(streaming == 0){
    	xadcProcessSamples();
    }
    sleep(1);
	xil_printf("Exiting XADC Test\n");
	return;
}

/**
 * Test for receiving/transmitting over UART
 */
void commTest(){
	u8 buffer[100];
	u8 buttons = 0;
	u32 numBytes = 0, i = 0;
	if(DEBUG)
		xil_printf("Comm Test Ready, Enter '1' for enable echo, '0' otherwise\n");
	while(buffer[numBytes-1] != '\r' && buffer[numBytes-1] != '\n'){
			numBytes += commUartRecv(&buffer[numBytes], 1);
		}
	buffer[numBytes-1] = 0;
	u8 echo = (buffer[0] == '1') ? 1 : 0;
	if(DEBUG)
		xil_printf("Type ~ to exit test\n");
	usleep(300000);

	while( buffer[numBytes-1] != '~'){
		numBytes += commUartRecv(&buffer[numBytes], 1);
		if(numBytes > 0 && echo){
			for(i = 0; i < numBytes; i++){
				xil_printf("%c", buffer[i]);
		}
			numBytes = 0;
		}else if(buttons != 0){
			switch(buttons){
				case 1: xil_printf("@TEST123!\n"); break;
				case 2: xil_printf("@FA53!\n"); break;
			}
			usleep(500000);
		}else if(buffer[0] == '@' && buffer[numBytes-1] == '!'){
			xil_printf("@ACK!");
			for(i = 0; i < numBytes; i++){
				buffer[i] = 0;
			}
			//commProcessPacket(buffer, numBytes);
			numBytes = 0;
		}
	}

	return;
}

/**
 * Test for setting filter corner frequencies
 */
void filterTest(){
	xil_printf("**********Filter Test**********\nDefaults: Filter=1st Order LP, Corners=10k,20k, Input=Analog\n");
	xil_printf("Type 'I#' or 'F#' + [Enter]to select input/filter (# should follow enums in shared_definitions.h)\n'U' or 'D' + [Enter] to increase/decrease corners.\n");
	xil_printf("E[Enter]' to exit test\n\n");
    FILTER_FREQ_TYPE highpass = 10000, lowpass = 20000;	  //1550hz -> 10k ohm, 15000hz -> 1k ohm
	u8 selectedFilter = FILTER_1ST_ORDER_LP, buttons = 0, numBytes = 0, status = 0;
	u8 buf[20];
	muxSetActiveFilter(selectedFilter);	//enums defined in shared_definitions.h for filters and inputs
	muxSetInputPins(ANALOG);
	status = tuneFilter(selectedFilter, highpass, lowpass);

	 while((buttons = getButtons()) != 12){	//hit buttons 3 and 4 together to end test
			numBytes += commUartRecv(&buf[numBytes], 4);
			if(numBytes > 1 && (buf[numBytes-1] == '\r' || buf[numBytes-1] == '\n')){
				buf[numBytes-1] = '\0';
				xil_printf("Input: %s => ", buf);
				status = 2;
				if( (buf[0] == 'I' || buf[0] == 'i' ) && numBytes > 2){
					status = muxSetInputPins(buf[1] - '0');
				}else if(buf[0] == 'E' || buf[0] == 'e'){
					break;
				}else if(buf[0] == 'U' || buf[0] == 'u'){
					highpass += 1000;
					lowpass += 1000;
					status = tuneFilter(selectedFilter, highpass, lowpass);
					if(status == 0){
						xil_printf("Increasing corners to: %d, %d\n", highpass, lowpass);
					}else{
						xil_printf("Reverting corners to 10k, 20k\n");
						highpass = 10000;
						lowpass = 20000;
					}
				}else if(buf[0] == 'D' || buf[0] == 'd'){
					highpass -= 1000;
					lowpass -= 1000;
					xil_printf("Increasing corners to: %d, %d\n", highpass, lowpass);
					status = tuneFilter(selectedFilter, highpass, lowpass);
					if(status != 0){
						xil_printf("Reverting corners to default\n");
						highpass = 10000;
						lowpass = 20000;
					}
				}else if(( buf[0] == 'F' || buf[0] == 'f') && numBytes > 2){
					if(muxSetActiveFilter(buf[1]-'0') == 0){
						selectedFilter = buf[1]-1;
					}
					xil_printf("Reverting corners to default\n", buf[1]-'0');
					highpass = 10000;
					lowpass = 20000;
					status = tuneFilter(selectedFilter, highpass, lowpass);
				}else{
					xil_printf("Invalid Input\n");
				}
				numBytes = 0;
			}
			usleep(500000);
	}
	xil_printf("Exiting Filter Test\n");
}

u8 getButtons() {
	return (u8) Xil_In32(BUTTON_BASE_ADDR);
}

u8 getButtonChangeBlocking() {
	u8 buttons = 0;
	while( (buttons = (u8) Xil_In32(BUTTON_BASE_ADDR)) == 0x0) {
		usleep(50000);
	}

	return buttons;
}
