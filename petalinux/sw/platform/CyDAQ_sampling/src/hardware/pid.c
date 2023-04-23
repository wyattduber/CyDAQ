/*
 * pid.c
 *
 *  Created on: Nov 13, 2020
 *      Author: irex
 */

#include "pid.h"

PID *pid_init(float kp, float ki, float kd, float set) {
	PID *pid = (PID*) malloc(sizeof(PID));

	pid->kp = kp;
	pid->ki = ki;
	pid->kd = kd;
	pid->set = set;
	pid->out = 0;
	pid->differentiator = 0;
	pid->integrator = 0;
	pid->last_meas = 0;
//	pid->inv_err = 0;
	pid->i_windup_lim[0] = -FLT_MAX;
	pid->i_windup_lim[1] = FLT_MAX;
	return pid;
}

void updatePID(PID *pid, float new_meas, float dt) {
	float last_meas = pid->last_meas;
	float err;
	float i = pid->integrator;
	float d = pid->differentiator;
	float N = pid->N;
	float r = pid->set;

	err = (r - new_meas);
//	if (pid->inv_err) {
//		err = -(err);
//	}

	i = i + err * dt;
	i = constrain(i, pid->i_windup_lim[0], pid->i_windup_lim[1]);

	float a = dt / (1.0f / N + dt);
	float diff = -(new_meas - last_meas) / dt;
	d = pid->differentiator + a * (diff - pid->differentiator);

	pid->out = err * pid->kp + pid->ki * i + pid->kd * d;
	pid->integrator = i;
	pid->differentiator = d;
	pid->last_err = err;
	pid->last_meas = new_meas;
}
