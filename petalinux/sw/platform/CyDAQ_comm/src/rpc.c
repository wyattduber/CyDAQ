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

#include "rpc.h"

#define PAYLOAD_MESSAGE_LEN 16
struct _payload {
	char message[PAYLOAD_MESSAGE_LEN];
	int data_len;
	int data[];
};

static int charfd = -1, fd = -1, err_cnt;
int r5_id_ = 0; //TODO rename
char sbuf[512]; //TODO needed? just make local vars..

struct _payload *send_payload;
struct _payload *receive_payload;

struct sigaction exit_action;
struct sigaction kill_action;

//#define RPMSG_GET_KFIFO_SIZE 1
//#define RPMSG_GET_AVAIL_DATA_SIZE 2
//#define RPMSG_GET_FREE_SPACE 3

#define RPMSG_HEADER_LEN 16
#define MAX_RPMSG_BUFF_SIZE (512 - RPMSG_HEADER_LEN)
#define PAYLOAD_MIN_SIZE	1
#define PAYLOAD_MAX_SIZE	(MAX_RPMSG_BUFF_SIZE - 24)
//#define NUM_PAYLOADS		(PAYLOAD_MAX_SIZE/PAYLOAD_MIN_SIZE)

#define RPMSG_BUS_SYS "/sys/bus/rpmsg"

void print_payload(struct _payload* payload);

static int bind_rpmsg_chrdev(const char *rpmsg_dev_name)
{
	char fpath[256];
	char *rpmsg_chdrv = "rpmsg_chrdev";
	int fd;
	int ret;


	/* rpmsg dev overrides path */
	sprintf(fpath, "%s/devices/%s/driver_override",
		RPMSG_BUS_SYS, rpmsg_dev_name);
	fd = open(fpath, O_WRONLY);
	if (fd < 0) {
		fprintf(stderr, "Failed to open %s, %s\n",
			fpath, strerror(errno));
		return -EINVAL;
	}
	ret = write(fd, rpmsg_chdrv, strlen(rpmsg_chdrv) + 1);
	if (ret < 0) {
		fprintf(stderr, "Failed to write %s to %s, %s\n",
			rpmsg_chdrv, fpath, strerror(errno));
		return -EINVAL;
	}
	close(fd);

	/* bind the rpmsg device to rpmsg char driver */
	sprintf(fpath, "%s/drivers/%s/bind", RPMSG_BUS_SYS, rpmsg_chdrv);
	fd = open(fpath, O_WRONLY);
	if (fd < 0) {
		fprintf(stderr, "Failed to open %s, %s\n",
			fpath, strerror(errno));
		return -EINVAL;
	}
	ret = write(fd, rpmsg_dev_name, strlen(rpmsg_dev_name) + 1);
	if (ret < 0) {
		fprintf(stderr, "Failed to write %s to %s, %s\n",
			rpmsg_dev_name, fpath, strerror(errno));
		return -EINVAL;
	}
	close(fd);
	return 0;
}

static int get_rpmsg_chrdev_fd(const char *rpmsg_dev_name,
			       char *rpmsg_ctrl_name)
{
	char dpath[256];
	char fpath[256];
	char *rpmsg_ctrl_prefix = "rpmsg_ctrl";
	DIR *dir;
	struct dirent *ent;
	int fd;

	sprintf(dpath, "%s/devices/%s/rpmsg", RPMSG_BUS_SYS, rpmsg_dev_name);
	dir = opendir(dpath);
	if (dir == NULL) {
		fprintf(stderr, "Failed to open dir %s\n", dpath);
		return -EINVAL;
	}
	while ((ent = readdir(dir)) != NULL) {
		if (!strncmp(ent->d_name, rpmsg_ctrl_prefix,
			    strlen(rpmsg_ctrl_prefix))) {
			printf("Opening file %s.\n", ent->d_name);
			sprintf(fpath, "/dev/%s", ent->d_name);
			fd = open(fpath, O_RDWR | O_NONBLOCK);
			if (fd < 0) {
				fprintf(stderr,
					"Failed to open rpmsg char dev %s,%s\n",
					fpath, strerror(errno));
				return fd;
			}
			sprintf(rpmsg_ctrl_name, "%s", ent->d_name);
			return fd;
		}
	}

	fprintf(stderr, "No rpmsg char dev file is found\n");
	return -EINVAL;
}

