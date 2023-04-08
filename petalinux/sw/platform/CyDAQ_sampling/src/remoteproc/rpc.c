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
	if(strncmp(((struct _payload*)data)->message, cmp, 9) == 0){
		xil_printf("sampling> Got command to configure xadc sample rate to: %d\r\n", ((struct _payload*)data)->data[0]);
//		xadcSetSampleRate(((struct _payload*)data)->data[0]);
	}
	/* On reception of a shutdown we signal the application to terminate */
	//TODO test or remove this?
	if ((*(unsigned int *)data) == SHUTDOWN_MSG) {
		LPRINTF("shutdown message is received.\n");
		shutdown_req = 1;
		return RPMSG_SUCCESS;
	}

	/* Send data back to master */
	if (rpmsg_send(ept, data, len) < 0) {
		LPERROR("rpmsg_send failed\n");
	}
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
