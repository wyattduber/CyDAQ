/*
 * ir_sensor.h
 *
 *  Created on: Nov 13, 2020
 *      Author: irex
 */

#ifndef SRC_IR_SENSOR_H_
#define SRC_IR_SENSOR_H_

#include "xiic_l.h"
#include "xgpio.h"
#include <stdlib.h>
#define IR_ADDR 0x40
#define IR_D1_REG 0x5E
#define IR_D3_REG 0x35
#define IR_SIG_ACCUM_REG 0xA8
#define IR_ACCUM_1 0x00
#define IR_ACCUM_5 0x01
#define IR_ACCUM_10 0x03
#define IR_ACCUM_30 0x02

XGpio *gpio_ssel;

typedef struct {
	int use_s1; // Set TRUE if using two sensors
	float s0_coeff[2]; // Best fit coefficients for sensor 1
	float s1_coeff[2]; // Best fit coefficients for sensor 2
	float dist0;
	float dist1;
} IR;

//TODO: Set up using two sensors
IR *ir_init();
void setAccum(IR *ir_sensor, int num);
int getAccum(IR *ir_sensor);
float getDist(IR *ir_sensor);


#endif /* SRC_IR_SENSOR_H_ */