static int rpmsg_create_ept(int rpfd, struct rpmsg_endpoint_info *eptinfo)
{
	int ret;

	ret = ioctl(rpfd, RPMSG_CREATE_EPT_IOCTL, eptinfo);
	if (ret)
		perror("Failed to create endpoint.\n");
	return ret;
}

static char *get_rpmsg_ept_dev_name(const char *rpmsg_char_name,
				    const char *ept_name,
				    char *ept_dev_name)
{
	char sys_rpmsg_ept_name_path[64];
	char svc_name[64];
	char *sys_rpmsg_path = "/sys/class/rpmsg";
	FILE *fp;
	int i;
	int ept_name_len;

	for (i = 0; i < 128; i++) {
		sprintf(sys_rpmsg_ept_name_path, "%s/%s/rpmsg%d/name",
			sys_rpmsg_path, rpmsg_char_name, i);
		printf("checking %s\n", sys_rpmsg_ept_name_path);
		if (access(sys_rpmsg_ept_name_path, F_OK) < 0)
			continue;
		fp = fopen(sys_rpmsg_ept_name_path, "r");
		if (!fp) {
			printf("failed to open %s\n", sys_rpmsg_ept_name_path);
			break;
		}
		fgets(svc_name, sizeof(svc_name), fp);
		fclose(fp);
		printf("svc_name: %s.\n",svc_name);
		ept_name_len = strlen(ept_name);
		if (ept_name_len > sizeof(svc_name))
			ept_name_len = sizeof(svc_name);
		if (!strncmp(svc_name, ept_name, ept_name_len)) {
			sprintf(ept_dev_name, "rpmsg%d", i);
			return ept_dev_name;
		}
	}

	printf("Not able to RPMsg endpoint file for %s:%s.\n",
	       rpmsg_char_name, ept_name);
	return NULL;
}

/* write a string to an existing and writtable file */
int write_file(char *path, char *str)
{
	int fd;
	ssize_t bytes_written;
	size_t str_sz;

	fd = open(path, O_WRONLY);
	if (fd == -1) {
		perror("Error");
		return -1;
	}
	str_sz = strlen(str);
	bytes_written = write(fd, str, str_sz);
	if (bytes_written != str_sz) {
	        if (bytes_written == -1) {
			perror("Error");
		}
		close(fd);
		return -1;
	}

	if (-1 == close(fd)) {
		perror("Error");
		return -1;
	}
	return 0;
}

//TODO this could probably be moved to main, as it involves the whole program?
void exit_kill_action_handler(int signum){
	printf("Comm killed!\r\n");

	close(fd);

	system("modprobe -r rpmsg_char");
	sprintf(sbuf,
		"/sys/class/remoteproc/remoteproc%u/state",
		r5_id_);
}

/*
 * TODO write
 */
