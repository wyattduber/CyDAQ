#include <stdio.h>
#include <openamp/open_amp.h>
#include <metal/alloc.h>

#include "xil_cache.h"

#include "xgpio.h"
#include "platform_info.h"
#include "rpc.h"
#include "../hardware/xadc.h"
#include "../hardware/ads7047.h"
#include "../hardware/mux_driver.h"
#include "../hardware/filter.h"
#include "../hardware/dac80501.h"
#include "../hardware/bb_controller.h"
#include "../hardware/shared_definitions.h"

#define LPRINTF(format, ...) xil_printf(format, ##__VA_ARGS__)
#define LPERROR(format, ...) LPRINTF("ERROR: " format, ##__VA_ARGS__)

#define VIRTIO_DEV_DEVICE 1UL
#define RPMSG_SERVICE_NAME         "rpmsg-openamp-demo-channel"

static struct rpmsg_endpoint lept;
static int shutdown_req = 0;

#define MSG_LIMIT 100
#define SHUTDOWN_MSG	0xEF56A55A

struct _payload *send_payload;
struct _payload *receive_payload;

void rpc_print_payload(struct _payload* payload){
	xil_printf("== SAMP>  Payload ==\r\n");
	xil_printf("Message: %d\r\n", payload->message);
	xil_printf("Data: ");
	for(int i = 0; i < payload->data_len; i++){
		xil_printf("%d ", payload->data[i]);
	}
	xil_printf("\r\n");
	xil_printf("==================\r\n");
}

int rpc_send_message(struct rpmsg_endpoint *ept, int message, int data[], int data_len){
	send_payload->message = message;

	int b = data_len;
	if(data_len > PAYLOAD_DATA_LEN)
		data_len = PAYLOAD_DATA_LEN;
	send_payload->data_len = data_len;
	for(int i = 0; i < b; i++){
		send_payload->data[i] = data[i];
	}

	if (rpmsg_send(ept, send_payload, PAYLOAD_TOTAL_LEN) < 0) {
		xil_printf("SAMP> send_ack failed\r\n");
		return -1;
	}

	return 0;
}

int send_ack(struct rpmsg_endpoint *ept){
	int data[PAYLOAD_DATA_LEN] = {RPC_MESSAGE_DAC_ACK};
	if (rpc_send_message(ept, MSG_TYPE_COMMAND, data, 1) < 0) {
		xil_printf("SAMP> send_ack failed\n");
		return -1;
	}
	return 0;
}

int handle_message(struct _payload* payload){
	int* data = payload->data;
	//int data_len = payload->data_len;
	int message_type = payload->message;
	int ret = -1;

	//command message handling
	//NOTE: All else ifs below marked with TODO are not fully supported. They were just copied over from old firmware
	if(message_type == MSG_TYPE_COMMAND){
		if(data[0] == RPC_MESSAGE_XADC_SET_SAMPLE_RATE){
			ret = xadcSetSampleRate(data[1]);
		}else if(data[0] == RPC_MESSAGE_XADC_ENABLE_SAMPLING){
			ret =  xadcEnableSampling(data[1]);//0 = normal, 1 = stream

		}else if(data[0] == RPC_MESSAGE_XADC_DISABLE_SAMPLING){
			ret =  xadcDisableSampling();

		}else if(data[0] == RPC_MESSAGE_ADS_SET_SAMPLE_RATE){ //TODO not implemented yet

		}else if(data[0] == RPC_MESSAGE_ADS_ENABLE_SAMPLING){ //TODO not implemented yet
			ret =  ads7047_EnableSampling(data[1]);//0 = normal, 1 = stream

		}else if(data[0] == RPC_MESSAGE_ADS_DISABLE_SAMPLING){ //TODO not implemented yet
			ret =  ads7047_DisableSampling();

		}else if(data[0] == RPC_MESSAGE_MUX_SET_INPUT_PINS){
			ret =  muxSetInputPins(data[1]);

		}else if(data[0] == RPC_MESSAGE_SET_ACTIVE_FILTER){
			ret =  muxSetActiveFilter(data[1]);

		}else if(data[0] == RPC_MESSAGE_TUNE_FILTER){
			//data[2] = lower
			//data[3] = upper
			ret =  tuneFilter(50,data[2],data[3]);

		}else if(data[0] == RPC_MESSAGE_DAC_SET_NUM_REPETITIONS){ //TODO not implemented yet
			ret =  dac80501_SetNumRepetitions(data[1]);

		}else if(data[0] == RPC_MESSAGE_DAC_SET_GEN_RATE){ //TODO not implemented yet
			ret =  dac80501_SetGenerationRate(data[1]);

		}else if(data[0] == RPC_MESSAGE_DAC_RECEIVE_DATASET){ //TODO not implemented yet
			ret =  dac80501_ReceiveDataset(data[1]);

		}else if(data[0] == RPC_MESSAGE_DAC_ENABLE_GENERATION){ //TODO not implemented yet
			ret =  dac80501_EnableGeneration();

		}else if(data[0] == RPC_MESSAGE_DAC_DISABLE_GENERATION){ //TODO not implemented yet
			ret =  dac80501_DisableGeneration();

		}else if(data[0] == RPC_MESSAGE_DAC_BALL_BEAM_START){ //TODO not implemented yet
			ret =  ballbeamStart(); //TODO this is blocking...

		}else if(data[0] == RPC_MESSAGE_LED_INIT){
			xil_printf("SAMP> Turning on LED\r\n");
			XGpio gpio;
			XGpio_Initialize(&gpio, XPAR_AXI_GPIO_LED_DEVICE_ID);
			XGpio_SetDataDirection(&gpio, 1, 0x00000000);
			XGpio_SetDataDirection(&gpio, 2, 0x00000000);
			XGpio_DiscreteWrite(&gpio, 1, 0xFFFFFFFF);
			XGpio_DiscreteWrite(&gpio, 2, 0xFFFFFFFF);
			ret = 0;

		}else{
			LPRINTF("SAMP> Unknown message, type: %d, command: %d, data: %d\r\n", message_type, data[0],data[1]);
			return -1;
		}
		send_ack(&lept);
		return ret;

	}else if(message_type == MSG_TYPE_REQUEST){
		int *response_data = {0};
		volatile u32 *sample_count;
		switch(data[0]){
		case RPC_MESSAGE_GET_SAMPLE_COUNT:
			sample_count = shared_GetSampleCount();

			//assume that petalinux is going to try to read from the shared memory at this length,
			//flush the cache so it has the latest. This might not be necessary.
			volatile SAMPLE_TYPE *xadcSampleBuffer = (u16*)0x38800000;
			Xil_DCacheFlushRange(xadcSampleBuffer, (int)sample_count * sizeof(u16));

			if(DEBUG)
				xil_printf("SAMP> got request for sample count, responding with: %d\r\n", *sample_count);
			response_data[0] = RPC_MESSAGE_GET_SAMPLE_COUNT;
			response_data[1] = *sample_count;
			if (rpc_send_message(&lept, MSG_TYPE_REQUEST, response_data, 2) < 0) {
				xil_printf("SAMP> respond to get sample count failed!\n");
			}
		}
	}
	return 0;
}

