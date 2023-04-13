/*
 * x9258.c
 *
 *  Created on: Oct 8, 2019
 *      Author: tdempsay
 */

/*
 * Allows I2C communication with the x9258 digital potentiometer.
 */
#include "x9258.h"

static XIicPs I2C0_IIC;
u8 potInit = 0;

int init_x9258_i2c(){
	if(DEBUG)
		xil_printf("SAMP> Initializing I2C for X9258\r\n");
	int status;
	XIicPs_Config *Config;
/*
	 * Initialize the IIC driver so that it's ready to use
	 * Look up the configuration in the config table, then initialize it.
	 */
	Config = XIicPs_LookupConfig(IIC_DEVICE_ID);
	if (NULL == Config) {
		xil_printf("SAMP> XIicPs_LookupConfig failed!\r\n");
		return XST_FAILURE;
	}
	xil_printf("SAMP> config base address: %d", Config->BaseAddress);

	status = XIicPs_CfgInitialize(&I2C0_IIC, Config, Config->BaseAddress);
	if (status != XST_SUCCESS) {
		xil_printf("SAMP> XIicPs_CfgInitialize failed!\r\n");
		return XST_FAILURE;
	}

	/*
	 * Perform a self-test to ensure that the hardware was built correctly.
	 */
	status = XIicPs_SelfTest(&I2C0_IIC);
	if (status != XST_SUCCESS) {
		xil_printf("SAMP> XIicPs_SelfTest failed! Returned %d\r\n", status);
		return XST_FAILURE;
	}

	/*
	 * Set the IIC serial clock rate.
	 */
	status = XIicPs_SetSClk(&I2C0_IIC, POT_I2C_CLK_RATE);
	xil_printf("SAMP> setting potInit = 1 in x9259 init function!\r\n");
	potInit = 1;
	return status;
}

POT_R_TYPE pot_value_conversion(int ohmValue){
  static const POT_R_TYPE calFactor = 0;

  if(ohmValue < 0 || ohmValue > 100000){
	if(DEBUG)
		xil_printf("SAMP> Invalid resistance given, choose val between 0-100,000 ohm\r\n");
    return 0;
  }
  return map(ohmValue,0,100000,0,255) + calFactor;
}

uint8_t x9258_volatile_write(wiper_t wiper_location, POT_R_TYPE r_value){

	if(potInit == 0){
		xil_printf("SAMP> potInit == 0, running x9258 init!\r\n");
		init_x9258_i2c(); //TODO check if this returns failure or not!
	}
  	u8 SendBuffer[POT_I2C_BUFFER_SIZE];
  	SendBuffer[0] = (u8) (0b10100000 | wiper_location.wiper);
  	SendBuffer[1] = r_value;

  	u16 address = (u16) ((0b01010000 | wiper_location.ic_addr) >> 1);
  	/*
	 * Send the buffer using the IIC and ignore the number of bytes sent
	 * as the return value since we are using it in interrupt mode.
	 */
  	int status = XIicPs_MasterSendPolled(&I2C0_IIC, SendBuffer, POT_I2C_BUFFER_SIZE,  address);
	if (status != XST_SUCCESS) {
		return XST_FAILURE;
	}
	if(DEBUG)
		xil_printf("SAMP> Wrote to IC_Addr: %x,Pot#: %d,Reg Val: %d \r\n", wiper_location.ic_addr, wiper_location.wiper, r_value);

	/*
	 * Wait until bus is idle to start another transfer.
	 */
	while (XIicPs_BusIsBusy(&I2C0_IIC)) {
		/* NOP */
	}

	return XST_SUCCESS;
}

long map(long x, long in_min, long in_max, long out_min, long out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

XIicPs* getIicInstance(){
	return &I2C0_IIC;
}

void setIicInstance(XIicPs *InstancePtr){
	I2C0_IIC = *InstancePtr;
}


