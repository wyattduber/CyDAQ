/*
 * yavta --  Yet Another V4L2 Test Application
 *
 * Copyright (C) 2005-2010 Laurent Pinchart <laurent.pinchart@ideasonboard.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 */

#define __STDC_FORMAT_MACROS

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <inttypes.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <errno.h>
#include <getopt.h>
#include <sched.h>
#include <time.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <sys/select.h>
#include <sys/stat.h>
#include <sys/time.h>

#include <linux/videodev2.h>

#ifndef V4L2_BUF_FLAG_ERROR
#define V4L2_BUF_FLAG_ERROR	0x0040
#endif

#define ARRAY_SIZE(a)	(sizeof(a)/sizeof((a)[0]))

enum buffer_fill_mode
{
	BUFFER_FILL_NONE = 0,
	BUFFER_FILL_FRAME = 1 << 0,
	BUFFER_FILL_PADDING = 1 << 1,
};

struct buffer
{
	unsigned int idx;
	unsigned int padding[VIDEO_MAX_PLANES];
	unsigned int size[VIDEO_MAX_PLANES];
	void *mem[VIDEO_MAX_PLANES];
};

struct device
{
	int fd;
	int opened;

	enum v4l2_buf_type type;
	enum v4l2_memory memtype;
	unsigned int nbufs;
	struct buffer *buffers;

	unsigned int width;
	unsigned int height;
	uint32_t buffer_output_flags;
	uint32_t timestamp_type;

	unsigned char num_planes;
	struct v4l2_plane_pix_format plane_fmt[VIDEO_MAX_PLANES];

	void *pattern[VIDEO_MAX_PLANES];
	unsigned int patternsize[VIDEO_MAX_PLANES];
};

static bool video_is_mplane(struct device *dev)
{
	return dev->type == V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE ||
	       dev->type == V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE;
}

static bool video_is_capture(struct device *dev)
{
	return dev->type == V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE ||
	       dev->type == V4L2_BUF_TYPE_VIDEO_CAPTURE;
}

static bool video_is_output(struct device *dev)
{
	return dev->type == V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE ||
	       dev->type == V4L2_BUF_TYPE_VIDEO_OUTPUT;
}

static struct {
	enum v4l2_buf_type type;
	bool supported;
	const char *name;
	const char *string;
} buf_types[] = {
	{ V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE, 1, "Video capture mplanes", "capture-mplane", },
	{ V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE, 1, "Video output", "output-mplane", },
	{ V4L2_BUF_TYPE_VIDEO_CAPTURE, 1, "Video capture", "capture", },
	{ V4L2_BUF_TYPE_VIDEO_OUTPUT, 1, "Video output mplanes", "output", },
	{ V4L2_BUF_TYPE_VIDEO_OVERLAY, 0, "Video overlay", "overlay" },
};

static int v4l2_buf_type_from_string(const char *str)
{
	unsigned int i;

	for (i = 0; i < ARRAY_SIZE(buf_types); i++) {
		if (!buf_types[i].supported)
			continue;

		if (strcmp(buf_types[i].string, str))
			continue;

		return buf_types[i].type;
	}

	return -1;
}

static const char *v4l2_buf_type_name(enum v4l2_buf_type type)
{
	unsigned int i;

	for (i = 0; i < ARRAY_SIZE(buf_types); ++i) {
		if (buf_types[i].type == type)
			return buf_types[i].name;
	}

	if (type & V4L2_BUF_TYPE_PRIVATE)
		return "Private";
	else
		return "Unknown";
}

static struct v4l2_format_info {
	const char *name;
	unsigned int fourcc;
	unsigned char n_planes;
} pixel_formats[] = {
	{ "RGB332", V4L2_PIX_FMT_RGB332, 1 },
	{ "RGB555", V4L2_PIX_FMT_RGB555, 1 },
	{ "RGB565", V4L2_PIX_FMT_RGB565, 1 },
	{ "RGB555X", V4L2_PIX_FMT_RGB555X, 1 },
	{ "RGB565X", V4L2_PIX_FMT_RGB565X, 1 },
	{ "BGR24", V4L2_PIX_FMT_BGR24, 1 },
	{ "RGB24", V4L2_PIX_FMT_RGB24, 1 },
	{ "BGR32", V4L2_PIX_FMT_BGR32, 1 },
	{ "RGB32", V4L2_PIX_FMT_RGB32, 1 },
	{ "Y8", V4L2_PIX_FMT_GREY, 1 },
	{ "Y10", V4L2_PIX_FMT_Y10, 1 },
	{ "Y12", V4L2_PIX_FMT_Y12, 1 },
	{ "Y16", V4L2_PIX_FMT_Y16, 1 },
	{ "UYVY", V4L2_PIX_FMT_UYVY, 1 },
	{ "VYUY", V4L2_PIX_FMT_VYUY, 1 },
	{ "YUYV", V4L2_PIX_FMT_YUYV, 1 },
	{ "YVYU", V4L2_PIX_FMT_YVYU, 1 },
	{ "NV12", V4L2_PIX_FMT_NV12, 1 },
	{ "NV12M", V4L2_PIX_FMT_NV12M, 2 },
	{ "NV21", V4L2_PIX_FMT_NV21, 1 },
	{ "NV21M", V4L2_PIX_FMT_NV21M, 2 },
	{ "NV16", V4L2_PIX_FMT_NV16, 1 },
	{ "NV16M", V4L2_PIX_FMT_NV16M, 2 },
	{ "NV61", V4L2_PIX_FMT_NV61, 1 },
	{ "NV61M", V4L2_PIX_FMT_NV61M, 2 },
	{ "NV24", V4L2_PIX_FMT_NV24, 1 },
	{ "NV42", V4L2_PIX_FMT_NV42, 1 },
	{ "YUV420M", V4L2_PIX_FMT_YUV420M, 3 },
	{ "SBGGR8", V4L2_PIX_FMT_SBGGR8, 1 },
	{ "SGBRG8", V4L2_PIX_FMT_SGBRG8, 1 },
	{ "SGRBG8", V4L2_PIX_FMT_SGRBG8, 1 },
	{ "SRGGB8", V4L2_PIX_FMT_SRGGB8, 1 },
	{ "SBGGR10_DPCM8", V4L2_PIX_FMT_SBGGR10DPCM8, 1 },
	{ "SGBRG10_DPCM8", V4L2_PIX_FMT_SGBRG10DPCM8, 1 },
	{ "SGRBG10_DPCM8", V4L2_PIX_FMT_SGRBG10DPCM8, 1 },
	{ "SRGGB10_DPCM8", V4L2_PIX_FMT_SRGGB10DPCM8, 1 },
	{ "SBGGR10", V4L2_PIX_FMT_SBGGR10, 1 },
	{ "SGBRG10", V4L2_PIX_FMT_SGBRG10, 1 },
	{ "SGRBG10", V4L2_PIX_FMT_SGRBG10, 1 },
	{ "SRGGB10", V4L2_PIX_FMT_SRGGB10, 1 },
	{ "SBGGR12", V4L2_PIX_FMT_SBGGR12, 1 },
	{ "SGBRG12", V4L2_PIX_FMT_SGBRG12, 1 },
	{ "SGRBG12", V4L2_PIX_FMT_SGRBG12, 1 },
	{ "SRGGB12", V4L2_PIX_FMT_SRGGB12, 1 },
	{ "DV", V4L2_PIX_FMT_DV, 1 },
	{ "MJPEG", V4L2_PIX_FMT_MJPEG, 1 },
	{ "MPEG", V4L2_PIX_FMT_MPEG, 1 },
};

static const struct v4l2_format_info *v4l2_format_by_fourcc(unsigned int fourcc)
{
	unsigned int i;

	for (i = 0; i < ARRAY_SIZE(pixel_formats); ++i) {
		if (pixel_formats[i].fourcc == fourcc)
			return &pixel_formats[i];
	}

	return NULL;
}

static const struct v4l2_format_info *v4l2_format_by_name(const char *name)
{
	unsigned int i;

	for (i = 0; i < ARRAY_SIZE(pixel_formats); ++i) {
		if (strcasecmp(pixel_formats[i].name, name) == 0)
			return &pixel_formats[i];
	}

	return NULL;
}

static const char *v4l2_format_name(unsigned int fourcc)
{
	const struct v4l2_format_info *info;
	static char name[5];
	unsigned int i;

	info = v4l2_format_by_fourcc(fourcc);
	if (info)
		return info->name;

	for (i = 0; i < 4; ++i) {
		name[i] = fourcc & 0xff;
		fourcc >>= 8;
	}

	name[4] = '\0';
	return name;
}

