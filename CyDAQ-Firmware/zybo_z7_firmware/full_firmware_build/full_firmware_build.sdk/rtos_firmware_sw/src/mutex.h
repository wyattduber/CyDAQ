/*
 * mutex.h
 *
 *  Created on: Sep 17, 2020
 *      Author: Brady
 */

#ifndef SRC_MUTEX_H_
#define SRC_MUTEX_H_

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

#include "filter.h"
#include "shared_definitions.h"
#include "xadc.h"

typedef enum samplingConfigNotifyIndex
{
	SC_START_SAMPLING = 0,
	SC_STOP_SAMPLING = 1,
	SC_CONFIG_CHANGED = 2,
	NUM_SC_NOTIFY_INDEX
} samplingConfigNotifyIndex_t;

typedef struct samplingConfig
{
	bool changed : 1;
	bool samplingStart : 1;
	u32 sampleRate;
	filters_e filterType;
	inputs_e inputSrc;
	FILTER_FREQ_TYPE cornerFreqLower;
	FILTER_FREQ_TYPE cornerFreqUpper;
} samplingConfig_t;

void mutexInitSamplingConfig(void);

void mutexSamplingConfig_Get(samplingConfig_t *samplingConfig);
void mutexSamplingConfig_SamplingStart(void);
void mutexSamplingConfig_SamplingStop(void);
void mutexSamplingConfig_SetSampleRate(u32 sampleRate);
void mutexSamplingConfig_SetFilterType(filters_e filterType);
void mutexSamplingConfig_SetInputSrc(inputs_e inputSrc);
void mutexSamplingConfig_SetCornerFreqLower(FILTER_FREQ_TYPE cornerFreqLower);
void mutexSamplingConfig_SetCornerFreqUpper(FILTER_FREQ_TYPE cornerFreqUpper);

#endif /* SRC_MUTEX_H_ */
