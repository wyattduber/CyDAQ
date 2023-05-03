#include <sleep.h>
#include <stdio.h>
#include <xparameters.h>

#include "hardware/platform.h"
#include "xil_printf.h"
#include "hardware/x9258.h"
#include "hardware/dac80501.h"
#include "hardware/ads7047.h"
#include "hardware/filter.h"
#include "hardware/mux_driver.h"
#include "stdlib.h"
#include "hardware/xadc.h"
#include "hardware/shared_definitions.h"
#include "remoteproc/rpc.h"


/* Constant definitions */
#define BUTTON_BASE_ADDR	XPAR_GPIO_0_BASEADDR

/* Function definitions */
void xadcTest();
void commTest();
void filterTest();
u8 getButtons();
u8 getButtonChangeBlocking();

/**
 * Baremetal main function.
 */
int main(int argc, char *argv[]) {

	xil_printf("\n**********CyDAQ baremetal sampling process***********\r\n");
	init_platform();

	if(muxInit() != XST_SUCCESS){
		xil_printf("SAMP> ERROR! muxInit failed!\r\n");
	}
	if(xadcInit() != XST_SUCCESS){
		xil_printf("SAMP> ERROR! xadcInit failed!\r\n");
	}

	//from old firmware, not supported but kept in
	if(init_x9258_i2c() != XST_SUCCESS){
		xil_printf("SAMP> ERROR! x9258_i2c init failed!\r\n");
	}

	//from old firmware, not supported but kept in
	if(init_dac80501() != XST_SUCCESS){
		xil_printf("SAMP> ERROR! dac80501 init failed!\r\n");
	}

	rpc_setup(); //blocking

	return 0;
}

//below is from old firmware. Keeping it in but not used
u8 getButtons() {
	return (u8) Xil_In32(BUTTON_BASE_ADDR);
}

u8 getButtonChangeBlocking() {
	u8 buttons = 0;
	while( (buttons = (u8) Xil_In32(BUTTON_BASE_ADDR)) == 0x0) {
		usleep(50000);
	}

	return buttons;
}
