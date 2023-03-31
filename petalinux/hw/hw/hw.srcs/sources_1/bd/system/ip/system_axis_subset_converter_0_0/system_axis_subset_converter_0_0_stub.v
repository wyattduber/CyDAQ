// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.1 (win64) Build 2902540 Wed May 27 19:54:49 MDT 2020
// Date        : Wed Mar 29 21:27:16 2023
// Host        : DESKTOP-F6K4P93 running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               u:/sdmay23-47/petalinux/hw/hw/hw.srcs/sources_1/bd/system/ip/system_axis_subset_converter_0_0/system_axis_subset_converter_0_0_stub.v
// Design      : system_axis_subset_converter_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z010clg400-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "top_system_axis_subset_converter_0_0,Vivado 2020.1" *)
module system_axis_subset_converter_0_0(aclk, aresetn, s_axis_tvalid, s_axis_tready, 
  s_axis_tdata, s_axis_tid, m_axis_tvalid, m_axis_tready, m_axis_tdata, m_axis_tlast, 
  m_axis_tid)
/* synthesis syn_black_box black_box_pad_pin="aclk,aresetn,s_axis_tvalid,s_axis_tready,s_axis_tdata[15:0],s_axis_tid[4:0],m_axis_tvalid,m_axis_tready,m_axis_tdata[15:0],m_axis_tlast,m_axis_tid[4:0]" */;
  input aclk;
  input aresetn;
  input s_axis_tvalid;
  output s_axis_tready;
  input [15:0]s_axis_tdata;
  input [4:0]s_axis_tid;
  output m_axis_tvalid;
  input m_axis_tready;
  output [15:0]m_axis_tdata;
  output m_axis_tlast;
  output [4:0]m_axis_tid;
endmodule
