#define RPC_MESSAGE_DAC_ACK					"ACK"
#define RPC_MESSAGE_DAC_STOP				"STOP"

#define RPC_MESSAGE_XADC_SET_SAMPLE_RATE 	"xadcSetSampleRate"
#define RPC_MESSAGE_ADS_SET_SAMPLE_RATE 	"ads7047_SetSampleRate"
#define RPC_MESSAGE_MUTED_SET_INPUT_PINS 	"muxSetInputPins"
#define RPC_MESSAGE_SET_ACTIVE_FILTER		"muxSetActiveFilter"
#define RPC_MESSAGE_TUNE_FILTER				"tuneFilter"
#define RPC_MESSAGE_XADC_PROCESS_SAMPLES	"xadcProcessSamples"
#define RPC_MESSAGE_ADS_PROCESS_SAMPLES		"ads7047_ProcessSamples"
#define RPC_MESSAGE_XADC_ENABLE_SAMPLING	"xadcEnableSampling"
#define RPC_MESSAGE_ADS_ENABLE_SAMPLING		"ads7047_EnableSampling"
#define RPC_MESSAGE_XADC_DISABLE_SAMPLING	"xadcDisableSampling"
#define RPC_MESSAGE_DAC_SET_NUM_REPETITIONS "dac80501_SetNumRepetitions"
#define RPC_MESSAGE_DAC_SET_GEN_RATE		"dac80501_SetGenerationRate"
#define RPC_MESSAGE_DAC_RECEIVE_DATASET		"dac80501_ReceiveDataset"
#define RPC_MESSAGE_DAC_ENABLE_GENERATION	"dac80501_EnableGeneration"
#define RPC_MESSAGE_DAC_DISABLE_GENERATION	"dac80501_DisableGeneration"
#define RPC_MESSAGE_DAC_BALL_BEAM_START		"ballbeamStart"

#define PAYLOAD_MESSAGE_LEN 32
#define PAYLOAD_DATA_LEN 64
struct _payload {
	char message[PAYLOAD_MESSAGE_LEN];
	int data_len;
	int data[PAYLOAD_DATA_LEN];
};

#define RPMSG_HEADER_LEN 16

#define MAX_RPMSG_BUFF_SIZE (512 - RPMSG_HEADER_LEN)
#define PAYLOAD_MIN_SIZE	1
#define PAYLOAD_MAX_SIZE	(MAX_RPMSG_BUFF_SIZE - 24)
#define NUM_PAYLOADS		(PAYLOAD_MAX_SIZE/PAYLOAD_MIN_SIZE)

#define RPMSG_BUS_SYS "/sys/bus/rpmsg"

int rpc_setup();
int rpc_send_message(char message[], int data[], int data_len);
int rpc_recieve_message();
void rpc_teardown();
