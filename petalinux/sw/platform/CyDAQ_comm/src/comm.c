/*
 *
 */
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>

#include "comm.h"
#include "rpc.h"

bool samplingEnabled = false;
bool streamingEnabled = false;
bool SpiInitStatus = false;
filters_e activeFilter = FILTER_PASSTHROUGH;
adcs_e activeAdc = ADC_XADC;

volatile u32 SampleCount = 0;

static int serial_port;
static u8 receiveBuffer[TEST_BUFFER_SIZE];	// Buffer for receiving UART data

/*
 * Opens a serial connection to the PC.
 * Returns the FD id
 */
int open_serial_port(){
	return open("/dev/ttyGS0", O_RDWR | O_NOCTTY);
}

/**
 * Initializes UART
 */
int commInit() {
    serial_port = open_serial_port();
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
 * Processes commands received over UART. Blocking.
 */
void commRXTask() {
	//number of bytes received over UART
	u16 bytesReceived = 0;

	//for error handling
	bool err = false;

	while (1) {
		//idle until a complete command is received
		while (receiveBuffer[bytesReceived - 1] != COMM_STOP_CHAR && bytesReceived < 7) {
			int len = read(serial_port, &receiveBuffer[bytesReceived], 1);
			if(len == 0){
				//serial must be unplugged, as the above read is blocking while connected
				printf("COMM> detected serial unplugged, re-opening device\r\n");
				close(serial_port);
				serial_port = open_serial_port();
				continue;
			}
			bytesReceived += len;
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

/*
 * Attempt to clear the cache on the shared memory region, so the
 * next time it's read it's actually what the sampling core wrote
 * to it.
 *
 * This isn't a great solution, in fact it could be argued that it's
 * a stupid one, but I can't find a better way around this. No matter
 * what I try, Petalinux is reading sample data that just isn't what
 * was just written to memory. Most likely a cache coherence problem.
 */
void clearCache(){
	int fd = open("/dev/mem", O_RDONLY | O_SYNC);
	if (fd < 0) {
		perror("COMM> open");
		return;
	}

	size_t size = SAMPLE_BUFFER_SIZE * sizeof(u16);
	volatile u16 *ptr = mmap(NULL, size, PROT_READ, MAP_SHARED, fd, SAMPLE_BUFFER_ADDRESS);
	if (ptr == MAP_FAILED) {
		perror("COMM> mmap");
		return;
	}

	FILE *fp = fopen("/tmp/junk.bin", "wb"); //TODO make constant
	if(fp == NULL){
		perror("COMM> Failed to open junk.bin file!\r\n");
		return;
	}

	size_t samples_written = fwrite(ptr, sizeof(u16), SAMPLE_BUFFER_SIZE, fp);
	if (samples_written != SAMPLE_BUFFER_SIZE) {
		perror("Failed to write data");
		fclose(fp);
		return;
	}
	fflush(fp);
	fclose(fp);

	if (munmap(ptr, size) == -1) {
		perror("COMM> munmap");
		return;
	}

	close(fd);
}

/*
 * Writes the samples stored in shared memory to the file system.
 * This allows the PC connected over Ethernet to grab the file via SCP
 * Returns true if error, false otherwise
 */
bool writeSamplesToFile(){
	int rpc_data[PAYLOAD_DATA_LEN] = {};
	volatile u16 *ptr;

	int fd = open("/dev/mem", O_RDONLY | O_SYNC);
	if (fd < 0) {
		perror("COMM> open");
		return true;
	}

	rpc_data[0] = RPC_MESSAGE_GET_SAMPLE_COUNT;
	rpc_send_message(MSG_TYPE_REQUEST, rpc_data, 1);
	int count = rpc_recieve_int_response();
	if(DEBUG)
		printf("COMM> SAMP reported %d samples in buffer\r\n", count);

	clearCache();

	size_t size = sizeof(u16) * count;
	ptr = mmap(NULL, size, PROT_READ, MAP_SHARED, fd, SAMPLE_BUFFER_ADDRESS);
	if (ptr == MAP_FAILED) {
		perror("COMM> mmap");
		return true;
	}

	FILE *fp = fopen("/tmp/sample_data.bin", "wb");
	if(fp == NULL){
		perror("COMM> Failed to open sample_data.bin file!\r\n");
		return true;
	}
	size_t samples_written = fwrite(ptr, sizeof(u16), count, fp);;
	printf("COMM> Wrote %d samples to file\r\n", samples_written);
    if (samples_written != count) {
        perror("Failed to write data");
        fclose(fp);
        return true;
    }
    fflush(fp);
    fclose(fp);

	if (munmap(ptr, size) == -1) {
		perror("COMM> munmap");
		return true;
	}

	close(fd);
	return false;
}

/*
 * Writes samples stored in shared memory to PC via COMM
 * Returns true if error, false otherwise
 */
bool writeSamplesToComm(){
	int rpc_data[PAYLOAD_DATA_LEN] = {};
	volatile u16 *ptr;

	int fd = open("/dev/mem", O_RDWR | O_SYNC);
	if (fd < 0) {
		perror("COMM> open");
		return true;
	}

	rpc_data[0] = RPC_MESSAGE_GET_SAMPLE_COUNT;
	rpc_send_message(MSG_TYPE_REQUEST, rpc_data, 1);
	int count = rpc_recieve_int_response();
	if(DEBUG)
		printf("COMM> SAMP reported %d samples in buffer\r\n", count);

	clearCache();

	size_t size = sizeof(u16) * count;
	off_t offset = 0x38800000; // starting point TODO make constant
	ptr = (u16 *) mmap(NULL, size, PROT_READ, MAP_SHARED, fd, offset);
	if (ptr == MAP_FAILED) {
		perror("COMM> mmap");
		return true;
	}

	//send data to remote pc, starting with @ and ending with !
	char* test1 = "@";
	commUartSend(test1, 1);
	commUartSend(ptr, size); //send the whole buffer over uart to the host pc. Hope they are ready for it!
	usleep(100);
	char* test2 = "00000000"; //had it in the old code, so included it. Can probably remove
	commUartSend(test2, 8);
	usleep(50000);

	if(DEBUG)
		printf("COMM> done writing samples\r\n");

	if (munmap(ptr, size) == -1) {
		perror("COMM> munmap");
		return true;
	}

	close(fd);
	return false;
}

/*
 * Sends the necessary message(s) to the remote cpu to stop sampling
 * returns true if an error occurred, false otherwise
 */
bool stopSampling(){
	samplingEnabled = false;
	int rpc_data[PAYLOAD_DATA_LEN] = {};
	switch (activeAdc) {
	case ADC_XADC:
		if(DEBUG)
			printf("COMM> disabling xadc sampling\r\n");
		rpc_data[0] = RPC_MESSAGE_XADC_DISABLE_SAMPLING;
		rpc_data[1] = 0; //useStreaming=false - not implemented
		rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
		if(rpc_recieve_ack() != 0){
			if(DEBUG)
				printf("COMM> disabling xadc sampling failed!\r\n");
			return true;
		}
		return false;
	case ADC_SPI_EXTERNAL:
		if(DEBUG)
			printf("COMM> disabling ads7047 sampling\r\n");
		rpc_data[0] = RPC_MESSAGE_ADS_DISABLE_SAMPLING;
		rpc_data[1] = 0; //useStreaming - not implemented
		rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
		if(rpc_recieve_ack() != 0){
			if(DEBUG)
				printf("COMM> disabling ads7047 sampling failed!\r\n");
			return true;
		}
		return false;
	default:
		printf("COMM> active adc set incorrectly\r\n");
		return true;
	}
}

/**
 * Processes the packet received from the UART.
 */
bool commProcessPacket(u8 *buffer, u16 bufSize) {
	bool err = false;
	u8 cmd = 0;
	u8* payload = NULL;

	int rpc_data[PAYLOAD_DATA_LEN] = {};

	if ((char) buffer[0] != COMM_START_CHAR || (char) buffer[bufSize - 1] != COMM_STOP_CHAR || bufSize <= 2) {
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

		if (DEBUG)
			printf("COMM> CMD: %u, payloadLen: %d\n", cmd, payloadLength);

		/*  ---Respond to Ping. Should be the only command that works while sampling---  */
		if (cmd == PING) {
			//sets err to false so zybo always sends an ACK back to GUI, confirming operation
			err = false;
			return err;
		}


//		if(samplingEnabled){
//			err = true;
//			return err;
//		}

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
					if(DEBUG)
						printf("COMM> XADC set sample rate failed!r\n");
					err = true;
				}

				rpc_data[0] = RPC_MESSAGE_ADS_SET_SAMPLE_RATE;
				rpc_data[1] = (int)rate;
				rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
				if(rpc_recieve_ack() != 0){
					if(DEBUG)
						printf("COMM> ADS set sample rate failed!r\n");
					err = true;
				}
			}

		/*  ---Select Input Source---  */
		} else if (cmd == INPUT_SELECT) {
			if (payloadLength == 0) {
				if (DEBUG)
					printf("COMM> Error, payload length too small\r\n");
				err = true;
			} else {
				printf("COMM> setting input select to number %d\r\n", (int)payload[0]);
				rpc_data[0] = RPC_MESSAGE_MUX_SET_INPUT_PINS;
				rpc_data[1] = (int)payload[0];
				rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
				if(rpc_recieve_ack() != 0){
					if(DEBUG)
						printf("COMM> setting input failed!\r\n");
					err = true;
				}
			}

		/*  ---Select Active Filter---  */
		} else if (cmd == FILTER_SELECT) {
			if (payloadLength < 1) {
				if (DEBUG)
					printf("COMM> No filter param given to set\r\n");
				err = true;
			} else {
				printf("COMM> Setting filter select to filter number %d\r\n", (int)payload[0]);
				rpc_data[0] = RPC_MESSAGE_SET_ACTIVE_FILTER;
				rpc_data[1] = (int)payload[0];
				rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
				if(rpc_recieve_ack() != 0){
					if(DEBUG)
						printf("COMM> setting failed!\r\n");
					err = true;
				}
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
				if(DEBUG)
					printf("COMM> setting corner freq %d %d %d\r\n", (int)payload[0], (int)lower, (int)upper);
				rpc_data[0] = RPC_MESSAGE_TUNE_FILTER;
				rpc_data[1] = (int)payload[0];
				rpc_data[2] = (int)lower;
				rpc_data[3] = (int)upper;
				rpc_send_message(COMM_COMMAND_MSG, rpc_data, 4);
				if(rpc_recieve_ack() != 0){
					if (DEBUG)
						printf("COMM> err setting corner freq\r\n");
					err = true;
				}
			}

		/*  ---Select between XADC and external SPI ADC---  */
		} else if (cmd == ADC_SELECT) { //TODO not supported yet
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

		/*  ---Print Samples---  */
		} else if (cmd == FETCH_SAMPLES) {
			err = stopSampling();
			if(err){
				return err;
			}

			err = writeSamplesToComm();
			if(err){
				return err;
			}
			err = writeSamplesToFile();
			if(err){
				return err;
			}

		/*  ---Start Sampling---  */
		} else if (cmd == START_SAMPLING) {

			if(samplingEnabled){
				printf("COMM> Starting sampling when already enabled\r\n");
				err = true;
				return err;
			}

			samplingEnabled = true;

			switch (activeAdc) {
				case ADC_XADC:
					printf("COMM> enabling xadc sampling\r\n");
					rpc_data[0] = RPC_MESSAGE_XADC_ENABLE_SAMPLING;
					rpc_data[1] = 0; //useStreaming - not implemented
					rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
					if(rpc_recieve_ack() != 0){
						if(DEBUG)
							printf("COMM> enabling xadc sampling failed!\r\n");
						err = true;
					}
					break;
				case ADC_SPI_EXTERNAL:
					printf("COMM> enabling ads7047 sampling\r\n");
					rpc_data[0] = RPC_MESSAGE_ADS_ENABLE_SAMPLING;
					rpc_data[1] = 0; //useStreaming - not implemented
					rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
					if(rpc_recieve_ack() != 0){
						if(DEBUG)
							printf("COMM> enabling ads7047 sampling failed!\r\n");
						err = true;
					}
					break;
				default:
					err = true;
					break;
			}
		/* ---Stop Sampling--- */
		} else if (cmd == STOP_SAMPLING) {
			printf("COMM> stop sampling!\r\n");
			err = stopSampling(); //moved to separate function because it needs to also happen in fetch command
			if(err){
				return err;
			}
			err = writeSamplesToFile();
			if(err){
				return err;
			}
		/*  ---Select DAC Operating Mode---  */
		} else if (cmd == DAC_MODE_SELECT) { //TODO: implement me once DAC has multiple operating modes

		/*  ---Set DAC Generation Repetitions Count---  */
		} else if (cmd == DAC_NUM_REPS_SET) { //TODO not finished yet
			if (payloadLength < 4) {
				if (DEBUG)
					printf("COMM> Not enough bytes to represent num repetitions\r\n");

				err = true;
			} else {
				u32 num = (payload[0] << 24) | (payload[1] << 16)
						| (payload[2] << 8) | (payload[3]);

				rpc_data[0] = RPC_MESSAGE_DAC_SET_NUM_REPETITIONS;
				rpc_data[1] = num;
//				rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
			}

		/*  ---Set DAC Generation Rate (Sampling Rate)---  */
		} else if (cmd == DAC_GEN_RATE_SET) { //TODO not finished yet
			if (payloadLength < 4) {
				if (DEBUG)
					printf("COMM> Not enough bytes to represent generation rate\r\n");

				err = true;
			} else {
				u32 rate = (payload[0] << 24) | (payload[1] << 16)
						| (payload[2] << 8) | (payload[3]);

				rpc_data[0] = RPC_MESSAGE_DAC_SET_GEN_RATE;
				rpc_data[1] = rate;
//				rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
			}

		/*  ---Receive New Dataset Sent from PC---  */
		} else if (cmd == DAC_SEND_DATASET) { //TODO not finished yet
			u32 dsSize = (payload[0] << 24) | (payload[1] << 16)
					| (payload[2] << 8) | (payload[3]);

//			err = dac80501_ReceiveDataset(dsSize);
			rpc_data[0] = RPC_MESSAGE_DAC_RECEIVE_DATASET;
			rpc_data[1] = dsSize;
//			rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);

			/*  ---Start Waveform Generation---  */
		} else if (cmd == START_GENERATION) { //TODO not finished yet
			rpc_data[0] = RPC_MESSAGE_DAC_ENABLE_GENERATION;
//			rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
		} else if (cmd == STOP_GENERATION) { //TODO not finished yet
			rpc_data[0] = RPC_MESSAGE_DAC_DISABLE_GENERATION;
//			rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);

			/*  ---Ball & Beam Controller---  */
		} else if (cmd == START_CONTROLLER) { //TODO not finished yet
//			ballbeamStart(); //TODO
			rpc_data[0] = RPC_MESSAGE_DAC_BALL_BEAM_START;
//			rpc_send_message(COMM_COMMAND_MSG, rpc_data, 2);
			/*  ---Unsupported Command---  */
		} else {
			if(DEBUG)
				printf("COMM> Unknown command!\r\n");
			err = true;
		}
	}
	return err;
}

/**
 * Exposes UART send command to libraries without need for global UART pointer.
 */
u32 commUartSend(u8 *bufferPtr, u32 numBytes) {
	return write(serial_port, bufferPtr, numBytes);
}

void respond_ack(int serial_port){
	char * message = "@ACK!";
	write(serial_port, message, 6);
}

void respond_err(int serial_port){
	char * message = "@ERR!";
	write(serial_port, message, 6);
}

