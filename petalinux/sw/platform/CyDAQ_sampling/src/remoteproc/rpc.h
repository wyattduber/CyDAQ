#define RPMSG_SERVICE_NAME         "rpmsg-openamp-demo-channel" //TODO change

#define RPC_MESSAGE_DAC_ACK					100
#define RPC_MESSAGE_DAC_STOP				101

//#define RPC_MESSAGE_XADC_SET_SAMPLE_RATE 	"xadcSetSampleRate"
//#define RPC_MESSAGE_ADS_SET_SAMPLE_RATE 	"ads7047_SetSampleRate"
//#define RPC_MESSAGE_MUTED_SET_INPUT_PINS 	"muxSetInputPins"
//#define RPC_MESSAGE_SET_ACTIVE_FILTER		"muxSetActiveFilter"
//#define RPC_MESSAGE_TUNE_FILTER				"tuneFilter"
//#define RPC_MESSAGE_XADC_PROCESS_SAMPLES	"xadcProcessSamples"
//#define RPC_MESSAGE_ADS_PROCESS_SAMPLES		"ads7047_ProcessSamples"
//#define RPC_MESSAGE_XADC_ENABLE_SAMPLING	"xadcEnableSampling"
//#define RPC_MESSAGE_ADS_ENABLE_SAMPLING		"ads7047_EnableSampling"
//#define RPC_MESSAGE_XADC_DISABLE_SAMPLING	"xadcDisableSampling"
//#define RPC_MESSAGE_DAC_SET_NUM_REPETITIONS "dac80501_SetNumRepetitions"
//#define RPC_MESSAGE_DAC_SET_GEN_RATE		"dac80501_SetGenerationRate"
//#define RPC_MESSAGE_DAC_RECEIVE_DATASET		"dac80501_ReceiveDataset"
//#define RPC_MESSAGE_DAC_ENABLE_GENERATION	"dac80501_EnableGeneration"
//#define RPC_MESSAGE_DAC_DISABLE_GENERATION	"dac80501_DisableGeneration"
//#define RPC_MESSAGE_DAC_BALL_BEAM_START		"ballbeamStart"

//debug mode
#define DEBUG 1

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
#define RPC_MESSAGE_MUTED_SET_INPUT_PINS	8
#define RPC_MESSAGE_SET_ACTIVE_FILTER		9
#define RPC_MESSAGE_TUNE_FILTER				10

//DAC mode function calls
#define RPC_MESSAGE_DAC_SET_NUM_REPETITIONS 11
#define RPC_MESSAGE_DAC_SET_GEN_RATE		12
#define RPC_MESSAGE_DAC_RECEIVE_DATASET		13
#define RPC_MESSAGE_DAC_ENABLE_GENERATION	14
#define RPC_MESSAGE_DAC_DISABLE_GENERATION	15
#define RPC_MESSAGE_DAC_BALL_BEAM_START		16

//Message type from comm
#define COMM_COMMAND_MSG 0

//number message type
#define MSG_TYPE_INVALID -1
#define MSG_TYPE_COMMAND 0


//Payload
#define PAYLOAD_DATA_LEN 64
struct _payload {
	int message;
	int data_len;
	int data[PAYLOAD_DATA_LEN];
};
#define PAYLOAD_TOTAL_LEN sizeof(int) + sizeof(int) + PAYLOAD_DATA_LEN * sizeof(int)

int rpc_setup();
int rpc_tear_down();
int rpc_listen();
