char *get_rpmsg_ept_dev_name(const char *rpmsg_char_name,
				    const char *ept_name,
				    char *ept_dev_name);

int rpmsg_create_ept(int rpfd, struct rpmsg_endpoint_info *eptinfo);

int get_rpmsg_chrdev_fd(const char *rpmsg_dev_name,
			       char *rpmsg_ctrl_name);

int bind_rpmsg_chrdev(const char *rpmsg_dev_name);

int get_rpmsg_dev_name(const char *rpmsg_svc_name, char *rpmsg_dev_name);

int file_write(char *path, char *str);
