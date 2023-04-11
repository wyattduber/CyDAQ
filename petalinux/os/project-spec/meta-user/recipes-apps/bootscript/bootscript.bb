#
# This file is the bootscript recipe.
#
inherit update-rc.d
INITSCRIPT_NAME = "bootscript"
INITSCRIPT_PARAMS = "start 99 S ."

SUMMARY = "Simple bootscript application"
SECTION = "PETALINUX/apps"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://bootscript \ 
	file://CyDAQ_comm.elf \
	file://CyDAQ_sampling.elf"

S = "${WORKDIR}"

# Skip warnings about the .elf files not being needed
INSANE_SKIP_${PN} = "arch"

do_install() {
            install -d ${D}${sysconfdir}/init.d
            install -m 0755 ${S}/bootscript ${D}${sysconfdir}/init.d/bootscript
	    install -d ${D}/lib/firmware
	    install -m 0777 ${S}/CyDAQ_sampling.elf ${D}/lib/firmware/CyDAQ_sampling.elf
	    install -d ${D}/home/root
	    install -m 0777 ${S}/CyDAQ_comm.elf ${D}/home/root/CyDAQ_comm.elf
}
FILES_${PN} += "${sysconfdir}/*"
FILES_${PN} += "/lib/firmware/CyDAQ_sampling.elf"
FILES_${PN} += "/home/root/CyDAQ_comm.elf"

