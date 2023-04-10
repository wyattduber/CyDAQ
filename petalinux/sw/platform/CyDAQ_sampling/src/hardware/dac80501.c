/*
 * dac80501.c
 *
 *  Created on: Oct 17, 2020
 *      Author: Brady
 */

#include "dac80501.h"

/* Constant definitions */
#define TIMER_DEVICE_ID		XPAR_XSCUTIMER_0_DEVICE_ID
#define INTC_DEVICE_ID		XPAR_SCUGIC_SINGLE_DEVICE_ID
#define TIMER_IRPT_INTR		XPAR_SCUTIMER_INTR

/* Function definitions */
static int dac80501_SetupInterruptSystem(XScuGic *IntcInstancePtr, XScuTimer *TimerInstPtr, u16 IntrId);

/* Global variables */
extern u8 SpiInitStatus;

/* Local variables */
u16 dac80501_DatasetBuffer[DAC_DATASET_BUFFER_SIZE];
u8 dac80501_DatasetRXBuffer[DAC_DATASET_RX_BUFFER_SIZE];
u8 dac80501_WriteBuffer[SPI_DAC_TX_BUFFER_SIZE] = {SPI_DAC_WROUT_REG_ADDR, 0x00, 0x00};

volatile u32 dacBufferSize = 0;
volatile u32 dacCurrentIndex = 0;

volatile u32 numRepetitions = 0;
volatile u32 currentRepetition = 0;

static XScuTimer DACTimerInst;
static XSpi *SpiInstPtr = NULL;

int init_dac80501(void)
{
	int Status;
	XScuTimer_Config *TimerConfigPtr;
	SpiInstPtr = shared_GetSpiInstPtr();

	/*
	 * Initialize the SCU timer to periodically update DAC
	 * TODO: switch to using TTC1 to match up with the ADC on TTC0, free up private SCU timer for other things
	 */
	TimerConfigPtr = XScuTimer_LookupConfig(TIMER_DEVICE_ID);
	if (TimerConfigPtr == NULL) {
		return XST_DEVICE_NOT_FOUND;
	}

	Status = XScuTimer_CfgInitialize(&DACTimerInst, TimerConfigPtr, TimerConfigPtr->BaseAddr);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	/*
	 * Set up DAC timer interrupts
	 * Get XScuGic instance from shared objects pool
	 */
	XScuGic *XScuGicInstPtr = shared_GetScuGicPtr();
	dac80501_SetupInterruptSystem(XScuGicInstPtr, &DACTimerInst, DAC_TIMER_INTR_ID);

	Status = XScuTimer_SelfTest(&DACTimerInst);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	dac80501_SetGenerationRate(DAC_DEFAULT_GENERATION_RATE);

	shared_InitSpi();

	return XST_SUCCESS;
}

static int dac80501_SetupInterruptSystem(XScuGic *IntcInstancePtr, XScuTimer *TimerInstPtr, u16 IntrId)
{
	XScuGic_Config *IntcConfig; //GIC config
	Xil_ExceptionInit();

	//initialise the GIC
	IntcConfig = XScuGic_LookupConfig(INTC_DEVICE_ID);
	XScuGic_CfgInitialize(IntcInstancePtr, IntcConfig, IntcConfig->CpuBaseAddress);

    //connect to the hardware
	Xil_ExceptionRegisterHandler(XIL_EXCEPTION_ID_INT,
				(Xil_ExceptionHandler) XScuGic_InterruptHandler,
				IntcInstancePtr);

	//set up the timer interrupt
	XScuGic_Connect(IntcInstancePtr, IntrId,
					(Xil_ExceptionHandler) dac80501_InterruptHandler,
					(void *) TimerInstPtr);

	//enable the interrupt for the Timer at GIC
	XScuGic_Enable(IntcInstancePtr, IntrId);

	// Enable interrupts in the Processor.
	Xil_ExceptionEnableMask(XIL_EXCEPTION_IRQ);

	return XST_SUCCESS;
}

bool dac80501_SetGenerationRate(u32 rateHz)
{
	//check that XADC is initialized
	//if(xadcInitStatus == 0) {
	//		xadcInit();
	//}

	if(rateHz > DAC_SCUTIMER_FREQ) {
		if(DEBUG)
			xil_printf("SAMP> Invalid generation rate given\r\n");

		return true;
	}

	double period = (double) 1.0 / rateHz;
	u32 resetValue = period * DAC_SCUTIMER_FREQ;

	XScuTimer_Stop(&DACTimerInst);

	XScuTimer_LoadTimer(&DACTimerInst, resetValue);
	//XScuTimer_LoadTimer(&DACTimerInst, 1);	//useful for profiling how long the DAC ISR runs

	if(DEBUG)
		xil_printf("SAMP> New Generation Rate: %d SPS\r\n", rateHz);

	return false;
}

