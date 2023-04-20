/*
 * shared_objects.c
 *
 * This file contains common objects (such as the SPI controller software instance) that need
 * to be referenced in multiple places by multiple drivers. Instead of making one driver the
 * arbitrary owner of these objects, they are collected in this file for drivers to access and
 * configure separately.
 *
 *  Created on: Nov 19, 2020
 *      Author: Brady
 */

#include "shared_definitions.h"

/* Global variables */
bool samplingEnabled = false;
bool streamingEnabled = false;
bool SpiInitStatus = false;

filters_e activeFilter = FILTER_PASSTHROUGH;
adcs_e activeAdc = ADC_XADC;

/* Local variables (object instances) */
static XSpi SpiInstance;
static XScuGic InterruptController;
static XTtcPs TtcInstance;

SAMPLE_TYPE SampleBuffer[SAMPLE_BUFFER_SIZE];
volatile u32 SampleCount = 0;

int shared_InitSpi(void) {
	int Status = 0;
	XSpi_Config *ConfigPtr;

	if(SpiInitStatus) {
		return XST_SUCCESS;
	}

	/*
	 * Initialize the SPI driver so that it is ready to use
	 */
	ConfigPtr = XSpi_LookupConfig(SPI_DEVICE_ID);
	if (ConfigPtr == NULL) {
		return XST_DEVICE_NOT_FOUND;
	}

	XSpi *SpiInstancePtr = shared_GetSpiInstPtr();
	Status = XSpi_CfgInitialize(SpiInstancePtr, ConfigPtr, ConfigPtr->BaseAddress);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	/*
	 * Configure SPI controller:
	 * 		Device is master
	 * 		Transfer data on SCLK falling edge
	 * 		Automatically pull SS low during transaction
	 */
	Status = XSpi_SetOptions(SpiInstancePtr, XSP_MASTER_OPTION | XSP_CLK_PHASE_1_OPTION);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	XSpi_Start(SpiInstancePtr);

	/*
	 * Disable Global interrupt to use polled mode operation
	 */
	XSpi_IntrGlobalDisable(SpiInstancePtr);

	/*
	 * Mark SPI controller as initialized
	 */
	SpiInitStatus = true;

	return XST_SUCCESS;
}

XSpi* shared_GetSpiInstPtr(void) {
	return &SpiInstance;
}

XScuGic* shared_GetScuGicPtr(void) {
	return &InterruptController;
}

XTtcPs* shared_GetTtcPsInstPtr(void) {
	return &TtcInstance;
}

SAMPLE_TYPE* shared_GetSampleBuffer(void) {
	return SampleBuffer;
}

volatile u32* shared_GetSampleCount(void) {
	return &SampleCount;
}

void shared_clearSampleCount(void){
	SampleCount = 0;
}
