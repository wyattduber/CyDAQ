#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <time.h>
#include <fcntl.h>
#include <string.h>
#include <linux/rpmsg.h>
#include <signal.h>

#include "rpc_support.h"
#include "rpc.h"
#include "shared_definitions.h"

static int charfd = -1, fd = -1;

struct _payload *send_payload;
struct _payload *receive_payload;

char sbuf[512];
int r5_id = 0;
char rpmsg_dev_name[256];
int ept_fd = -1;
char *rpmsg_svc="rpmsg-openamp-demo-channel"; //TDOO change name? //TODO make define?

void rpc_print_payload(struct _payload* payload){
	if(DEBUG){
		printf("== COMM Payload ==\r\n");
		printf("COMM> Message: %d\r\n", payload->message);
		printf("COMM> Data: ");
		for(int i = 0; i < payload->data_len; i++){
			printf("%d ", payload->data[i]);
		}
		printf("\r\n");
		printf("==================\r\n\r\n");
	}
}

void rpc_stop_remote(void)
{
	system("modprobe -r rpmsg_char");
	sprintf(sbuf,
		"/sys/class/remoteproc/remoteproc%u/state",
		r5_id);
	(void)file_write(sbuf, "stop");
}

int rpc_send_message(int message, int data[], int data_len){
	send_payload->message = message;

	//TODO zero out all other data?
	int b = data_len;
	if(data_len > PAYLOAD_DATA_LEN)
		data_len = PAYLOAD_DATA_LEN;
	send_payload->data_len = data_len;
	for(int i = 0; i < b; i++){
		send_payload->data[i] = data[i];
	}

	int bytes_sent = write(fd, send_payload, PAYLOAD_TOTAL_LEN);
//	if(DEBUG)
//		printf("COMM> Message sent to sampling cpu: Bytes written: %d\r\n", bytes_sent);
	if(bytes_sent <= 0){
		printf("COMM> Error sending payload. Printing payload: \r\n");
		rpc_print_payload(send_payload);
	}

	return 0;
}

/*
 * Blocking
 */
int rpc_recieve_message(){
	int bytes_rcvd = 0;
	bytes_rcvd = read(fd, receive_payload, PAYLOAD_TOTAL_LEN);
	while (bytes_rcvd <= 0) {
		usleep(10000);
		bytes_rcvd = read(fd, receive_payload, PAYLOAD_TOTAL_LEN);
	}
//	if(DEBUG)
//		printf("COMM> Received payload. Read %d bytes\r\n", bytes_rcvd);
	return 0;
}

/*
 * Blocking - waits for ACK message from RPC. Returns 1 if successful, -1 if anything but ACK is received.
 */
int rpc_recieve_ack(){
	rpc_recieve_message();

	if(receive_payload->data[0] == RPC_MESSAGE_DAC_ACK){
		return 0;
	}else{
		return -1;
	}
}

int rpc_setup(){
	int ret;
	char *rpmsg_dev="virtio0.rpmsg-openamp-demo-channel.-1.0";
	char fpath[256];
	char rpmsg_char_name[16];
	struct rpmsg_endpoint_info eptinfo;
	char ept_dev_name[16];
	char ept_dev_path[32];

	printf("COMM> RPC Setup Starting\r\n");

	/* Write firmware name to remoteproc sysfs interface */
	sprintf(sbuf, "/sys/class/remoteproc/remoteproc%u/firmware", r5_id);
	if (0 != file_write(sbuf, "CyDAQ_sampling.elf")) { //TODO make constant at top of file //was "image_rpc_demo" or "CyDAQ_sampling.elf"
		return -EINVAL;
	}

	/* Tell remoteproc to load and start remote cpu */
	sprintf(sbuf, "/sys/class/remoteproc/remoteproc%u/state", r5_id);
	if (0 != file_write(sbuf, "start")) {
		return -EINVAL;
	}

	/* Load rpmsg_char driver */
	printf("COMM> Probe rpmsg_char\r\n");
	ret = system("modprobe rpmsg_char");
	if (ret < 0) {
		printf("COMM> ERROR: Failed to load rpmsg_char driver.\r\n");
		return -EINVAL;
	}

	printf("COMM> Open rpmsg dev %s! \r\n", rpmsg_dev);
	sprintf(fpath, "%s/devices/%s", RPMSG_BUS_SYS, rpmsg_dev);
	if (access(fpath, F_OK)) {
		fprintf(stderr, "Not able to access rpmsg device %s, %s\n",
			fpath, strerror(errno));
		return -EINVAL;
	}
	ret = bind_rpmsg_chrdev(rpmsg_dev);
	if (ret < 0)
		return ret;
	charfd = get_rpmsg_chrdev_fd(rpmsg_dev, rpmsg_char_name);
	if (charfd < 0)
		return charfd;

	/* Create endpoint from rpmsg char driver */
	strcpy(eptinfo.name, "rpmsg-openamp-demo-channel");
	eptinfo.src = 0;
	eptinfo.dst = 0xFFFFFFFF;
	ret = rpmsg_create_ept(charfd, &eptinfo);
	if (ret) {
		printf("COMM> ERROR: Failed to create RPMsg endpoint.\n");
		return -EINVAL;
	}
	if (!get_rpmsg_ept_dev_name(rpmsg_char_name, eptinfo.name,
					ept_dev_name))
		return -EINVAL;
	sprintf(ept_dev_path, "/dev/%s", ept_dev_name);
	fd = open(ept_dev_path, O_RDWR | O_NONBLOCK);
	if (fd < 0) {
		printf("COMM> ERROR: Failed to open rpmsg device.");
		close(charfd);
		return -1;
	}

	send_payload = (struct _payload *)malloc(PAYLOAD_TOTAL_LEN);
	receive_payload = (struct _payload *)malloc(PAYLOAD_TOTAL_LEN);

	if (send_payload == 0 || receive_payload == 0) {
		printf("COMM> ERROR: Failed to allocate memory for payload.\n");
		return -1;
	}
	return 0;
}

void rpc_teardown(){
	//todo clean up other memory?
	close(fd);
	rpc_stop_remote();
	free(send_payload);
	free(receive_payload);
}

