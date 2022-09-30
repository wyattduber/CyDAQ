/*
 * xadc.c
 *
 *  Created on: Oct 29, 2019
 *      Author: tdempsay
 */
#include "xadc.h"

static XSysMon SysMonInst;
static u32 xadcSampleRate = 0, resetValue = 0xFD050E58; //current sample rate (samples/s) and reset value for timer
static XTmrCtr TimerCounterInst;
XSysMon* SysMonInstPtr = &SysMonInst;
u8 xadcInitStatus = 0; //whether XADC has been initialized
static XScuGic InterruptController;
SAMPLE_TYPE xadcBuffer[RX_BUFFER_SIZE];
volatile u32 xadcSampleCount = 0;
volatile float voltage;

extern bool samplingEnabled;
extern bool streamingEnabled;

extern TaskHandle_t hSamplingTask;

extern volatile bool commDataReceived;

//#define INTC_DEVICE_ID		 	XPAR_INTC_0_DEVICE_ID
#define INTC_DEVICE_INT_ID	 	XPAR_INTC_0_TMRCTR_0_VEC_ID
#define TMRCTR_DEVICE_ID		XPAR_TMRCTR_0_DEVICE_ID
#define TIMER_CNTR_0	 		0


/**
 * Initializes XADC
 */
u8 xadcInit(){

/*
	u32 address, status;
	XSysMon_Config *SYSConfigPtr;

	SYSConfigPtr = XSysMon_LookupConfig(SYSMON_DEVICE_ID);
	if (SYSConfigPtr == NULL) {
		return XST_FAILURE;
	}

	XSysMon_CfgInitialize(SysMonInstPtr, SYSConfigPtr, SYSConfigPtr->BaseAddress);

	if(DEBUG){
		address = SYSConfigPtr->BaseAddress;
		xil_printf("XADC using Sysmon -> base address %lx \n\r", address);
	}


	status = xadcSetupInterruptSystem(&InterruptController, &SysMonInst, XADC_INTR_ID);
	if (status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	XSysMon_SetAlarmEnables(SysMonInstPtr, 0x0);
	status = XSysMon_SelfTest(SysMonInstPtr);
	if ( XST_SUCCESS != status ) {
		printf("ADC self test failed\n\r");
	}else{
		printf("ADC self test pass");
	}
	//disables sequencer so we can configure it
    XSysMon_SetSequencerMode(SysMonInstPtr, XSM_SEQ_MODE_SAFE);
    status =  XSysMon_GetSeqInputMode(SysMonInstPtr);
    //disables averaging on all inputs
    XSysMon_SetSeqAvgEnables(SysMonInstPtr, XSM_AVG_0_SAMPLES);
    //clear the old status
    XSysMon_GetStatus(SysMonInstPtr);
//    intrStatusValue = Xil_In16(SYSConfigPtr->BaseAddress+XSM_CFR0_OFFSET);
//	printf("CFG0 %x, ",(unsigned int) intrStatusValue);
//	intrStatusValue = Xil_In16(SYSConfigPtr->BaseAddress+XSM_CFR1_OFFSET);
//	printf("CFG1 %x, ",(unsigned int)intrStatusValue);
//	intrStatusValue = Xil_In16(SYSConfigPtr->BaseAddress+XSM_CFR2_OFFSET);
//	printf("CFG2 %x\n",(unsigned int)intrStatusValue);
//	intrStatusValue = XSysMon_IntrGetEnabled(SysMonInstPtr);
//	printf("Interrupt Enable register %x \n",(unsigned int)intrStatusValue);
//	intrStatusValue = Xil_In32(SYSConfigPtr->BaseAddress+XSM_GIER_OFFSET);
//	printf("Global Int Enable %x \n",(unsigned int)intrStatusValue);



	//status = XSysMon_GetSeqInputMode(SysMonInstPtr);
    //disables calibration
	XSysMon_SetCalibEnables(SysMonInstPtr, XSM_CFR1_CAL_DISABLE_MASK);
	//disables averaging
	XSysMon_SetAvg(SysMonInstPtr, XSM_AVG_0_SAMPLES);
	//set sequencer to continually sample enabled inputs
	XSysMon_SetSequencerMode(SysMonInstPtr, XADC_SEQ_SETTING); //XSM_SEQ_MODE_SINGCHAN XSM_SEQ_MODE_CONTINPASS
	usleep(1000);
	if(XADC_SEQ_SETTING == XSM_SEQ_MODE_SINGCHAN){
		status = XSysMon_SetSingleChParams(SysMonInstPtr, AUX_14_INPUT, 0, 1, 0);
		if (status != XST_SUCCESS) {
					return XST_FAILURE;
		}
	}

	//enables interrupt for end of sequence on XADC
	XSysMon_IntrEnable(SysMonInstPtr, XSM_IPIXR_EOS_MASK);
	XSysMon_IntrGlobalEnable(SysMonInstPtr);
*/
	u32 address, status;
	XSysMon_Config *ConfigPtr;
	XSysMon *SysMonInstPtr = &SysMonInst;

	ConfigPtr = XSysMon_LookupConfig(SYSMON_DEVICE_ID);
	if (ConfigPtr == NULL) {
			xil_printf("no config\r\n");
			return XST_FAILURE;
	}

	XSysMon_CfgInitialize(SysMonInstPtr, ConfigPtr, ConfigPtr->BaseAddress);

	status = xadcSetupInterruptSystem(&InterruptController, &SysMonInst, XADC_INTR_ID);
	if (status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	XSysMon_SetAlarmEnables(SysMonInstPtr, 0x0);
	status = XSysMon_SelfTest(SysMonInstPtr);
	if ( XST_SUCCESS != status ) {
		xil_printf("ADC self test failed\r\n");
	}else{
		xil_printf("ADC self test pass\r\n");
	}

	//XSysMon_SetSequencerMode(SysMonInstPtr, XSM_SEQ_MODE_SAFE);
	//disables sequencer so we can configure it
    XSysMon_SetSequencerMode(SysMonInstPtr, XSM_SEQ_MODE_SAFE);
    status =  XSysMon_GetSeqInputMode(SysMonInstPtr);
    //disables averaging on all inputs
    XSysMon_SetSeqAvgEnables(SysMonInstPtr, XSM_AVG_0_SAMPLES);
    //clear the old status
    XSysMon_GetStatus(SysMonInstPtr);

	//status = XSysMon_GetSeqInputMode(SysMonInstPtr);
    //disables calibration
	XSysMon_SetCalibEnables(SysMonInstPtr, XSM_CFR1_CAL_DISABLE_MASK);
	//disables averaging
	XSysMon_SetAvg(SysMonInstPtr, XSM_AVG_0_SAMPLES);
	//set sequencer to continually sample enabled inputs
	XSysMon_SetSequencerMode(SysMonInstPtr, XADC_SEQ_SETTING); //XSM_SEQ_MODE_SINGCHAN XSM_SEQ_MODE_CONTINPASS
	usleep(1000);
	if(XADC_SEQ_SETTING == XSM_SEQ_MODE_SINGCHAN){
		status = XSysMon_SetSingleChParams(SysMonInstPtr, AUX_14_INPUT, 0, 1, 0);
		if (status != XST_SUCCESS) {
					return XST_FAILURE;
		}
	}

	XSysMon_IntrEnable(SysMonInstPtr, XSM_IPIXR_EOC_MASK);
	XSysMon_IntrGlobalEnable(SysMonInstPtr);

	if(DEBUG)
		xadcCheckAuxSettings();

	//these initializes timer which controls sample rate
	status = XTmrCtr_Initialize(&TimerCounterInst, TMRCTR_DEVICE_ID);
	if (status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	status = XTmrCtr_SelfTest(&TimerCounterInst,TIMER_CNTR_0);
	if (status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	XTmrCtr_SetOptions(&TimerCounterInst, TIMER_CNTR_0, XTC_INT_MODE_OPTION|XTC_AUTO_RELOAD_OPTION);
	//set to default sample rate

	xadcSampleCount = 0;
	samplingEnabled = false;
	streamingEnabled = false;
	xadcInitStatus = 1;
	xadcSetSampleRate(XADC_DEFAULT_RATE);

	return XST_SUCCESS;
}

XSysMon* xadcGetSysMonPtr(){
	return SysMonInstPtr;
}

u8 xadcCheckAuxSettings(){
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
	xil_printf("\n\r");

	return 0;
}

void xadcSetPolarity(u8 setting){
	int status;
	//1 for bipolar, 0 for unipolar
	if(setting){
		status = XSysMon_SetSeqInputMode(SysMonInstPtr, XSM_SEQ_CH_AUX14);
	}else{
		status = XSysMon_SetSeqInputMode(SysMonInstPtr, 0);
	}
	if(status != XST_SUCCESS){
		xil_printf("Error changing polarity");
	}
	return;
}

u32 xadcGetSampleCount(){
	return xadcSampleCount;
}
SAMPLE_TYPE* xadcGetBuffer(){
	return xadcBuffer;
}
/**
 * Disables sampling by stopping timer. Sets sampling status variables to off position.
 */
void xadcDisableSampling(){
	//stops timer that drives xadc
	XTmrCtr_Stop(&TimerCounterInst, TIMER_CNTR_0);
	XSysMon_IntrGlobalDisable(&SysMonInst);
	//resets sampling status variables to 'off'
	samplingEnabled = false;
	streamingEnabled = false;

}
/**
 * Enables storing/printing of samples from XADC
 */
void xadcEnableSampling(u8 streamSetting){
	//checks that XADC has been initialized
	if(xadcInitStatus == 0){
		xadcInit();
	}
	if(DEBUG)
		xil_printf("Starting sampling, Streaming: %s\n", (streamSetting) ? "On" : "Off");
	//changes sampling status var
	samplingEnabled = true;

	//Starts timer to begin sampling
	XTmrCtr_Start(&TimerCounterInst, TIMER_CNTR_0);
	//XSysMon_IntrGlobalEnable(SysMonInstPtr);

	//if caller wants streaming, change status var as needed
	if(streamSetting == 1) {
		streamingEnabled = true;
	}

	/*
	while(samplingEnabled){
		//checks for bytes received on uart, 1 at a time to minimize cycles used
		numBytes += comUartRecv(&buf[numBytes], 1);
		//waits for xadc to finish conversion of current sample
		while ((XSysMon_GetStatus(&SysMonInst) & XSM_SR_EOC_MASK) != XSM_SR_EOC_MASK);
		//restarts timer for next sample.
		XTmrCtr_Start(&TimerCounterInst, TIMER_CNTR_0);
		//stores raw 12bit sample (shifted right 4).
		xadcBuffer[xadcSampleCount] = (SAMPLE_TYPE) (XSysMon_GetAdcData(&SysMonInst, AUX_14_INPUT) >> 4); // & 4095;
		//if streaming is enabled, send the samples back (MAY AFFECT SAMPLE COLLECTION PERFORMANCE)
		if(streamingEnabled){
			//commUartSend(&xadcBuffer[i], 2);
			voltage = RawToExtVoltage(xadcBuffer[xadcSampleCount]);
			xil_printf("%d.%d, 0x%x\n", (int)voltage, xadcFractionToInt(voltage), xadcBuffer[xadcSampleCount]);
		}
		//checks for stop byte from UART
		if(buf[numBytes-1] == '!'){
			xadcDisableSampling();
			if(DEBUG)
				xil_printf("Stopping, # Samples: %d\n", xadcSampleCount);
			//since buffer memory isn't initialized, reset first and last char so they aren't saved
			buf[0] = buf[numBytes-1] = '\0';
		//rollover for sample array if sample count gets too big
		}else if(xadcSampleCount == RX_BUFFER_SIZE-1){
				xadcSampleCount = 0;
		}else{
				xadcSampleCount++;
		}
	}
	*/
}

void xadcCaptureSample(void) {
	//waits for xadc to finish conversion of current sample
	/*while ((XSysMon_GetStatus(&SysMonInst) & XSM_SR_EOC_MASK) != XSM_SR_EOC_MASK) {
		//give comm task a tick to deal with incoming messages
		//vTaskDelay(1);

		//TODO hacky solution
		if(commDataReceived) {
			commDataReceived = false;
			vTaskDelay(1);
		}
	}*/

	//restarts timer for next sample.
	XTmrCtr_Start(&TimerCounterInst, TIMER_CNTR_0);

	//stores raw 12bit sample (shifted right 4).
	xadcBuffer[xadcSampleCount] = (SAMPLE_TYPE) (XSysMon_GetAdcData(&SysMonInst, AUX_14_INPUT) >> 4); // & 4095;

	//rollover to 0 if end of buffer is reached (TODO use separate read/write heads instead of "count")
	if(xadcSampleCount == RX_BUFFER_SIZE-1) {
			xadcSampleCount = 0;
	} else {
			xadcSampleCount++;
	}
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
int xadcFractionToInt(float FloatNum){
	float Temp = FloatNum;
	if (FloatNum < 0) {
		Temp = -(FloatNum);
	}

	return( ((int)((Temp -(float)((int)Temp)) * (1000.0f))));
}
/**
 * Rate should be given in SPS. Configures timer to count at rate that matches sample rate.
 */
int xadcSetSampleRate(u32 rate){

	if(xadcInitStatus == 0){
			xadcInit();
	}

	//moved to comm.c
	//if(rate > XADC_MAX_SAMPLE_RATE){
	//	if(DEBUG)
	//		xil_printf("Invalid sample rate given");
	//	return 1;
	//}
	xadcSampleRate = rate;
	double period = (double) 1 / rate;
	resetValue = ((period * CLOCK_FREQ) - pow(2, 32) - 1) * -1.0;

	XTmrCtr_Stop(&TimerCounterInst, TIMER_CNTR_0);
	XTmrCtr_SetResetValue(&TimerCounterInst, TIMER_CNTR_0, (u32) resetValue);

	if(DEBUG)
		xil_printf("New Sample Rate: %d SPS\n", rate);
	return 0;
}
/**
 * Returns current sample rate
 */
u32 xadcGetSampleRate(){
	return xadcSampleRate;
}
/**
 * Sets up interrupt for XADC to handler function. (NOT USED CURRENTLY, POLLED INSTEAD)
 */
static int xadcSetupInterruptSystem(XScuGic *IntcInstancePtr,XSysMon *XAdcPtr, u16 IntrId ){

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
void xadcInterruptHandler(void *CallBackRef){
	XSysMon_IntrClear(&SysMonInst, XSM_IPIXR_EOC_MASK);

	if(!samplingEnabled) {
		return;
	}

	if (xadcSampleCount < RX_BUFFER_SIZE ){
		xadcBuffer[xadcSampleCount] = (SAMPLE_TYPE) XSysMon_GetAdcData(&SysMonInst, AUX_14_INPUT) >> 4;
		xadcSampleCount++;
	}else if(streamingEnabled == true){
		xadcSampleCount = 0;
	}else{
		samplingEnabled = false;
		XSysMon_IntrGlobalDisable(SysMonInstPtr);
	}

	XTmrCtr_Start(&TimerCounterInst, TIMER_CNTR_0);

	BaseType_t xHigherPriorityTaskWoken = pdTRUE;
	vTaskNotifyGiveFromISR(hSamplingTask, &xHigherPriorityTaskWoken);
	portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
}
void xadcProcessSamples(){
	u32 i = 0;
	u8 sent = 0;
	u8* ptr = (u8*) xadcBuffer;
	u8* lastVal = (u8*) xadcBuffer + (2*xadcSampleCount);
	u8 burstSize = DEF_SAMPLE_BURST_SIZE;

	taskENTER_CRITICAL();

	if(xadcSampleCount == 0){
		if(DEBUG){
			xil_printf("No new samples\n");
		}
		else{
			xil_printf("%c", COMM_START_CHAR);
			usleep(100);
			xil_printf("000000000");
		}
		return;
	}
	//vTaskDelay(1000 / portTICK_PERIOD_MS);
	sleep(1);
	if(DEBUG){
		xil_printf("Beginning sample playback..\n\n");
		while(i < xadcSampleCount){
			voltage = RawToExtVoltage(xadcBuffer[i]);
			xil_printf(" => %d.%d V\n", (int)voltage, xadcFractionToInt(voltage));
			i++;
		}
		xil_printf("Finished processing samples\n\n");
	}else{
		xil_printf("%c", COMM_START_CHAR);
		while(ptr < lastVal){
			//if we are on the last burst is smaller than the burst limit, resize window so we don't miss end samples
			if(ptr+burstSize > lastVal){ burstSize = lastVal-ptr; }
			while(sent < burstSize){
				sent += commUartSend((ptr+sent), burstSize-sent);
			}
			//increment pointer to sample array
			ptr += burstSize;
			usleep(1);
			//reset temp variable
			sent = 0;
		}
		//clear UART out buffer before sending end sequence
		usleep(100);
		xil_printf("00000000"); //COMM_STOP_CHAR, COMM_STOP_CHAR);
		//Needed to give GUI time to reset itself
		usleep(50000);
	}

	xadcSampleCount = 0;

	taskEXIT_CRITICAL();

	return;
}
