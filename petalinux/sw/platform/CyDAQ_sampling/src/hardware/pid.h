/*
 * pid.h
 *
 *  Created on: Nov 13, 2020
 *      Author: irex
 */

#ifndef _PID_H_
#define _PID_H_

#include <stdlib.h>
#include <float.h>

#define max(x, y) ((x) > (y) ? x : y)
#define min(x, y) ((x) < (y) ? x : y)
#define constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))


typedef struct {
	float kp;
	float kd;
	float ki;
	float N;
	float out;
	float set;
	float integrator;
	float differentiator;
	float last_meas;
	float last_err;
	float i_windup_lim[2];
//	int inv_err;
} PID;


PID *pid_init(float kp, float ki, float kd, float set);

void updatePID(PID *pid, float new_meas, float dt);


#endif /* SRC_PID_H_ */
