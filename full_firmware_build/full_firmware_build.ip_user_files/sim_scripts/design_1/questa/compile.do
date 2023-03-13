vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/xilinx_vip
vlib questa_lib/msim/xpm
vlib questa_lib/msim/axi_infrastructure_v1_1_0
vlib questa_lib/msim/axi_vip_v1_1_7
vlib questa_lib/msim/processing_system7_vip_v1_0_9
vlib questa_lib/msim/xil_defaultlib
vlib questa_lib/msim/lib_cdc_v1_0_2
vlib questa_lib/msim/proc_sys_reset_v5_0_13
vlib questa_lib/msim/axi_lite_ipif_v3_0_4
vlib questa_lib/msim/lib_pkg_v1_0_2
vlib questa_lib/msim/axi_timer_v2_0_23
vlib questa_lib/msim/dist_mem_gen_v8_0_13
vlib questa_lib/msim/lib_srl_fifo_v1_0_2
vlib questa_lib/msim/fifo_generator_v13_2_5
vlib questa_lib/msim/lib_fifo_v1_0_14
vlib questa_lib/msim/interrupt_control_v3_1_4
vlib questa_lib/msim/axi_quad_spi_v3_2_20
vlib questa_lib/msim/axi_iic_v2_0_24
vlib questa_lib/msim/generic_baseblocks_v2_1_0
vlib questa_lib/msim/axi_register_slice_v2_1_21
vlib questa_lib/msim/axi_data_fifo_v2_1_20
vlib questa_lib/msim/axi_crossbar_v2_1_22
vlib questa_lib/msim/axi_datamover_v5_1_23
vlib questa_lib/msim/axi_sg_v4_1_13
vlib questa_lib/msim/axi_dma_v7_1_22
vlib questa_lib/msim/axis_infrastructure_v1_1_0
vlib questa_lib/msim/axis_register_slice_v1_1_21
vlib questa_lib/msim/axis_subset_converter_v1_1_21
vlib questa_lib/msim/axi_protocol_converter_v2_1_21
vlib questa_lib/msim/axi_clock_converter_v2_1_20
vlib questa_lib/msim/blk_mem_gen_v8_4_4
vlib questa_lib/msim/axi_dwidth_converter_v2_1_21
vlib questa_lib/msim/axi_gpio_v2_0_23

vmap xilinx_vip questa_lib/msim/xilinx_vip
vmap xpm questa_lib/msim/xpm
vmap axi_infrastructure_v1_1_0 questa_lib/msim/axi_infrastructure_v1_1_0
vmap axi_vip_v1_1_7 questa_lib/msim/axi_vip_v1_1_7
vmap processing_system7_vip_v1_0_9 questa_lib/msim/processing_system7_vip_v1_0_9
vmap xil_defaultlib questa_lib/msim/xil_defaultlib
vmap lib_cdc_v1_0_2 questa_lib/msim/lib_cdc_v1_0_2
vmap proc_sys_reset_v5_0_13 questa_lib/msim/proc_sys_reset_v5_0_13
vmap axi_lite_ipif_v3_0_4 questa_lib/msim/axi_lite_ipif_v3_0_4
vmap lib_pkg_v1_0_2 questa_lib/msim/lib_pkg_v1_0_2
vmap axi_timer_v2_0_23 questa_lib/msim/axi_timer_v2_0_23
vmap dist_mem_gen_v8_0_13 questa_lib/msim/dist_mem_gen_v8_0_13
vmap lib_srl_fifo_v1_0_2 questa_lib/msim/lib_srl_fifo_v1_0_2
vmap fifo_generator_v13_2_5 questa_lib/msim/fifo_generator_v13_2_5
vmap lib_fifo_v1_0_14 questa_lib/msim/lib_fifo_v1_0_14
vmap interrupt_control_v3_1_4 questa_lib/msim/interrupt_control_v3_1_4
vmap axi_quad_spi_v3_2_20 questa_lib/msim/axi_quad_spi_v3_2_20
vmap axi_iic_v2_0_24 questa_lib/msim/axi_iic_v2_0_24
vmap generic_baseblocks_v2_1_0 questa_lib/msim/generic_baseblocks_v2_1_0
vmap axi_register_slice_v2_1_21 questa_lib/msim/axi_register_slice_v2_1_21
vmap axi_data_fifo_v2_1_20 questa_lib/msim/axi_data_fifo_v2_1_20
vmap axi_crossbar_v2_1_22 questa_lib/msim/axi_crossbar_v2_1_22
vmap axi_datamover_v5_1_23 questa_lib/msim/axi_datamover_v5_1_23
vmap axi_sg_v4_1_13 questa_lib/msim/axi_sg_v4_1_13
vmap axi_dma_v7_1_22 questa_lib/msim/axi_dma_v7_1_22
vmap axis_infrastructure_v1_1_0 questa_lib/msim/axis_infrastructure_v1_1_0
vmap axis_register_slice_v1_1_21 questa_lib/msim/axis_register_slice_v1_1_21
vmap axis_subset_converter_v1_1_21 questa_lib/msim/axis_subset_converter_v1_1_21
vmap axi_protocol_converter_v2_1_21 questa_lib/msim/axi_protocol_converter_v2_1_21
vmap axi_clock_converter_v2_1_20 questa_lib/msim/axi_clock_converter_v2_1_20
vmap blk_mem_gen_v8_4_4 questa_lib/msim/blk_mem_gen_v8_4_4
vmap axi_dwidth_converter_v2_1_21 questa_lib/msim/axi_dwidth_converter_v2_1_21
vmap axi_gpio_v2_0_23 questa_lib/msim/axi_gpio_v2_0_23

