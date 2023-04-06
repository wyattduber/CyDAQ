/*
 * ads7047.c
 *
 *  Created on: Nov 19, 2020
 *      Author: Brady
 */

#include "ads7047.h"

/* Function definitions */
static int ads7047_SetupInterruptSystem(XScuGic *IntcInstancePtr, XTtcPs *TimerInstPtr, u16 IntrId);

/* Global variables */
extern bool samplingEnabled;
extern bool streamingEnabled;

/* Local variables */
static u8 ads7047_WriteBuffer[2] = {0x00, 0x00};
static u8 ads7047_ReadBuffer[2];

static u32 sampleRate = ADS7047_DEFAULT_RATE;
static SAMPLE_TYPE *ads7047_SampleBuffer = NULL;

u8 ads7047_InitStatus = 0;

static TtcConfig_t ADCTtcConfig = {ADS7047_DEFAULT_RATE, 0, 0, 0};

static XTtcPs *TtcPtr = NULL;
static XScuGic *IntcPtr = NULL;

int init_ads7047(void)
{
	int Status;
	XTtcPs_Config *ConfigPtr;
	TtcPtr = shared_GetTtcPsInstPtr();
	IntcPtr = shared_GetScuGicPtr();

	/*
	 * Initialize TTC0 as external ADC sampling timer
	 */
	ConfigPtr = XTtcPs_LookupConfig(SPI_ADC_TTC_DEVICE_ID);
	if (ConfigPtr == NULL) {
		return XST_DEVICE_NOT_FOUND;
	}

	Status = XTtcPs_CfgInitialize(TtcPtr, ConfigPtr, ConfigPtr->BaseAddress);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	/*
	 * Configure TTC0: count interval and automatically reset, disable wave output to PL
	 * Automatically calculate timer parameters from specified frequency
	 */
	XTtcPs_Stop(TtcPtr);

	ADCTtcConfig.Options |= (XTTCPS_OPTION_INTERVAL_MODE | XTTCPS_OPTION_WAVE_DISABLE);

	XTtcPs_SetOptions(TtcPtr, ADCTtcConfig.Options);

 	XTtcPs_CalcIntervalFromFreq(TtcPtr, ADCTtcConfig.OutputHz, &(ADCTtcConfig.Interval), &(ADCTtcConfig.Prescaler));

    XTtcPs_SetInterval(TtcPtr, ADCTtcConfig.Interval);
    XTtcPs_SetPrescaler(TtcPtr, ADCTtcConfig.Prescaler);

    /*
     * Configure TTC0 interrupts
     */
    ads7047_SetupInterruptSystem(IntcPtr, TtcPtr, SPI_ADC_TTC_INTR_ID);

    /*
     * Save reference to shared sample buffer
     */
    ads7047_SampleBuffer = shared_GetSampleBuffer();

    ads7047_InitStatus = 1;

	return XST_SUCCESS;
}

int ads7047_SetupInterruptSystem(XScuGic *IntcInstancePtr, XTtcPs *TimerInstPtr, u16 IntrId)
{
	XScuGic_Config *IntcConfig;	//GIC config
	Xil_ExceptionInit();

	//initialise the GIC
	IntcConfig = XScuGic_LookupConfig(INTC_DEVICE_ID);

	XScuGic_CfgInitialize(IntcInstancePtr, IntcConfig,
					IntcConfig->CpuBaseAddress);

	//connect to the hardware
	Xil_ExceptionRegisterHandler(XIL_EXCEPTION_ID_INT,
				(Xil_ExceptionHandler)XScuGic_InterruptHandler,
				IntcInstancePtr);

	//set up the timer interrupt
	XScuGic_Connect(IntcInstancePtr, IntrId,
					(Xil_ExceptionHandler) ads7047_InterruptHandler,
					(void *) TimerInstPtr);

	//enable the interrupt for the Timer at GIC and in TTC
	XScuGic_Enable(IntcInstancePtr, IntrId);
	XTtcPs_EnableInterrupts(TimerInstPtr, XTTCPS_IXR_INTERVAL_MASK);

	// Enable interrupts in the Processor.
	Xil_ExceptionEnableMask(XIL_EXCEPTION_IRQ);

	return XST_SUCCESS;
}