static const struct {
	const char *name;
	enum v4l2_field field;
} fields[] = {
	{ "any", V4L2_FIELD_ANY },
	{ "none", V4L2_FIELD_NONE },
	{ "top", V4L2_FIELD_TOP },
	{ "bottom", V4L2_FIELD_BOTTOM },
	{ "interlaced", V4L2_FIELD_INTERLACED },
	{ "seq-tb", V4L2_FIELD_SEQ_TB },
	{ "seq-bt", V4L2_FIELD_SEQ_BT },
	{ "alternate", V4L2_FIELD_ALTERNATE },
	{ "interlaced-tb", V4L2_FIELD_INTERLACED_TB },
	{ "interlaced-bt", V4L2_FIELD_INTERLACED_BT },
};

static enum v4l2_field v4l2_field_from_string(const char *name)
{
	unsigned int i;

	for (i = 0; i < ARRAY_SIZE(fields); ++i) {
		if (strcasecmp(fields[i].name, name) == 0)
			return fields[i].field;
	}

	return -1;
}

static const char *v4l2_field_name(enum v4l2_field field)
{
	unsigned int i;

	for (i = 0; i < ARRAY_SIZE(fields); ++i) {
		if (fields[i].field == field)
			return fields[i].name;
	}

	return "unknown";
}

static void video_set_buf_type(struct device *dev, enum v4l2_buf_type type)
{
	dev->type = type;
}

static bool video_has_valid_buf_type(struct device *dev)
{
	return (int)dev->type != -1;
}

static void video_init(struct device *dev)
{
	memset(dev, 0, sizeof *dev);
	dev->fd = -1;
	dev->memtype = V4L2_MEMORY_MMAP;
	dev->buffers = NULL;
	dev->type = (enum v4l2_buf_type)-1;
}

static bool video_has_fd(struct device *dev)
{
	return dev->fd != -1;
}

static int video_set_fd(struct device *dev, int fd)
{
	if (video_has_fd(dev)) {
		fprintf(stderr, "Can't set fd (already open).\n");
		return -1;
	}

	dev->fd = fd;

	return 0;
}

static int video_open(struct device *dev, const char *devname)
{
	if (video_has_fd(dev)) {
		fprintf(stderr, "Can't open device (already open).\n");
		return -1;
	}

	dev->fd = open(devname, O_RDWR);
	if (dev->fd < 0) {
		fprintf(stderr, "Error opening device %s: %s (%d).\n", devname,
		       strerror(errno), errno);
		return dev->fd;
	}

	fprintf(stderr, "Device %s opened.\n", devname);

	dev->opened = 1;

	return 0;
}

static int video_querycap(struct device *dev, unsigned int *capabilities)
{
	struct v4l2_capability cap;
	int ret;

	memset(&cap, 0, sizeof cap);
	ret = ioctl(dev->fd, VIDIOC_QUERYCAP, &cap);
	if (ret < 0)
		return 0;

	*capabilities = cap.capabilities & V4L2_CAP_DEVICE_CAPS
		     ? cap.device_caps : cap.capabilities;

	fprintf(stderr, "Device `%s' on `%s' is a video %s (%s mplanes) device.\n",
		cap.card, cap.bus_info,
		video_is_capture(dev) ? "capture" : "output",
		video_is_mplane(dev) ? "with" : "without");
	return 0;
}

static int cap_get_buf_type(unsigned int capabilities)
{
	if (capabilities & V4L2_CAP_VIDEO_CAPTURE_MPLANE) {
		return V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE;
	} else if (capabilities & V4L2_CAP_VIDEO_OUTPUT_MPLANE) {
		return V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE;
	} else if (capabilities & V4L2_CAP_VIDEO_CAPTURE) {
		return  V4L2_BUF_TYPE_VIDEO_CAPTURE;
	} else if (capabilities & V4L2_CAP_VIDEO_OUTPUT) {
		return V4L2_BUF_TYPE_VIDEO_OUTPUT;
	} else {
		fprintf(stderr, "Device supports neither capture nor output.\n");
		return -EINVAL;
	}

	return 0;
}

static void video_close(struct device *dev)
{
	unsigned int i;

	for (i = 0; i < dev->num_planes; i++)
		free(dev->pattern[i]);

	free(dev->buffers);
	if (dev->opened)
		close(dev->fd);
}

static unsigned int get_control_type(struct device *dev, unsigned int id)
{
	struct v4l2_queryctrl query;
	int ret;

	memset(&query, 0, sizeof(query));

	query.id = id;
	ret = ioctl(dev->fd, VIDIOC_QUERYCTRL, &query);
	if (ret == -1)
		return V4L2_CTRL_TYPE_INTEGER;

	return query.type;
}

static int get_control(struct device *dev, unsigned int id, int type,
		       int64_t *val)
{
	struct v4l2_ext_controls ctrls;
	struct v4l2_ext_control ctrl;
	int ret;

	memset(&ctrls, 0, sizeof(ctrls));
	memset(&ctrl, 0, sizeof(ctrl));

	ctrls.ctrl_class = V4L2_CTRL_ID2CLASS(id);
	ctrls.count = 1;
	ctrls.controls = &ctrl;

	ctrl.id = id;

	ret = ioctl(dev->fd, VIDIOC_G_EXT_CTRLS, &ctrls);
	if (ret != -1) {
		if (type == V4L2_CTRL_TYPE_INTEGER64)
			*val = ctrl.value64;
		else
			*val = ctrl.value;
		return 0;
	}
	if (type != V4L2_CTRL_TYPE_INTEGER64 && type != V4L2_CTRL_TYPE_STRING &&
	    (errno == EINVAL || errno == ENOTTY)) {
		struct v4l2_control old;

		old.id = id;
		ret = ioctl(dev->fd, VIDIOC_G_CTRL, &old);
		if (ret != -1) {
			*val = old.value;
			return 0;
		}
	}

	fprintf(stderr, "unable to get control 0x%8.8x: %s (%d).\n",
		id, strerror(errno), errno);
	return -1;
}

static void set_control(struct device *dev, unsigned int id, int type,
		        int64_t val)
{
	struct v4l2_ext_controls ctrls;
	struct v4l2_ext_control ctrl;
	int is_64 = type == V4L2_CTRL_TYPE_INTEGER64;
	int64_t old_val = val;
	int ret;

	memset(&ctrls, 0, sizeof(ctrls));
	memset(&ctrl, 0, sizeof(ctrl));

	ctrls.ctrl_class = V4L2_CTRL_ID2CLASS(id);
	ctrls.count = 1;
	ctrls.controls = &ctrl;

	ctrl.id = id;
	if (is_64)
		ctrl.value64 = val;
	else
		ctrl.value = val;

	ret = ioctl(dev->fd, VIDIOC_S_EXT_CTRLS, &ctrls);
	if (ret != -1) {
		if (is_64)
			val = ctrl.value64;
		else
			val = ctrl.value;
	} else if (!is_64 && type != V4L2_CTRL_TYPE_STRING &&
		   (errno == EINVAL || errno == ENOTTY)) {
		struct v4l2_control old;

		old.id = id;
		old.value = val;
		ret = ioctl(dev->fd, VIDIOC_S_CTRL, &old);
		if (ret != -1)
			val = old.value;
	}
	if (ret == -1) {
		fprintf(stderr, "unable to set control 0x%8.8x: %s (%d).\n",
			id, strerror(errno), errno);
		return;
	}

	fprintf(stderr, "Control 0x%08x set to %" PRId64 ", is %" PRId64 "\n",
	       id, old_val, val);
}

static int video_get_format(struct device *dev)
{
	struct v4l2_format fmt;
	unsigned int i;
	int ret;

	memset(&fmt, 0, sizeof fmt);
	fmt.type = dev->type;

	ret = ioctl(dev->fd, VIDIOC_G_FMT, &fmt);
	if (ret < 0) {
		fprintf(stderr, "Unable to get format: %s (%d).\n", strerror(errno),
			errno);
		return ret;
	}

	if (video_is_mplane(dev)) {
		dev->width = fmt.fmt.pix_mp.width;
		dev->height = fmt.fmt.pix_mp.height;
		dev->num_planes = fmt.fmt.pix_mp.num_planes;

	    fprintf(stderr, "Video format: %s (%08x) %ux%u field %s, %u planes: \n",
			v4l2_format_name(fmt.fmt.pix_mp.pixelformat), fmt.fmt.pix_mp.pixelformat,
			fmt.fmt.pix_mp.width, fmt.fmt.pix_mp.height,
			v4l2_field_name(fmt.fmt.pix_mp.field),
			fmt.fmt.pix_mp.num_planes);

		for (i = 0; i < fmt.fmt.pix_mp.num_planes; i++) {
			dev->plane_fmt[i].bytesperline =
					fmt.fmt.pix_mp.plane_fmt[i].bytesperline;
			dev->plane_fmt[i].sizeimage =
					fmt.fmt.pix_mp.plane_fmt[i].bytesperline ?
						fmt.fmt.pix_mp.plane_fmt[i].sizeimage : 0;

			fprintf(stderr, " * Stride %u, buffer size %u\n",
				fmt.fmt.pix_mp.plane_fmt[i].bytesperline,
				fmt.fmt.pix_mp.plane_fmt[i].sizeimage);
		}
	} else {
		dev->width = fmt.fmt.pix.width;
		dev->height = fmt.fmt.pix.height;
		dev->num_planes = 1;

		dev->plane_fmt[0].bytesperline = fmt.fmt.pix.bytesperline;
		dev->plane_fmt[0].sizeimage = fmt.fmt.pix.bytesperline ? fmt.fmt.pix.sizeimage : 0;

		fprintf(stderr, "Video format: %s (%08x) %ux%u (stride %u) field %s buffer size %u\n",
			v4l2_format_name(fmt.fmt.pix.pixelformat), fmt.fmt.pix.pixelformat,
			fmt.fmt.pix.width, fmt.fmt.pix.height, fmt.fmt.pix.bytesperline,
			v4l2_field_name(fmt.fmt.pix_mp.field),
			fmt.fmt.pix.sizeimage);
	}

	return 0;
}

