/*
 * Communication Class to simplify use of the USB interface
 */


#include "usb_comm.h"

/* Global variables */
//extern bool samplingEnabled;
//extern filters_e activeFilter;
//extern adcs_e activeAdc;

/* Local Variables */
int status;
XUsbPs usb;
XScuGic intc;



int setup_interrupts(XScuGic *intc) {
	int status;
	XScuGic_Config *intc_config;

	intc_config = XScuGic_LookupConfig(XPAR_SCUGIC_SINGLE_DEVICE_ID);
	if (NULL == intc_config) {
		return XST_FAILURE;
	}

	status = XScuGic_CfgInitialize(intc, intc_config, intc_config->CpuBaseAddress);
	if (status != XST_SUCCESS) {
		return status;
	}

	Xil_ExceptionInit();

	/* Connect the GIC interrupt handler to the exception vector in the processor */
	Xil_ExceptionRegisterHandler(XIL_EXCEPTION_ID_IRQ_INT,
								 (Xil_ExceptionHandler)XScuGic_InterruptHandler,
								 intc);

	return XST_SUCCESS;
}

void reset_usb(void) {
	// Ensure that the PHY is out of reset
	volatile u32 *gpio_base;
	volatile u32 *gpio_oen;
	volatile u32 *gpio_dir;

	/* Ensure that the USB PHY is not in reset */
	gpio_base = (u32 *)0xE000A000;
	gpio_oen = (u32 *)0xE000A208;
	gpio_dir = (u32 *)0xE000A204;

	*(gpio_oen) |= 0x00000080;
	*(gpio_dir) |= 0x00000080;
	*gpio_base = 0xff7f0080;
}

int usbComm_init(){
	int status = XST_SUCCESS;
	xil_printf("\n\n--- USB CDC ACM Test Application ---\n\n");

	reset_usb();

	// Set up and configure the interrupt system
	status = setup_interrupts(&intc);
	if (status != XST_SUCCESS) {
		xil_printf("ERROR: Unable to initialize interrupt system: %d\n", status);
		exit(1);
	}

	status = xusbps_cdc_register_interrupt(&intc, &usb, XPAR_PS7_USB_0_INTR);
	if (status != XST_SUCCESS) {
		xil_printf("ERROR: Unable to register USB interrupts: %d\n", status);
		exit(1);
	}

	// Enable interrupts in the processor
	Xil_ExceptionEnableMask(XIL_EXCEPTION_IRQ);

	/* Initialize the USB controller */
	status = xusb_cdc_init(&usb, XPAR_PS7_USB_0_DEVICE_ID, XPAR_PS7_USB_0_INTR, 64 * 1024);
	if (status != XST_SUCCESS) {
		xil_printf("ERROR: Unable to set up USB controller: %d\n", status);
		exit(1);
	}

	if(DEBUG){
			print("USB init finished\n\r");
		}

	return status;
}


u32 usb_commRecv(u8 *bufferPtr, u32 numBytes){
	return xusb_cdc_receive_data(bufferPtr, numBytes);
}

u32 usb_commBytesAvailable(){
	return xusb_cdc_rx_bytes_available();
}

u32 usb_commSend(u8 *bufferPtr, u32 numBytes){
	u32 numFails = 0;
	//If the buffer is smaller then the max message size send the message
	if(numBytes <= 16*1024){
		//Attempt to resend message until resources are available or timeout
		while(xusb_cdc_send_data(&usb, bufferPtr, numBytes) != XST_SUCCESS){
			numFails++;
			if(numFails > 1000){
				xil_printf("Send buffer still busy ... exiting\n\r");
				return XST_FAILURE;
			}
		}
	}
	//If message is bigger than the usb buffers break it up into smaller messages
	else{
		u32 numPacks = numBytes / (16*1024);
		for(int i = 0; i < numPacks; ){
			numFails = 0;
			if(i == numPacks - 1){
				//Attempt to resend message until resources are available or timeout
				while(xusb_cdc_send_data(&usb, bufferPtr + i*(16*1024) , numBytes % 16*1024) != XST_SUCCESS){
					numFails++;
					if(numFails > 1000){
						xil_printf("Send buffer still busy ... exiting\n\r");
						return XST_FAILURE;
					}
				}
			}
			else{
				//Attempt to resend message until resources are available or timeout
				while(xusb_cdc_send_data(&usb, bufferPtr + i*(16*1024), 16*1024) != XST_SUCCESS){
					numFails++;
					if(numFails > 1000){
						xil_printf("Send buffer still busy ... exiting\n\r");
						return XST_FAILURE;
					}
				}
			}

		}
	}
	return XST_SUCCESS;

}



