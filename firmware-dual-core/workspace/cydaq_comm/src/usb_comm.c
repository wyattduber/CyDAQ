/*
 * Communication Class to simplify use of the USB interface
 */


#include "usb_comm.h"
#include "xusbps.h"
#include "xusbps_endpoint.h"

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

	//TODO manually zero the bugged memory then flush the cache
//	memset(usb.DeviceConfig.Ep, 0, 1104);
//	Xil_DCacheFlushRange(usb.DeviceConfig.Ep, 1104);

	/* Initialize the USB controller */
	status = xusb_cdc_init(&usb, XPAR_PS7_USB_0_DEVICE_ID, XPAR_PS7_USB_0_INTR, 64 * 1024);
	if (status != XST_SUCCESS) {
		xil_printf("ERROR: Unable to set up USB controller: %d\n", status);
		exit(1);
	}

//	resetEndpoint(&usb, 2, XUSBPS_EP_DIRECTION_IN);
	resetEndpoint(&usb, 2, XUSBPS_EP_DIRECTION_OUT);

	return status;
}


u32 usb_commRecv(u8 *bufferPtr, u32 numBytes){
	return xusb_cdc_receive_data(bufferPtr, numBytes);
}

u32 usb_commBytesAvailable(){
	return xusb_cdc_rx_bytes_available();
}

//TODO write good description because this is confusing
void wait_until_free_dt(XUsbPs *InstancePtr){
	xil_printf("started waiting for dt's to open\r\n");
	while(XUsbPs_dTDIsActive((&InstancePtr->DeviceConfig.Ep[2].In)->dTDHead)){
		xil_printf("dt's full. waiting\r\n");
		usleep(10000);
	}
	xil_printf("stopped waiting for dt's to open\r\n");
}

u32 usb_commSend(u8 *bufferPtr, u32 numBytes){
	//max number of bytes that can be sent at once is 16*1024
	int maxBytes = 16 * 1024; //TODO make constant in .h

	for(int i = 0; i < numBytes; i+=maxBytes){
		wait_until_free_dt(&usb);
		int bytes = maxBytes;
		if(i + maxBytes > numBytes){ //if we are sending the last chunk
			bytes = numBytes - i;
		}
		int response = XUsbPs_EpBufferSend(&usb, 2, bufferPtr + i, bytes);
		xil_printf("resposnse: %d\r\n", response);
//		usleep(1000); //unfortunately this big delay is needed otherwise data seems to not get sent.........
		switch(response){
		case XST_SUCCESS:
			continue;
		case XST_USB_NO_DESC_AVAILABLE:
//			resetEndpoint(&usb, 2, XUSBPS_EP_DIRECTION_IN);
//			resetEndpoint(&usb, 2, XUSBPS_EP_DIRECTION_OUT);
			xil_printf("XST_USB_NO_DESC_AVAILABLE\n\r");
			continue;
		default:
			xil_printf("unexpected response %d\n\r", response);
			return -1;
		}
	}

}

void resetEndpoint(XUsbPs *InstancePtr, u8 EpNum, u8 Direction)
{
  // Timeout counter for avoiding being locked up inside a while loop
  u32 timeoutCounter = 1000;

  u32 Mask = 0x00;
  if (Direction == XUSBPS_EP_DIRECTION_IN)
  {
    // Mask for the IN endpoints, aka transmission ones
    Mask = 0x00010000;
  }
  else
  {
    // Mask for the OUT endpoints, aka reception ones
    Mask = 0x00000001;
  }

  u32 BitMask = Mask << EpNum;

  // First disable all the interrupts, so no one disturbs us while cleaning the dTDs
  XUsbPs_IntrDisable(InstancePtr, XUSBPS_IXR_ALL);
  // Then disable the endpoint
  XUsbPs_EpDisable(InstancePtr, EpNum, Direction);

  do
  {
    // Flush the endpoint
    XUsbPs_EpFlush(InstancePtr, EpNum, Direction);
    // Wait until all bits are zero, meaning that the flush has been executed.
    // Nevertheless, we still do not know if the flush was successful, so far we
    // only know that the usb hardware tried to flush the desired endpoint
    while(XUsbPs_ReadReg(InstancePtr->Config.BaseAddress, XUSBPS_EPFLUSH_OFFSET) &&
          timeoutCounter)
    {
      timeoutCounter--;
    }

    // Guard for avoiding getting blocked in here
    if (timeoutCounter == 0)
    {
      // Jump out of the do - while
      break;
    }
  }
  // Check that the endpoint that we just flushed is not primed, meaning that it
  // was properly flushed. If an endpoint is primed it is going to have the ready
  // flag set in this register
  while((XUsbPs_ReadReg(InstancePtr->Config.BaseAddress, XUSBPS_EPRDY_OFFSET) & BitMask));

  // Do some specifics depending on the endpoint direction
  if (Direction == XUSBPS_EP_DIRECTION_IN)
  {
    // Now set all IN dTs from the wanted endpoint to not active
    XUsbPs_Endpoint *Ep = InstancePtr->DeviceConfig.Ep;
    XUsbPs_EpConfig *EpCfg = InstancePtr->DeviceConfig.EpCfg;
    XUsbPs_EpIn *In  = &Ep[EpNum].In;

    // Get the amount of dTDs from this endpoint
    int NumdTD = EpCfg[EpNum].In.NumBufs;
    int Td;

    for (Td = 0; Td < NumdTD; ++Td)
    {
      // Invalidate the cache so that we get the latest data from memory
      XUsbPs_dTDInvalidateCache(&In->dTDs[Td]);
      // Set the IN descriptor's TERMINATE bits
      XUsbPs_dTDSetTerminate(&In->dTDs[Td]);
      // Clear the Active bits
      XUsbPs_dTDClearActive(&In->dTDs[Td]);
      // Now flush the cache so that out latest modifications go to RAM
      XUsbPs_dTDFlushCache(&In->dTDs[Td]);
    }
  }

  // Now re-enable the interrupt and all the endpoint stuff
  XUsbPs_EpEnable(InstancePtr, EpNum, Direction);
  XUsbPs_EpPrime(InstancePtr, EpNum, Direction);
  XUsbPs_IntrEnable(InstancePtr, XUSBPS_IXR_UR_MASK | // Reset request interrupt
                                 XUSBPS_IXR_UI_MASK); //USB Transaction Complete
}


