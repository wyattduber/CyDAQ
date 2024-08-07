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
#define DEF_SAMPLE_BURST_SIZE 200 //number of bytes worth of samples to send in single burst (# samples* 2 bytes/sample)
#define BUF_START 0x00000000 //FIXME
#define BUF_END 0x00000000 //FIXME

//Shared memory addresses
#define cmdShare 0xFFFF0000
#define payloadShare (cmdShare + COMM_CMD_SIZE)
#define modeShare (payloadShare + COMM_MAX_PYLD_SIZE)
#define intrptShare (modeShare + sizeof(u8))
#define startPtr (intrptShare + sizeof(u8))
#define endPtr (startPtr + sizeof(u8*))
#define flagShare (endPtr + sizeof(u8*))

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


int setup_interrupts(XScuGic *intc);
void reset_usb(void);
int usbComm_init();
u32 usb_commRecv(u8 *bufferPtr, u32 numBytes);
u32 usb_commBytesAvailable();
u32 usb_commSend(u8 *bufferPtr, u32 numBytes);


