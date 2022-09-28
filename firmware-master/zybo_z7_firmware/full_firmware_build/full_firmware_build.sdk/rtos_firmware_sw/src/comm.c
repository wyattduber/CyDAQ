/*
 * comm.c
 *
 *Library for configuring and using the UART to communicate
 *with the frontend.
 *  Created on: Oct 16, 2019
 *      Author: tdempsay
 */

#include "comm.h"


static XUartPs UART1;
static INTC INTERRUPTCONTROLLER;

static u8 receiveBuffer[TEST_BUFFER_SIZE];	/* Buffer for Receiving Data */

/*
 * The following counters are used to determine when the entire buffer has
 * been sent and received.
 */
volatile int TotalReceivedCount;
volatile int TotalSentCount;
volatile bool fifoFlag;
volatile bool commDataReceived = false;

extern bool samplingEnabled;
extern filters_e activeFilter;
extern SemaphoreHandle_t hSamplingConfig;

int TotalErrorCount;

int commInit(){

	int status = 0;
	XUartPs_Config *Config;
	u32 IntrMask;
	fifoFlag = false;

	Config = XUartPs_LookupConfig(UART_DEVICE_ID);

	if (NULL == Config) {
		return XST_FAILURE;
	}

	status = XUartPs_CfgInitialize(&UART1, Config, Config->BaseAddress);
	if (status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	/*
	 * Connect the UART to the interrupt subsystem such that interrupts
	 * can occur. This function is application specific.
	 */
	//status = commSetupInterruptSystem(&INTERRUPTCONTROLLER, &UART1, UART_INT_IRQ_ID);
	//if (status != XST_SUCCESS) {
	//	return XST_FAILURE;
	//}
	/*
	 * Setup the handlers for the UART that will be called from the
	 * interrupt context when data has been sent and received, specify
	 * a pointer to the UART driver instance as the callback reference
	 * so the handlers are able to access the instance data
	 */
	//XUartPs_SetHandler(&UART1, (XUartPs_Handler)Handler, &UART1);

	/*
	 * Enable the interrupt of the UART so interrupts will occur, setup
	 * a local loopback so data that is sent will be received.
	 */
	//IntrMask =
	//	XUARTPS_IXR_TOUT | XUARTPS_IXR_PARITY | XUARTPS_IXR_FRAMING |
	//	XUARTPS_IXR_OVER | XUARTPS_IXR_RXFULL |
	//	XUARTPS_IXR_RXOVR;

	//if (UART1.Platform == XPLAT_ZYNQ_ULTRA_MP) {
	//	IntrMask |= XUARTPS_IXR_RBRK;
	//}

	//IntrMask = XUARTPS_IXR_RXEMPTY;

	//XUartPs_SetInterruptMask(&UART1, IntrMask);

	/*
	 * Set the receiver timeout. If it is not set, and the last few bytes
	 * of data do not trigger the over-water or full interrupt, the bytes
	 * will not be received. By default it is disabled.
	 *
	 * The setting of 8 will timeout after 8 x 4 = 32 character times.
	 * Increase the time out value if baud rate is high, decrease it if
	 * baud rate is low.
	 */
	//XUartPs_SetRecvTimeout(&UART1, 16);
	//void XUartPs_SetFifoThreshold(XUartPs *InstancePtr, u8 TriggerLevel)

	/* Set the UART in Normal Mode */
	XUartPs_SetOperMode(&UART1, XUARTPS_OPER_MODE_NORMAL);
	XUartPs_SetBaudRate(&UART1, COMM_BAUD_RATE); //COMM_BAUD_RATE);
	status = XUartPs_GetOptions(&UART1);
	//XUartPs_SetOptions(&UART1, status | XUARTPS_OPTION_SET_FCM);

	XUartPsFormat formatConfig;
	XUartPs_GetDataFormat(&UART1, &formatConfig);
	formatConfig.Parity = XUARTPS_FORMAT_NO_PARITY; //XUARTPS_FORMAT_EVEN_PARITY
	formatConfig.StopBits = XUARTPS_FORMAT_1_STOP_BIT;
	XUartPs_SetDataFormat(&UART1, &formatConfig);

	return XST_SUCCESS;
}


XUartPs* commGetUartPtr(){
	return &UART1;
}
/**************************************************************************/
/**
*
* This function is the handler which performs processing to handle data events
* from the device.  It is called from an interrupt context. so the amount of
* processing should be minimal.
*
* This handler provides an example of how to handle data for the device and
* is application specific.
*
* @param	CallBackRef contains a callback reference from the driver,
*		in this case it is the instance pointer for the XUartPs driver.
* @param	Event contains the specific kind of event that has occurred.
* @param	EventData contains the number of bytes sent or received for sent
*		and receive events.
*
* @return	None.
*
* @note		None.
*
***************************************************************************/
void Handler(void *CallBackRef, u32 Event, unsigned int EventData)
{
	/* All of the data has been received */
	if (Event == XUARTPS_EVENT_RECV_DATA) {
		commDataReceived = true;
	}

	//portYIELD_FROM_ISR(pdTRUE);
}

/*****************************************************************************/
/**
*
* This function sets up the interrupt system so interrupts can occur for the
* Uart. This function is application-specific. The user should modify this
* function to fit the application.
*
* @param	IntcInstancePtr is a pointer to the instance of the INTC.
* @param	UartInstancePtr contains a pointer to the instance of the UART
*		driver which is going to be connected to the interrupt
*		controller.
* @param	UartIntrId is the interrupt Id and is typically
*		XPAR_<UARTPS_instance>_INTR value from xparameters.h.
*
* @return	XST_SUCCESS if successful, otherwise XST_FAILURE.
*
* @note		None.
*
****************************************************************************/
static int commSetupInterruptSystem(INTC *IntcInstancePtr, XUartPs *UartInstancePtr, u16 UartIntrId)
{
	int Status;

#ifdef XPAR_INTC_0_DEVICE_ID
#ifndef TESTAPP_GEN
	/*
	 * Initialize the interrupt controller driver so that it's ready to
	 * use.
	 */
	Status = XIntc_Initialize(IntcInstancePtr, INTC_DEVICE_ID);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}
#endif
	/*
	 * Connect the handler that will be called when an interrupt
	 * for the device occurs, the handler defined above performs the
	 * specific interrupt processing for the device.
	 */
	Status = XIntc_Connect(IntcInstancePtr, UartIntrId,
		(XInterruptHandler) XUartPs_InterruptHandler, UartInstancePtr);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

#ifndef TESTAPP_GEN
	/*
	 * Start the interrupt controller so interrupts are enabled for all
	 * devices that cause interrupts.
	 */
	Status = XIntc_Start(IntcInstancePtr, XIN_REAL_MODE);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}