static int video_set_format(struct device *dev, unsigned int w, unsigned int h,
			    unsigned int format, unsigned int stride,
			    enum v4l2_field field)
{
	struct v4l2_format fmt;
	unsigned int i;
	int ret;

	memset(&fmt, 0, sizeof fmt);
	fmt.type = dev->type;

	if (video_is_mplane(dev)) {
		const struct v4l2_format_info *info = v4l2_format_by_fourcc(format);

		fmt.fmt.pix_mp.width = w;
		fmt.fmt.pix_mp.height = h;
		fmt.fmt.pix_mp.pixelformat = format;
		fmt.fmt.pix_mp.field = field;
		fmt.fmt.pix_mp.num_planes = info->n_planes;

		for (i = 0; i < fmt.fmt.pix_mp.num_planes; i++)
			fmt.fmt.pix_mp.plane_fmt[i].bytesperline = stride;
	} else {
		fmt.fmt.pix.width = w;
		fmt.fmt.pix.height = h;
		fmt.fmt.pix.pixelformat = format;
		fmt.fmt.pix.field = field;
		fmt.fmt.pix.bytesperline = stride;
	}

	ret = ioctl(dev->fd, VIDIOC_S_FMT, &fmt);
	if (ret < 0) {
		fprintf(stderr, "Unable to set format: %s (%d).\n", strerror(errno),
			errno);
		return ret;
	}

	if (video_is_mplane(dev)) {
		fprintf(stderr, "Video format set: %s (%08x) %ux%u field %s, %u planes: \n",
			v4l2_format_name(fmt.fmt.pix_mp.pixelformat), fmt.fmt.pix_mp.pixelformat,
			fmt.fmt.pix_mp.width, fmt.fmt.pix_mp.height,
			v4l2_field_name(fmt.fmt.pix_mp.field),
			fmt.fmt.pix_mp.num_planes);

		for (i = 0; i < fmt.fmt.pix_mp.num_planes; i++) {
			fprintf(stderr, " * Stride %u, buffer size %u\n",
				fmt.fmt.pix_mp.plane_fmt[i].bytesperline,
				fmt.fmt.pix_mp.plane_fmt[i].sizeimage);
		}
	} else {
		fprintf(stderr, "Video format set: %s (%08x) %ux%u (stride %u) field %s buffer size %u\n",
			v4l2_format_name(fmt.fmt.pix.pixelformat), fmt.fmt.pix.pixelformat,
			fmt.fmt.pix.width, fmt.fmt.pix.height, fmt.fmt.pix.bytesperline,
			v4l2_field_name(fmt.fmt.pix.field),
			fmt.fmt.pix.sizeimage);
	}

	return 0;
}

static int video_set_framerate(struct device *dev, struct v4l2_fract *time_per_frame)
{
	struct v4l2_streamparm parm;
	int ret;

	memset(&parm, 0, sizeof parm);
	parm.type = dev->type;

	ret = ioctl(dev->fd, VIDIOC_G_PARM, &parm);
	if (ret < 0) {
		fprintf(stderr, "Unable to get frame rate: %s (%d).\n",
			strerror(errno), errno);
		return ret;
	}

	fprintf(stderr, "Current frame rate: %u/%u\n",
		parm.parm.capture.timeperframe.numerator,
		parm.parm.capture.timeperframe.denominator);

	fprintf(stderr, "Setting frame rate to: %u/%u\n",
		time_per_frame->numerator,
		time_per_frame->denominator);

	parm.parm.capture.timeperframe.numerator = time_per_frame->numerator;
	parm.parm.capture.timeperframe.denominator = time_per_frame->denominator;

	ret = ioctl(dev->fd, VIDIOC_S_PARM, &parm);
	if (ret < 0) {
		fprintf(stderr, "Unable to set frame rate: %s (%d).\n", strerror(errno),
			errno);
		return ret;
	}

	ret = ioctl(dev->fd, VIDIOC_G_PARM, &parm);
	if (ret < 0) {
		fprintf(stderr, "Unable to get frame rate: %s (%d).\n", strerror(errno),
			errno);
		return ret;
	}

	fprintf(stderr, "Frame rate set: %u/%u\n",
		parm.parm.capture.timeperframe.numerator,
		parm.parm.capture.timeperframe.denominator);
	return 0;
}

static int video_buffer_mmap(struct device *dev, struct buffer *buffer,
			     struct v4l2_buffer *v4l2buf)
{
	unsigned int length;
	unsigned int offset;
	unsigned int i;

	for (i = 0; i < dev->num_planes; i++) {
		if (video_is_mplane(dev)) {
			length = v4l2buf->m.planes[i].length;
			offset = v4l2buf->m.planes[i].m.mem_offset;
		} else {
			length = v4l2buf->length;
			offset = v4l2buf->m.offset;
		}

		buffer->mem[i] = mmap(0, length, PROT_READ | PROT_WRITE, MAP_SHARED,
				      dev->fd, offset);
		if (buffer->mem[i] == MAP_FAILED) {
			fprintf(stderr, "Unable to map buffer %u/%u: %s (%d)\n",
			       buffer->idx, i, strerror(errno), errno);
			return -1;
		}

		buffer->size[i] = length;
		buffer->padding[i] = 0;

		fprintf(stderr, "Buffer %u/%u mapped at address %p.\n",
		       buffer->idx, i, buffer->mem[i]);
	}

	return 0;
}

static int video_buffer_munmap(struct device *dev, struct buffer *buffer)
{
	unsigned int i;
	int ret;

	for (i = 0; i < dev->num_planes; i++) {
		ret = munmap(buffer->mem[i], buffer->size[i]);
		if (ret < 0) {
			fprintf(stderr, "Unable to unmap buffer %u/%u: %s (%d)\n",
			       buffer->idx, i, strerror(errno), errno);
		}

		buffer->mem[i] = NULL;
	}

	return 0;
}

static int video_buffer_alloc_userptr(struct device *dev, struct buffer *buffer,
				      struct v4l2_buffer *v4l2buf,
				      unsigned int offset, unsigned int padding)
{
	int page_size = getpagesize();
	unsigned int length;
	unsigned int i;
	int ret;

	for (i = 0; i < dev->num_planes; i++) {
		if (video_is_mplane(dev))
			length = v4l2buf->m.planes[i].length;
		else
			length = v4l2buf->length;

		ret = posix_memalign(&buffer->mem[i], page_size,
				     length + offset + padding);
		if (ret < 0) {
			fprintf(stderr, "Unable to allocate buffer %u/%u (%d)\n",
			       buffer->idx, i, ret);
			return -ENOMEM;
		}

		buffer->mem[i] += offset;
		buffer->size[i] = length;
		buffer->padding[i] = padding;

		fprintf(stderr, "Buffer %u/%u allocated at address %p.\n",
		       buffer->idx, i, buffer->mem[i]);
	}

	return 0;
}

static void video_buffer_free_userptr(struct device *dev, struct buffer *buffer)
{
	unsigned int i;

	for (i = 0; i < dev->num_planes; i++) {
		free(buffer->mem[i]);
		buffer->mem[i] = NULL;
	}
}

static void video_buffer_fill_userptr(struct device *dev, struct buffer *buffer,
				      struct v4l2_buffer *v4l2buf)
{
	unsigned int i;

	if (!video_is_mplane(dev)) {
		v4l2buf->m.userptr = (unsigned long)buffer->mem[0];
		return;
	}

	for (i = 0; i < dev->num_planes; i++)
		v4l2buf->m.planes[i].m.userptr = (unsigned long)buffer->mem[i];
}

