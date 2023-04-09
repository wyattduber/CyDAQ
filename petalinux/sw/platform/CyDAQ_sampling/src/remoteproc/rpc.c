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

int rpc_send_message(char message[], int data[], int data_len){
	//construct payload
	for(int i = 0; i < PAYLOAD_MESSAGE_LEN; i++){
		send_payload->message[i] = message[i];
	}

	int b = data_len;
	if(data_len > PAYLOAD_DATA_LEN)
		data_len = PAYLOAD_DATA_LEN;
	send_payload->data_len = data_len;
	for(int i = 0; i < b; i++){
		send_payload->data[i] = data[i];
	}

	if (rpmsg_send(&lept, send_payload, PAYLOAD_TOTAL_LEN) < 0) {
		LPERROR("send_ack failed\n");
	}

	return 0;
}

int send_ack(){
	char message[PAYLOAD_MESSAGE_LEN] = RPC_MESSAGE_DAC_ACK;
	int data[PAYLOAD_DATA_LEN] = {}; //ack has no data needed
	if (rpc_send_message(message, data, 0) < 0) {
		LPERROR("send_ack failed\n");
	}
	return 0;
}

int handle_message(struct _payload* payload){
	char* message = payload->message;
	int* data = payload->data;
	int data_len = payload->data_len;
	int message_type = MSG_TYPE_INVALID;

	//check the message type
	switch((int)message){
		case COMM_COMMEND_MSG:
			message_type = MSG_TYPE_COMMEND;
			break;
		default:
			message_type = MSG_TYPE_INVALID;

	}

	//command handling
	if(message_type == MSG_TYPE_COMMEND){
		if(data[0] == 0){
			if(DEBUG){
				LPRINTF("message received, type: %s, command: %d, data: %d\r\n", message,data[0],data[1]);
			}
			xadcSetSampleRate(data[1]);
			send_ack();
		}else{
			LPRINTF("Unknown message, type: %s, command: %d, data: %d\r\n", message,data[0],data[1]);
		}
	}
	//TODO implement each command
//	if(strcmp(message, RPC_MESSAGE_XADC_SET_SAMPLE_RATE) == 0){
//		LPRINTF("setting xadc sample rate to: %d\r\n", data[0]);
//		xadcSetSampleRate(data[0]); //TODO check this func return type and return ERR if bad
//		send_ack();
//
//	}else if(strcmp(message, RPC_MESSAGE_ADS_SET_SAMPLE_RATE) == 0){
//		LPRINTF("setting ads sample rate to: %d\r\n", data[0]);
//		ads7047_SetSampleRate(data[0]);
//		send_ack();
//
//	}else if(strcmp(message, RPC_MESSAGE_MUTED_SET_INPUT_PINS) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_SET_ACTIVE_FILTER) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_TUNE_FILTER) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_XADC_PROCESS_SAMPLES) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_ADS_PROCESS_SAMPLES) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_XADC_ENABLE_SAMPLING) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_ADS_ENABLE_SAMPLING) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_XADC_DISABLE_SAMPLING) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_DAC_SET_NUM_REPETITIONS) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_DAC_SET_GEN_RATE) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_DAC_RECEIVE_DATASET) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_DAC_ENABLE_GENERATION) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_DAC_DISABLE_GENERATION) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_DAC_BALL_BEAM_START) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_DAC_ACK) == 0){
//
//	}else if(strcmp(message, RPC_MESSAGE_DAC_STOP) == 0){

//	}else{
//		//unknown message
//		LPRINTF("Unknown message: %s\r\n", message);
//	}
}

/*-----------------------------------------------------------------------------*
 *  RPMSG endpoint callbacks
 *-----------------------------------------------------------------------------*/
static int rpmsg_endpoint_cb(struct rpmsg_endpoint *ept, void *data, size_t len,
			     uint32_t src, void *priv)
{
	(void)priv;
	(void)src;

	LPRINTF("sampling>callback! Message: %s\r\n", ((struct _payload*)data)->message);
	char cmp[16] = "xadcSetSR";

	//just for testing for now :D
//	if(strncmp(((struct _payload*)data)->message, cmp, 9) == 0){
//		xil_printf("sampling> Got command to configure xadc sample rate to: %d\r\n", ((struct _payload*)data)->data[0]);
////		xadcSetSampleRate(((struct _payload*)data)->data[0]);
//	}
	handle_message((struct _payload*)data);

	/* On reception of a shutdown we signal the application to terminate */
	//TODO test or remove this?
	if ((*(unsigned int *)data) == SHUTDOWN_MSG) {
		LPRINTF("shutdown message is received.\n");
		shutdown_req = 1;
		return RPMSG_SUCCESS;
	}

	/* Send data back to master */ //TODO change this to just ACK later on
//	if (rpmsg_send(ept, data, len) < 0) {
//		LPERROR("rpmsg_send failed\n");
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
			       0, RPMSG_ADDR_ANY,
			       rpmsg_endpoint_cb, rpmsg_service_unbind);
	if (ret) {
		LPERROR("Failed to create endpoint.\r\n");
		return -1;
	}

	LPRINTF("Successfully created rpmsg endpoint.\r\n");
	while (1) {
		xil_printf("|");
		platform_poll(priv);
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