int dac80501_SetNumRepetitions(u32 num)
{
	numRepetitions = num;
	return 0;
}

int dac80501_EnableGeneration(void)
{
	dacCurrentIndex = 0;
	currentRepetition = 0;

	XScuTimer_EnableInterrupt(&DACTimerInst);
	XScuTimer_Start(&DACTimerInst);
	return 0;
}

int dac80501_DisableGeneration(void)
{
	XScuTimer_DisableInterrupt(&DACTimerInst);
	XScuTimer_Stop(&DACTimerInst);
	return 0;
}

int dac80501_ReceiveDataset(u32 datasetSize)
{
	//check for errors before beginning reception
	if(datasetSize == 0 || datasetSize > DAC_DATASET_BUFFER_SIZE) {
		if(DEBUG)
			xil_printf("SAMP> Invalid dataset length\r\n");

		return 1;
	}

	//ack front end; indicate readiness for dataset reception
	xil_printf("%cACK%c", COMM_START_CHAR, COMM_STOP_CHAR);

	dacBufferSize = datasetSize;
	dacCurrentIndex = 0;

	//wait for start-of-transmission
	while(1)
	{
		//receive a single byte
		commUartRecv(&dac80501_DatasetRXBuffer[0], 1);

		//if byte received was the start char, proceed to dataset reception
		if(dac80501_DatasetRXBuffer[0] == COMM_START_CHAR) {
			break;
		}
	}

	//continuously receive dataset entries until stop condition is met
	while(1)
	{
		//loop until a complete 16-bit entry is received
		int bytesReceived = 0;
		while(bytesReceived < 2)
		{
			bytesReceived += commUartRecv(&dac80501_DatasetRXBuffer[bytesReceived], 1);

			//nothing was received, try again
			if(bytesReceived == 0) {
				continue;
			}

			//detect end-of-transmission
			if(dacCurrentIndex == dacBufferSize) {
				//a stop char was received after the final entry. Indicate successful reception
				if(dac80501_DatasetRXBuffer[bytesReceived-1] == COMM_STOP_CHAR) {
					return 0;

				//some other byte was received after the final entry. Indicate error
				} else {
					return 1;
				}
			}
		}

		//a 16-bit entry has been received, process it and store it in the generation buffer
		u16 entry = (dac80501_DatasetRXBuffer[bytesReceived-2] << 8) |
					(dac80501_DatasetRXBuffer[bytesReceived-1]);

		dac80501_DatasetBuffer[dacCurrentIndex] = entry;
		dacCurrentIndex++;
	}
}

void dac80501_InterruptHandler(void *CallBackRef)
{
	XScuTimer *TimerInstancePtr = (XScuTimer *) CallBackRef;
	XScuTimer_ClearInterruptStatus(TimerInstancePtr);

	//restarting the timer here used to double the max frequency the DAC ISR can run at
	//	now that the SPI instance has been moved to shared_objects, it no longer has any effect
	//	no idea why it happened, but it was a positive quirk	--Brady

	//  XScuTimer_RestartTimer(TimerInstancePtr);

	dacCurrentIndex++;
	if(dacCurrentIndex >= dacBufferSize) {
		dacCurrentIndex = 0;

		//if the generator has a repetition limit, increment loop counter
		//disable timer and interrupts once limit is reached
		if(numRepetitions > 0) {
			if(currentRepetition < numRepetitions) {
				currentRepetition++;
			} else {
				XScuTimer_DisableInterrupt(&DACTimerInst);
				XScuTimer_Stop(&DACTimerInst);
				return;
			}
		}
	}

	dac80501_SetOutput(dac80501_DatasetBuffer[dacCurrentIndex]);

	XScuTimer_RestartTimer(TimerInstancePtr);
}

int dac80501_SetOutput(u16 output)
{
	//split output into two bytes, MSB first
	dac80501_WriteBuffer[1] = ((output >> 8) & 0xFF);
	dac80501_WriteBuffer[2] = ((output) & 0xFF);

	//select DAC and transfer bytes
	XSpi_SetSlaveSelect(SpiInstPtr, SPI_DAC_SS_ADDR);
	XSpi_Transfer(SpiInstPtr, dac80501_WriteBuffer, NULL, SPI_DAC_TX_BUFFER_SIZE);
	XSpi_SetSlaveSelect(SpiInstPtr, 0);

	return XST_SUCCESS;
}

