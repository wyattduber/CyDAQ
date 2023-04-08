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
		printf("Error opening serial port");
		return XST_FAILURE;
	}

    struct termios tty;
    memset (&tty, 0, sizeof tty);
    if ( tcgetattr ( serial_port, &tty ) != 0 ) {
       printf("Error getting serial attributes");
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
       printf("Error setting serial attributes");
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

	if ((char) buffer[0] != COMM_START_CHAR
			|| (char) buffer[bufSize - 1] != COMM_STOP_CHAR || bufSize <= 2) {
		//command structure was invalid
		if (DEBUG)
			printf("Command structure was invalid\n");
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
			printf("CMD: %u, payloadLen: %d\n", cmd, payloadLength);

		/*	---Set XADC and external ADC Sample Rates---  */
		if (cmd == SAMPLE_RATE_SET) {
			if (payloadLength < COMM_SAMPLE_RATE_SIZE) {
				if (DEBUG)
					printf("Error, not enough bytes to represent sample rate\n");

				err = true;
			} else {
				u32 rate = (payload[0] << 24) | (payload[1] << 16)
						| (payload[2] << 8) | (payload[3]);
				printf("Got sample rate set of: %d\r\n", rate);
				char message[16] = "xadcSetSR";
				int data[16] = {rate};
				rpc_send_message(message, data, 1);
//				xadcSetSampleRate(rate); //TODO
//				ads7047_SetSampleRate(rate); //TODO
			}

			/*  ---Select Input Source---  */
		} else if (cmd == INPUT_SELECT) {
			if (payloadLength == 0) {
				if (DEBUG)
					printf("Error, payload length too small\n");

				err = true;
			} else {
//				status = muxSetInputPins(payload[0]); //TODO
				if (status > 0) {
					err = true;
				}
			}

			/*  ---Select Active Filter---  */
		} else if (cmd == FILTER_SELECT) {
			if (payloadLength < 1) {
				if (DEBUG)
					printf("No filter param given to set\n");

				err = true;
			} else {
//				err = muxSetActiveFilter(payload[0]); //TODO
			}

			/*  ---Set Filter Corner Frequencies---  */
		} else if (cmd == CORNER_FREQ_SET) {
			if (payloadLength < 4) {
				if (DEBUG)
					printf("err in filter tune function");

				err = true;
			} else {
				//each frequency should be sent as two bytes each
				FILTER_FREQ_TYPE lower = ((payload[0] << 8) & 0xFF00)
						+ payload[1];
				FILTER_FREQ_TYPE upper = ((payload[2] << 8) & 0xFF00)
						+ payload[3];

				//tune filter
//				err = tuneFilter(50, lower, upper); //TODO
			}

			/*  ---Select between XADC and external SPI ADC---  */
		} else if (cmd == ADC_SELECT) {
			if (payloadLength != 1) {
				if (DEBUG)
					printf("Incorrect formatting in ADC select command");

				err = true;
			} else {
				u8 adcSel = payload[0];

				if (adcSel >= NUM_ADCS) {
					if (DEBUG)
						printf("Invalid ADC selection");

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
			respond_ack(serial_port);

			switch (activeAdc) {
			case ADC_XADC:
//				xadcProcessSamples(); //TODO
				break;
			case ADC_SPI_EXTERNAL:
//				ads7047_ProcessSamples(); //TODO
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
//				xadcEnableSampling(useStreaming); //TODO
				break;
			case ADC_SPI_EXTERNAL:
//				ads7047_EnableSampling(useStreaming); //TODO
				break;
			default:
				err = true;
				break;
			}

			/*  ---Stop Sampling---  */
		} else if (cmd == STOP_SAMPLING) {
			switch (activeAdc) {
			case ADC_XADC:
//				xadcDisableSampling(); //TODO
				break;
			case ADC_SPI_EXTERNAL:
//				ads7047_DisableSampling(); //TODO
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
					printf("Not enough bytes to represent num repetitions\r\n");

				err = true;
			} else {
				u32 num = (payload[0] << 24) | (payload[1] << 16)
						| (payload[2] << 8) | (payload[3]);

//				dac80501_SetNumRepetitions(num); //TODO
			}

			/*  ---Set DAC Generation Rate (Sampling Rate)---  */
		} else if (cmd == DAC_GEN_RATE_SET) {
			if (payloadLength < 4) {
				if (DEBUG)
					printf("Not enough bytes to represent generation rate\r\n");

				err = true;
			} else {
				u32 rate = (payload[0] << 24) | (payload[1] << 16)
						| (payload[2] << 8) | (payload[3]);

//				err = dac80501_SetGenerationRate(rate); //TODO
			}

			/*  ---Receive New Dataset Sent from PC---  */
		} else if (cmd == DAC_SEND_DATASET) {
			u32 dsSize = (payload[0] << 24) | (payload[1] << 16)
					| (payload[2] << 8) | (payload[3]);

//			err = dac80501_ReceiveDataset(dsSize); //TODO

			/*  ---Start Waveform Generation---  */
		} else if (cmd == START_GENERATION) {
//			dac80501_EnableGeneration(); //TODO

			/*  ---Stop Waveform Generation---  */
		} else if (cmd == STOP_GENERATION) {
//			dac80501_DisableGeneration(); //TODO

			/*  ---Ball & Beam Controller---  */
		} else if (cmd == START_CONTROLLER) {
//			ballbeamStart(); //TODO

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
		printf("Responding ACK\n");
	char * message = "@ACK!";
	write(serial_port, message, 6);
}

void respond_err(int serial_port){
	if(DEBUG)
		printf("Responding ERR\n");
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
