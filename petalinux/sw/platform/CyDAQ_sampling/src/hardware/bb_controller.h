/*
 * bb_controller.h
 *
 *  Created on: Nov 22, 2020
 *      Author: irex
 */

#ifndef SRC_BB_CONTROLLER_H_
#define SRC_BB_CONTROLLER_H_



#include <stdio.h>
#include <stdlib.h>
#include "platform.h"
#include "xil_printf.h"
#include "sleep.h"
#include "xtime_l.h"
#include "xgpio.h"
#include "ir_sensor.h"
#include "servo.h"
#include "pid.h"
#include "xuartps.h"
#include <string.h>
#include "comm.h"

#define max(x, y) ((x) > (y) ? x : y)
#define min(x, y) ((x) < (y) ? x : y)
#define constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))

int ballbeamStart();

int parseInput(PID *pid);
void tolower_str(char *str);


#endif /* SRC_BB_CONTROLLER_H_ */