vlog -work xilinx_vip  -sv -L axi_vip_v1_1_7 -L processing_system7_vip_v1_0_9 -L xilinx_vip "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi_vip_if.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/clk_vip_if.sv" \
"F:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/rst_vip_if.sv" \

vlog -work xpm  -sv -L axi_vip_v1_1_7 -L processing_system7_vip_v1_0_9 -L xilinx_vip "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"F:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"F:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
"F:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm  -93 \
"F:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work axi_infrastructure_v1_1_0  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_vip_v1_1_7  -sv -L axi_vip_v1_1_7 -L processing_system7_vip_v1_0_9 -L xilinx_vip "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ce6c/hdl/axi_vip_v1_1_vl_rfs.sv" \

vlog -work processing_system7_vip_v1_0_9  -sv -L axi_vip_v1_1_7 -L processing_system7_vip_v1_0_9 -L xilinx_vip "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_processing_system7_0_0/sim/design_1_processing_system7_0_0.v" \

vcom -work xil_defaultlib  -93 \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/design_1_xadc_wiz_0_0_conv_funs_pkg.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/design_1_xadc_wiz_0_0_proc_common_pkg.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/design_1_xadc_wiz_0_0_ipif_pkg.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/design_1_xadc_wiz_0_0_family_support.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/design_1_xadc_wiz_0_0_family.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/design_1_xadc_wiz_0_0_soft_reset.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/proc_common_v3_30_a/hdl/src/vhdl/design_1_xadc_wiz_0_0_pselect_f.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/axi_lite_ipif_v1_01_a/hdl/src/vhdl/design_1_xadc_wiz_0_0_address_decoder.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/axi_lite_ipif_v1_01_a/hdl/src/vhdl/design_1_xadc_wiz_0_0_slave_attachment.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/interrupt_control_v2_01_a/hdl/src/vhdl/design_1_xadc_wiz_0_0_interrupt_control.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/axi_lite_ipif_v1_01_a/hdl/src/vhdl/design_1_xadc_wiz_0_0_axi_lite_ipif.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/design_1_xadc_wiz_0_0_drp_arbiter.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/design_1_xadc_wiz_0_0_drp_to_axi_stream.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/design_1_xadc_wiz_0_0_xadc_core_drp.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/design_1_xadc_wiz_0_0_axi_xadc.vhd" \
"../../../bd/design_1/ip/design_1_xadc_wiz_0_0/design_1_xadc_wiz_0_0.vhd" \

vcom -work lib_cdc_v1_0_2  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work proc_sys_reset_v5_0_13  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib  -93 \
"../../../bd/design_1/ip/design_1_rst_ps7_0_50M_0/sim/design_1_rst_ps7_0_50M_0.vhd" \

vcom -work axi_lite_ipif_v3_0_4  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/66ea/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \

vcom -work lib_pkg_v1_0_2  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/0513/hdl/lib_pkg_v1_0_rfs.vhd" \

vcom -work axi_timer_v2_0_23  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/eb71/hdl/axi_timer_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib  -93 \
"../../../bd/design_1/ip/design_1_axi_timer_0_0/sim/design_1_axi_timer_0_0.vhd" \

vlog -work dist_mem_gen_v8_0_13  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/0bf5/simulation/dist_mem_gen_v8_0.v" \

vcom -work lib_srl_fifo_v1_0_2  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/51ce/hdl/lib_srl_fifo_v1_0_rfs.vhd" \

vlog -work fifo_generator_v13_2_5  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/276e/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_5  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/276e/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_5  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/276e/hdl/fifo_generator_v13_2_rfs.v" \

vcom -work lib_fifo_v1_0_14  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/a5cb/hdl/lib_fifo_v1_0_rfs.vhd" \

vcom -work interrupt_control_v3_1_4  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/a040/hdl/interrupt_control_v3_1_vh_rfs.vhd" \

