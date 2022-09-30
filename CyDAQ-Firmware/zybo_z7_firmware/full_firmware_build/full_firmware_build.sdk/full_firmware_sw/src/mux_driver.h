/*
 * mux_driver.h
 *
 *  Created on: Oct 15, 2019
 *      Author: tdempsay
 */

#ifndef SRC_MUX_DRIVER_H_
#define SRC_MUX_DRIVER_H_

#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"
#include <xparameters.h>
#include <xgpio.h>
#include "shared_definitions.h"

#define GPIO_DEV_ID XPAR_GPIO_0_DEVICE_ID
#define MUX_SELECT_TYPE u8
#define NUM_SELECT_PINS 3
#define MUX_SET_FAILED 1
#define MUX_GPIO_CHANNEL 2 //channel number which the select pins are on (find in block diagram, AXI_GPIO module)
#define FLTR_PIN_OFFSET 5  	//JE8-10
#define EN_PIN_OFFSET 0 	//JE1,     Enable Pin for Muxes. See constaints file and block design for GPIO routing
#define INPUT_PIN_OFFSET 1 //JE2-4
#define HL_TGLE_PIN_OFFSET 4	//JE7,  High/Low toggle pin for filter outputs.

typedef struct{
	MUX_SELECT_TYPE hlToggle;
	MUX_SELECT_TYPE muxSelectPins;
	MUX_SELECT_TYPE enablePin;
} mux_config_data_t;

int muxInit();
u8 muxSetActiveFilter( filters_e filterSelect);
u8 muxSetInputPins( inputs_e inputSelect);

#endif /* SRC_MUX_DRIVER_H_ */
