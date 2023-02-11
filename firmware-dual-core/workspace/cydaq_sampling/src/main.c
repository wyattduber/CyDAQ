/******************************************************************************
*
* Copyright (C) 2009 - 2014 Xilinx, Inc.  All rights reserved.
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
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/

/*
 * helloworld.c: simple test application
 *
 * This application configures UART 16550 to baud rate 9600.
 * PS7 UART (Zynq) is not initialized by this application, since
 * bootrom/bsp configures it to baud rate 115200
 *
 * ------------------------------------------------
 * | UART TYPE   BAUD RATE                        |
 * ------------------------------------------------
 *   uartns550   9600
 *   uartlite    Configurable only in HW design
 *   ps7_uart    115200 (configured by bootrom/bsp)
 */

#include <stdio.h>
#include <sleep.h>
#include "xil_io.h"
#include "xil_mmu.h"
#include "platform.h"
#include "xil_cache.h"
#include "xil_printf.h"
#include "xparameters.h"
#include "xpseudo_asm.h"
#include "xil_exception.h"
#include "xsysmon.h"
#include "xaxidma.h"

#define SYSMON_DEVICE_ID	XPAR_SYSMON_0_DEVICE_ID
#define DMA_DEV_ID			XPAR_AXIDMA_0_DEVICE_ID
#define DDR_BASE_ADDR		XPAR_AXIDMA_0_BASEADDR

#define RX_BUFFER_BASE		(0x00100000)
#define MAX_PKT_LEN			256 //bytes

#define startPtr (*(volatile u8 **)(0xFFFF0007))
#define endPtr (*(volatile u8 **)(0xFFFF000B))
#define flagShare (*(volatile u8 *)(0xFFFF000F))
#define cmdShare (*(volatile u8 **)(0xFFFF0000))
#define payloadShare (*(volatile u8 **)(0xFFFF0001))
#define modeShare (*(volatile u8 **)(0xFFFF0005))
#define intrptShare (*(volatile u8 **)(0xFFFF0006))


int main()
{
	XSysMon_Config *SYSConfigPtr ;
	XSysMon SysMonInstPtr;
	XAxiDma_Config *CfgPtr;
	XAxiDma AxiDma;
	int Status;
	int reset_done;
	u8 *RxBufferPtr;
	u32 maxAddr, baseAddr;
	u32 addr;

    init_platform();

    print("ARM1: init_platform\n\r");

	//Disable cache on OCM
	// S=b1 TEX=b100 AP=b11, Domain=b1111, C=b0, B=b0
	Xil_SetTlbAttributes(0xFFFF0000,0x14de2);

//	startPtr = RX_BUFFER_BASE;
//	endPtr = RX_BUFFER_BASE;
	endPtr = startPtr;
	baseAddr = startPtr;
	maxAddr = startPtr + 3000000;

	//test
	xil_printf("xil_printf testing\n\r");
	print("print testing\n\r");
	printf("printf testing\n\r");

	//Sample Code
	SYSConfigPtr = XSysMon_LookupConfig(SYSMON_DEVICE_ID);
	if (SYSConfigPtr == NULL) {
		return XST_FAILURE;
	}

	CfgPtr = XAxiDma_LookupConfig(DMA_DEV_ID);
		if (!CfgPtr) {
			printf("No config found for %d\r\n", DMA_DEV_ID);
			return XST_FAILURE;
		}

	Status = XAxiDma_CfgInitialize(&AxiDma, CfgPtr);
	if (Status != XST_SUCCESS) {
		printf("Initialization DMA failed %d\r\n", Status);
		return XST_FAILURE;
	}

	XSysMon_CfgInitialize(&SysMonInstPtr, SYSConfigPtr, SYSConfigPtr->BaseAddress);

	XSysMon_SetSequencerMode(&SysMonInstPtr, XSM_SEQ_MODE_SAFE);
	XSysMon_SetAlarmEnables(&SysMonInstPtr, 0x0);
	XSysMon_SetSeqChEnables(&SysMonInstPtr, XSM_SEQ_CH_VPVN);
	XSysMon_SetAdcClkDivisor(&SysMonInstPtr, 32);
	XSysMon_SetSequencerMode(&SysMonInstPtr, XSM_SEQ_MODE_CONTINPASS);

	RxBufferPtr = (u8 *)RX_BUFFER_BASE;

		addr = (u32)RX_BUFFER_BASE;

		XAxiDma_Reset(&AxiDma);
		reset_done = XAxiDma_ResetIsDone(&AxiDma);

		while(reset_done != 1){

		}


	XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK,XAXIDMA_DEVICE_TO_DMA);
	XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK,XAXIDMA_DMA_TO_DEVICE);




	while(1){
		//testing
		//xil_printf("ARM1: cmd = %u, payload = %u, flag = %u, mode = %u, intrpt = %u\r\n", cmdShare, payloadShare, flagShare, modeShare, intrptShare);
		if(flagShare & 0x10){
//			xil_printf("ARM1: Start streaming... \n\r");
			Status = XAxiDma_SimpleTransfer(&AxiDma,(UINTPTR)endPtr,MAX_PKT_LEN, XAXIDMA_DEVICE_TO_DMA);
			if (Status != XST_SUCCESS) {
				xil_printf("XFER failed %d\r\n", Status);
				return XST_FAILURE;

			}
//			xil_printf("ARM1: Waiting... \n\r");
			while ((XAxiDma_Busy(&AxiDma,XAXIDMA_DEVICE_TO_DMA))){
				/* Wait */
//				xil_printf("ARM1: Loop waiting... \n\r");
			}
			Xil_DCacheFlushRange((UINTPTR)endPtr, MAX_PKT_LEN);

//			xil_printf("ARM1: endPtr++ \n\r");
			if((int)(endPtr + MAX_PKT_LEN) >= maxAddr){
				endPtr = (volatile u8*)baseAddr;
			}
			else{
				endPtr += MAX_PKT_LEN;
			}
		}

	}

    cleanup_platform();
    return 0;
}