static void get_ts_flags(uint32_t flags, const char **ts_type, const char **ts_source)
{
	switch (flags & V4L2_BUF_FLAG_TIMESTAMP_MASK) {
	case V4L2_BUF_FLAG_TIMESTAMP_UNKNOWN:
		*ts_type = "unk";
		break;
	case V4L2_BUF_FLAG_TIMESTAMP_MONOTONIC:
		*ts_type = "mono";
		break;
	case V4L2_BUF_FLAG_TIMESTAMP_COPY:
		*ts_type = "copy";
		break;
	default:
		*ts_type = "inv";
	}
	switch (flags & V4L2_BUF_FLAG_TSTAMP_SRC_MASK) {
	case V4L2_BUF_FLAG_TSTAMP_SRC_EOF:
		*ts_source = "EoF";
		break;
	case V4L2_BUF_FLAG_TSTAMP_SRC_SOE:
		*ts_source = "SoE";
		break;
	default:
		*ts_source = "inv";
	}
}

static int video_alloc_buffers(struct device *dev, int nbufs,
	unsigned int offset, unsigned int padding)
{
	struct v4l2_plane planes[VIDEO_MAX_PLANES];
	struct v4l2_requestbuffers rb;
	struct v4l2_buffer buf;
	struct buffer *buffers;
	unsigned int i;
	int ret;

	memset(&rb, 0, sizeof rb);
	rb.count = nbufs;
	rb.type = dev->type;
	rb.memory = dev->memtype;

	ret = ioctl(dev->fd, VIDIOC_REQBUFS, &rb);
	if (ret < 0) {
		fprintf(stderr, "Unable to request buffers: %s (%d).\n", strerror(errno),
			errno);
		return ret;
	}

	fprintf(stderr, "%u buffers requested.\n", rb.count);

	buffers = malloc(rb.count * sizeof buffers[0]);
	if (buffers == NULL)
		return -ENOMEM;

	/* Map the buffers. */
	for (i = 0; i < rb.count; ++i) {
		const char *ts_type, *ts_source;

		memset(&buf, 0, sizeof buf);
		memset(planes, 0, sizeof planes);

		buf.index = i;
		buf.type = dev->type;
		buf.memory = dev->memtype;
		buf.length = VIDEO_MAX_PLANES;
		buf.m.planes = planes;

		ret = ioctl(dev->fd, VIDIOC_QUERYBUF, &buf);
		if (ret < 0) {
			fprintf(stderr, "Unable to query buffer %u: %s (%d).\n", i,
				strerror(errno), errno);
			return ret;
		}
		get_ts_flags(buf.flags, &ts_type, &ts_source);
		fprintf(stderr, "length: %u offset: %u timestamp type/source: %s/%s\n",
		       buf.length, buf.m.offset, ts_type, ts_source);

		buffers[i].idx = i;

		switch (dev->memtype) {
		case V4L2_MEMORY_MMAP:
			ret = video_buffer_mmap(dev, &buffers[i], &buf);
			break;

		case V4L2_MEMORY_USERPTR:
			ret = video_buffer_alloc_userptr(dev, &buffers[i], &buf, offset, padding);
			break;

		default:
			break;
		}

		if (ret < 0)
			return ret;
	}

	dev->timestamp_type = buf.flags & V4L2_BUF_FLAG_TIMESTAMP_MASK;
	dev->buffers = buffers;
	dev->nbufs = rb.count;
	return 0;
}

static int video_free_buffers(struct device *dev)
{
	struct v4l2_requestbuffers rb;
	unsigned int i;
	int ret;

	if (dev->nbufs == 0)
		return 0;

	for (i = 0; i < dev->nbufs; ++i) {
		switch (dev->memtype) {
		case V4L2_MEMORY_MMAP:
			ret = video_buffer_munmap(dev, &dev->buffers[i]);
			if (ret < 0)
				return ret;
			break;
		case V4L2_MEMORY_USERPTR:
			video_buffer_free_userptr(dev, &dev->buffers[i]);
			break;
		default:
			break;
		}
	}

	memset(&rb, 0, sizeof rb);
	rb.count = 0;
	rb.type = dev->type;
	rb.memory = dev->memtype;

	ret = ioctl(dev->fd, VIDIOC_REQBUFS, &rb);
	if (ret < 0) {
		fprintf(stderr, "Unable to release buffers: %s (%d).\n",
			strerror(errno), errno);
		return ret;
	}

	fprintf(stderr, "%u buffers released.\n", dev->nbufs);

	free(dev->buffers);
	dev->nbufs = 0;
	dev->buffers = NULL;

	return 0;
}

static int video_queue_buffer(struct device *dev, int index, enum buffer_fill_mode fill)
{
	struct v4l2_buffer buf;
	struct v4l2_plane planes[VIDEO_MAX_PLANES];
	int ret;
	unsigned int i;

	memset(&buf, 0, sizeof buf);
	buf.index = index;
	buf.type = dev->type;
	buf.memory = dev->memtype;

	if (video_is_output(dev)) {
		buf.flags = dev->buffer_output_flags;
		if (dev->timestamp_type == V4L2_BUF_FLAG_TIMESTAMP_COPY) {
			struct timespec ts;

			clock_gettime(CLOCK_MONOTONIC, &ts);
			buf.timestamp.tv_sec = ts.tv_sec;
			buf.timestamp.tv_usec = ts.tv_nsec / 1000;
		}
	}

	if (video_is_mplane(dev)) {
		buf.m.planes = planes;
		buf.length = dev->num_planes;
	} else {
		buf.length = dev->buffers[index].size[0];
	}

	if (dev->memtype == V4L2_MEMORY_USERPTR) {
		if (video_is_mplane(dev)) {
			for (i = 0; i < dev->num_planes; i++)
				buf.m.planes[i].m.userptr = (unsigned long)dev->buffers[index].mem[i];
		} else {
			buf.m.userptr = (unsigned long)dev->buffers[index].mem[0];
		}
	}

	for (i = 0; i < dev->num_planes; i++) {
		if (video_is_output(dev)) {
			if (video_is_mplane(dev))
				buf.m.planes[i].bytesused = dev->patternsize[i];
			else
				buf.bytesused = dev->patternsize[i];

			memcpy(dev->buffers[buf.index].mem[i], dev->pattern[i],
			       dev->patternsize[i]);
		} else {
			if (fill & BUFFER_FILL_FRAME)
				memset(dev->buffers[buf.index].mem[i], 0x55,
				       dev->buffers[index].size[i]);
			if (fill & BUFFER_FILL_PADDING)
				memset(dev->buffers[buf.index].mem[i] +
					dev->buffers[index].size[i],
				       0x55, dev->buffers[index].padding[i]);
		}
	}

	ret = ioctl(dev->fd, VIDIOC_QBUF, &buf);
	if (ret < 0)
		fprintf(stderr, "Unable to queue buffer: %s (%d).\n",
			strerror(errno), errno);

	return ret;
}

static int video_enable(struct device *dev, int enable)
{
	int type = dev->type;
	int ret;

	ret = ioctl(dev->fd, enable ? VIDIOC_STREAMON : VIDIOC_STREAMOFF, &type);
	if (ret < 0) {
		fprintf(stderr, "Unable to %s streaming: %s (%d).\n",
			enable ? "start" : "stop", strerror(errno), errno);
		return ret;
	}

	return 0;
}

static void video_query_menu(struct device *dev, struct v4l2_queryctrl *query,
			     unsigned int value)
{
	struct v4l2_querymenu menu;
	int ret;

	for (menu.index = query->minimum;
	     menu.index <= (unsigned)query->maximum; menu.index++) {
		menu.id = query->id;
		ret = ioctl(dev->fd, VIDIOC_QUERYMENU, &menu);
		if (ret < 0)
			continue;

		if (query->type == V4L2_CTRL_TYPE_MENU)
			fprintf(stderr, "  %u: %.32s%s\n", menu.index, menu.name,
			       menu.index == value ? " (*)" : "");
		else
			fprintf(stderr, "  %u: %lld%s\n", menu.index, menu.value,
			       menu.index == value ? " (*)" : "");
	};
}

