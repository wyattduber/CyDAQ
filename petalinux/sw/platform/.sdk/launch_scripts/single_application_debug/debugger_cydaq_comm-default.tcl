connect -url tcp:127.0.0.1:3121
targets -set -nocase -filter {name =~"APU*"}
rst -system
after 3000
targets -set -filter {jtag_cable_name =~ "Digilent Zybo Z7 210351AB762DA" && level==0 && jtag_device_ctx=="jsn-Zybo Z7-210351AB762DA-13722093-0"}
fpga -file /home/corbin/sdmay23-47/petalinux/sw/platform/CyDAQ_sampling/_ide/bitstream/test.bit
targets -set -nocase -filter {name =~"APU*"}
loadhw -hw /home/corbin/sdmay23-47/petalinux/sw/platform/CyDAQ_standalone/export/CyDAQ_standalone/hw/CyDAQ_proto_1.xsa -mem-ranges [list {0x40000000 0xbfffffff}] -regs
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*"}
source /home/corbin/sdmay23-47/petalinux/sw/platform/CyDAQ_sampling/_ide/psinit/ps7_init.tcl
ps7_init
ps7_post_config
targets -set -nocase -filter {name =~ "*A9*#1"}
dow /home/corbin/sdmay23-47/petalinux/sw/platform/CyDAQ_sampling/Debug/CyDAQ_sampling.elf
configparams force-mem-access 0
targets -set -nocase -filter {name =~ "*A9*#1"}
con
