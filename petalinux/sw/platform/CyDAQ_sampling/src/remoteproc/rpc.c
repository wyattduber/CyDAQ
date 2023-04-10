#include <stdio.h>
#include <openamp/open_amp.h>
#include <metal/alloc.h>

#include "platform_info.h"
#include "rpc.h"

#define LPRINTF(format, ...) xil_printf(format, ##__VA_ARGS__)
#define LPERROR(format, ...) LPRINTF("ERROR: " format, ##__VA_ARGS__)

#define VIRTIO_DEV_DEVICE 1UL
#define RPMSG_SERVICE_NAME         "rpmsg-openamp-demo-channel" //TODO change

static struct rpmsg_endpoint lept;
static int shutdown_req = 0;

#define MSG_LIMIT 100
#define SHUTDOWN_MSG	0xEF56A55A

struct _payload *send_payload;
struct _payload *receive_payload;

void rpc_print_payload(struct _payload* payload){
	xil_printf("== sampling> Payload ==\r\n");
	xil_printf("Message: %d\r\n", payload->message);
	xil_printf("Data: ");
	for(int i = 0; i < payload->data_len; i++){
		xil_printf("%d ", payload->data[i]);
	}
	xil_printf("\r\n");
	xil_printf("==================\r\n");
}

int rpc_send_message(struct rpmsg_endpoint *ept, int message, int data[], int data_len){
	xil_printf("sampling> rpc_send_message called with message: %d, data[0]:%d, data[1]:%d\r\n", message, data[0], data[1]);
	rpc_print_payload(send_payload);

	send_payload->message = message;

	//TODO zero out all other data?
	int b = data_len;
	if(data_len > PAYLOAD_DATA_LEN)
		data_len = PAYLOAD_DATA_LEN;
	send_payload->data_len = data_len;
	for(int i = 0; i < b; i++){
		send_payload->data[i] = data[i];
	}

	if (rpmsg_send(ept, send_payload, PAYLOAD_TOTAL_LEN) < 0) {
		xil_printf("send_ack failed\r\n");
	}else{
		xil_printf("send_ack success!\r\n");
	}

	return 0;
}

int send_ack(struct rpmsg_endpoint *ept){
	int data[PAYLOAD_DATA_LEN] = {RPC_MESSAGE_DAC_ACK};
	if (rpc_send_message(ept, MSG_TYPE_COMMAND, data, 1) < 0) {
		LPERROR("send_ack failed\n");
	}
	return 0;
}

int handle_message(struct _payload* payload){
	int message = payload->message;
	int* data = payload->data;
	int data_len = payload->data_len;
	int message_type = MSG_TYPE_INVALID;

	//check the message type
	switch(message){
		case COMM_COMMAND_MSG:
			message_type = MSG_TYPE_COMMAND;
			break;
		default:
			message_type = MSG_TYPE_INVALID;
			break;

	}
	if(DEBUG){
		LPRINTF("message received, type: %s, command: %d, data: %d\r\n", message,data[0],data[1]);
	}
	//command message handling
	if(message_type == MSG_TYPE_COMMAND){
		if(data[0] == RPC_MESSAGE_XADC_SET_SAMPLE_RATE){

			return xadcSetSampleRate(data[1]);

		}else if(data[0] == RPC_MESSAGE_XADC_PROCESS_SAMPLES){

			return xadcProcessSamples();

		}else if(data[0] == RPC_MESSAGE_XADC_ENABLE_SAMPLING){

			return xadcEnableSampling(data[1]);//0 = normal, 1 = stream

		}else if(data[0] == RPC_MESSAGE_XADC_DISABLE_SAMPLING){

			return xadcDisableSampling();

		}else if(data[0] == RPC_MESSAGE_ADS_SET_SAMPLE_RATE){

		}else if(data[0] == RPC_MESSAGE_ADS_PROCESS_SAMPLES){

			return ads7047_ProcessSamples();

		}else if(data[0] == RPC_MESSAGE_ADS_ENABLE_SAMPLING){

			return ads7047_EnableSampling(data[1]);//0 = normal, 1 = stream

		}else if(data[0] == RPC_MESSAGE_ADS_DISABLE_SAMPLING){

			return ads7047_DisableSampling();

		}else if(data[0] == RPC_MESSAGE_MUX_SET_INPUT_PINS){

			return muxSetInputPins(data[1]);

		}else if(data[0] == RPC_MESSAGE_SET_ACTIVE_FILTER){

			return muxSetActiveFilter(data[1]);

		}else if(data[0] == RPC_MESSAGE_TUNE_FILTER){
			//data[2] = lower
			//data[3] = upper
			return tuneFilter(50,data[2],data[3]);

		}else if(data[0] == RPC_MESSAGE_DAC_SET_NUM_REPETITIONS){

			return dac80501_SetNumRepetitions(data[1]);

		}else if(data[0] == RPC_MESSAGE_DAC_SET_GEN_RATE){

			return dac80501_SetGenerationRate(data[1]);

		}else if(data[0] == RPC_MESSAGE_DAC_RECEIVE_DATASET){

			return dac80501_ReceiveDataset(data[1]);

		}else if(data[0] == RPC_MESSAGE_DAC_ENABLE_GENERATION){

			return dac80501_EnableGeneration();

		}else if(data[0] == RPC_MESSAGE_DAC_DISABLE_GENERATION){

			return dac80501_DisableGeneration();

		}else if(data[0] == RPC_MESSAGE_DAC_BALL_BEAM_START){

			return ballbeamStart(); //TODO this is blocking...

		}else{
			LPRINTF("Unknown message, type: %s, command: %d, data: %d\r\n", message,data[0],data[1]);
		}

	}

}

