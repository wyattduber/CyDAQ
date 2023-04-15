/*
 * xadc.c
 *
 *  Created on: Oct 29, 2019
 *      Author: tdempsay
 *
 *  Revised: Oct 4, 2020
 *  	Author: bcra
 */

#include "xadc.h"
#include "../remoteproc/rpc.h"

/* Constant definitions */
#define INTC_DEVICE_INT_ID	 	XPAR_INTC_0_TMRCTR_0_VEC_ID
#define TMRCTR_DEVICE_ID		XPAR_TMRCTR_0_DEVICE_ID
#define TIMER_CNTR_0	 		0

/* Function definitions */
static int xadcSetupInterruptSystem(XScuGic *IntcInstancePtr, XSysMon *XAdcPtr, u16 IntrId);

/* Global variables */
extern bool samplingEnabled;
extern bool streamingEnabled;

/* Local variables */
static XSysMon SysMonInst;
static XSysMon *SysMonInstPtr = &SysMonInst;
static XTmrCtr TimerCounterInst;
static SAMPLE_TYPE *xadcSampleBuffer = NULL;

u8 xadcInitStatus = 0; //whether XADC has been initialized
static u32 xadcSampleRate = 0; //stores current sample rate (samples/s)
volatile float voltage;

/**
 * Initializes XADC
 */
u8 xadcInit() {
		u32 status;
		XSysMon_Config *ConfigPtr;

		//initialize XADC config
		ConfigPtr = XSysMon_LookupConfig(SYSMON_DEVICE_ID);
		if (ConfigPtr == NULL) {
				return XST_FAILURE;
		}

		XSysMon_CfgInitialize(SysMonInstPtr, ConfigPtr, ConfigPtr->BaseAddress);

		//setup XADC end-of-capture interrupts
		//get XScuGic instance from shared objects pool
		XScuGic *IntcPtr = shared_GetScuGicPtr();
		status = xadcSetupInterruptSystem(IntcPtr, &SysMonInst, XADC_INTR_ID);
		if (status != XST_SUCCESS) {
			return XST_FAILURE;
		}

		//disable (I think --Brady) alarms and self-test ADC
		XSysMon_SetAlarmEnables(SysMonInstPtr, 0x0);
		status = XSysMon_SelfTest(SysMonInstPtr);
		if (status != XST_SUCCESS) {
			return XST_FAILURE;
		}

		//disable sequencer for configuration
	    XSysMon_SetSequencerMode(SysMonInstPtr, XSM_SEQ_MODE_SAFE);
	    status = XSysMon_GetSeqInputMode(SysMonInstPtr);

	    //disable averaging on all inputs
	    if(XSysMon_SetSeqAvgEnables(SysMonInstPtr, XSM_AVG_0_SAMPLES) != XST_SUCCESS){
	    	xil_printf("SAMP> XSysMon_SetSeqAvgEnables failed!\r\n");
	    	return XST_FAILURE;
	    }

	    //clear the old status
	    XSysMon_GetStatus(SysMonInstPtr);

	    //disable calibration
		XSysMon_SetCalibEnables(SysMonInstPtr, XSM_CFR1_CAL_DISABLE_MASK);

		//disable averaging
		XSysMon_SetAvg(SysMonInstPtr, XSM_AVG_0_SAMPLES);

		//set sequencer to continually sample enabled inputs
		//will be either XSM_SEQ_MODE_SINGCHAN or XSM_SEQ_MODE_CONTINPASS
		XSysMon_SetSequencerMode(SysMonInstPtr, XADC_SEQ_SETTING);

		usleep(1000);
		if(XADC_SEQ_SETTING == XSM_SEQ_MODE_SINGCHAN) {
			status = XSysMon_SetSingleChParams(SysMonInstPtr, AUX_14_INPUT, 0, 1, 0);
			if (status != XST_SUCCESS) {
						return XST_FAILURE;
			}
		}

		//enable EOC interrupt now that sequencer is configured, but leave interrupts globally disabled
		XSysMon_IntrEnable(SysMonInstPtr, XSM_IPIXR_EOC_MASK);

		//initialize AXI timer to drive XADC sampling
		status = XTmrCtr_Initialize(&TimerCounterInst, TMRCTR_DEVICE_ID);
		if (status != XST_SUCCESS) {
			return XST_FAILURE;
		}

		//self-test timer
		status = XTmrCtr_SelfTest(&TimerCounterInst,TIMER_CNTR_0);
		if (status != XST_SUCCESS) {
			return XST_FAILURE;
		}

		XTmrCtr_SetOptions(&TimerCounterInst, TIMER_CNTR_0, 
							XTC_INT_MODE_OPTION | XTC_AUTO_RELOAD_OPTION);

		//xadcSetSampleRate(XADC_DEFAULT_RATE);
		u32 rate = XADC_DEFAULT_RATE; //44100
		double period = (double) 1 / rate;
		u32 resetValue = (pow(2, 32) - 1 - (period * XADC_CLOCK_FREQ));

		XTmrCtr_Stop(&TimerCounterInst, TIMER_CNTR_0);
		XTmrCtr_SetResetValue(&TimerCounterInst, TIMER_CNTR_0, (u32) resetValue);

		//save reference to shared sample buffer
		xadcSampleBuffer = shared_GetSampleBuffer();

		xadcInitStatus = 1;

		return XST_SUCCESS;
}

