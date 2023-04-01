vlib work
vlib activehdl

vlib activehdl/xilinx_vip
vlib activehdl/xpm
vlib activehdl/axi_lite_ipif_v3_0_4
vlib activehdl/lib_cdc_v1_0_2
vlib activehdl/interrupt_control_v3_1_4
vlib activehdl/axi_gpio_v2_0_23
vlib activehdl/xil_defaultlib
vlib activehdl/generic_baseblocks_v2_1_0
vlib activehdl/axi_infrastructure_v1_1_0
vlib activehdl/axi_register_slice_v2_1_21
vlib activehdl/fifo_generator_v13_2_5
vlib activehdl/axi_data_fifo_v2_1_20
vlib activehdl/axi_crossbar_v2_1_22
vlib activehdl/axi_vip_v1_1_7
vlib activehdl/processing_system7_vip_v1_0_9
vlib activehdl/proc_sys_reset_v5_0_13
vlib activehdl/xlconcat_v2_1_3
vlib activehdl/axi_protocol_converter_v2_1_21
vlib activehdl/axi_clock_converter_v2_1_20
vlib activehdl/blk_mem_gen_v8_4_4
vlib activehdl/axi_dwidth_converter_v2_1_21
vlib activehdl/axis_infrastructure_v1_1_0
vlib activehdl/axis_register_slice_v1_1_21
vlib activehdl/axis_subset_converter_v1_1_21
vlib activehdl/lib_pkg_v1_0_2
vlib activehdl/lib_fifo_v1_0_14
vlib activehdl/lib_srl_fifo_v1_0_2
vlib activehdl/axi_datamover_v5_1_23
vlib activehdl/axi_sg_v4_1_13
vlib activehdl/axi_dma_v7_1_22
vlib activehdl/axi_timer_v2_0_23
vlib activehdl/dist_mem_gen_v8_0_13
vlib activehdl/axi_quad_spi_v3_2_20
vlib activehdl/axi_iic_v2_0_24

vmap xilinx_vip activehdl/xilinx_vip
vmap xpm activehdl/xpm
vmap axi_lite_ipif_v3_0_4 activehdl/axi_lite_ipif_v3_0_4
vmap lib_cdc_v1_0_2 activehdl/lib_cdc_v1_0_2
vmap interrupt_control_v3_1_4 activehdl/interrupt_control_v3_1_4
vmap axi_gpio_v2_0_23 activehdl/axi_gpio_v2_0_23
vmap xil_defaultlib activehdl/xil_defaultlib
vmap generic_baseblocks_v2_1_0 activehdl/generic_baseblocks_v2_1_0
vmap axi_infrastructure_v1_1_0 activehdl/axi_infrastructure_v1_1_0
vmap axi_register_slice_v2_1_21 activehdl/axi_register_slice_v2_1_21
vmap fifo_generator_v13_2_5 activehdl/fifo_generator_v13_2_5
vmap axi_data_fifo_v2_1_20 activehdl/axi_data_fifo_v2_1_20
vmap axi_crossbar_v2_1_22 activehdl/axi_crossbar_v2_1_22
vmap axi_vip_v1_1_7 activehdl/axi_vip_v1_1_7
vmap processing_system7_vip_v1_0_9 activehdl/processing_system7_vip_v1_0_9
vmap proc_sys_reset_v5_0_13 activehdl/proc_sys_reset_v5_0_13
vmap xlconcat_v2_1_3 activehdl/xlconcat_v2_1_3
vmap axi_protocol_converter_v2_1_21 activehdl/axi_protocol_converter_v2_1_21
vmap axi_clock_converter_v2_1_20 activehdl/axi_clock_converter_v2_1_20
vmap blk_mem_gen_v8_4_4 activehdl/blk_mem_gen_v8_4_4
vmap axi_dwidth_converter_v2_1_21 activehdl/axi_dwidth_converter_v2_1_21
vmap axis_infrastructure_v1_1_0 activehdl/axis_infrastructure_v1_1_0
vmap axis_register_slice_v1_1_21 activehdl/axis_register_slice_v1_1_21
vmap axis_subset_converter_v1_1_21 activehdl/axis_subset_converter_v1_1_21
vmap lib_pkg_v1_0_2 activehdl/lib_pkg_v1_0_2
vmap lib_fifo_v1_0_14 activehdl/lib_fifo_v1_0_14
vmap lib_srl_fifo_v1_0_2 activehdl/lib_srl_fifo_v1_0_2
vmap axi_datamover_v5_1_23 activehdl/axi_datamover_v5_1_23
vmap axi_sg_v4_1_13 activehdl/axi_sg_v4_1_13
vmap axi_dma_v7_1_22 activehdl/axi_dma_v7_1_22
vmap axi_timer_v2_0_23 activehdl/axi_timer_v2_0_23
vmap dist_mem_gen_v8_0_13 activehdl/dist_mem_gen_v8_0_13
vmap axi_quad_spi_v3_2_20 activehdl/axi_quad_spi_v3_2_20
vmap axi_iic_v2_0_24 activehdl/axi_iic_v2_0_24

