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

static int rpmsg_endpoint_cb(struct rpmsg_endpoint *ept, void *data, size_t len,
			     uint32_t src, void *priv)
{
	(void)priv;
	(void)src;

	xil_printf("rpmsg_endpoint_cb called! Data: %d\r\n", data);

	/* On reception of a shutdown we signal the application to terminate */
	if ((*(unsigned int *)data) == SHUTDOWN_MSG) {
		xil_printf("shutdown message is received.\n");
		shutdown_req = 1;
		return RPMSG_SUCCESS;
	}

	/* Send data back to master */
	if (rpmsg_send(ept, data, len) < 0) {
		xil_printf("rpmsg_send failed\n");
	}
	return RPMSG_SUCCESS;
}

static void rpmsg_service_unbind(struct rpmsg_endpoint *ept)
{
	(void)ept;
	xil_printf("unexpected Remote endpoint destroy\n");
	shutdown_req = 1;
}


int rpc_setup(){
	int ret;

	if(DEBUG){
		xil_printf("Starting rpc_setup()\r\n");
	}

	ret = platform_init(&platform);
	if (ret) {
		xil_printf("Failed to initialize platform.\r\n");
		ret = -1;
	} else {
		rpdev = platform_create_rpmsg_vdev(platform, 0,
						   VIRTIO_DEV_SLAVE,
						   NULL, NULL);
		if (!rpdev) {
			xil_printf("Failed to create rpmsg virtio device.\r\n");
			ret = -1;
		} else {
			xil_printf("Try to create rpmsg endpoint\r\n");
			ret = rpmsg_create_ept(&lept, rpdev, RPMSG_SERVICE_NAME,
				       0, RPMSG_ADDR_ANY, rpmsg_endpoint_cb,
				       rpmsg_service_unbind);;
			if(ret){
				xil_printf("Failed to create rpmsg endpoint\r\n");
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

int rpc_listen(){
	while(1) {
		platform_poll(platform);
		/* we got a shutdown request, exit */
		if (shutdown_req) {
			break;
		}
	}
}
