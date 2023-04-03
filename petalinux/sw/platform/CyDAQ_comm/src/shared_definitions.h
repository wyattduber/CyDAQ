/*
 *
 */

#ifndef SRC_SHARED_DEFINITIONS_H_
#define SRC_SHARED_DEFINITIONS_H_

#include <stdbool.h>
#include "corrections.h"

/**
 * Meant to enable outputting of debug messages over uart (WIP).
 */
#define DEBUG 1


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
 * Container struct to hold configuration values for the 3 Triple Timer Counter (TTC) timers
 */
typedef struct TtcConfig {
	u32 OutputHz;
	u16 Interval;
	u8 Prescaler;
	u16 Options;
} TtcConfig_t;

/**
 * Constant definitions for shared_objects.c.
 */
#ifndef SPI_DEVICE_ID
#define SPI_DEVICE_ID		XPAR_AXI_QUAD_SPI_0_DEVICE_ID
#endif

#ifndef INTC_DEVICE_ID
#define INTC_DEVICE_ID		XPAR_SCUGIC_SINGLE_DEVICE_ID
#endif

#define DEFAULT_SAMPLE_RATE	44100
#define SAMPLE_TYPE 		u16
#define SAMPLE_BUFFER_SIZE  3000000

/**
 * Function definitions for shared_objects.c. Allows sharing of instance pointers and
 * generic driver functions.
 */
int shared_InitSpi(void);

//XSpi* shared_GetSpiInstPtr(void);
//XScuGic* shared_GetScuGicPtr(void);
//XTtcPs* shared_GetTtcPsInstPtr(void);
SAMPLE_TYPE* shared_GetSampleBuffer(void);
volatile u32* shared_GetSampleCount(void);
void shared_clearSampleCount(void);

#endif /* SRC_SHARED_DEFINITIONS_H_ */
