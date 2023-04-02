#
# This file is the freertos-cydaq-sampling recipe.
#

SUMMARY = "Simple freertos-cydaq-sampling application"
SECTION = "PETALINUX/apps"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://CyDAQ_sampling.elf"

S = "${WORKDIR}"
INSANE_SKIP_${PN} = "arch"

do_install() {
	     install -d ${D}/lib/firmware
	     install -m 0644 ${S}/CyDAQ_sampling.elf ${D}/lib/firmware/CyDAQ_sampling.elf
}

FILES_${PN} = "/lib/firmware/CyDAQ_sampling.elf"