#endif
	/*
	 * Enable the interrupt for uart
	 */
	XIntc_Enable(IntcInstancePtr, UartIntrId);

	#ifndef TESTAPP_GEN
	/*
	 * Initialize the exception table.
	 */
	Xil_ExceptionInit();

	/*
	 * Register the interrupt controller handler with the exception table.
	 */
	Xil_ExceptionRegisterHandler(XIL_EXCEPTION_ID_INT,
				(Xil_ExceptionHandler) XIntc_InterruptHandler,
				IntcInstancePtr);
	#endif
#else
#ifndef TESTAPP_GEN
	XScuGic_Config *IntcConfig; /* Config for interrupt controller */

	/* Initialize the interrupt controller driver */
	IntcConfig = XScuGic_LookupConfig(INTC_DEVICE_ID);
	if (NULL == IntcConfig) {
		return XST_FAILURE;
	}

	Status = XScuGic_CfgInitialize(IntcInstancePtr, IntcConfig,
					IntcConfig->CpuBaseAddress);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	/*
	 * Connect the interrupt controller interrupt handler to the
	 * hardware interrupt handling logic in the processor.
	 */
	Xil_ExceptionRegisterHandler(XIL_EXCEPTION_ID_INT,
				(Xil_ExceptionHandler) XScuGic_InterruptHandler,
				IntcInstancePtr);
