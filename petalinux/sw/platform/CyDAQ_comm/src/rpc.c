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

static int charfd = -1, fd = -1;

struct _payload *send_payload;
struct _payload *receive_payload;

char sbuf[512];
int r5_id = 0;
char rpmsg_dev_name[256];
int ept_fd = -1;
char *rpmsg_svc="rpmsg-openamp-demo-channel"; //TDOO change name? //TODO make define?

void rpc_print_payload(struct _payload* payload){
	printf("== comm>Payload ==\r\n");
	printf("Message: %d\r\n", payload->message);
	printf("Data: ");
	for(int i = 0; i < payload->data_len; i++){
		printf("%d ", payload->data[i]);
	}
	printf("\r\n");
	printf("==================\r\n");
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

	printf("comm>Attempting to send message:\r\n");
	rpc_print_payload(send_payload);

	int bytes_sent = write(fd, send_payload, PAYLOAD_TOTAL_LEN);
	printf("message sent: Bytes written: %d\r\n", bytes_sent);
	if(bytes_sent <= 0){
		printf("Error sending payload. Printing payload: \r\n");
		rpc_print_payload(send_payload);
	}

	return 0;
}

/*
 * Blocking
 */
int rpc_recieve_message(){
	//TODO add error returns
	int bytes_rcvd = 0;
	bytes_rcvd = read(fd, receive_payload, PAYLOAD_TOTAL_LEN);
	while (bytes_rcvd <= 0) {
		usleep(10000);
		bytes_rcvd = read(fd, receive_payload, PAYLOAD_TOTAL_LEN);
	}
	printf("comm> Received payload with message: %d\r\n", receive_payload->message);
	return 0;
}

/*
 * Blocking - waits for ACK message from RPC. Returns 1 if successful, -1 if anything but ACK is received.
 */
int rpc_recieve_ack(){
	//TODO add error returns
	int bytes_rcvd = 0;
	printf("comm> rpc_recieve_ack() called\r\n");
	bytes_rcvd = read(fd, receive_payload, PAYLOAD_TOTAL_LEN);
	printf("comm> first read: %d bytes read\r\n", bytes_rcvd);
	while (bytes_rcvd <= 0) {
//		printf("comm> bytes_rcvd <=0, so waiting and reading again\r\n");
		usleep(10000);
		bytes_rcvd = read(fd, receive_payload, PAYLOAD_TOTAL_LEN);
//		printf("comm> another read: %d bytes read\r\n", bytes_rcvd);
	}
	printf("comm> bytes read finally not <= 0: %d \r\n", bytes_rcvd);

	if(receive_payload->message == RPC_MESSAGE_DAC_ACK){
		printf("comm> returning 0\r\n");
		return 0;
	}else{
		printf("comm> returning -1\r\n");
		return -1;//TODO just return the strcmp return? idk just being safe
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

	printf("rpc setup starting\r\n");

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
	printf("\r\nMaster>probe rpmsg_char\r\n");
	ret = system("modprobe rpmsg_char");
	if (ret < 0) {
		perror("Failed to load rpmsg_char driver.\n");
		return -EINVAL;
	}

	printf("\r\n Open rpmsg dev %s! \r\n", rpmsg_dev);
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
		printf("failed to create RPMsg endpoint.\n");
		return -EINVAL;
	}
	if (!get_rpmsg_ept_dev_name(rpmsg_char_name, eptinfo.name,
					ept_dev_name))
		return -EINVAL;
	sprintf(ept_dev_path, "/dev/%s", ept_dev_name);
	fd = open(ept_dev_path, O_RDWR | O_NONBLOCK);
	if (fd < 0) {
		perror("Failed to open rpmsg device.");
		close(charfd);
		return -1;
	}

	send_payload = (struct _payload *)malloc(PAYLOAD_TOTAL_LEN);
	receive_payload = (struct _payload *)malloc(PAYLOAD_TOTAL_LEN);

	if (send_payload == 0 || receive_payload == 0) {
		printf("ERROR: Failed to allocate memory for payload.\n");
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