/*-----------------------------------------------------------------------------*
 *  RPMSG endpoint callbacks
 *-----------------------------------------------------------------------------*/
static int rpmsg_endpoint_cb(struct rpmsg_endpoint *ept, void *data, size_t len,
			     uint32_t src, void *priv)
{
	(void)priv;
	(void)src;

	/* On reception of a shutdown we signal the application to terminate */
	if ((*(unsigned int *)data) == SHUTDOWN_MSG) {
		LPRINTF("SAMP> shutdown message is received.\n");
		shutdown_req = 1;
		return RPMSG_SUCCESS;
	}

	handle_message((struct _payload*)data);

	return RPMSG_SUCCESS;
}

static void rpmsg_service_unbind(struct rpmsg_endpoint *ept)
{
	(void)ept;
	LPRINTF("SAMP> Unexpected Remote endpoint destroy\r\n");
	shutdown_req = 1;
}


int app(struct rpmsg_device *rdev, void *priv)
{
	int ret;

	/* Initialize RPMSG framework */
	xil_printf("SAMP> Try to create rpmsg endpoint.\r\n");

	ret = rpmsg_create_ept(&lept, rdev, RPMSG_SERVICE_NAME,
			RPMSG_ADDR_ANY, RPMSG_ADDR_ANY,
			       rpmsg_endpoint_cb, rpmsg_service_unbind);
	if (ret) {
		xil_printf("SAMP> Failed to create endpoint.\r\n");
		return -1;
	}

	xil_printf("SAMP> Successfully created rpmsg endpoint.\r\n");
	while (1) {
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

	send_payload = (struct _payload *)malloc(PAYLOAD_TOTAL_LEN);
	receive_payload = (struct _payload *)malloc(PAYLOAD_TOTAL_LEN);

	/* Initialize platform */
	ret = platform_init(&platform);
	if (ret) {
		xil_printf("SAMP> Failed to initialize platform.\r\n");
		ret = -1;
	} else {
		rpdev = platform_create_rpmsg_vdev(platform, 0,
						   VIRTIO_DEV_DEVICE,
						   NULL, NULL);
		if (!rpdev) {
			xil_printf("SAMP> Failed to create rpmsg virtio device.\r\n");
			ret = -1;
		} else {
			app(rpdev, platform);
			platform_release_rpmsg_vdev(rpdev);
			ret = 0;
		}
	}

	xil_printf("SAMP> Stopping application...\r\n");
	platform_cleanup(platform);
	return 0;
}