#endif

	/*
	 * Connect a device driver handler that will be called when an
	 * interrupt for the device occurs, the device driver handler
	 * performs the specific interrupt processing for the device
	 */
	Status = XScuGic_Connect(IntcInstancePtr, UartIntrId,
				  (Xil_ExceptionHandler) XUartPs_InterruptHandler,
				  (void *) UartInstancePtr);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	/* Enable the interrupt for the device */
	XScuGic_Enable(IntcInstancePtr, UartIntrId);

#endif
#ifndef TESTAPP_GEN
	/* Enable interrupts */
	 Xil_ExceptionEnable();
#endif

	return XST_SUCCESS;
}

/**
 * Main task for processing commands received over UART
 */
void vTaskSerComm(void *parameters) {
	/* Initialize UART */
    commInit();

    /* Initialize hardware interfaces */
    muxInit();
    xadcInit();
    init_x9258_i2c();



	//number of bytes received over UART
	u16 bytesReceived = 0;
	//for error handling
	bool err = false;
	while(1) {

		while(receiveBuffer[bytesReceived-1] != COMM_STOP_CHAR && bytesReceived < 7) {
			bytesReceived += XUartPs_Recv(&UART1, &receiveBuffer[bytesReceived], 1);
		}
		if(DEBUG)
			xil_printf("Processing packet\n");

		err = commProcessPacket(receiveBuffer, bytesReceived);
		receiveBuffer[0] = receiveBuffer[bytesReceived-1] = 0;
		bytesReceived = 0;

		if(err) {
			xil_printf("%cERR%c", COMM_START_CHAR, COMM_STOP_CHAR);

		} else {
			xil_printf("%cACK%c", COMM_START_CHAR, COMM_STOP_CHAR);
		}

		err = false;
	}
}

/**
 * Processes the packet received from the UART.
 */
