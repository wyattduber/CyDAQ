/*
 *
 */
#include "comm.h"
#include "rpc.h"

bool samplingEnabled = false;
bool streamingEnabled = false;
bool SpiInitStatus = false;
filters_e activeFilter = FILTER_PASSTHROUGH;
adcs_e activeAdc = ADC_XADC;

SAMPLE_TYPE SampleBuffer[SAMPLE_BUFFER_SIZE];
volatile u32 SampleCount = 0;

static int serial_port;
static u8 receiveBuffer[TEST_BUFFER_SIZE];	// Buffer for receiving UART data

int TotalErrorCount;

//TODO most likely not needed
volatile int TotalReceivedCount;// These counters are used to determine when the
volatile int TotalSentCount;	//   entire buffer has been sent and received.

/**
 * Initializes UART
 */
int commInit() {
    serial_port = open("/dev/ttyGS0", O_RDWR | O_NOCTTY);
    if(serial_port < 0){
		printf("COMM> Error opening serial port");
		return XST_FAILURE;
	}

    struct termios tty;
    memset (&tty, 0, sizeof tty);
    if ( tcgetattr ( serial_port, &tty ) != 0 ) {
       printf("COMM> Error getting serial attributes");
       return XST_FAILURE;
    }

    //Set Baud Rate
    cfsetospeed (&tty, (speed_t)B9600);
    cfsetispeed (&tty, (speed_t)B9600);

    //Setting other Port Stuff
    tty.c_cflag     &=  ~PARENB;            // Make 8n1
    tty.c_cflag     &=  ~CSTOPB;
    tty.c_cflag     &=  ~CSIZE;
    tty.c_cflag     |=  CS8;

    tty.c_cflag     &=  ~CRTSCTS;           // no flow control
    tty.c_cc[VMIN]   =  1;                  // read doesn't block
    tty.c_cc[VTIME]  =  5;                  // 0.5 seconds read timeout
    tty.c_cflag     |=  CREAD | CLOCAL;     // turn on READ & ignore ctrl lines

    //Make raw
    cfmakeraw(&tty);

    //Flush Port, then applies attributes
    tcflush( serial_port, TCIFLUSH );
    if ( tcsetattr ( serial_port, TCSANOW, &tty ) != 0) {
       printf("COMM> Error setting serial attributes");
       return XST_FAILURE;
    }

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
		while (receiveBuffer[bytesReceived - 1] != COMM_STOP_CHAR && bytesReceived < 7) {
			bytesReceived += read(serial_port, &receiveBuffer[bytesReceived], 1);
		}

		//stop sampling to config device
		//TODO: instead, save configuration and apply once sampling is done
		if (samplingEnabled == true) {
			switch (activeAdc) {
			case ADC_XADC:
//				xadcDisableSampling(); //TODO
				break;
			case ADC_SPI_EXTERNAL:
//				ads7047_DisableSampling(); //TODO
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
			respond_err(serial_port);
		} else {
			respond_ack(serial_port);
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

	int rpc_data[PAYLOAD_DATA_LEN] = {};

	if ((char) buffer[0] != COMM_START_CHAR
			|| (char) buffer[bufSize - 1] != COMM_STOP_CHAR || bufSize <= 2) {
		//command structure was invalid
		if (DEBUG)
			printf("COMM> Command structure was invalid\r\n");
		err = true;
	} else {
		//capture command byte
		cmd = buffer[COMM_NUM_START_CHARS];

		//payload start point is start chars + cmd_length
		payload = &buffer[COMM_NUM_START_CHARS + COMM_CMD_SIZE];

		//payload length is buffer size - start/stop chars - cmd_length
		u8 payloadLength = bufSize - COMM_NUM_START_CHARS - COMM_NUM_STOP_CHARS
				- COMM_CMD_SIZE;

//		if (DEBUG)
//			printf("CMD: %u, payloadLen: %d\n", cmd, payloadLength);

		/*	---Set XADC and external ADC Sample Rates---  */
		if (cmd == SAMPLE_RATE_SET) {
			if (payloadLength < COMM_SAMPLE_RATE_SIZE) {
				if (DEBUG)
					printf("COMM> ERROR: not enough bytes to represent sample rate\r\n");

				err = true;
			} else {
				u32 rate = (payload[0] << 24) | (payload[1] << 16)
						| (payload[2] << 8) | (payload[3]);
				printf("COMM> Got sample rate set of: %d\r\n", rate);

				rpc_data[0] = RPC_MESSAGE_XADC_SET_SAMPLE_RATE;
				rpc_data[1] = (int)rate;
				rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
				if(rpc_recieve_ack() != 0){
					err = true;
				}

				rpc_data[0] = RPC_MESSAGE_ADS_SET_SAMPLE_RATE;
				rpc_data[1] = (int)rate;
				rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
				if(rpc_recieve_ack() != 0){
					err = true;
				}

//				xadcSetSampleRate(rate); //TODO
//				ads7047_SetSampleRate(rate); //TODO
			}

			/*  ---Select Input Source---  */
		} else if (cmd == INPUT_SELECT) {
			if (payloadLength == 0) {
				if (DEBUG)
					printf("COMM> Error, payload length too small\r\n");

				err = true;
			} else {
				printf("COMM> setting input select!\r\n");
				rpc_data[0] = RPC_MESSAGE_MUX_SET_INPUT_PINS;
				rpc_data[1] = (int)payload[0];
				rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
				if(rpc_recieve_ack() != 0){
					err = true;
				}
//				status = muxSetInputPins(payload[0]); //TODO
//				if (status > 0) {
//					err = true;
//				}
			}

			/*  ---Select Active Filter---  */
		} else if (cmd == FILTER_SELECT) {
			if (payloadLength < 1) {
				if (DEBUG)
					printf("COMM> No filter param given to set\r\n");

				err = true;
			} else {
				printf("COMM> Setting filter select!\r\n");
				rpc_data[0] = RPC_MESSAGE_SET_ACTIVE_FILTER;
				rpc_data[1] = (int)payload[0];
				rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
				if(rpc_recieve_ack() != 0){
					err = true;
				}
//				err = muxSetActiveFilter(payload[0]); //TODO
			}

			/*  ---Set Filter Corner Frequencies---  */
		} else if (cmd == CORNER_FREQ_SET) {
			if (payloadLength < 4) {
				if (DEBUG)
					printf("COMM> err in filter tune function\r\n");

				err = true;
			} else {
				//each frequency should be sent as two bytes each
				FILTER_FREQ_TYPE lower = ((payload[0] << 8) & 0xFF00)
						+ payload[1];
				FILTER_FREQ_TYPE upper = ((payload[2] << 8) & 0xFF00)
						+ payload[3];

				printf("COMM> setting corner freq!\r\n");
				rpc_data[0] = RPC_MESSAGE_TUNE_FILTER;
				rpc_data[1] = (int)payload[0];
				rpc_data[2] = (int)lower;
				rpc_data[3] = (int)upper;
				rpc_send_message(COMM_COMMAND_MSG, rpc_data, 4);
				if(rpc_recieve_ack() != 0){
					err = true;
				}

				//tune filter
//				err = tuneFilter(50, lower, upper); //TODO
			}

			/*  ---Select between XADC and external SPI ADC---  */
		} else if (cmd == ADC_SELECT) {
			if (payloadLength != 1) {
				if (DEBUG)
					printf("COMM> Incorrect formatting in ADC select command\r\n");

				err = true;
			} else {
				u8 adcSel = payload[0];

				if (adcSel >= NUM_ADCS) {
					if (DEBUG)
						printf("COMM> Invalid ADC selection\r\n");

					err = true;
				} else {
					activeAdc = adcSel;
				}
			}

			/*  ---Respond to Ping---  */
		} else if (cmd == PING) {
			//sets err to false so zybo always sends an ACK back to GUI, confirming operation
			printf("COMM> NEVER GONNA GIVE YOU UP!!!\r\n");
			err = false;

			/*  ---Print Samples---  */
		} else if (cmd == FETCH_SAMPLES) {
			//acknowledge command before returning samples
			respond_ack(serial_port);

			switch (activeAdc) {
			case ADC_XADC:
//				xadcProcessSamples();
				break;
			case ADC_SPI_EXTERNAL:
//				ads7047_ProcessSamples();
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
//				xadcEnableSampling(useStreaming);
				break;
			case ADC_SPI_EXTERNAL:
//				ads7047_EnableSampling(useStreaming);
				break;
			default:
				err = true;
				break;
			}

			/*  ---Stop Sampling---  */
		} else if (cmd == STOP_SAMPLING) {
			switch (activeAdc) {
			case ADC_XADC:
//				xadcDisableSampling();
				break;
			case ADC_SPI_EXTERNAL:
//				ads7047_DisableSampling();
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
					printf("COMM> Not enough bytes to represent num repetitions\r\n");

				err = true;
			} else {
				u32 num = (payload[0] << 24) | (payload[1] << 16)
						| (payload[2] << 8) | (payload[3]);

//				dac80501_SetNumRepetitions(num);
				rpc_data[0] = RPC_MESSAGE_DAC_SET_NUM_REPETITIONS;
				rpc_data[1] = num;
				rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
			}

			/*  ---Set DAC Generation Rate (Sampling Rate)---  */
		} else if (cmd == DAC_GEN_RATE_SET) {
			if (payloadLength < 4) {
				if (DEBUG)
					printf("COMM> Not enough bytes to represent generation rate\r\n");

				err = true;
			} else {
				u32 rate = (payload[0] << 24) | (payload[1] << 16)
						| (payload[2] << 8) | (payload[3]);

//				err = dac80501_SetGenerationRate(rate);
				rpc_data[0] = RPC_MESSAGE_DAC_SET_GEN_RATE;
				rpc_data[1] = rate;
				rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
			}

			/*  ---Receive New Dataset Sent from PC---  */
		} else if (cmd == DAC_SEND_DATASET) {
			u32 dsSize = (payload[0] << 24) | (payload[1] << 16)
					| (payload[2] << 8) | (payload[3]);

//			err = dac80501_ReceiveDataset(dsSize);
			rpc_data[0] = RPC_MESSAGE_DAC_RECEIVE_DATASET;
			rpc_data[1] = dsSize;
			rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);

			/*  ---Start Waveform Generation---  */
		} else if (cmd == START_GENERATION) {
//			dac80501_EnableGeneration();
			rpc_data[0] = RPC_MESSAGE_DAC_ENABLE_GENERATION;
			rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
			/*  ---Stop Waveform Generation---  */
		} else if (cmd == STOP_GENERATION) {
//			dac80501_DisableGeneration();
			rpc_data[0] = RPC_MESSAGE_DAC_DISABLE_GENERATION;
			rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);

			/*  ---Ball & Beam Controller---  */
		} else if (cmd == START_CONTROLLER) {
//			ballbeamStart(); //TODO
			rpc_data[0] = RPC_MESSAGE_DAC_BALL_BEAM_START;
			rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
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
	return read(serial_port, bufferPtr, numBytes);
}

/**
 * Exposes UART send command to libraries without need for global UART pointer.
 */
u32 commUartSend(u8 *bufferPtr, u32 numBytes) {
	return write(serial_port, bufferPtr, numBytes);
}

/**
 * Exposes UART isTransmitFull command to libraries without need for global UART pointer.
 */
//u32 commUartIsTransmitFull(void) {
//	return XUartPs_IsTransmitFull(UART1.Config.BaseAddress);
//}

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

//XUartPs* commGetUartPtr() {
//	return &UART1;
//}

void respond_ack(int serial_port){
	if(DEBUG)
		printf("COMM> Responding ACK\n");
	char * message = "@ACK!";
	write(serial_port, message, 6);
}

void respond_err(int serial_port){
	if(DEBUG)
		printf("COMM> Responding ERR\n");
	char * message = "@ERR!";
	write(serial_port, message, 6);
}

//TODO delete when done
void commReadTest(){
	int n = 0, spot = 0;
	char buf = '\0';

	char response[1024];
	memset(response, '\0', sizeof response);

	do {
	    n = read( serial_port, &buf, 1 );
	    sprintf( &response[spot], "%c", buf );
	    spot += n;
	} while( buf != '\n' && n > 0);

	if (n < 0) {
	    printf("error reading\n");
	}
	else if (n == 0) {
	    printf("read nothing\n");
	}
	else {
	    printf("Response: %s\n", response);
	}
}
