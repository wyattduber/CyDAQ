#define PAYLOAD_MESSAGE_LEN 16
//TODO fix
#define PAYLOAD_DATA_LEN (512 - RPMSG_HEADER_LEN - PAYLOAD_MESSAGE_LEN - 1 - 24)
struct _payload {
	char message[PAYLOAD_MESSAGE_LEN];
	int data_len;
	int data[];
};

#define RPMSG_HEADER_LEN 16

#define MAX_RPMSG_BUFF_SIZE (512 - RPMSG_HEADER_LEN)
#define PAYLOAD_MIN_SIZE	1
#define PAYLOAD_MAX_SIZE	(MAX_RPMSG_BUFF_SIZE - 24)
#define NUM_PAYLOADS		(PAYLOAD_MAX_SIZE/PAYLOAD_MIN_SIZE)

#define RPMSG_BUS_SYS "/sys/bus/rpmsg"

int rpc_setup();
int rpc_send_message(char message[], int data[], int data_len);
int rpc_recieve_message();
void rpc_teardown();