bool commProcessPacket(u8 *buffer, u16 bufSize)
{
	bool err = false;

	if(hSamplingConfig == NULL)
		return true;

	if(xSemaphoreTake(hSamplingConfig, (TickType_t) 10) != pdTRUE)
		return true;

	if((char) buffer[0] != COMM_START_CHAR || (char) buffer[bufSize-1] != COMM_STOP_CHAR || bufSize <= 2) {
		err = true;

	} else {
		u8 cmd = buffer[1]; // needed for testing
		u8 payloadLength = bufSize - COMM_START_SIZE - COMM_STOP_SIZE - COMM_CMD_SIZE;

		if(DEBUG)
			xil_printf("CMD: %u, payloadLen: %d\n", cmd, payloadLength);

		/*	---Set XADC Sample Rate---  */
		if(cmd == SAMPLE_RATE_SET) {
			if(payloadLength < COMM_SAMPLE_RATE_SIZE) {
				if(DEBUG)
					xil_printf("Error, not enough bytes to represent sample rate\n");
				err = true;

			} else {
				u32 rate = buffer[2] << 24 | buffer[3] << 16 | buffer[4] << 8 | buffer[5];

				if(rate > XADC_MAX_SAMPLE_RATE) {
					if(DEBUG)
						xil_printf("Invalid sample rate given");
					err = true;

				} else {
					mutexSamplingConfig_SetSampleRate(rate);
				}
			}

		/*  ---Select Input Source---  */
		} else if(cmd == INPUT_SELECT) {
			if(payloadLength == 0) {
				if(DEBUG)
					xil_printf("Error, payload length too small\n");
				err = true;

			} else {
				inputs_e inputSelect = buffer[2];

				if(inputSelect >= NUM_INPUTS) {
					if(DEBUG)
						xil_printf("input requested %d not in valid range\n", inputSelect);
					err = true;

				} else {
					mutexSamplingConfig_SetInputSrc(buffer[2]);
				}
			}

		/*  ---Select Active Filter---  */
		}else if(cmd == FILTER_SELECT){
			if(payloadLength < 1) {
				if(DEBUG)
					xil_printf("No filter param given to set\n");
				err = true;

			} else {
				filters_e filterSelect = ((u8) buffer[COMM_CMD_SIZE+1]);

				if(filterSelect >= NUM_FILTERS) {
					if(DEBUG)
						xil_printf("Error, %d is not a valid filter enum #\n", filterSelect);
					err = true;

				} else {
					mutexSamplingConfig_SetFilterType(filterSelect);
				}
			}

		/*  ---Set Filter Corner Frequencies---  */
		}else if(cmd == CORNER_FREQ_SET){
			//u8 filter = ((buffer[COMM_CMD_SIZE+1] << 8) & 0xFF00 ) + buffer[COMM_CMD_SIZE+2];
			if(payloadLength < 4){
				if(DEBUG)
					xil_printf("err in filter tune function");
				err = true;
			}else{
				//each frequency should be sent as two bytes each
				FILTER_FREQ_TYPE lower = ((buffer[COMM_CMD_SIZE+1] << 8) & 0xFF00 ) + buffer[COMM_CMD_SIZE+2];
				FILTER_FREQ_TYPE upper = ((buffer[COMM_CMD_SIZE+3] << 8) & 0xFF00 ) + buffer[COMM_CMD_SIZE+4];
				//tune filter
				//err = tuneFilter(50, lower, upper);
				mutexSamplingConfig_SetCornerFreqLower(lower);
				mutexSamplingConfig_SetCornerFreqUpper(upper);
			}

		/*  ---Respond to Ping---  */
		} else if(cmd == PING) {
			//sets err to false so zybo always sends an ACK back to GUI, confirming operation
			err = false;

		/*  ---Stop Sampling and Print Samples---  */
		} else if(cmd == FETCH_SAMPLES) {
			xil_printf("%cACK%c", COMM_START_CHAR, COMM_STOP_CHAR);
			xadcDisableSampling();//TODO finish me
			xadcProcessSamples();

		/*  ---Start Sampling---  */
		} else if(cmd == START_SAMPLING) {
			//TODO check if sampler is already running
			samplingConfig_t mSamplingConfig;
			mutexSamplingConfig_Get(&mSamplingConfig);

			xadcSetSampleRate(mSamplingConfig.sampleRate);
			muxSetInputPins(mSamplingConfig.inputSrc);
			muxSetActiveFilter(mSamplingConfig.filterType);
			tuneFilter(50, mSamplingConfig.cornerFreqLower, mSamplingConfig.cornerFreqUpper);

			xadcEnableSampling(0);

			//xil_printf("%cACK%c", COMM_START_CHAR, COMM_STOP_CHAR);
			//err = false;

			//if(payloadLength == 1)
			//	xadcEnableSampling(1);
			//else
			//	xadcEnableSampling(0);

		/*  ---Stop Sampling---  */
		} else if(cmd == STOP_SAMPLING) {
			//mutexSamplingConfig_SamplingStop();
			xadcDisableSampling();

		} else {
			err = true;
		}
	}

	xSemaphoreGive(hSamplingConfig);
	return err;
}

/**
 * Exposes Uart Receive to libraries without them needing UART ptr.
 */
u32 commUartRecv(u8 *bufferPtr, u32 numBytes)
{
	return XUartPs_Recv(&UART1, bufferPtr, numBytes);
}

u32 commUartSend(u8 *bufferPtr, u32 numBytes)
{
	return XUartPs_Send(&UART1, bufferPtr, numBytes);
}

u32 commUartWaitReceive(u8 *bufferPtr, char endChar1, char endChar2){

	u32 byteCount = 0;
	while(bufferPtr[byteCount-1] != endChar1 && bufferPtr[byteCount-1] != endChar2){
		byteCount += commUartRecv(bufferPtr, 1);
	}

	return byteCount;
}
