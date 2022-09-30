/*
 * ads7047.h
 *
 *  Created on: Nov 19, 2020
 *      Author: Brady
 */

#ifndef SRC_ADS7047_H_
#define SRC_ADS7047_H_

#include "shared_definitions.h"
#include "xttcps.h"
#include "xspi.h"
#include "xadc.h"

#define SPI_ADC_TTC_DEVICE_ID		XPAR_XTTCPS_0_DEVICE_ID
#define SPI_ADC_TTC_INTR_ID			XPAR_XTTCPS_0_INTR

#define SPI_ADC_RX_BUFFER_SIZE	2
#define SPI_ADC_SS_ADDR			0x02

#define ADS7047_MAX_SAMPLE_RATE		1000000
#define ADS7047_DEFAULT_RATE		DEFAULT_SAMPLE_RATE

int init_ads7047(void);
void ads7047_EnableSampling(u8 streamSetting);
void ads7047_DisableSampling(void);
void ads7047_ProcessSamples(void);

void ads7047_InterruptHandler(void *CallBackRef);

int ads7047_SetSampleRate(u32 rateHz);
u16 ads7047_CaptureSample(void);

u32 ads7047_GetSampleRate();
u32 ads7047_GetSampleCount();

#endif /* SRC_ADS7047_H_ */
