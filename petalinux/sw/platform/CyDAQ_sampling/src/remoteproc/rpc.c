#include "xil_printf.h"

#include "rpc.h"
#include "platform_info.h"
#include "rsc_table.h"
#include "../hardware/shared_definitions.h"
#include "platform_info.h"

#define SHUTDOWN_MSG	0xEF56A55A

void *platform;
struct rpmsg_device *rpdev;
static struct rpmsg_endpoint lept;
static int shutdown_req = 0;

#define PAYLOAD_MESSAGE_LEN 16
struct _payload {
	char message[PAYLOAD_MESSAGE_LEN];
	int data_len;
	int data[];
};

struct _payload *send_payload;
struct _payload *receive_payload;

static int rpmsg_endpoint_cb(struct rpmsg_endpoint *ept, void *data, size_t len,
			     uint32_t src, void *priv)
{
	(void)priv;
	(void)src;

	xil_printf("Sampling>rpmsg_endpoint_cb called! Data: %d\r\n", data);

	/* On reception of a shutdown we signal the application to terminate */
	if ((*(unsigned int *)data) == SHUTDOWN_MSG) {
		xil_printf("Sampling>shutdown message is received.\n");
		shutdown_req = 1;
		return RPMSG_SUCCESS;
	}

	/* Send data back to master */ //TODO change this to process commands instead
	if (rpmsg_send(ept, data, len) < 0) {
		xil_printf("Sampling>rpmsg_send failed\n");
	}
	return RPMSG_SUCCESS;
}

static void rpmsg_service_unbind(struct rpmsg_endpoint *ept)
{
	(void)ept;
	xil_printf("Sampling>unexpected Remote endpoint destroy\n");
	shutdown_req = 1;
}


int rpc_setup(){
	int ret;

	if(DEBUG){
		xil_printf("Sampling>Starting rpc_setup()\r\n");
	}

	ret = platform_init(&platform);
	if (ret) {
		xil_printf("Sampling>Failed to initialize platform.\r\n");
		ret = -1;
	} else {
		rpdev = platform_create_rpmsg_vdev(platform, 0,
						   VIRTIO_DEV_SLAVE,
						   NULL, NULL);
		if (!rpdev) {
			xil_printf("Sampling>Failed to create rpmsg virtio device.\r\n");
			ret = -1;
		} else {
			xil_printf("Sampling>Try to create rpmsg endpoint\r\n");
			ret = rpmsg_create_ept(&lept, rpdev, RPMSG_SERVICE_NAME,
				       0, RPMSG_ADDR_ANY, rpmsg_endpoint_cb,
				       rpmsg_service_unbind);;
			if(ret){
				xil_printf("Sampling>Failed to create rpmsg endpoint\r\n");
			}else{

			}
		}
	}

	return ret;
}

int rpc_tear_down(){
	platform_release_rpmsg_vdev(rpdev);
	platform_cleanup(platform);
	return 0;
}

void print_payload(struct _payload* payload){
	xil_printf("== Sampling>Payload ==\r\n");
	xil_printf("Message: %s\r\n", payload->message);
	xil_printf("Data: ");
	for(int i = 0; i < payload->data_len; i++){
		xil_printf("%d ", payload->data[i]);
	}
	xil_printf("\r\n");
	xil_printf("======================\r\n");
}

int rpc_listen(){
	int bytes_rcvd = 0;
	while(1) {
//		platform_poll(platform);
//		/* we got a shutdown request, exit */
//		if (shutdown_req) {
//			break;
//		}
//		bytes_rcvd = read(fd, receive_payload,
//				(2 * sizeof(unsigned long)) + PAYLOAD_MAX_SIZE);
//		xil_printf("got payload on baremetal core\r\n");
	}
}