vcom -work axi_quad_spi_v3_2_20  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/1735/hdl/axi_quad_spi_v3_2_rfs.vhd" \

vcom -work xil_defaultlib  -93 \
"../../../bd/design_1/ip/design_1_axi_quad_spi_0_0/sim/design_1_axi_quad_spi_0_0.vhd" \

vcom -work axi_iic_v2_0_24  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/d1e4/hdl/axi_iic_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib  -93 \
"../../../bd/design_1/ip/design_1_axi_iic_0_0/sim/design_1_axi_iic_0_0.vhd" \
"../../../bd/design_1/ip/design_1_axi_timer_1_0/sim/design_1_axi_timer_1_0.vhd" \

vlog -work generic_baseblocks_v2_1_0  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/b752/hdl/generic_baseblocks_v2_1_vl_rfs.v" \

vlog -work axi_register_slice_v2_1_21  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/2ef9/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work axi_data_fifo_v2_1_20  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/47c9/hdl/axi_data_fifo_v2_1_vl_rfs.v" \

vlog -work axi_crossbar_v2_1_22  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/b68e/hdl/axi_crossbar_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_xbar_0/sim/design_1_xbar_0.v" \

vcom -work axi_datamover_v5_1_23  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/af86/hdl/axi_datamover_v5_1_vh_rfs.vhd" \

vcom -work axi_sg_v4_1_13  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/4919/hdl/axi_sg_v4_1_rfs.vhd" \

vcom -work axi_dma_v7_1_22  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/0fb1/hdl/axi_dma_v7_1_vh_rfs.vhd" \

vcom -work xil_defaultlib  -93 \
"../../../bd/design_1/ip/design_1_axi_dma_0_0/sim/design_1_axi_dma_0_0.vhd" \

vlog -work axis_infrastructure_v1_1_0  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl/axis_infrastructure_v1_1_vl_rfs.v" \

vlog -work axis_register_slice_v1_1_21  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/7da1/hdl/axis_register_slice_v1_1_vl_rfs.v" \

vlog -work xil_defaultlib  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axis_subset_converter_0_0/hdl/tdata_design_1_axis_subset_converter_0_0.v" \
"../../../bd/design_1/ip/design_1_axis_subset_converter_0_0/hdl/tuser_design_1_axis_subset_converter_0_0.v" \
"../../../bd/design_1/ip/design_1_axis_subset_converter_0_0/hdl/tstrb_design_1_axis_subset_converter_0_0.v" \
"../../../bd/design_1/ip/design_1_axis_subset_converter_0_0/hdl/tkeep_design_1_axis_subset_converter_0_0.v" \
"../../../bd/design_1/ip/design_1_axis_subset_converter_0_0/hdl/tid_design_1_axis_subset_converter_0_0.v" \
"../../../bd/design_1/ip/design_1_axis_subset_converter_0_0/hdl/tdest_design_1_axis_subset_converter_0_0.v" \
"../../../bd/design_1/ip/design_1_axis_subset_converter_0_0/hdl/tlast_design_1_axis_subset_converter_0_0.v" \

vlog -work axis_subset_converter_v1_1_21  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/128c/hdl/axis_subset_converter_v1_1_vl_rfs.v" \

vlog -work xil_defaultlib  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axis_subset_converter_0_0/hdl/top_design_1_axis_subset_converter_0_0.v" \
"../../../bd/design_1/ip/design_1_axis_subset_converter_0_0/sim/design_1_axis_subset_converter_0_0.v" \
"../../../bd/design_1/ip/design_1_xbar_1/sim/design_1_xbar_1.v" \

vlog -work axi_protocol_converter_v2_1_21  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8dfa/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_auto_pc_0/sim/design_1_auto_pc_0.v" \

vlog -work axi_clock_converter_v2_1_20  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/7589/hdl/axi_clock_converter_v2_1_vl_rfs.v" \

vlog -work blk_mem_gen_v8_4_4  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/2985/simulation/blk_mem_gen_v8_4.v" \

vlog -work axi_dwidth_converter_v2_1_21  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/07be/hdl/axi_dwidth_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/6b56/hdl" "+incdir+../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/8713/hdl" "+incdir+F:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_auto_us_0/sim/design_1_auto_us_0.v" \
"../../../bd/design_1/ip/design_1_auto_pc_1/sim/design_1_auto_pc_1.v" \

vcom -work axi_gpio_v2_0_23  -93 \
"../../../../full_firmware_build.srcs/sources_1/bd/design_1/ipshared/bb35/hdl/axi_gpio_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib  -93 \
"../../../bd/design_1/ip/design_1_axi_gpio_1_0/sim/design_1_axi_gpio_1_0.vhd" \
"../../../bd/design_1/sim/design_1.vhd" \

vlog -work xil_defaultlib \
"glbl.v"

