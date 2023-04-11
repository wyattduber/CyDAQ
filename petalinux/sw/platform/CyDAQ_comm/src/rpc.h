#define RPC_MESSAGE_DAC_ACK					100
#define RPC_MESSAGE_DAC_STOP				101

//XADC function calls
#define RPC_MESSAGE_XADC_SET_SAMPLE_RATE 	0
#define RPC_MESSAGE_XADC_PROCESS_SAMPLES 	1
#define RPC_MESSAGE_XADC_ENABLE_SAMPLING 	2
#define RPC_MESSAGE_XADC_DISABLE_SAMPLING	3

//ADS function calls
#define RPC_MESSAGE_ADS_SET_SAMPLE_RATE		4
#define RPC_MESSAGE_ADS_PROCESS_SAMPLES 	5
#define RPC_MESSAGE_ADS_ENABLE_SAMPLING		6
#define RPC_MESSAGE_ADS_DISABLE_SAMPLING	7

//filter function calls
#define RPC_MESSAGE_MUX_SET_INPUT_PINS		8
#define RPC_MESSAGE_SET_ACTIVE_FILTER		9
#define RPC_MESSAGE_TUNE_FILTER				10

//DAC mode function calls
#define RPC_MESSAGE_DAC_SET_NUM_REPETITIONS 11
#define RPC_MESSAGE_DAC_SET_GEN_RATE		12
#define RPC_MESSAGE_DAC_RECEIVE_DATASET		13
#define RPC_MESSAGE_DAC_ENABLE_GENERATION	14
#define RPC_MESSAGE_DAC_DISABLE_GENERATION	15
#define RPC_MESSAGE_DAC_BALL_BEAM_START		16

#define PAYLOAD_DATA_LEN 64
struct _payload {
	int message;
	int data_len;
	int data[PAYLOAD_DATA_LEN];
};
#define PAYLOAD_TOTAL_LEN sizeof(int) + sizeof(int) + PAYLOAD_DATA_LEN * sizeof(int)


#define RPMSG_HEADER_LEN 16

#define MAX_RPMSG_BUFF_SIZE (512 - RPMSG_HEADER_LEN)
#define PAYLOAD_MIN_SIZE	1
#define PAYLOAD_MAX_SIZE	(MAX_RPMSG_BUFF_SIZE - 24)
#define NUM_PAYLOADS		(PAYLOAD_MAX_SIZE/PAYLOAD_MIN_SIZE)

#define RPMSG_BUS_SYS "/sys/bus/rpmsg"

int rpc_setup();
int rpc_send_message(int message, int data[], int data_len);
int rpc_recieve_message();
void rpc_teardown();
int rpc_recieve_ack();
void rpc_listen_for_sampling_data();