vlog -work xilinx_vip  -sv2k12 "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi_vip_if.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/clk_vip_if.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/rst_vip_if.sv" \

vlog -work xpm  -sv2k12 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"F:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"F:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
"F:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93 \
"F:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_VCOMP.vhd" \

vcom -work axi_lite_ipif_v3_0_4 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/66ea/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \

vcom -work lib_cdc_v1_0_2 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work interrupt_control_v3_1_4 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/a040/hdl/interrupt_control_v3_1_vh_rfs.vhd" \

vcom -work axi_gpio_v2_0_23 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/bb35/hdl/axi_gpio_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/system/ip/system_axi_gpio_eth_0/sim/system_axi_gpio_eth_0.vhd" \

vlog -work generic_baseblocks_v2_1_0  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/b752/hdl/generic_baseblocks_v2_1_vl_rfs.v" \

vlog -work axi_infrastructure_v1_1_0  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_register_slice_v2_1_21  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/2ef9/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work fifo_generator_v13_2_5  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/276e/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_5 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/276e/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_5  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/276e/hdl/fifo_generator_v13_2_rfs.v" \

vlog -work axi_data_fifo_v2_1_20  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/47c9/hdl/axi_data_fifo_v2_1_vl_rfs.v" \

vlog -work axi_crossbar_v2_1_22  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/b68e/hdl/axi_crossbar_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/system/ip/system_xbar_0/sim/system_xbar_0.v" \

vlog -work axi_vip_v1_1_7  -sv2k12 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/ce6c/hdl/axi_vip_v1_1_vl_rfs.sv" \

vlog -work processing_system7_vip_v1_0_9  -sv2k12 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/system/ip/system_processing_system7_0_0/sim/system_processing_system7_0_0.v" \
"../../../bd/system/ip/system_xbar_1/sim/system_xbar_1.v" \

vcom -work proc_sys_reset_v5_0_13 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/system/ip/system_rst_ps7_0_100M_0/sim/system_rst_ps7_0_100M_0.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/system_xadc_wiz_0_0_conv_funs_pkg.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/system_xadc_wiz_0_0_proc_common_pkg.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/system_xadc_wiz_0_0_ipif_pkg.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/system_xadc_wiz_0_0_family_support.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/system_xadc_wiz_0_0_family.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/system_xadc_wiz_0_0_soft_reset.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/system_xadc_wiz_0_0_pselect_f.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/axi_lite_ipif_v1_01_a/hdl/src/vhdl/system_xadc_wiz_0_0_address_decoder.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/axi_lite_ipif_v1_01_a/hdl/src/vhdl/system_xadc_wiz_0_0_slave_attachment.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/interrupt_control_v2_01_a/hdl/src/vhdl/system_xadc_wiz_0_0_interrupt_control.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/axi_lite_ipif_v1_01_a/hdl/src/vhdl/system_xadc_wiz_0_0_axi_lite_ipif.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/system_xadc_wiz_0_0_drp_arbiter.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/system_xadc_wiz_0_0_drp_to_axi_stream.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/system_xadc_wiz_0_0_xadc_core_drp.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/system_xadc_wiz_0_0_axi_xadc.vhd" \
"../../../bd/system/ip/system_xadc_wiz_0_0/system_xadc_wiz_0_0.vhd" \

vlog -work xlconcat_v2_1_3  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/442e/hdl/xlconcat_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/system/ip/system_xlconcat_0_0/sim/system_xlconcat_0_0.v" \
"../../../bd/system/ip/system_s00_regslice_0/sim/system_s00_regslice_0.v" \

vlog -work axi_protocol_converter_v2_1_21  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/8dfa/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \

vlog -work axi_clock_converter_v2_1_20  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/7589/hdl/axi_clock_converter_v2_1_vl_rfs.v" \