static void video_list_controls(struct device *dev)
{
	struct v4l2_queryctrl query;
	unsigned int nctrls = 0;
	char value[24];
	int64_t val64;
	int ret;

#ifndef V4L2_CTRL_FLAG_NEXT_CTRL
	unsigned int i;

	for (i = V4L2_CID_BASE; i <= V4L2_CID_LASTP1; ++i) {
		query.id = i;
#else
	query.id = 0;
	while (1) {
		query.id |= V4L2_CTRL_FLAG_NEXT_CTRL;
#endif
		ret = ioctl(dev->fd, VIDIOC_QUERYCTRL, &query);
		if (ret < 0)
			break;

		if (query.flags & V4L2_CTRL_FLAG_DISABLED)
			continue;

		if (query.type == V4L2_CTRL_TYPE_CTRL_CLASS) {
			fprintf(stderr, "--- %s (class 0x%08x) ---\n", query.name, query.id);
			continue;
		}

		ret = get_control(dev, query.id, query.type, &val64);
		if (ret < 0)
			strcpy(value, "n/a");
		else
			sprintf(value, "%" PRId64, val64);

		fprintf(stderr, "control 0x%08x `%s' min %d max %d step %d default %d current %s.\n",
			query.id, query.name, query.minimum, query.maximum,
			query.step, query.default_value, value);

		if (query.type == V4L2_CTRL_TYPE_MENU ||
		    query.type == V4L2_CTRL_TYPE_INTEGER_MENU)
			video_query_menu(dev, &query, val64);

		nctrls++;
	}

	if (nctrls)
		fprintf(stderr, "%u control%s found.\n", nctrls, nctrls > 1 ? "s" : "");
	else
		fprintf(stderr, "No control found.\n");
}

static void video_enum_frame_intervals(struct device *dev, __u32 pixelformat,
	unsigned int width, unsigned int height)
{
	struct v4l2_frmivalenum ival;
	unsigned int i;
	int ret;

	for (i = 0; ; ++i) {
		memset(&ival, 0, sizeof ival);
		ival.index = i;
		ival.pixel_format = pixelformat;
		ival.width = width;
		ival.height = height;
		ret = ioctl(dev->fd, VIDIOC_ENUM_FRAMEINTERVALS, &ival);
		if (ret < 0)
			break;

		if (i != ival.index)
			fprintf(stderr, "Warning: driver returned wrong ival index "
				"%u.\n", ival.index);
		if (pixelformat != ival.pixel_format)
			fprintf(stderr, "Warning: driver returned wrong ival pixel "
				"format %08x.\n", ival.pixel_format);
		if (width != ival.width)
			fprintf(stderr, "Warning: driver returned wrong ival width "
				"%u.\n", ival.width);
		if (height != ival.height)
			fprintf(stderr, "Warning: driver returned wrong ival height "
				"%u.\n", ival.height);

		if (i != 0)
			fprintf(stderr, ", ");

		switch (ival.type) {
		case V4L2_FRMIVAL_TYPE_DISCRETE:
			fprintf(stderr, "%u/%u",
				ival.discrete.numerator,
				ival.discrete.denominator);
			break;

		case V4L2_FRMIVAL_TYPE_CONTINUOUS:
			fprintf(stderr, "%u/%u - %u/%u",
				ival.stepwise.min.numerator,
				ival.stepwise.min.denominator,
				ival.stepwise.max.numerator,
				ival.stepwise.max.denominator);
			return;

		case V4L2_FRMIVAL_TYPE_STEPWISE:
			fprintf(stderr, "%u/%u - %u/%u (by %u/%u)",
				ival.stepwise.min.numerator,
				ival.stepwise.min.denominator,
				ival.stepwise.max.numerator,
				ival.stepwise.max.denominator,
				ival.stepwise.step.numerator,
				ival.stepwise.step.denominator);
			return;

		default:
			break;
		}
	}
}

static void video_enum_frame_sizes(struct device *dev, __u32 pixelformat)
{
	struct v4l2_frmsizeenum frame;
	unsigned int i;
	int ret;

	for (i = 0; ; ++i) {
		memset(&frame, 0, sizeof frame);
		frame.index = i;
		frame.pixel_format = pixelformat;
		ret = ioctl(dev->fd, VIDIOC_ENUM_FRAMESIZES, &frame);
		if (ret < 0)
			break;

		if (i != frame.index)
			fprintf(stderr, "Warning: driver returned wrong frame index "
				"%u.\n", frame.index);
		if (pixelformat != frame.pixel_format)
			fprintf(stderr, "Warning: driver returned wrong frame pixel "
				"format %08x.\n", frame.pixel_format);

		switch (frame.type) {
		case V4L2_FRMSIZE_TYPE_DISCRETE:
			fprintf(stderr, "\tFrame size: %ux%u (", frame.discrete.width,
				frame.discrete.height);
			video_enum_frame_intervals(dev, frame.pixel_format,
				frame.discrete.width, frame.discrete.height);
			fprintf(stderr, ")\n");
			break;

		case V4L2_FRMSIZE_TYPE_CONTINUOUS:
			fprintf(stderr, "\tFrame size: %ux%u - %ux%u (",
				frame.stepwise.min_width,
				frame.stepwise.min_height,
				frame.stepwise.max_width,
				frame.stepwise.max_height);
			video_enum_frame_intervals(dev, frame.pixel_format,
				frame.stepwise.max_width,
				frame.stepwise.max_height);
			fprintf(stderr, ")\n");
			break;

		case V4L2_FRMSIZE_TYPE_STEPWISE:
			fprintf(stderr, "\tFrame size: %ux%u - %ux%u (by %ux%u) (\n",
				frame.stepwise.min_width,
				frame.stepwise.min_height,
				frame.stepwise.max_width,
				frame.stepwise.max_height,
				frame.stepwise.step_width,
				frame.stepwise.step_height);
			video_enum_frame_intervals(dev, frame.pixel_format,
				frame.stepwise.max_width,
				frame.stepwise.max_height);
			fprintf(stderr, ")\n");
			break;

		default:
			break;
		}
	}
}

static void video_enum_formats(struct device *dev, enum v4l2_buf_type type)
{
	struct v4l2_fmtdesc fmt;
	unsigned int i;
	int ret;

	for (i = 0; ; ++i) {
		memset(&fmt, 0, sizeof fmt);
		fmt.index = i;
		fmt.type = type;
		ret = ioctl(dev->fd, VIDIOC_ENUM_FMT, &fmt);
		if (ret < 0)
			break;

		if (i != fmt.index)
			fprintf(stderr, "Warning: driver returned wrong format index "
				"%u.\n", fmt.index);
		if (type != fmt.type)
			fprintf(stderr, "Warning: driver returned wrong format type "
				"%u.\n", fmt.type);

		fprintf(stderr, "\tFormat %u: %s (%08x)\n", i,
			v4l2_format_name(fmt.pixelformat), fmt.pixelformat);
		fprintf(stderr, "\tType: %s (%u)\n", v4l2_buf_type_name(fmt.type),
			fmt.type);
		fprintf(stderr, "\tName: %.32s\n", fmt.description);
		video_enum_frame_sizes(dev, fmt.pixelformat);
		fprintf(stderr, "\n");
	}
}

static void video_enum_inputs(struct device *dev)
{
	struct v4l2_input input;
	unsigned int i;
	int ret;

	for (i = 0; ; ++i) {
		memset(&input, 0, sizeof input);
		input.index = i;
		ret = ioctl(dev->fd, VIDIOC_ENUMINPUT, &input);
		if (ret < 0)
			break;

		if (i != input.index)
			fprintf(stderr, "Warning: driver returned wrong input index "
				"%u.\n", input.index);

		fprintf(stderr, "\tInput %u: %s.\n", i, input.name);
	}

	fprintf(stderr, "\n");
}

static int video_get_input(struct device *dev)
{
	__u32 input;
	int ret;

	ret = ioctl(dev->fd, VIDIOC_G_INPUT, &input);
	if (ret < 0) {
		fprintf(stderr, "Unable to get current input: %s (%d).\n",
			strerror(errno), errno);
		return ret;
	}

	return input;
}

static int video_set_input(struct device *dev, unsigned int input)
{
	__u32 _input = input;
	int ret;

	ret = ioctl(dev->fd, VIDIOC_S_INPUT, &_input);
	if (ret < 0)
		fprintf(stderr, "Unable to select input %u: %s (%d).\n", input,
			strerror(errno), errno);

	return ret;
}

static int video_set_quality(struct device *dev, unsigned int quality)
{
	struct v4l2_jpegcompression jpeg;
	int ret;

	if (quality == (unsigned int)-1)
		return 0;

	memset(&jpeg, 0, sizeof jpeg);
	jpeg.quality = quality;

	ret = ioctl(dev->fd, VIDIOC_S_JPEGCOMP, &jpeg);
	if (ret < 0) {
		fprintf(stderr, "Unable to set quality to %u: %s (%d).\n", quality,
			strerror(errno), errno);
		return ret;
	}

	ret = ioctl(dev->fd, VIDIOC_G_JPEGCOMP, &jpeg);
	if (ret >= 0)
		fprintf(stderr, "Quality set to %u\n", jpeg.quality);

	return 0;
}

static int video_load_test_pattern(struct device *dev, const char *filename)
{
	unsigned int plane;
	unsigned int size;
	int fd = -1;
	int ret;

	if (filename != NULL) {
		fd = open(filename, O_RDONLY);
		if (fd == -1) {
			fprintf(stderr, "Unable to open test pattern file '%s': %s (%d).\n",
				filename, strerror(errno), errno);
			return -errno;
		}
	}

	/* Load or generate the test pattern */
	for (plane = 0; plane < dev->num_planes; plane++) {
		size = dev->buffers[0].size[plane];
		dev->pattern[plane] = malloc(size);
		if (dev->pattern[plane] == NULL) {
			ret = -ENOMEM;
			goto done;
		}

		if (filename != NULL) {
			ret = read(fd, dev->pattern[plane], size);
			if (ret != (int)size && dev->plane_fmt[plane].bytesperline != 0) {
				fprintf(stderr, "Test pattern file size %u doesn't match image size %u\n",
					ret, size);
				ret = -EINVAL;
				goto done;
			}
		} else {
			uint8_t *data = dev->pattern[plane];
			unsigned int i;

			if (dev->plane_fmt[plane].bytesperline == 0) {
				fprintf(stderr, "Compressed format detected for plane %u and no test pattern filename given.\n"
					"The test pattern can't be generated automatically.\n", plane);
				ret = -EINVAL;
				goto done;
			}

			for (i = 0; i < dev->plane_fmt[plane].sizeimage; ++i)
				*data++ = i;
		}

		dev->patternsize[plane] = size;
	}

	ret = 0;

done:
	if (fd != -1)
		close(fd);

	return ret;
}

static int video_prepare_capture(struct device *dev, int nbufs, unsigned int offset,
				 const char *filename, enum buffer_fill_mode fill)
{
	unsigned int padding;
	unsigned int i;
	int ret;

	/* Allocate and map buffers. */
	padding = (fill & BUFFER_FILL_PADDING) ? 4096 : 0;
	if ((ret = video_alloc_buffers(dev, nbufs, offset, padding)) < 0)
		return ret;

	if (video_is_output(dev)) {
		ret = video_load_test_pattern(dev, filename);
		if (ret < 0)
			return ret;
	}

	/* Queue the buffers. */
	for (i = 0; i < dev->nbufs; ++i) {
		ret = video_queue_buffer(dev, i, fill);
		if (ret < 0)
			return ret;
	}

	return 0;
}

static void video_verify_buffer(struct device *dev, struct v4l2_buffer *buf)
{
	struct buffer *buffer = &dev->buffers[buf->index];
	unsigned int plane;
	unsigned int i;

	for (plane = 0; plane < dev->num_planes; ++plane) {
		const uint8_t *data = buffer->mem[plane] + buffer->size[plane];
		unsigned int errors = 0;
		unsigned int dirty = 0;
		unsigned int length;

		if (video_is_mplane(dev))
			length = buf->m.planes[plane].bytesused;
		else
			length = buf->bytesused;

		if (dev->plane_fmt[plane].sizeimage &&
		    dev->plane_fmt[plane].sizeimage != length)
			fprintf(stderr, "Warning: bytes used %u != image size %u for plane %u\n",
			       length, dev->plane_fmt[plane].sizeimage, plane);

		if (buffer->padding[plane] == 0)
			continue;

		for (i = 0; i < buffer->padding[plane]; ++i) {
			if (data[i] != 0x55) {
				errors++;
				dirty = i + 1;
			}
		}

		if (errors) {
			fprintf(stderr, "Warning: %u bytes overwritten among %u first padding bytes for plane %u\n",
			       errors, dirty, plane);

			dirty = (dirty + 15) & ~15;
			dirty = dirty > 32 ? 32 : dirty;

			for (i = 0; i < dirty; ++i) {
				fprintf(stderr, "%02x ", data[i]);
				if (i % 16 == 15)
					fprintf(stderr, "\n");
			}
		}
	}
}

static void video_save_image(struct device *dev, struct v4l2_buffer *buf,
			     const char *pattern, unsigned int sequence)
{
	unsigned int size;
	unsigned int i;
	char *filename;
	const char *p;
	bool append;
	int ret = 0;
	int fd;

	size = strlen(pattern);
	filename = malloc(size + 12);
	if (filename == NULL)
		return;

	p = strchr(pattern, '#');
	if (p != NULL) {
		sprintf(filename, "%.*s%06u%s", (int)(p - pattern), pattern,
			sequence, p + 1);
		append = false;
	} else {
		strcpy(filename, pattern);
		append = true;
	}

	fd = open(filename, O_CREAT | O_WRONLY | (append ? O_APPEND : O_TRUNC),
		  S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
	free(filename);
	if (fd == -1)
		return;

	for (i = 0; i < dev->num_planes; i++) {
		unsigned int length;

		if (video_is_mplane(dev))
			length = buf->m.planes[i].bytesused;
		else
			length = buf->bytesused;

		ret = write(fd, dev->buffers[buf->index].mem[i], length);
		if (ret < 0) {
			fprintf(stderr, "write error: %s (%d)\n", strerror(errno), errno);
			break;
		} else if (ret != (int)length)
			fprintf(stderr, "write error: only %d bytes written instead of %u\n",
			       ret, length);
	}
	close(fd);
}

static void video_stdout_image(struct device *dev, struct v4l2_buffer *buf)
{
    int ret;

    fprintf(stderr, "stdout");
    ret = fwrite(dev->buffers[buf->index].mem, buf->bytesused, 1, stdout);

    if (ret < 0)
        fprintf(stderr, "write error: %s (%d)\n", strerror(errno), errno);
    else if (ret != (int)buf->bytesused)
        fprintf(stderr, "write error: only %d bytes written instead of %u\n",
                ret, buf->bytesused);
}

static int video_do_capture(struct device *dev, unsigned int nframes,
	unsigned int skip, unsigned int delay, const char *pattern,
	int do_requeue_last, enum buffer_fill_mode fill, int do_stdout)
{
	struct v4l2_plane planes[VIDEO_MAX_PLANES];
	struct v4l2_buffer buf;
	struct timespec start;
	struct timeval last;
	struct timespec ts;
	unsigned int size;
	unsigned int i;
	double bps;
	double fps;
	int ret;

	/* Start streaming. */
	ret = video_enable(dev, 1);
	if (ret < 0)
		goto done;

	size = 0;
	clock_gettime(CLOCK_MONOTONIC, &start);
	last.tv_sec = start.tv_sec;
	last.tv_usec = start.tv_nsec / 1000;

	for (i = 0; i < nframes; ++i) {
		const char *ts_type, *ts_source;
		/* Dequeue a buffer. */
		memset(&buf, 0, sizeof buf);
		memset(planes, 0, sizeof planes);

		buf.type = dev->type;
		buf.memory = dev->memtype;
		buf.length = VIDEO_MAX_PLANES;
		buf.m.planes = planes;

		ret = ioctl(dev->fd, VIDIOC_DQBUF, &buf);
		if (ret < 0) {
			if (errno != EIO) {
				fprintf(stderr, "Unable to dequeue buffer: %s (%d).\n",
					strerror(errno), errno);
				goto done;
			}
			buf.type = dev->type;
			buf.memory = dev->memtype;
			if (dev->memtype == V4L2_MEMORY_USERPTR)
				video_buffer_fill_userptr(dev, &dev->buffers[i], &buf);
		}

		if (video_is_capture(dev))
			video_verify_buffer(dev, &buf);

		size += buf.bytesused;

		fps = (buf.timestamp.tv_sec - last.tv_sec) * 1000000
		    + buf.timestamp.tv_usec - last.tv_usec;
		fps = fps ? 1000000.0 / fps : 0.0;

		clock_gettime(CLOCK_MONOTONIC, &ts);
		get_ts_flags(buf.flags, &ts_type, &ts_source);
		fprintf(stderr, "%u (%u) [%c] %s %u %u B %ld.%06ld %ld.%06ld %.3f fps ts %s/%s\n", i, buf.index,
			(buf.flags & V4L2_BUF_FLAG_ERROR) ? 'E' : '-',
			v4l2_field_name(buf.field),
			buf.sequence, buf.bytesused, buf.timestamp.tv_sec,
			buf.timestamp.tv_usec, ts.tv_sec, ts.tv_nsec/1000, fps,
			ts_type, ts_source);

		last = buf.timestamp;

		/* Save the image. */
		if (video_is_capture(dev) && pattern && !skip)
			video_save_image(dev, &buf, pattern, i);

		if (video_is_capture(dev) && do_stdout && !skip)
			video_stdout_image(dev, &buf);

		if (skip)
			--skip;

		/* Requeue the buffer. */
		if (delay > 0)
			usleep(delay * 1000);

		fflush(stdout);

		if (i == nframes - dev->nbufs && !do_requeue_last)
			continue;

		ret = video_queue_buffer(dev, buf.index, fill);
		if (ret < 0) {
			fprintf(stderr, "Unable to requeue buffer: %s (%d).\n",
				strerror(errno), errno);
			goto done;
		}
	}

	/* Stop streaming. */
	video_enable(dev, 0);

	if (nframes == 0) {
		fprintf(stderr, "No frames captured.\n");
		goto done;
	}

	if (ts.tv_sec == start.tv_sec && ts.tv_nsec == start.tv_nsec)
		goto done;

	ts.tv_sec -= start.tv_sec;
	ts.tv_nsec -= start.tv_nsec;
	if (ts.tv_nsec < 0) {
		ts.tv_sec--;
		ts.tv_nsec += 1000000000;
	}

	bps = size/(ts.tv_nsec/1000.0+1000000.0*ts.tv_sec)*1000000.0;
	fps = i/(ts.tv_nsec/1000.0+1000000.0*ts.tv_sec)*1000000.0;

	fprintf(stderr, "Captured %u frames in %lu.%06lu seconds (%f fps, %f B/s).\n",
		i, ts.tv_sec, ts.tv_nsec/1000, fps, bps);

done:
	return video_free_buffers(dev);
}

#define V4L_BUFFERS_DEFAULT	8
#define V4L_BUFFERS_MAX		32

static void usage(const char *argv0)
{
	fprintf(stderr, "Usage: %s [options] device\n", argv0);
	fprintf(stderr, "Supported options:\n");
	fprintf(stderr, "-B, --buffer-type		Buffer type (\"capture\", \"output\",\n");
	fprintf(stderr, "                                \"capture-mplane\" or \"output-mplane\")\n");
	fprintf(stderr, "-c, --capture[=nframes]		Capture frames\n");
	fprintf(stderr, "-C, --check-overrun		Verify dequeued frames for buffer overrun\n");
	fprintf(stderr, "-d, --delay			Delay (in ms) before requeuing buffers\n");
	fprintf(stderr, "-f, --format format		Set the video format\n");
	fprintf(stderr, "-F, --file[=name]		Read/write frames from/to disk\n");
	fprintf(stderr, "\tFor video capture devices, the first '#' character in the file name is\n");
	fprintf(stderr, "\texpanded to the frame sequence number. The default file name is\n");
	fprintf(stderr, "\t'frame-#.bin'.\n");
	fprintf(stderr, "-h, --help			Show this help screen\n");
	fprintf(stderr, "-i, --input input		Select the video input\n");
	fprintf(stderr, "-I, --fill-frames		Fill frames with check pattern before queuing them\n");
	fprintf(stderr, "-l, --list-controls		List available controls\n");
	fprintf(stderr, "-n, --nbufs n			Set the number of video buffers\n");
	fprintf(stderr, "-p, --pause			Pause before starting the video stream\n");
	fprintf(stderr, "-q, --quality n			MJPEG quality (0-100)\n");
	fprintf(stderr, "-r, --get-control ctrl		Get control 'ctrl'\n");
	fprintf(stderr, "-R, --realtime=[priority]	Enable realtime RR scheduling\n");
	fprintf(stderr, "-s, --size WxH			Set the frame size\n");
	fprintf(stderr, "-t, --time-per-frame num/denom	Set the time per frame (eg. 1/25 = 25 fps)\n");
	fprintf(stderr, "-u, --userptr			Use the user pointers streaming method\n");
	fprintf(stderr, "-w, --set-control 'ctrl value'	Set control 'ctrl' to 'value'\n");
	fprintf(stderr, "    --enum-formats		Enumerate formats\n");
	fprintf(stderr, "    --enum-inputs		Enumerate inputs\n");
	fprintf(stderr, "    --fd                        Use a numeric file descriptor insted of a device\n");
	fprintf(stderr, "    --field			Interlaced format field order\n");
	fprintf(stderr, "    --no-query			Don't query capabilities on open\n");
	fprintf(stderr, "    --offset			User pointer buffer offset from page start\n");
	fprintf(stderr, "    --requeue-last		Requeue the last buffers before streamoff\n");
	fprintf(stderr, "    --timestamp-source		Set timestamp source on output buffers [eof, soe]\n");
	fprintf(stderr, "    --skip n			Skip the first n frames\n");
	fprintf(stderr, "    --sleep-forever		Sleep forever after configuring the device\n");
	fprintf(stderr, "    --stride value		Line stride in bytes\n");
}

#define OPT_ENUM_FORMATS	256
#define OPT_ENUM_INPUTS		257
#define OPT_SKIP_FRAMES		258
#define OPT_NO_QUERY		259
#define OPT_SLEEP_FOREVER	260
#define OPT_USERPTR_OFFSET	261
#define OPT_REQUEUE_LAST	262
#define OPT_STRIDE		263
#define OPT_FD			264
#define OPT_TSTAMP_SRC		265
#define OPT_FIELD		266
#define OPT_STDOUT		267

static struct option opts[] = {
	{"buffer-type", 1, 0, 'B'},
	{"capture", 2, 0, 'c'},
	{"check-overrun", 0, 0, 'C'},
	{"delay", 1, 0, 'd'},
	{"enum-formats", 0, 0, OPT_ENUM_FORMATS},
	{"enum-inputs", 0, 0, OPT_ENUM_INPUTS},
	{"fd", 1, 0, OPT_FD},
	{"field", 1, 0, OPT_FIELD},
	{"file", 2, 0, 'F'},
	{"fill-frames", 0, 0, 'I'},
	{"stdout", 0, 0, OPT_STDOUT},
	{"format", 1, 0, 'f'},
	{"help", 0, 0, 'h'},
	{"input", 1, 0, 'i'},
	{"list-controls", 0, 0, 'l'},
	{"nbufs", 1, 0, 'n'},
	{"no-query", 0, 0, OPT_NO_QUERY},
	{"offset", 1, 0, OPT_USERPTR_OFFSET},
	{"pause", 0, 0, 'p'},
	{"quality", 1, 0, 'q'},
	{"get-control", 1, 0, 'r'},
	{"requeue-last", 0, 0, OPT_REQUEUE_LAST},
	{"realtime", 2, 0, 'R'},
	{"size", 1, 0, 's'},
	{"set-control", 1, 0, 'w'},
	{"skip", 1, 0, OPT_SKIP_FRAMES},
	{"sleep-forever", 0, 0, OPT_SLEEP_FOREVER},
	{"stride", 1, 0, OPT_STRIDE},
	{"time-per-frame", 1, 0, 't'},
	{"timestamp-source", 1, 0, OPT_TSTAMP_SRC},
	{"userptr", 0, 0, 'u'},
	{0, 0, 0, 0}
};

int main(int argc, char *argv[])
{
	struct sched_param sched;
	struct device dev;
	int ret;

	/* Options parsings */
	const struct v4l2_format_info *info;
	/* Use video capture by default if query isn't done. */
	unsigned int capabilities = V4L2_CAP_VIDEO_CAPTURE;
	int do_file = 0, do_capture = 0, do_pause = 0;
	int do_set_time_per_frame = 0;
	int do_enum_formats = 0, do_set_format = 0;
	int do_enum_inputs = 0, do_set_input = 0;
	int do_list_controls = 0, do_get_control = 0, do_set_control = 0;
	int do_sleep_forever = 0, do_requeue_last = 0;
	int do_rt = 0;
	int no_query = 0; 
	int do_stdout = 0;
	char *endptr;
	int c;

	/* Controls */
	int ctrl_name = 0;
	int ctrl_value = 0;

	/* Video buffers */
	enum v4l2_memory memtype = V4L2_MEMORY_MMAP;
	unsigned int pixelformat = V4L2_PIX_FMT_YUYV;
	unsigned int width = 640;
	unsigned int height = 480;
	unsigned int stride = 0;
	unsigned int nbufs = V4L_BUFFERS_DEFAULT;
	unsigned int input = 0;
	unsigned int skip = 0;
	unsigned int quality = (unsigned int)-1;
	unsigned int userptr_offset = 0;
	struct v4l2_fract time_per_frame = {1, 25};
	enum v4l2_field field = V4L2_FIELD_ANY;

	/* Capture loop */
	enum buffer_fill_mode fill_mode = BUFFER_FILL_NONE;
	unsigned int delay = 0, nframes = (unsigned int)-1;
	const char *filename = "frame-#.bin";

	unsigned int rt_priority = 1;

	video_init(&dev);

	opterr = 0;
	while ((c = getopt_long(argc, argv, "B:c::Cd:f:F::hi:Iln:pq:r:R::s:t:uw:", opts, NULL)) != -1) {

		switch (c) {
		case 'B':
			ret = v4l2_buf_type_from_string(optarg);
			if (ret == -1) {
				fprintf(stderr, "Bad buffer type \"%s\"\n", optarg);
				return 1;
			}
			video_set_buf_type(&dev, ret);
			break;
		case 'c':
			do_capture = 1;
			if (optarg)
				nframes = atoi(optarg);
			break;
		case 'C':
			fill_mode |= BUFFER_FILL_PADDING;
			break;
		case 'd':
			delay = atoi(optarg);
			break;
		case 'f':
			do_set_format = 1;
			info = v4l2_format_by_name(optarg);
			if (info == NULL) {
				fprintf(stderr, "Unsupported video format '%s'\n", optarg);
				return 1;
			}
			pixelformat = info->fourcc;
			break;
		case 'F':
			do_file = 1;
			if (optarg)
				filename = optarg;
			break;
		case 'h':
			usage(argv[0]);
			return 0;
		case 'i':
			do_set_input = 1;
			input = atoi(optarg);
			break;
		case 'I':
			fill_mode |= BUFFER_FILL_FRAME;
			break;
		case 'l':
			do_list_controls = 1;
			break;
		case 'n':
			nbufs = atoi(optarg);
			if (nbufs > V4L_BUFFERS_MAX)
				nbufs = V4L_BUFFERS_MAX;
			break;
		case 'p':
			do_pause = 1;
			break;
		case 'q':
			quality = atoi(optarg);
			break;
		case 'r':
			ctrl_name = strtol(optarg, &endptr, 0);
			if (*endptr != 0) {
				fprintf(stderr, "Invalid control name '%s'\n", optarg);
				return 1;
			}
			do_get_control = 1;
			break;
		case 'R':
			do_rt = 1;
			if (optarg)
				rt_priority = atoi(optarg);
			break;
		case 's':
			do_set_format = 1;
			width = strtol(optarg, &endptr, 10);
			if (*endptr != 'x' || endptr == optarg) {
				fprintf(stderr, "Invalid size '%s'\n", optarg);
				return 1;
			}
			height = strtol(endptr + 1, &endptr, 10);
			if (*endptr != 0) {
				fprintf(stderr, "Invalid size '%s'\n", optarg);
				return 1;
			}
			break;
		case 't':
			do_set_time_per_frame = 1;
			time_per_frame.numerator = strtol(optarg, &endptr, 10);
			if (*endptr != '/' || endptr == optarg) {
				fprintf(stderr, "Invalid time per frame '%s'\n", optarg);
				return 1;
			}
			time_per_frame.denominator = strtol(endptr + 1, &endptr, 10);
			if (*endptr != 0) {
				fprintf(stderr, "Invalid time per frame '%s'\n", optarg);
				return 1;
			}
			break;
		case 'u':
			memtype = V4L2_MEMORY_USERPTR;
			break;
		case 'w':
			ctrl_name = strtol(optarg, &endptr, 0);
			if (*endptr != ' ' || endptr == optarg) {
				fprintf(stderr, "Invalid control name '%s'\n", optarg);
				return 1;
			}
			ctrl_value = strtol(endptr + 1, &endptr, 0);
			if (*endptr != 0) {
				fprintf(stderr, "Invalid control value '%s'\n", optarg);
				return 1;
			}
			do_set_control = 1;
			break;
		case OPT_ENUM_FORMATS:
			do_enum_formats = 1;
			break;
		case OPT_ENUM_INPUTS:
			do_enum_inputs = 1;
			break;
		case OPT_FD:
			ret = atoi(optarg);
			if (ret < 0) {
				fprintf(stderr, "Bad file descriptor %d\n", ret);
				return 1;
			}
			fprintf(stderr, "Using file descriptor %d\n", ret);
			video_set_fd(&dev, ret);
			break;
		case OPT_FIELD:
			field = v4l2_field_from_string(optarg);
			if (field == (enum v4l2_field)-1) {
				fprintf(stderr, "Invalid field order '%s'\n", optarg);
				return 1;
			}
			break;
		case OPT_NO_QUERY:
			no_query = 1;
			break;
		case OPT_REQUEUE_LAST:
			do_requeue_last = 1;
			break;
		case OPT_SKIP_FRAMES:
			skip = atoi(optarg);
			break;
		case OPT_SLEEP_FOREVER:
			do_sleep_forever = 1;
			break;
		case OPT_STRIDE:
			stride = atoi(optarg);
			break;
		case OPT_TSTAMP_SRC:
			if (!strcmp(optarg, "eof")) {
				dev.buffer_output_flags |= V4L2_BUF_FLAG_TSTAMP_SRC_EOF;
			} else if (!strcmp(optarg, "soe")) {
				dev.buffer_output_flags |= V4L2_BUF_FLAG_TSTAMP_SRC_SOE;
			} else {
				fprintf(stderr, "Invalid timestamp source %s\n", optarg);
				return 1;
			}
			break;
		case OPT_USERPTR_OFFSET:
			userptr_offset = atoi(optarg);
			break;
		case OPT_STDOUT:
			do_stdout = 1;
			break;
		default:
			fprintf(stderr, "Invalid option -%c\n", c);
			fprintf(stderr, "Run %s -h for help.\n", argv[0]);
			return 1;
		}
	}

	if ((fill_mode & BUFFER_FILL_PADDING) && memtype != V4L2_MEMORY_USERPTR) {
		fprintf(stderr, "Buffer overrun can only be checked in USERPTR mode.\n");
		return 1;
	}

	if (!do_file)
		filename = NULL;

	if (!video_has_fd(&dev)) {
		if (optind >= argc) {
			usage(argv[0]);
			return 1;
		}
		ret = video_open(&dev, argv[optind]);
		if (ret < 0)
			return 1;
	}

	if (!no_query) {
		ret = video_querycap(&dev, &capabilities);
		if (ret < 0)
			return 1;
	}

	ret = cap_get_buf_type(capabilities);
	if (ret < 0)
		return 1;

	if (!video_has_valid_buf_type(&dev))
		video_set_buf_type(&dev, ret);

	dev.memtype = memtype;

	if (do_get_control) {
		int64_t val;
		ret = get_control(&dev, ctrl_name,
				  get_control_type(&dev, ctrl_name), &val);
		if (ret >= 0)
			fprintf(stderr, "Control 0x%08x value %" PRId64 "\n", ctrl_name, val);
	}

	if (do_set_control)
		set_control(&dev, ctrl_name, get_control_type(&dev, ctrl_name),
			    ctrl_value);

	if (do_list_controls)
		video_list_controls(&dev);

	if (do_enum_formats) {
		fprintf(stderr, "- Available formats:\n");
		video_enum_formats(&dev, V4L2_BUF_TYPE_VIDEO_CAPTURE);
		video_enum_formats(&dev, V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE);
		video_enum_formats(&dev, V4L2_BUF_TYPE_VIDEO_OUTPUT);
		video_enum_formats(&dev, V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE);
		video_enum_formats(&dev, V4L2_BUF_TYPE_VIDEO_OVERLAY);
	}

	if (do_enum_inputs) {
		fprintf(stderr, "- Available inputs:\n");
		video_enum_inputs(&dev);
	}

	if (do_set_input) {
		video_set_input(&dev, input);
		ret = video_get_input(&dev);
		fprintf(stderr, "Input %d selected\n", ret);
	}

	/* Set the video format. */
	if (do_set_format) {
		if (video_set_format(&dev, width, height, pixelformat, stride, field) < 0) {
			video_close(&dev);
			return 1;
		}
	}

	if (!no_query || do_capture)
		video_get_format(&dev);

	/* Set the frame rate. */
	if (do_set_time_per_frame) {
		if (video_set_framerate(&dev, &time_per_frame) < 0) {
			video_close(&dev);
			return 1;
		}
	}

	while (do_sleep_forever)
		sleep(1000);

	if (!do_capture) {
		video_close(&dev);
		return 0;
	}

	/* Set the compression quality. */
	if (video_set_quality(&dev, quality) < 0) {
		video_close(&dev);
		return 1;
	}

	if (video_prepare_capture(&dev, nbufs, userptr_offset, filename, fill_mode)) {
		video_close(&dev);
		return 1;
	}

	if (do_pause) {
		fprintf(stderr, "Press enter to start capture\n");
		getchar();
	}

	if (do_rt) {
		memset(&sched, 0, sizeof sched);
		sched.sched_priority = rt_priority;
		ret = sched_setscheduler(0, SCHED_RR, &sched);
		if (ret < 0)
			fprintf(stderr, "Failed to select RR scheduler: %s (%d)\n",
				strerror(errno), errno);
	}

	if (video_do_capture(&dev, nframes, skip, delay, filename,
			     do_requeue_last, fill_mode, do_stdout) < 0) {
		video_close(&dev);
		return 1;
	}

	video_close(&dev);
	return 0;
}
