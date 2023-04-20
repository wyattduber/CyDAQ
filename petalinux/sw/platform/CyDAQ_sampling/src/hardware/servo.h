/*
 * servo.h
 *
 *  Created on: Nov 20, 2020
 *      Author: irex
 */

#ifndef SRC_SERVO_H_
#define SRC_SERVO_H_

#define constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))


#include "xtmrctr.h"

typedef struct {
	float offset;
	float min_lim;
	float max_lim;
	float deg_per_us;
} SERVO;

XTmrCtr *pwm;
u32 _SysClkPeriod;
u32 _min_us;
u32 _max_us;


SERVO *servo_init(int min_us, int max_us, int max_angle);

void servoWrite(SERVO *servo, float deg);

#endif /* SRC_SERVO_H_ */