int rpc_setup(){
	//TODO clean up unused
	int ret, i, j;
	int size, bytes_rcvd, bytes_sent;
	err_cnt = 0;
	int opt;
	char *rpmsg_dev="virtio0.rpmsg-openamp-demo-channel.-1.0"; //TODO rename and make global const
	int ntimes = 1;
	char fpath[256];
	char rpmsg_char_name[16];
	struct rpmsg_endpoint_info eptinfo;
	char ept_dev_name[16];
	char ept_dev_path[32];
	char sbuf[512];

	printf("Running rpc_setup\r\n");

	memset(&exit_action, 0, sizeof(struct sigaction));
	memset(&kill_action, 0, sizeof(struct sigaction));
	exit_action.sa_handler = exit_kill_action_handler;
	kill_action.sa_handler = exit_kill_action_handler;
	sigaction(SIGTERM, &exit_action, NULL);
	sigaction(SIGINT, &exit_action, NULL);
	sigaction(SIGKILL, &kill_action, NULL);
	sigaction(SIGHUP, &kill_action, NULL);

	/* Write firmware name to remoteproc sysfs interface */
	sprintf(sbuf, "/sys/class/remoteproc/remoteproc%u/firmware", r5_id_);
	if (0 != write_file(sbuf, "CyDAQ_sampling.elf")) { //TODO make constant at top of file //was "image_rpc_demo" or "CyDAQ_sampling.elf"
		return -EINVAL;
	}

	/* Tell remoteproc to load and start remote cpu */
	sprintf(sbuf, "/sys/class/remoteproc/remoteproc%u/state", r5_id_);
	if (0 != write_file(sbuf, "start")) {
		return -EINVAL;
	}

	/* Load rpmsg_char driver */
	printf("\r\nMaster>probe rpmsg_char\r\n");
	ret = system("modprobe rpmsg_char");
	if (ret < 0) {
		perror("Failed to load rpmsg_char driver.\n");
		return -EINVAL;
	}

	printf("Open rpmsg dev %s! \r\n", rpmsg_dev);
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
	strcpy(eptinfo.name, "rpmsg-openamp-demo-channel"); //TODO rename and make constant
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

	send_payload = (struct _payload *)malloc(PAYLOAD_MESSAGE_LEN * sizeof(char) + PAYLOAD_MAX_SIZE + sizeof(int));
	receive_payload = (struct _payload *)malloc(PAYLOAD_MESSAGE_LEN * sizeof(char) + PAYLOAD_MAX_SIZE + sizeof(int));

	if (send_payload == 0 || receive_payload == 0) {
		printf("ERROR: Failed to allocate memory for payload.\n");
		return -1;
	}

	return 0;
}

/*
 * TODO write
 * make sure to include info about message len and data len
 */
int rpc_send_message(char message[], int data[], int data_len){
	//construct payload
	for(int i = 0; i < PAYLOAD_MESSAGE_LEN; i++){
		send_payload->message[i] = message[i];
	}

	int b = data_len;
	if(data_len > MAX_RPMSG_BUFF_SIZE)
		data_len = MAX_RPMSG_BUFF_SIZE;
	send_payload->data_len = data_len;
	for(int i = 0; i < b; i++){
		send_payload->data[i] = data[i];
	}

	print_payload(send_payload);

	int bytes_sent = write(fd, send_payload,
			PAYLOAD_MESSAGE_LEN * sizeof(char) + PAYLOAD_MAX_SIZE + sizeof(int));
	if(bytes_sent <= 0){
		printf("Error sending payload. Printing payload: \r\n");
		print_payload(send_payload);
	}

//	printf("\r\n sending payload number");
//	printf(" %ld of size %d\r\n", send_payload->num,
//	(2 * sizeof(unsigned long)) + size);
//
//	bytes_sent = write(fd, send_payload,
//	(2 * sizeof(unsigned long)) + size);
//
//	if (bytes_sent <= 0) {
//		printf("\r\n Error sending data");
//		printf(" .. \r\n");
//		break;
//	}
//	printf("echo test: sent : %d\n", bytes_sent);
//
//	receive_payload->num = 0;
//	bytes_rcvd = read(fd, receive_payload,
//			(2 * sizeof(unsigned long)) + PAYLOAD_MAX_SIZE);
//	while (bytes_rcvd <= 0) {
//		usleep(10000);
//		bytes_rcvd = read(fd, receive_payload,
//			(2 * sizeof(unsigned long)) + PAYLOAD_MAX_SIZE);
//	}
//	printf(" received payload number ");
//	printf("%ld of size %d\r\n", receive_payload->num, bytes_rcvd);
}

void print_payload(struct _payload* payload){
	printf("= Payload ==\r\n");
	printf("Message: %s\r\n", payload->message);
	printf("Data: ");
	for(int i = 0; i < payload->data_len; i++){
		printf("%d ", payload->data[i]);
	}
	printf("\r\n");
	printf("= Payload ==\r\n");
}

void rpc_tear_down(){
	printf("\r\nMaster>RPC service exiting !!\r\n");

	close(fd);

	/* Wait for other end to cleanup
	 * Otherwise, virtio_rpmsg_bus can post msg with no recipient
	 * warning as it can receive NS destroy after the rpmsg char
	 * module is removed.
	 */
	sleep(1);

	system("modprobe -r rpmsg_char");
	sprintf(sbuf,
		"/sys/class/remoteproc/remoteproc%u/state",
		r5_id_);
//	(void)write_file(sbuf, "stop");
}

//TODO this might not be needed
int rpc_listen(){

}
