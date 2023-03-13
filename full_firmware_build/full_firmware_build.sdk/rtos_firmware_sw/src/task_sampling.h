/*
 * task_sampling.h
 *
 *  Created on: Sep 19, 2020
 *      Author: Brady
 */

#ifndef SRC_TASK_SAMPLING_H_
#define SRC_TASK_SAMPLING_H_

#include "FreeRTOS.h"
#include "semphr.h"
#include "limits.h"

#include "mutex.h"

void vTaskSampling(void *parameters);

#endif /* SRC_TASK_SAMPLING_H_ */
