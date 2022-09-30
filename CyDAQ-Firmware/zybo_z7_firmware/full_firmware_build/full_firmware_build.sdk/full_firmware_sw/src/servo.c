/*
 * servo.c
 *
 *  Created on: Nov 20, 2020
 *      Author: irex
 */

#include "servo.h"
#include <stdlib.h>

SERVO *servo_init(int min_us, int max_us, int max_angle) {
	SERVO *servo = malloc(sizeof(SERVO));
	_min_us = min_us;
	_max_us = max_us;

	servo->max_lim = 360;
	servo->min_lim = 0;
	servo->deg_per_us = (float) (max_angle) / ((float) (_max_us - _min_us));
	servo->offset = 0;

	pwm = malloc(sizeof(XTmrCtr));
	XTmrCtr_Initialize(pwm, XPAR_TMRCTR_1_DEVICE_ID);
	pwm->IsPwmEnabled = 0;
	_SysClkPeriod = XTC_HZ_TO_NS(pwm->Config.SysClockFreqHz);
	XTmrCtr_PwmDisable(pwm);
	XTmrCtr_PwmConfigure(pwm, 20e6, 20e6);
	XTmrCtr_PwmEnable(pwm);

	return servo;
}

void servoWrite(SERVO *servo, float deg) {
	float offset = servo->offset;
	float deg_per_us = servo->deg_per_us;
	float deg_constrained = constrain(deg + offset, servo->min_lim,
			servo->max_lim);
	unsigned int us = _min_us + deg_constrained / deg_per_us;
	u32 match = XTC_ROUND_DIV(us*1e3, _SysClkPeriod) - 2;
	XTmrCtr_WriteReg(pwm->BaseAddress, XTC_TIMER_1, XTC_TLR_OFFSET, match);
}