/**
 * Sets up end-of-capture interrupt to process XADC samples.
 */
static int xadcSetupInterruptSystem(XScuGic *IntcInstancePtr, XSysMon *XAdcPtr, u16 IntrId) {

	XScuGic_Config *IntcConfig; /* Instance of the interrupt controller */
	int status;

	IntcConfig = XScuGic_LookupConfig(INTC_DEVICE_ID);
	if (NULL == IntcConfig) {
		return XST_FAILURE;
	}
	status = XScuGic_CfgInitialize(IntcInstancePtr, IntcConfig, IntcConfig->CpuBaseAddress);
	if (status != XST_SUCCESS) {
		return XST_FAILURE;
	}
	status = XScuGic_Connect(IntcInstancePtr, IntrId,(Xil_InterruptHandler)xadcInterruptHandler,(void *)XAdcPtr);
	if (status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	XScuGic_Enable(IntcInstancePtr, IntrId);
	Xil_ExceptionInit();

	Xil_ExceptionRegisterHandler(XIL_EXCEPTION_ID_FIQ_INT,
					(Xil_ExceptionHandler)
					XScuGic_InterruptHandler,
					IntcInstancePtr);

	Xil_ExceptionEnableMask(XIL_EXCEPTION_ALL);

	Xil_Out32(XPAR_PS7_SCUGIC_0_BASEADDR,0xF);

	return XST_SUCCESS;
}

/**
 * Enables XADC sample capture timer and XADC EOC interrupts.
 */
int xadcEnableSampling(u8 streamSetting) {
	//check that XADC has been initialized
	if(xadcInitStatus == 0) {
		if(DEBUG)
			xil_printf("SAMP> XADC not init. calling xadcInit()\r\n");
		xadcInit();
		xadcInitStatus = 1;
	}

	shared_clearSampleCount();

	if(DEBUG)
		xil_printf("SAMP> Starting xadc sampling, Streaming: %s\r\n", (streamSetting) ? "On" : "Off");

	//set status variables
	samplingEnabled = true;

	if(streamSetting == 1) {
		streamingEnabled = true;
	}

	//start XADC driver timer and enable interrupts to begin sampling
	XTmrCtr_Start(&TimerCounterInst, TIMER_CNTR_0);
	xil_printf("SAMP> xadcEnableSampling got 1\r\n");
	XSysMon_IntrGlobalEnable(SysMonInstPtr);
	xil_printf("SAMP> xadcEnableSampling got 2\r\n");

	return 0;
}

/**
 * Disables XADC sample capture timer and XADC EOC interrupts.
 */
int xadcDisableSampling() {
	xil_printf("SAMP> stopping xadc sampling\r\n");
	//stop XADC driver timer and disable sampling interrupts
	XTmrCtr_Stop(&TimerCounterInst, TIMER_CNTR_0);
	XSysMon_IntrGlobalDisable(&SysMonInst);

	//resets status variables
	samplingEnabled = false;
	streamingEnabled = false;
	return 0;
}

/** TODO this function is no longer valid as we need to just write to the shared memory region. Proably delete?
 * Process XADC samples and print to GUI over UART
 * TODO: Re-implement burst writes. Issues occur with bursts where a single byte will be dropped, causing
 * the reassembly of the 16-bit int to be off by 1 byte and wrecking the data. Adding a longer delay helps,
 * indicating something is going on with the buffer either on the Zybo end or the PC end. However, the burst
 * size is too large (I guess) and always causes a byte to drope on longer samples. This should be fixed by
 * sending appropriate sized bursts and waiting for a confirmation back form the PC before sending the next
 * burst. This also allows error checking.
 */
int xadcProcessSamples() {
	volatile u32* xadcSampleCount = shared_GetSampleCount();
	u32 i = 0;
//	u8 sent = 0;
	u8* ptr = (u8*) xadcSampleBuffer;
	u8* lastVal = (u8*) xadcSampleBuffer + (2 * (*xadcSampleCount));
//	u8 burstSize = DEF_SAMPLE_BURST_SIZE;

	if((*xadcSampleCount) == 0) {
		if(DEBUG) {
			xil_printf("SAMP> No new samples\r\n");
		} else {
			xil_printf("%c", COMM_START_CHAR);
			usleep(100);
			xil_printf("000000000");
		}

		return 0;
	}

	sleep(1);

	if(DEBUG) {
		xil_printf("SAMP> Beginning sample playback..\r\n");

		while(i < (*xadcSampleCount)) {
			voltage = RawToExtVoltage(xadcSampleBuffer[i]);
			xil_printf(" => %d.%d V\n", (int)voltage, xadcFractionToInt(voltage));

		}

		xil_printf("SAMP> Finished processing samples\r\n");
	} else {
		xil_printf("%c", COMM_START_CHAR);

		while(ptr < lastVal) {
			//commUartSend(ptr++, 1);
			//rpc_send_message();
			rpc_send_message(COMM_SAMPLE_MSG, ptr++, 2);
			usleep(30);
			/*
			//if we are on the last burst is smaller than the burst limit, resize window so we don't miss end samples
			if(ptr+burstSize > lastVal) {
				burstSize = lastVal-ptr;
			}

			while(sent < burstSize) {
				sent += commUartSend((ptr+sent), burstSize-sent);
			}

			//increment pointer to sample array
			ptr += burstSize;
			usleep(1);

			//reset temp variable
			sent = 0;
			*/
		}

		//clear UART out buffer before sending end sequence
		usleep(100);

		xil_printf("00000000"); //COMM_STOP_CHAR, COMM_STOP_CHAR);

		//Needed to give GUI time to reset itself
		usleep(50000);
	}

	shared_clearSampleCount();
	return 0;
}

/**
 * ISR triggers on XADC end-of-capture, stores sample to buffer
 */
void xadcInterruptHandler(void *CallBackRef) {
	xil_printf("SAMP> xadc interrupt!\r\n");
	// Clear Interrupt bits
	u32 ControlStatusReg = XTmrCtr_ReadReg(TimerCounterInst.BaseAddress,
										   TIMER_CNTR_0, XTC_TCSR_OFFSET);
	XTmrCtr_WriteReg(TimerCounterInst.BaseAddress, TIMER_CNTR_0, XTC_TCSR_OFFSET,
					 ControlStatusReg | XTC_CSR_INT_OCCURED_MASK);
	XSysMon_IntrClear(&SysMonInst, XSM_IPIXR_EOC_MASK);

	volatile u32 *xadcSampleCount = shared_GetSampleCount();

	if ((*xadcSampleCount) < SAMPLE_BUFFER_SIZE ) {
		xadcSampleBuffer[*xadcSampleCount] = (SAMPLE_TYPE) XSysMon_GetAdcData(&SysMonInst, AUX_14_INPUT) >> 4;
		(*xadcSampleCount)++;

	} else if(streamingEnabled) {
		(*xadcSampleCount) = 0;

	} else {
		samplingEnabled = false;
		XSysMon_IntrGlobalDisable(SysMonInstPtr);
	}
}

int xadcSetPolarity(u8 setting){
	int status;

	//1 for bipolar, 0 for unipolar
	if(setting) {
		status = XSysMon_SetSeqInputMode(SysMonInstPtr, XSM_SEQ_CH_AUX14);
	} else {
		status = XSysMon_SetSeqInputMode(SysMonInstPtr, 0);
	}

	if(status != XST_SUCCESS) {
		if(DEBUG)
			xil_printf("SAMP> Error changing polarity\r\n");
	}

	return status;
}

/**
 * Rate should be given in SPS. Configures timer to count at rate that matches sample rate.
 */
int xadcSetSampleRate(u32 rate) {
	//check that XADC is initialized
	if(xadcInitStatus == 0) {
			if(DEBUG)
				xil_printf("SAMP> XADC not init. calling xadcInit()\r\n");
			xadcInit();
			xadcInitStatus = 1;
	}

	if(rate > XADC_MAX_SAMPLE_RATE) {
		if(DEBUG)
			xil_printf("SAMP> Invalid sample rate given\r\n");
		return 1;
	}

	xadcSampleRate = rate;
	double period = (double) 1 / rate;
	u32 resetValue = (pow(2, 32) - 1 - (period * XADC_CLOCK_FREQ));

	XTmrCtr_Stop(&TimerCounterInst, TIMER_CNTR_0);
	XTmrCtr_SetResetValue(&TimerCounterInst, TIMER_CNTR_0, (u32) resetValue);

	if(DEBUG)
		xil_printf("SAMP> New XADC Sample Rate: %d SPS\r\n", rate);

	return 0;
}

u32 xadcGetSampleRate() {
	return xadcSampleRate;
}

u32 xadcGetSampleCount() {
	return *shared_GetSampleCount();
}

XSysMon* xadcGetSysMonPtr() {
	return SysMonInstPtr;
}

u8 xadcCheckAuxSettings() {
	u64 channelConfig = XSysMon_GetSeqChEnables(SysMonInstPtr);
	//0x040000900 AUX14 VPVN and Temp sensors

	xil_printf("AUX Inputs Active: ");
	if (XSM_SEQ_CH_AUX14 & channelConfig){
	 xil_printf("AUX14 ");
	}
	if(XSM_SEQ_CH_AUX15 & channelConfig){
	 xil_printf("AUX15 ");
	}
	if(XSM_SEQ_CH_AUX07 & channelConfig){
	 xil_printf("AUX7 ");
	}
	if(XSM_SEQ_CH_AUX06 & channelConfig){
	 xil_printf("AUX6");
	}
	xil_printf("\r\n");

	return 0;
}

/****************************************************************************/
/**
*
* This function converts the fraction part of the given floating point number
* (after the decimal point)to an integer.
*
* @param	FloatNum is the floating point number.
*
* @return	Integer number to a precision of 3 digits.
*
* @note
* This function is used in the printing of floating point data to a STDIO device
* using the xil_printf function. The xil_printf is a very small foot-print
* printf function and does not support the printing of floating point numbers.
*
*****************************************************************************/
int xadcFractionToInt(float FloatNum) {
	float Temp = FloatNum;
	if (FloatNum < 0) {
		Temp = -(FloatNum);
	}

	return( ((int)((Temp -(float)((int)Temp)) * (1000.0f))));
}
