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
#include "corrections.h"

/* Global variables */
//bool samplingEnabled = false;
//bool streamingEnabled = false;
//bool SpiInitStatus = false;
//
//filters_e activeFilter = FILTER_PASSTHROUGH;
//adcs_e activeAdc = ADC_XADC;

/* Local variables (object instances) */
//static XSpi SpiInstance;
//static XScuGic InterruptController;
//static XTtcPs TtcInstance;

//SAMPLE_TYPE SampleBuffer[SAMPLE_BUFFER_SIZE];
//volatile u32 SampleCount = 0;


//SAMPLE_TYPE* shared_GetSampleBuffer(void) {
//	return SampleBuffer;
//}
//
//volatile u32* shared_GetSampleCount(void) {
//	return &SampleCount;
//}
//
//void shared_clearSampleCount(void){
//	SampleCount = 0;
//}
