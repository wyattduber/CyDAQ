/*
 * comm.c
 *
 *  Created on: Oct 16, 2019
 *      Author: tdempsay
 *
 *  Revised: Oct 4, 2020
 *  	Author: bcra
 */

#include "comm.h"

/* Global variables */
extern bool samplingEnabled;
extern filters_e activeFilter;
extern adcs_e activeAdc;

/* Local variables */
static XUartPs UART1;
static u8 receiveBuffer[TEST_BUFFER_SIZE];	// Buffer for receiving UART data

volatile int TotalReceivedCount;// These counters are used to determine when the
volatile int TotalSentCount;	//   entire buffer has been sent and received.
volatile bool fifoFlag;
int TotalErrorCount;

/**
 * Initializes UART
 */
int commInit() {
	int status = 0;
	XUartPs_Config *Config;
	fifoFlag = false;

	Config = XUartPs_LookupConfig(UART_DEVICE_ID);
	if (NULL == Config) {
		return XST_FAILURE;
	}

	status = XUartPs_CfgInitialize(&UART1, Config, Config->BaseAddress);
	if (status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	/* Set the UART in Normal Mode */
	XUartPs_SetOperMode(&UART1, XUARTPS_OPER_MODE_NORMAL);
	XUartPs_SetBaudRate(&UART1, COMM_BAUD_RATE);
	status = XUartPs_GetOptions(&UART1);

	XUartPsFormat formatConfig;
	XUartPs_GetDataFormat(&UART1, &formatConfig);
	formatConfig.Parity = XUARTPS_FORMAT_NO_PARITY;
	formatConfig.StopBits = XUARTPS_FORMAT_1_STOP_BIT;
	XUartPs_SetDataFormat(&UART1, &formatConfig);

	return XST_SUCCESS;
}

/**
 * Processes commands received over UART. Runs infinitely in the background, getting interrupted by ISRs
 * 	as higher-priority timers (such as the ADC sampling timer) trigger.
 */
void commRXTask() {
	//number of bytes received over UART
	u16 bytesReceived = 0;

	//for error handling
	bool err = false;

	while (1) {
		//idle until a complete command is received
		while (receiveBuffer[bytesReceived - 1] != COMM_STOP_CHAR
				&& bytesReceived < 7) {
			bytesReceived += XUartPs_Recv(&UART1, &receiveBuffer[bytesReceived],
					1);
		}

		if (DEBUG)
			xil_printf("Processing packet\n");

		//stop sampling to config device
		//TODO: instead, save configuration and apply once sampling is done
		if (samplingEnabled == true) {
			switch (activeAdc) {
			case ADC_XADC:
				xadcDisableSampling();
				break;
			case ADC_SPI_EXTERNAL:
				ads7047_DisableSampling();
				break;
			default:
				break;
			}
		}

		//apply command
		err = commProcessPacket(receiveBuffer, bytesReceived);

		receiveBuffer[0] = receiveBuffer[bytesReceived - 1] = 0;
		bytesReceived = 0;

		//indicate success or failure of command to GUI
		if (err) {
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
bool commProcessPacket(u8 *buffer, u16 bufSize) {
	bool err = false;
	u8 cmd, status = 0;
	u8* payload = NULL;

	if ((char) buffer[0] != COMM_START_CHAR
			|| (char) buffer[bufSize - 1] != COMM_STOP_CHAR || bufSize <= 2) {
		//command structure was invalid
		err = true;
	} else {
		//capture command byte
		cmd = buffer[COMM_NUM_START_CHARS];

		//payload start point is start chars + cmd_length
		payload = &buffer[COMM_NUM_START_CHARS + COMM_CMD_SIZE];

		//payload length is buffer size - start/stop chars - cmd_length
		u8 payloadLength = bufSize - COMM_NUM_START_CHARS - COMM_NUM_STOP_CHARS
				- COMM_CMD_SIZE;

		if (DEBUG)
			xil_printf("CMD: %u, payloadLen: %d\n", cmd, payloadLength);

		/*	---Set XADC and external ADC Sample Rates---  */
		if (cmd == SAMPLE_RATE_SET) {
			if (payloadLength < COMM_SAMPLE_RATE_SIZE) {
				if (DEBUG)
					xil_printf(
							"Error, not enough bytes to represent sample rate\n");

				err = true;
			} else {
				u32 rate = (payload[0] << 24) | (payload[1] << 16)
						| (payload[2] << 8) | (payload[3]);
				xadcSetSampleRate(rate);
				ads7047_SetSampleRate(rate);
			}

			/*  ---Select Input Source---  */
		} else if (cmd == INPUT_SELECT) {
			if (payloadLength == 0) {
				if (DEBUG)
					xil_printf("Error, payload length too small\n");

				err = true;
			} else {
				status = muxSetInputPins(payload[0]);
				if (status > 0) {
					err = true;
				}
			}

			/*  ---Select Active Filter---  */
		} else if (cmd == FILTER_SELECT) {
			if (payloadLength < 1) {
				if (DEBUG)
					xil_printf("No filter param given to set\n");

				err = true;
			} else {
				err = muxSetActiveFilter(payload[0]);
			}

			/*  ---Set Filter Corner Frequencies---  */
		} else if (cmd == CORNER_FREQ_SET) {
			if (payloadLength < 4) {
				if (DEBUG)
					xil_printf("err in filter tune function");

				err = true;
			} else {
				//each frequency should be sent as two bytes each
				FILTER_FREQ_TYPE lower = ((payload[0] << 8) & 0xFF00)
						+ payload[1];
				FILTER_FREQ_TYPE upper = ((payload[2] << 8) & 0xFF00)
						+ payload[3];

				//tune filter
				err = tuneFilter(50, lower, upper);
			}

			/*  ---Select between XADC and external SPI ADC---  */
		} else if (cmd == ADC_SELECT) {
			if (payloadLength != 1) {
				if (DEBUG)
					xil_printf("Incorrect formatting in ADC select command");

				err = true;
			} else {
				u8 adcSel = payload[0];

				if (adcSel >= NUM_ADCS) {
					if (DEBUG)
						xil_printf("Invalid ADC selection");

					err = true;
				} else {
					activeAdc = adcSel;
				}
			}

			/*  ---Respond to Ping---  */
		} else if (cmd == PING) {
			//sets err to false so zybo always sends an ACK back to GUI, confirming operation
			err = false;

			/*  ---Print Samples---  */
		} else if (cmd == FETCH_SAMPLES) {
			//acknowledge command before returning samples
			xil_printf("%cACK%c", COMM_START_CHAR, COMM_STOP_CHAR);
			xil_printf("activeAdc: %d", ADC_XADC);
			switch (activeAdc) {
			case ADC_XADC:
				xadcProcessSamples();
				break;
			case ADC_SPI_EXTERNAL:
				ads7047_ProcessSamples();
				break;
			default:
				err = true;
				break;
			}

			/*  ---Start Sampling---  */
		} else if (cmd == START_SAMPLING) {
			//sending an additional dummy byte indicates that streaming mode should be used
			u8 useStreaming = 0;
//			if (payloadLength == 1) {
//				useStreaming = 1;
//			}

			switch (activeAdc) {
			case ADC_XADC:
				xadcEnableSampling(useStreaming);
				break;
			case ADC_SPI_EXTERNAL:
				ads7047_EnableSampling(useStreaming);
				break;
			default:
				err = true;
				break;
			}

			/*  ---Stop Sampling---  */
		} else if (cmd == STOP_SAMPLING) {
			switch (activeAdc) {
			case ADC_XADC:
				xadcDisableSampling();
				break;
			case ADC_SPI_EXTERNAL:
				ads7047_DisableSampling();
				break;
			default:
				err = true;
				break;
			}

			/*  ---Select DAC Operating Mode---  */
		} else if (cmd == DAC_MODE_SELECT) {
			//TODO: implement me once DAC has multiple operating modes

			/*  ---Set DAC Generation Repetitions Count---  */
		} else if (cmd == DAC_NUM_REPS_SET) {
			if (payloadLength < 4) {
				if (DEBUG)
					xil_printf(
							"Not enough bytes to represent num repetitions\r\n");

				err = true;
			} else {
				u32 num = (payload[0] << 24) | (payload[1] << 16)
						| (payload[2] << 8) | (payload[3]);

				dac80501_SetNumRepetitions(num);
			}

			/*  ---Set DAC Generation Rate (Sampling Rate)---  */
		} else if (cmd == DAC_GEN_RATE_SET) {
			if (payloadLength < 4) {
				if (DEBUG)
					xil_printf(
							"Not enough bytes to represent generation rate\r\n");

				err = true;
			} else {
				u32 rate = (payload[0] << 24) | (payload[1] << 16)
						| (payload[2] << 8) | (payload[3]);

				err = dac80501_SetGenerationRate(rate);
			}

			/*  ---Receive New Dataset Sent from PC---  */
		} else if (cmd == DAC_SEND_DATASET) {
			u32 dsSize = (payload[0] << 24) | (payload[1] << 16)
					| (payload[2] << 8) | (payload[3]);

			err = dac80501_ReceiveDataset(dsSize);

			/*  ---Start Waveform Generation---  */
		} else if (cmd == START_GENERATION) {
			dac80501_EnableGeneration();

			/*  ---Stop Waveform Generation---  */
		} else if (cmd == STOP_GENERATION) {
			dac80501_DisableGeneration();

			/*  ---Ball & Beam Controller---  */
		} else if (cmd == START_CONTROLLER) {
			ballbeamStart();

			/*  ---Unsupported Command---  */
		} else {
			err = true;
		}
	}

	return err;
}

/**
 * Exposes UART receive command to libraries without need for global UART pointer.
 */
u32 commUartRecv(u8 *bufferPtr, u32 numBytes) {
	return XUartPs_Recv(&UART1, bufferPtr, numBytes);
}

/**
 * Exposes UART send command to libraries without need for global UART pointer.
 */
u32 commUartSend(u8 *bufferPtr, u32 numBytes) {
	return XUartPs_Send(&UART1, bufferPtr, numBytes);
}

/**
 * Exposes UART isTransmitFull command to libraries without need for global UART pointer.
 */
u32 commUartIsTransmitFull(void) {
	return XUartPs_IsTransmitFull(UART1.Config.BaseAddress);
}

/**
 * Exposes blocking UART receive command to libraries without need for global UART pointer.
 */
u32 commUartWaitReceive(u8 *bufferPtr, char endChar1, char endChar2) {
	u32 byteCount = 0;

	while (bufferPtr[byteCount - 1] != endChar1
			&& bufferPtr[byteCount - 1] != endChar2) {
		byteCount += commUartRecv(bufferPtr, 1);
	}

	return byteCount;
}

XUartPs* commGetUartPtr() {
	return &UART1;
}
