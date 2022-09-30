/*
 * x9258.h
 *
 *  Created on: Oct 8, 2019
 *      Author: tdempsay
 */

#ifndef X9258_H_
#define X9258_H_

#include <xil_printf.h>
#include <xil_types.h>
#include <xparameters.h>
#include <xstatus.h>
#include <xiicps.h>
#include "shared_definitions.h"


#define POT_I2C_SDA_PIN 11 //JF PIN 3
#define POT_I2C_SCL_PIN 10 //JF PIN 2
#define POT_I2C_CLK_RATE	400000
#define POT_I2C_BUFFER_SIZE 2
#define POT_NUM_TYPE u8
#define POT_R_TYPE u8
#define POT_ADDR_TYPE u8
#define POT_MAX_VAL 255
#define POT_I2C_ERR_TYPE u8
#define POT_I2C_ERR_NONE 0
#define IIC_DEVICE_ID		XPAR_XIICPS_0_DEVICE_ID
/*
 * Struct representing specific potentiometer on an IC.
 */
typedef struct _wiper_t{
    POT_ADDR_TYPE ic_addr;    //corresponds to potentiometer ic address select pins
    POT_NUM_TYPE wiper;      // corresponds to the wiper on a given ic
} wiper_t;


int init_x9258_i2c();
POT_R_TYPE pot_value_conversion( int ohmValue);
u8 x9258_volatile_write(wiper_t wiper_location, POT_R_TYPE r_value);
long map(long x, long in_min, long in_max, long out_min, long out_max);
// This goes into the header
XIicPs* getIicInstance();
void setIicInstance(XIicPs *InstancePtr);
#endif /* X9258_H_ */
