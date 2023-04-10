/*
 * filter.c
 *
 *  Created on: Oct 15, 2019
 *      Author: tdempsay
 *
 *  Revised: Oct 4, 2020
 *  	Author: bcra
 */

#include "filter.h"


/* Global variables */
extern filters_e activeFilter;

/* Local variables */
//holds  X9258 IC addresses and pot numbers used for each filter.
static wiper_t sixthOrderLP[6] = { //also 6order HP
  //ic    wiper
  {DEV_ADDRESS_B,  1},
  {DEV_ADDRESS_B,  2},
  {DEV_ADDRESS_C,  3},
  {DEV_ADDRESS_C,  2},
  {DEV_ADDRESS_C,  1},
  {DEV_ADDRESS_C,  0}
};

static wiper_t secondOrderBP[2] = {
  //ic    wiper
  {DEV_ADDRESS_A,  1},
  {DEV_ADDRESS_A,  3} //upper corner pot
};

static wiper_t sixthOrderBP[6] = {
  //filter tuning wipers
  //ic    wiper
  {DEV_ADDRESS_D,  3},
  {DEV_ADDRESS_B,  0},
  {DEV_ADDRESS_B,  3},
  //lp pots (upper corner)
  {DEV_ADDRESS_D,  2},
  {DEV_ADDRESS_D,  1},
  {DEV_ADDRESS_D,  0}
};

static wiper_t firstOrderLP[1] = {
  {DEV_ADDRESS_A,2}
};

static wiper_t firstOrderHP[1] = {
  {DEV_ADDRESS_A, 0}
};


/*
 * Array of pointers to wiper_t arrays for each filter (defined above).
 * Order matches that of filter enum in shared_definitions.h.
 * sixthOrderLP and HP share the same configurations
 */
static wiper_t *filterPotConfigs[6] = {firstOrderLP, firstOrderHP, secondOrderBP, sixthOrderBP, sixthOrderLP, sixthOrderLP};

//objects holding config info of different filters.
static filter_t sixthBP = {
	.filterEnum = FILTER_6TH_ORDER_BP,
	.currentFreq = {0,0},
	.filterOrder = 6,
	.wipers = sixthOrderBP
};

static filter_t sixthLP = {
	.filterEnum = FILTER_6TH_ORDER_LP,
	.currentFreq = {0,0},
	.filterOrder = 6,
	.wipers = sixthOrderLP
};

static filter_t sixthHP = {
	.filterEnum = FILTER_6TH_ORDER_HP,
	.currentFreq = {0,0},
	.filterOrder = 6,
	.wipers = sixthOrderLP
};

static filter_t firstLP = {
	.filterEnum = FILTER_1ST_ORDER_LP,
	.currentFreq = {0,0},
	.filterOrder = 1,
	.wipers = firstOrderLP
};

static filter_t firstHP = {
	.filterEnum = FILTER_1ST_ORDER_HP,
	.currentFreq = {0,0},
	.filterOrder = 1,
	.wipers = firstOrderHP
};

static filter_t secondBP = {
	.filterEnum = FILTER_2ND_ORDER_BP,
	.currentFreq = {0,0},
	.filterOrder = 2,
	.wipers = secondOrderBP
};

//array with pointers to each filter configuration object
static filter_t *filterConfigs[NUM_FILTERS-1] = {&firstLP, &firstHP, &secondBP, &sixthBP, &sixthHP, &sixthLP};

/*
 * Writes pots to get the desired frequency(ies).
 * For BP, freq1 is lower corner(HP) and freq2 is upper corner(LP).
 * If the filter only has one corner, freq1 is used as the corner to set.
 * pass in NULL or 0 as freq2
 */
u8 tuneFilter(filters_e filterSelect, FILTER_FREQ_TYPE freq1, FILTER_FREQ_TYPE freq2) {

	if(filterSelect == 50) {
		filterSelect = activeFilter;
	}

	if(freq1 > FILTER_FREQ_MAX || freq2 > FILTER_FREQ_MAX) {
		if(DEBUG)
			xil_printf("SAMP> Invalid frequency values given %d and %d\r\n", freq1, freq2);

		return 1;
	} else if(filterSelect == FILTER_60_HZ_NOTCH || filterSelect == FILTER_PASSTHROUGH) { //cant be notch or pass
		if(DEBUG)
			xil_printf("SAMP> Can't tune passthrough or notch\r\n");
		//return 2;
		return 0;	//temporary fix; old GUI forces filter tune even if passthrough is selected
	}

	//holds err state of writing pots
	POT_I2C_ERR_TYPE err = 0;

	//register value for X9258 pot from the desired frequency
	POT_R_TYPE potVal1 = freqToPotVal(freq1);

	//pointer to filter object we are tuning
	filter_t *currentFilter = filterConfigs[filterSelect];

	//number of pots we are writing
	u8 wipersToWrite = currentFilter->filterOrder;

	//holds the number of times we try writing to each pot
	u8 retries = 0;

	//if filter is a bandpass, write upper corner to lp pots (upper half of wiper array)
	if(filterSelect == FILTER_2ND_ORDER_BP || filterSelect == FILTER_6TH_ORDER_BP) {
		xil_printf("SAMP> Upper \r\n");
		POT_R_TYPE potVal2 = freqToPotVal(freq2);

		for(int i = wipersToWrite / 2; i < wipersToWrite; i++) {
			retries = 0;

			//will try to rewrite pot if i2c returned error status
			do {
				err = x9258_volatile_write(currentFilter->wipers[i], potVal2);
				retries++;
			} while(err != 0 && retries < MAX_RETRIES);
		}

		//number of pots to write cut in half (already wrote to first half)
		wipersToWrite = currentFilter->filterOrder / 2;
	}

	//write the remaining pots (or all of them if filter is not BP)
	for(int i = 0; i < wipersToWrite; i++) {
		do {
			err = x9258_volatile_write(currentFilter->wipers[i], potVal1);
			retries++;
		} while(err != 0 && retries < MAX_RETRIES);
	}

	//if no error writing pots, write the new frequencies to the filter object.
	if(err == 0) {
	  currentFilter->currentFreq[0] = freq1;
	  currentFilter->currentFreq[1] = freq2;
	} else if(DEBUG) {
		xil_printf("SAMP> Error tuning filter\r\n");
	}

	return err;
}

/**
 * Converts the frequency passed in to the register value that will be written to the pot.
 */
POT_R_TYPE freqToPotVal(FILTER_FREQ_TYPE freq) {
  int resistance = 1.0 / (2.0 * 3.14159 * CAPACITANCE * freq);
  xil_printf("SAMP> Freq (hz): %d, R (ohm): %d\r\n", freq, resistance);
  return pot_value_conversion(resistance);
}
