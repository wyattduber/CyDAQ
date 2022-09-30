/*
 * mutex.c
 *
 *  Created on: Sep 17, 2020
 *      Author: Brady
 */
#include "mutex.h"

extern SemaphoreHandle_t hSamplingStart;
extern SemaphoreHandle_t hSamplingStop;

extern TaskHandle_t hSamplingTask;

static samplingConfig_t mSamplingConfig;

void mutexInitSamplingConfig(void)
{
	mSamplingConfig.changed = false;
	mSamplingConfig.sampleRate = XADC_DEFAULT_RATE;
	mSamplingConfig.filterType = FILTER_1ST_ORDER_LP;
	mSamplingConfig.inputSrc = AUXILARY35MM;
	mSamplingConfig.cornerFreqLower = FILTER_FREQ_MIN;
	mSamplingConfig.cornerFreqUpper = FILTER_FREQ_MAX;
}

void mutexSamplingConfig_Get(samplingConfig_t *samplingConfig)
{
	memcpy(samplingConfig, &mSamplingConfig, sizeof(samplingConfig_t));
}

void mutexSamplingConfig_SamplingStart(void)
{
	if(mSamplingConfig.samplingStart == 0)
	{
		mSamplingConfig.samplingStart = 1;
		mSamplingConfig.changed = true;
	}
}

void mutexSamplingConfig_SamplingStop(void)
{
	if(mSamplingConfig.samplingStart == 1)
	{
		mSamplingConfig.samplingStart = 0;
		mSamplingConfig.changed = true;
	}
}

void mutexSamplingConfig_SetSampleRate(u32 sampleRate)
{
	if(sampleRate != mSamplingConfig.sampleRate)
	{
		mSamplingConfig.sampleRate = sampleRate;
		mSamplingConfig.changed = true;
	}
}

void mutexSamplingConfig_SetFilterType(filters_e filterType)
{
	if(filterType != mSamplingConfig.filterType)
	{
		mSamplingConfig.filterType = filterType;
		mSamplingConfig.changed = true;
	}
}

void mutexSamplingConfig_SetInputSrc(inputs_e inputSrc)
{
	if(inputSrc != mSamplingConfig.inputSrc)
	{
		mSamplingConfig.inputSrc = inputSrc;
		mSamplingConfig.changed = true;
	}
}

void mutexSamplingConfig_SetCornerFreqLower(FILTER_FREQ_TYPE cornerFreqLower)
{
	if(cornerFreqLower != mSamplingConfig.cornerFreqLower)
	{
		mSamplingConfig.cornerFreqLower = cornerFreqLower;
		mSamplingConfig.changed = true;
	}
}

void mutexSamplingConfig_SetCornerFreqUpper(FILTER_FREQ_TYPE cornerFreqUpper)
{
	if(cornerFreqUpper != mSamplingConfig.cornerFreqUpper)
	{
		mSamplingConfig.cornerFreqUpper = cornerFreqUpper;
		mSamplingConfig.changed = true;
	}
}
