connect -url tcp:127.0.0.1:3121
source C:/Vivado/firmware/zybo_z7_firmware/full_firmware_build/full_firmware_build.sdk/design_1_wrapper_hw_platform_0/ps7_init.tcl
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zybo Z7 210351AB7488A"} -index 0
rst -system
after 3000
targets -set -filter {jtag_cable_name =~ "Digilent Zybo Z7 210351AB7488A" && level==0} -index 1
fpga -file C:/Vivado/firmware/zybo_z7_firmware/full_firmware_build/full_firmware_build.sdk/design_1_wrapper_hw_platform_0/design_1_wrapper.bit
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zybo Z7 210351AB7488A"} -index 0
loadhw -hw C:/Vivado/firmware/zybo_z7_firmware/full_firmware_build/full_firmware_build.sdk/design_1_wrapper_hw_platform_0/system.hdf -mem-ranges [list {0x40000000 0xbfffffff}]
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zybo Z7 210351AB7488A"} -index 0
ps7_init
ps7_post_config
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zybo Z7 210351AB7488A"} -index 0
dow C:/Vivado/firmware/zybo_z7_firmware/full_firmware_build/full_firmware_build.sdk/adc-intr-test/Debug/adc-intr-test.elf
configparams force-mem-access 0
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zybo Z7 210351AB7488A"} -index 0
con
