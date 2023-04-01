set_property SRC_FILE_INFO {cfile:u:/sdmay23-47/petalinux/hw/hw/hw.srcs/sources_1/bd/system/ip/system_processing_system7_0_0/system_processing_system7_0_0/system_processing_system7_0_0_in_context.xdc rfile:../../../hw.srcs/sources_1/bd/system/ip/system_processing_system7_0_0/system_processing_system7_0_0/system_processing_system7_0_0_in_context.xdc id:1 order:EARLY scoped_inst:system_i/processing_system7_0} [current_design]
set_property SRC_FILE_INFO {cfile:U:/sdmay23-47/petalinux/hw/hw/hw.srcs/constrs_1/imports/constraints/Zybo-Z7-Master.xdc rfile:../../../hw.srcs/constrs_1/imports/constraints/Zybo-Z7-Master.xdc id:2} [current_design]
current_instance system_i/processing_system7_0
set_property src_info {type:SCOPED_XDC file:1 line:2 export:INPUT save:INPUT read:READ} [current_design]
create_clock -period 10.000 [get_ports {}]
current_instance
set_property src_info {type:XDC file:2 line:20 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN K18   IOSTANDARD LVCMOS33 } [get_ports { btns_4bits[0] }]; #IO_L12N_T1_MRCC_35 Sch=btn[0]
set_property src_info {type:XDC file:2 line:21 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN P16   IOSTANDARD LVCMOS33 } [get_ports { btns_4bits[1] }]; #IO_L24N_T3_34 Sch=btn[1]
set_property src_info {type:XDC file:2 line:22 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN K19   IOSTANDARD LVCMOS33 } [get_ports { btns_4bits[2] }]; #IO_L10P_T1_AD11P_35 Sch=btn[2]
set_property src_info {type:XDC file:2 line:23 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN Y16   IOSTANDARD LVCMOS33 } [get_ports { btns_4bits[3] }]; #IO_L7P_T1_34 Sch=btn[3]
set_property src_info {type:XDC file:2 line:58 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN E17   IOSTANDARD LVCMOS33 } [get_ports { eth_rst_b_tri_io }]; #IO_L3P_T0_DQS_AD1P_35 Sch=eth_rst_b
set_property src_info {type:XDC file:2 line:110 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN N15   IOSTANDARD LVCMOS33 } [get_ports Vaux14_v_p]; #IO_L21P_T3_DQS_AD14P_35 Sch=JA1_R_p
set_property src_info {type:XDC file:2 line:111 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN L14   IOSTANDARD LVCMOS33 } [get_ports { Vaux7_0_v_p } ]; #IO_L24P_T3_AD15P_35 Sch=JA3_R_P
set_property src_info {type:XDC file:2 line:112 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN L10   IOSTANDARD LVCMOS33 } [get_ports Vp_Vn_0_v_n]; #IO_L20P_T3_AD6P_35 Sch=JA4_R_P
set_property src_info {type:XDC file:2 line:113 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN K9   IOSTANDARD LVCMOS33 } [get_ports Vp_Vn_0_v_p]; #IO_L21N_T3_DQS_AD14N_35 Sch=JA1_R_N
set_property src_info {type:XDC file:2 line:114 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN N16   IOSTANDARD LVCMOS33 } [get_ports Vaux14_0_v_n]; #IO_L22N_T3_AD7N_35 Sch=JA2_R_N
set_property src_info {type:XDC file:2 line:115 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN L15   IOSTANDARD LVCMOS33 } [get_ports { Vaux7_0_v_n }]; #IO_L24N_T3_AD15N_35 Sch=JA3_R_N
set_property src_info {type:XDC file:2 line:132 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN W15   IOSTANDARD LVCMOS33     } [get_ports { ir_sensor_scl_io }]; #IO_L10N_T1_34 Sch=jc_n[1]
set_property src_info {type:XDC file:2 line:133 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN T11   IOSTANDARD LVCMOS33     } [get_ports { ir_sensor_sda_io }]; #IO_L1P_T0_34 Sch=jc_p[2]
set_property src_info {type:XDC file:2 line:136 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN Y14   IOSTANDARD LVCMOS33     } [get_ports { servo_pwm }]; #IO_L8N_T1_34 Sch=jc_n[3]
set_property src_info {type:XDC file:2 line:137 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN T12   IOSTANDARD LVCMOS33     } [get_ports { ir_gpo[0] }]; #IO_L2P_T0_34 Sch=jc_p[4]
set_property src_info {type:XDC file:2 line:142 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN T14   IOSTANDARD LVCMOS33     } [get_ports { spi_rtl_0_io0_io }]; #IO_L5P_T0_34 Sch=jd_p[1]
set_property src_info {type:XDC file:2 line:143 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN T15   IOSTANDARD LVCMOS33     } [get_ports { spi_rtl_0_ss_io[0] }]; #IO_L5N_T0_34 Sch=jd_n[1]
set_property src_info {type:XDC file:2 line:144 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN P14   IOSTANDARD LVCMOS33     } [get_ports { spi_rtl_0_sck_io }]; #IO_L6P_T0_34 Sch=jd_p[2]
set_property src_info {type:XDC file:2 line:146 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN U14   IOSTANDARD LVCMOS33     } [get_ports { spi_rtl_0_io1_io }]; #IO_L11P_T1_SRCC_34 Sch=jd_p[3]
set_property src_info {type:XDC file:2 line:147 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN U15   IOSTANDARD LVCMOS33     } [get_ports { spi_rtl_0_ss_io[1] }]; #IO_L11N_T1_SRCC_34 Sch=jd_n[3]
set_property src_info {type:XDC file:2 line:153 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN V12   IOSTANDARD LVCMOS33 } [get_ports { je_tri_o[0] }]; #IO_L4P_T0_34 Sch=je[1]
set_property src_info {type:XDC file:2 line:154 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN W16   IOSTANDARD LVCMOS33 } [get_ports { je_tri_o[1] }]; #IO_L18N_T2_34 Sch=je[2]
set_property src_info {type:XDC file:2 line:155 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN J15   IOSTANDARD LVCMOS33 } [get_ports { je_tri_o[2] }]; #IO_25_35 Sch=je[3]
set_property src_info {type:XDC file:2 line:156 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN H15   IOSTANDARD LVCMOS33 } [get_ports { je_tri_o[3] }]; #IO_L19P_T3_35 Sch=je[4]
set_property src_info {type:XDC file:2 line:157 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN V13   IOSTANDARD LVCMOS33 } [get_ports { je_tri_o[4] }]; #IO_L3N_T0_DQS_34 Sch=je[7]
set_property src_info {type:XDC file:2 line:158 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN U17   IOSTANDARD LVCMOS33 } [get_ports { je_tri_o[7] }]; #IO_L9N_T1_DQS_34 Sch=je[8]
set_property src_info {type:XDC file:2 line:159 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN T17   IOSTANDARD LVCMOS33 } [get_ports { je_tri_o[6] }]; #IO_L20P_T3_34 Sch=je[9]
set_property src_info {type:XDC file:2 line:160 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN Y17   IOSTANDARD LVCMOS33 } [get_ports { je_tri_o[5] }]; #IO_L7N_T1_34 Sch=je[10]