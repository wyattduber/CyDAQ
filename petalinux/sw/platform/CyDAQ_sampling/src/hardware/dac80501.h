/*
 * dac80501.h
 *
 *  Created on: Oct 17, 2020
 *      Author: Brady
 */

#ifndef SRC_DAC80501_H_
#define SRC_DAC80501_H_

#include "xadc.h"
#include "xspi.h"
#include "xscugic.h"
#include "xscutimer.h"

#define DAC_SCUTIMER_FREQ			XPAR_PS7_CORTEXA9_1_CPU_CLK_FREQ_HZ / 2
#define DAC_TIMER_INTR_ID			XPAR_SCUTIMER_INTR
#define DAC_DEFAULT_GENERATION_RATE 44100

#define DAC_DATASET_BUFFER_SIZE		3000000
#define DAC_DATASET_RX_BUFFER_SIZE	2

#define SPI_DAC_TX_BUFFER_SIZE		3
#define SPI_DAC_WROUT_REG_ADDR		0x08
#define SPI_DAC_SS_ADDR				0x01

int init_dac80501(void);
bool dac80501_SetGenerationRate(u32 freqHz);
int dac80501_SetNumRepetitions(u32 num);
int dac80501_EnableGeneration(void);
int dac80501_DisableGeneration(void);
int dac80501_ReceiveDataset(u32 datasetSize);

void dac80501_InterruptHandler(void *CallBackRef);

int dac80501_SetOutput(u16 output);

#endif /* SRC_DAC80501_H_ */