vlog -work blk_mem_gen_v8_4_4  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/2985/simulation/blk_mem_gen_v8_4.v" \

vlog -work axi_dwidth_converter_v2_1_21  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/07be/hdl/axi_dwidth_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/system/ip/system_auto_us_0/sim/system_auto_us_0.v" \
"../../../bd/system/ip/system_auto_rs_w_0/sim/system_auto_rs_w_0.v" \
"../../../bd/system/ip/system_s01_regslice_0/sim/system_s01_regslice_0.v" \
"../../../bd/system/ip/system_m00_regslice_0/sim/system_m00_regslice_0.v" \
"../../../bd/system/ip/system_auto_pc_0/sim/system_auto_pc_0.v" \
"../../../bd/system/ip/system_auto_pc_1/sim/system_auto_pc_1.v" \

vlog -work axis_infrastructure_v1_1_0  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl/axis_infrastructure_v1_1_vl_rfs.v" \

vlog -work axis_register_slice_v1_1_21  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/7da1/hdl/axis_register_slice_v1_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/system/ip/system_axis_subset_converter_0_0/hdl/tdata_system_axis_subset_converter_0_0.v" \
"../../../bd/system/ip/system_axis_subset_converter_0_0/hdl/tuser_system_axis_subset_converter_0_0.v" \
"../../../bd/system/ip/system_axis_subset_converter_0_0/hdl/tstrb_system_axis_subset_converter_0_0.v" \
"../../../bd/system/ip/system_axis_subset_converter_0_0/hdl/tkeep_system_axis_subset_converter_0_0.v" \
"../../../bd/system/ip/system_axis_subset_converter_0_0/hdl/tid_system_axis_subset_converter_0_0.v" \
"../../../bd/system/ip/system_axis_subset_converter_0_0/hdl/tdest_system_axis_subset_converter_0_0.v" \
"../../../bd/system/ip/system_axis_subset_converter_0_0/hdl/tlast_system_axis_subset_converter_0_0.v" \

vlog -work axis_subset_converter_v1_1_21  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/128c/hdl/axis_subset_converter_v1_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/system/ip/system_axis_subset_converter_0_0/hdl/top_system_axis_subset_converter_0_0.v" \
"../../../bd/system/ip/system_axis_subset_converter_0_0/sim/system_axis_subset_converter_0_0.v" \

vcom -work lib_pkg_v1_0_2 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/0513/hdl/lib_pkg_v1_0_rfs.vhd" \

vcom -work lib_fifo_v1_0_14 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/a5cb/hdl/lib_fifo_v1_0_rfs.vhd" \

vcom -work lib_srl_fifo_v1_0_2 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/51ce/hdl/lib_srl_fifo_v1_0_rfs.vhd" \

vcom -work axi_datamover_v5_1_23 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/af86/hdl/axi_datamover_v5_1_vh_rfs.vhd" \

vcom -work axi_sg_v4_1_13 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/4919/hdl/axi_sg_v4_1_rfs.vhd" \

vcom -work axi_dma_v7_1_22 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/0fb1/hdl/axi_dma_v7_1_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/system/ip/system_axi_dma_0_0/sim/system_axi_dma_0_0.vhd" \
"../../../bd/system/ip/system_axi_gpio_0_0/sim/system_axi_gpio_0_0.vhd" \

vcom -work axi_timer_v2_0_23 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/eb71/hdl/axi_timer_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/system/ip/system_axi_timer_0_0/sim/system_axi_timer_0_0.vhd" \
"../../../bd/system/ip/system_axi_timer_1_0/sim/system_axi_timer_1_0.vhd" \

vlog -work dist_mem_gen_v8_0_13  -v2k5 "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/ec67/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/6b56/hdl" "+incdir+../../../../hw.srcs/sources_1/bd/system/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../hw.srcs/sources_1/bd/system/ipshared/0bf5/simulation/dist_mem_gen_v8_0.v" \

vcom -work axi_quad_spi_v3_2_20 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/1735/hdl/axi_quad_spi_v3_2_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/system/ip/system_axi_quad_spi_0_0/sim/system_axi_quad_spi_0_0.vhd" \

vcom -work axi_iic_v2_0_24 -93 \
"../../../../hw.srcs/sources_1/bd/system/ipshared/d1e4/hdl/axi_iic_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/system/ip/system_axi_iic_0_0/sim/system_axi_iic_0_0.vhd" \
"../../../bd/system/sim/system.vhd" \

vlog -work xil_defaultlib \
"glbl.v"

