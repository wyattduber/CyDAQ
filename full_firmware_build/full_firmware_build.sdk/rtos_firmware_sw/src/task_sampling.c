/*
 * task_sampling.c
 *
 *  Created on: Sep 19, 2020
 *      Author: Brady
 */

#include "task_sampling.h"

extern bool samplingEnabled;
extern bool streamingEnabled;

extern TaskHandle_t hSamplingTask;

extern SemaphoreHandle_t hSamplingConfig;

void vTaskSampling(void *parameters)
{
	u32 ulNotifiedValue;

	while(1)
	{
		xTaskNotifyWait(0x00, ULONG_MAX, &ulNotifiedValue, portMAX_DELAY);
		/*
		if(hSamplingConfig == NULL)
			continue;

		if(xSemaphoreTake(hSamplingConfig, (TickType_t) 0) != pdTRUE)
			continue;

		//sampling config struct was available for read
		samplingConfig_t mSamplingConfig;
		mutexSamplingConfig_Get(&mSamplingConfig);

		if(mSamplingConfig.samplingStart) {
			//begin sampling
			if(!samplingEnabled) {
				vTaskPrioritySet(hSamplingTask, SAMPLING_TASK_PRIORITY_ACTIVE);
				xadcEnableSampling(0);
			}
		} else {
			//end sampling
			if(samplingEnabled) {
				xadcDisableSampling();
				vTaskPrioritySet(hSamplingTask, SAMPLING_TASK_PRIORITY_INACTIVE);
			}

			//configure hardware
			if(mSamplingConfig.changed) {
				//TODO use changed more sparingly
				xadcSetSampleRate(mSamplingConfig.sampleRate);
				muxSetInputPins(mSamplingConfig.inputSrc);
				muxSetActiveFilter(mSamplingConfig.filterType);
				tuneFilter(50, mSamplingConfig.cornerFreqLower, mSamplingConfig.cornerFreqUpper);

				mSamplingConfig.changed = false;
			}
		}

		xSemaphoreGive(hSamplingConfig);

		//perform sampling tasks
		if(samplingEnabled) {
			xadcCaptureSample();
		} else {
			//vTaskDelay(10 / portTICK_PERIOD_MS);
		}
		*/
		if(samplingEnabled) {
			xadcCaptureSample();
		}
	}
}
