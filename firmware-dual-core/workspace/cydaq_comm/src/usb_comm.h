#include "xparameters.h"		/* XPAR parameters */
#include "xusbps.h"			/* USB controller driver */
#include "xscugic.h"
#include "xusbps_cdc_ch9.h"		/* Generic Chapter 9 handling code */
#include "xusbps_cdc_ch9_cdc.h"	/* Storage class handling code */
#include "xil_exception.h"
#include "xpseudo_asm.h"
#include "xreg_cortexa9.h"
#include "xil_cache.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xusbps_cdc.h"
#include "xusbps_cdc_irq.h"		/* USB interrupt processing code */
#include "xusbps_cdc_buffer.h"

#include "xil_util.h"

#ifdef XPAR_INTC_0_DEVICE_ID
#include "xintc.h"
#else
#include "xscugic.h"
#endif

#ifdef XPAR_INTC_0_DEVICE_ID
#define INTC		XIntc
#define INTC_DEVICE_ID		XPAR_INTC_0_DEVICE_ID
#define UART_INT_IRQ_ID		XPAR_INTC_0_UARTPS_0_VEC_ID
#else
#define INTC		XScuGic
#define INTC_DEVICE_ID		XPAR_SCUGIC_SINGLE_DEVICE_ID
#define UART_INT_IRQ_ID		XPAR_XUARTPS_1_INTR
#endif

#define DEBUG 1
#define COMM_CMD_SIZE 1			//in bytes
#define COMM_MODE_SIZE 1			//in bytes
#define COMM_MAX_PYLD_SIZE 4 	//in bytes
#define COMM_NUM_START_CHARS 1	//in bytes
#define COMM_NUM_STOP_CHARS	1	//in bytes
#define COMM_SAMPLE_RATE_SIZE 4 //in bytes
#define COMM_START_CHAR '@'
#define COMM_STOP_CHAR '!'
#define TEST_BUFFER_SIZE	50
#define SAMPLE_BUFFER_SIZE 1000000 //originally 10,000. Set lower for testing
#define DEF_SAMPLE_BURST_SIZE 200 //number of bytes worth of samples to send in single burst (# samples* 2 bytes/sample)
#define BUF_START 0x00100000 //FIXME
#define BUF_END 0x102A00 //FIXME

//Shared memory addresses
#define cmdShare 0xFFFF0000
#define payloadShare 0xFFFF0001 //(cmdShare + COMM_CMD_SIZE * sizeof(u8))
#define modeShare 0xFFFF0005 //(payloadShare + COMM_MAX_PYLD_SIZE  * sizeof(u8))
#define intrptShare 0xFFFF0006 //(modeShare + sizeof(u8))
#define startPtr 0xFFFF0007 //(intrptShare + sizeof(u8))
#define endPtr 0xFFFF000B //(startPtr + sizeof(u8*))
#define flagShare 0xFFFF000F //(endPtr + sizeof(u8*))

/**
 * Maps commands sent to/from GUI to numbers. Must match command enum
 * used in GUI src code.
 */
typedef enum commands
{
	INPUT_SELECT = 0,
	SAMPLE_RATE_SET = 1,
	FILTER_SELECT = 2,
	CORNER_FREQ_SET = 3,
	FETCH_SAMPLES = 4,
	ADC_SELECT = 5,
	PING = 7,
	START_SAMPLING = 8,
	STOP_SAMPLING = 9,
	DAC_MODE_SELECT = 10,
	DAC_NUM_REPS_SET = 11,
	DAC_GEN_RATE_SET = 12,
	DAC_SEND_DATASET = 13,
	START_GENERATION = 14,
	STOP_GENERATION = 15,
	START_CONTROLLER = 16,
	NUM_COMMANDS
} commands_e;

/**
 * Maps the filters/paths on the board to numbers.
 * Starts at 0 (used to create arrays of presets mapped to this enum.
 * Do not change order unless you know what you are doing.
 */
typedef enum filters
{
    FILTER_1ST_ORDER_LP,
    FILTER_1ST_ORDER_HP,
    FILTER_2ND_ORDER_BP,
    FILTER_6TH_ORDER_BP,
    FILTER_6TH_ORDER_HP,
    FILTER_6TH_ORDER_LP,
    FILTER_60_HZ_NOTCH,
    FILTER_PASSTHROUGH,
    NUM_FILTERS
} filters_e;

/**
 * Maps the board inputs to numbers.
 * Starts at 0.
 */
typedef enum inputs
{
    AUXILARY35MM,
    ANALOG,
    SENSOR1V8,
    SENSOR3V3,
    SENSOR5V0,
	DIGITAL_I2C,
	DITIAL_SPI,
	DIGITAL_UART,
    NUM_INPUTS
} inputs_e;

/**
 * Maps the available Analog-to-Digital converter options to numbers.
 * Starts at 0.
 */
typedef enum adcs
{
	ADC_XADC,
	ADC_SPI_EXTERNAL,
	NUM_ADCS
} adcs_e;



int setup_interrupts(XScuGic *intc);
void reset_usb(void);
int usbComm_init();
u32 usb_commRecv(u8 *bufferPtr, u32 numBytes);
u32 usb_commBytesAvailable();
u32 usb_commSend(u8 *bufferPtr, u32 numBytes);