void ads7047_EnableSampling(u8 streamSetting)
{
	//check that ADC has been initialized
	if(ads7047_InitStatus == 0) {
		init_ads7047();
	}

	if(DEBUG)
		xil_printf("Starting sampling, Streaming: %s\n", (streamSetting) ? "On" : "Off");

	//set status variables
	samplingEnabled = true;

	if(streamSetting == 1) {
		streamingEnabled = true;
	}

	//Start TTC0 to begin sampling
	XTtcPs_Start(TtcPtr);
}

void ads7047_DisableSampling(void)
{
	samplingEnabled = false;
	streamingEnabled = false;

	XTtcPs_Stop(TtcPtr);
}

void ads7047_ProcessSamples(void)
{
	xadcProcessSamples();
}

int intrcount = 0;
void ads7047_InterruptHandler(void *CallBackRef)
{
	u32 StatusEvent = XTtcPs_GetInterruptStatus((XTtcPs *) CallBackRef);
	XTtcPs_ClearInterruptStatus((XTtcPs *) CallBackRef, StatusEvent);

	volatile u32* ads7047SampleCount = shared_GetSampleCount();

	if ((*ads7047SampleCount) < SAMPLE_BUFFER_SIZE ) {
		ads7047_SampleBuffer[*ads7047SampleCount] = ads7047_CaptureSample();
		(*ads7047SampleCount)++;

	} else if(streamingEnabled) {
		(*ads7047SampleCount) = 0;

	} else {
		samplingEnabled = false;
		XTtcPs_Stop(TtcPtr);
	}

	//TODO: reset timer count here? Would slightly affect sample rate, but would prevent a new sample from trying to capture during interrupt
	//		may be necessary to combat fixed 8us delay after interacting with SPI bus
	//XTtcPs_ResetCounterValue(TtcPtr);
}

int ads7047_SetSampleRate(u32 rateHz)
{
	//check that ADC is initialized
	if(ads7047_InitStatus == 0) {
		init_ads7047();
	}

	if(rateHz > ADS7047_MAX_SAMPLE_RATE) {
		if(DEBUG)
			xil_printf("Invalid sample rate given");
		return 1;
	}

	//store sample rate
	sampleRate = rateHz;
	ADCTtcConfig.OutputHz = rateHz;

	//stop timer to recalculate interval and prescaler from given sample rate
	XTtcPs_Stop(TtcPtr);

 	XTtcPs_CalcIntervalFromFreq(TtcPtr, ADCTtcConfig.OutputHz, &(ADCTtcConfig.Interval), &(ADCTtcConfig.Prescaler));

    XTtcPs_SetInterval(TtcPtr, ADCTtcConfig.Interval);
    XTtcPs_SetPrescaler(TtcPtr, ADCTtcConfig.Prescaler);

	if(DEBUG)
		xil_printf("New ADS7047 Sample Rate: %d SPS\n", rateHz);

	return 0;
}

u16 ads7047_CaptureSample(void)
{
	s16 result = 0;

	//select ADC and receive bytes
	//send "0x0000" to generate the 16 clock cycles necessary for reading
	XSpi *SpiInstPtr = shared_GetSpiInstPtr();

	XSpi_SetSlaveSelect(SpiInstPtr, SPI_ADC_SS_ADDR);
	XSpi_Transfer(SpiInstPtr, ads7047_WriteBuffer, ads7047_ReadBuffer, SPI_ADC_RX_BUFFER_SIZE);
	XSpi_SetSlaveSelect(SpiInstPtr, 0);

	//External SPI ADC returns 12-bit signed sample value (-2048 to 2047) with some 0's for padding
	//Raw byte format: Buf[0] = MSB = 0xxx xxxx, Buf[1] = LSB = xxxx x000

	//Strip padding 0's and combine partial bytes into 12-bit value stored in a 16-bit variable
	//Value is stored in the upper 12 bits of the 16-bit variable (in the form: xxxx xxxx xxxx 0000)
	result = 0 | ((ads7047_ReadBuffer[0] & 0x7F) << 9) | ((ads7047_ReadBuffer[1] & 0xF8) << 1);

	//Shift value into the lower 12 bits of the 16-bit variable (now in the form: ssss xxxx xxxx xxxx)
	//Storing signed 12-bit value in the upper bits forces an arithmetic right shift, preserving sign
	result >>= 4;

	//Add max negative value (2048) to ensure result is positive and can be represented as an unsigned number
	result += 2048;

	//Return result as a 12-bit unsigned number stored in a 16-bit unsigned short
	return (u16) result;
}

u32 ads7047_GetSampleRate(void)
{
	return sampleRate;
}

u32 ads7047_GetSampleCount(void)
{
	return *shared_GetSampleCount();
}
