/*
 * xadc.h
 *
 *  Created on: Oct 29, 2019
 *      Author: tdempsay
 *
 *  Revised: Oct 4, 2020
 *  	Author: bcra
 */

#ifndef SRC_XADC_H_
#define SRC_XADC_H_

#include "shared_definitions.h"
#include <stdbool.h>
#include <stdint.h>
#include <xadcps_hw.h>
#include <xparameters.h>
#include <sleep.h>
#include <xsysmon.h>
#include <stdio.h>
#include <xscugic.h>
//#include <Xil_exception.h>
#include <xil_printf.h>
#include <stdlib.h>
#include <xtmrctr.h>
#include <math.h>

#include "comm.h"

/* Definitions for peripheral XADC_WIZ_0 */
#define XPAR_XADC_WIZ_0_DEVICE_ID 		0U
#define XPAR_XADC_WIZ_0_INCLUDE_INTR	1U
#define SYSMON_DEVICE_ID		XPAR_SYSMON_0_DEVICE_ID
#define XADC_INTR_ID			XPS_IRQ_INT_ID

#define XADC_CLOCK_FREQ 		100000000 //input clock to xadc wiz block (Mhz). Must be set in Vivado
#define XADC_MAX_SAMPLE_RATE 	60000
#define XADC_DEFAULT_RATE 		DEFAULT_SAMPLE_RATE

#define AUX_7_INPUT 		(XSM_CH_AUX_MIN + 7)
#define AUX_14_INPUT 		(XSM_CH_AUX_MIN + 14)
#define XADC_SEQ_SETTING 	XSM_SEQ_MODE_SINGCHAN

/**
 * Function that converts raw 12bit sample to voltage (float)
 */
#define RawToExtVoltage(AdcData) 					\
	(((float)(AdcData))/4096.0f)


u8 xadcInit();

void xadcEnableSampling(u8 streamSetting);
void xadcDisableSampling();
void xadcProcessSamples();

void xadcInterruptHandler(void *CallBackRef);

int xadcSetPolarity(u8 setting);
int xadcSetSampleRate(u32 rate);
u32 xadcGetSampleRate();
u32 xadcGetSampleCount();
XSysMon* xadcGetSysMonPtr();

u8 xadcCheckAuxSettings();
int xadcFractionToInt(float FloatNum);

#endif /* SRC_XADC_H_ */