/*-----------------------------------------------------------------------------*
 *  RPMSG endpoint callbacks
 *-----------------------------------------------------------------------------*/
static int rpmsg_endpoint_cb(struct rpmsg_endpoint *ept, void *data, size_t len,
			     uint32_t src, void *priv)
{
	(void)priv;
	(void)src;

	xil_printf("sampling>callback! Message: %d with data[0]: %d of len: %d\r\n", ((struct _payload*)data)->message, ((struct _payload*)data)->data[0], len);

	/* On reception of a shutdown we signal the application to terminate */
	//TODO test or remove this?
	if ((*(unsigned int *)data) == SHUTDOWN_MSG) {
		LPRINTF("shutdown message is received.\n");
		shutdown_req = 1;
		return RPMSG_SUCCESS;
	}

	handle_message((struct _payload*)data);
	send_ack(ept);

	/* Send data back to master */ //TODO change this to just ACK later on
//	if (rpmsg_send(ept, data, len) < 0) {
//		xil_printf("sampling> rpmsg_send failed\r\n");
//	}
	return RPMSG_SUCCESS;
}

static void rpmsg_service_unbind(struct rpmsg_endpoint *ept)
{
	(void)ept;
	LPRINTF("unexpected Remote endpoint destroy\r\n");
	shutdown_req = 1;
}


int app(struct rpmsg_device *rdev, void *priv)
{
	int ret;

	/* Initialize RPMSG framework */
	LPRINTF("Try to create rpmsg endpoint.\r\n");

	ret = rpmsg_create_ept(&lept, rdev, RPMSG_SERVICE_NAME,
			RPMSG_ADDR_ANY, RPMSG_ADDR_ANY,
			       rpmsg_endpoint_cb, rpmsg_service_unbind);
	if (ret) {
		LPERROR("Failed to create endpoint.\r\n");
		return -1;
	}

	LPRINTF("Successfully created rpmsg endpoint.\r\n");
	while (1) {
		xil_printf("|");
		platform_poll(priv);
		xil_printf("platform_poll returned!\r\n");
		/* we got a shutdown request, exit */
		if (shutdown_req) {
			break;
		}
	}
	rpmsg_destroy_ept(&lept);

	return 0;
}

int rpc_setup(){
	void *platform;
	struct rpmsg_device *rpdev;
	int ret;

	LPRINTF("\n**********CyDAQ baremetal sampling process***********\r\n");

	send_payload = (struct _payload *)malloc(PAYLOAD_TOTAL_LEN);
	receive_payload = (struct _payload *)malloc(PAYLOAD_TOTAL_LEN);

	/* Initialize platform */
	ret = platform_init(&platform);
	if (ret) {
		LPERROR("Failed to initialize platform.\r\n");
		ret = -1;
	} else {
		rpdev = platform_create_rpmsg_vdev(platform, 0,
						   VIRTIO_DEV_DEVICE,
						   NULL, NULL);
		if (!rpdev) {
			LPERROR("Failed to create rpmsg virtio device.\r\n");
			ret = -1;
		} else {
			app(rpdev, platform);
			platform_release_rpmsg_vdev(rpdev);
			ret = 0;
		}
	}

	LPRINTF("Stopping application...\r\n");
	platform_cleanup(platform);
}
