//Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
//Date        : Sat Nov 13 16:00:04 2021
//Host        : ETGLABTEST-02 running 64-bit major release  (build 9200)
//Command     : generate_target design_1_wrapper.bd
//Design      : design_1_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module design_1_wrapper
   (DDR_addr,
    DDR_ba,
    DDR_cas_n,
    DDR_ck_n,
    DDR_ck_p,
    DDR_cke,
    DDR_cs_n,
    DDR_dm,
    DDR_dq,
    DDR_dqs_n,
    DDR_dqs_p,
    DDR_odt,
    DDR_ras_n,
    DDR_reset_n,
    DDR_we_n,
    FIXED_IO_ddr_vrn,
    FIXED_IO_ddr_vrp,
    FIXED_IO_mio,
    FIXED_IO_ps_clk,
    FIXED_IO_ps_porb,
    FIXED_IO_ps_srstb,
    Vaux14_0_v_n,
    Vaux14_0_v_p,
    Vaux7_0_v_n,
    Vaux7_0_v_p,
    Vp_Vn_0_v_n,
    Vp_Vn_0_v_p,
    btns_4bits,
    ir_gpo,
    ir_sensor_scl_io,
    ir_sensor_sda_io,
    je_tri_o,
    servo_pwm,
    spi_rtl_0_io0_io,
    spi_rtl_0_io1_io,
    spi_rtl_0_sck_io,
    spi_rtl_0_ss_io);
  inout [14:0]DDR_addr;
  inout [2:0]DDR_ba;
  inout DDR_cas_n;
  inout DDR_ck_n;
  inout DDR_ck_p;
  inout DDR_cke;
  inout DDR_cs_n;
  inout [3:0]DDR_dm;
  inout [31:0]DDR_dq;
  inout [3:0]DDR_dqs_n;
  inout [3:0]DDR_dqs_p;
  inout DDR_odt;
  inout DDR_ras_n;
  inout DDR_reset_n;
  inout DDR_we_n;
  inout FIXED_IO_ddr_vrn;
  inout FIXED_IO_ddr_vrp;
  inout [53:0]FIXED_IO_mio;
  inout FIXED_IO_ps_clk;
  inout FIXED_IO_ps_porb;
  inout FIXED_IO_ps_srstb;
  input Vaux14_0_v_n;
  input Vaux14_0_v_p;
  input Vaux7_0_v_n;
  input Vaux7_0_v_p;
  input Vp_Vn_0_v_n;
  input Vp_Vn_0_v_p;
  input [3:0]btns_4bits;
  output [0:0]ir_gpo;
  inout ir_sensor_scl_io;
  inout ir_sensor_sda_io;
  output [7:0]je_tri_o;
  output servo_pwm;
  inout spi_rtl_0_io0_io;
  inout spi_rtl_0_io1_io;
  inout spi_rtl_0_sck_io;
  inout [1:0]spi_rtl_0_ss_io;

  wire [14:0]DDR_addr;
  wire [2:0]DDR_ba;
  wire DDR_cas_n;
  wire DDR_ck_n;
  wire DDR_ck_p;
  wire DDR_cke;
  wire DDR_cs_n;
  wire [3:0]DDR_dm;
  wire [31:0]DDR_dq;
  wire [3:0]DDR_dqs_n;
  wire [3:0]DDR_dqs_p;
  wire DDR_odt;
  wire DDR_ras_n;
  wire DDR_reset_n;
  wire DDR_we_n;
  wire FIXED_IO_ddr_vrn;
  wire FIXED_IO_ddr_vrp;
  wire [53:0]FIXED_IO_mio;
  wire FIXED_IO_ps_clk;
  wire FIXED_IO_ps_porb;
  wire FIXED_IO_ps_srstb;
  wire Vaux14_0_v_n;
  wire Vaux14_0_v_p;
  wire Vaux7_0_v_n;
  wire Vaux7_0_v_p;
  wire Vp_Vn_0_v_n;
  wire Vp_Vn_0_v_p;
  wire [3:0]btns_4bits;
  wire [0:0]ir_gpo;
  wire ir_sensor_scl_i;
  wire ir_sensor_scl_io;
  wire ir_sensor_scl_o;
  wire ir_sensor_scl_t;
  wire ir_sensor_sda_i;
  wire ir_sensor_sda_io;
  wire ir_sensor_sda_o;
  wire ir_sensor_sda_t;
  wire [7:0]je_tri_o;
  wire servo_pwm;
  wire spi_rtl_0_io0_i;
  wire spi_rtl_0_io0_io;
  wire spi_rtl_0_io0_o;
  wire spi_rtl_0_io0_t;
  wire spi_rtl_0_io1_i;
  wire spi_rtl_0_io1_io;
  wire spi_rtl_0_io1_o;
  wire spi_rtl_0_io1_t;
  wire spi_rtl_0_sck_i;
  wire spi_rtl_0_sck_io;
  wire spi_rtl_0_sck_o;
  wire spi_rtl_0_sck_t;
  wire [0:0]spi_rtl_0_ss_i_0;
  wire [1:1]spi_rtl_0_ss_i_1;
  wire [0:0]spi_rtl_0_ss_io_0;
  wire [1:1]spi_rtl_0_ss_io_1;
  wire [0:0]spi_rtl_0_ss_o_0;
  wire [1:1]spi_rtl_0_ss_o_1;
  wire spi_rtl_0_ss_t;

  design_1 design_1_i
       (.DDR_addr(DDR_addr),
        .DDR_ba(DDR_ba),
        .DDR_cas_n(DDR_cas_n),
        .DDR_ck_n(DDR_ck_n),
        .DDR_ck_p(DDR_ck_p),
        .DDR_cke(DDR_cke),
        .DDR_cs_n(DDR_cs_n),
        .DDR_dm(DDR_dm),
        .DDR_dq(DDR_dq),
        .DDR_dqs_n(DDR_dqs_n),
        .DDR_dqs_p(DDR_dqs_p),
        .DDR_odt(DDR_odt),
        .DDR_ras_n(DDR_ras_n),
        .DDR_reset_n(DDR_reset_n),
        .DDR_we_n(DDR_we_n),
        .FIXED_IO_ddr_vrn(FIXED_IO_ddr_vrn),
        .FIXED_IO_ddr_vrp(FIXED_IO_ddr_vrp),
        .FIXED_IO_mio(FIXED_IO_mio),
        .FIXED_IO_ps_clk(FIXED_IO_ps_clk),
        .FIXED_IO_ps_porb(FIXED_IO_ps_porb),
        .FIXED_IO_ps_srstb(FIXED_IO_ps_srstb),
        .Vaux14_0_v_n(Vaux14_0_v_n),
        .Vaux14_0_v_p(Vaux14_0_v_p),
        .Vaux7_0_v_n(Vaux7_0_v_n),
        .Vaux7_0_v_p(Vaux7_0_v_p),
        .Vp_Vn_0_v_n(Vp_Vn_0_v_n),
        .Vp_Vn_0_v_p(Vp_Vn_0_v_p),
        .btns_4bits(btns_4bits),
        .ir_gpo(ir_gpo),
        .ir_sensor_scl_i(ir_sensor_scl_i),
        .ir_sensor_scl_o(ir_sensor_scl_o),
        .ir_sensor_scl_t(ir_sensor_scl_t),
        .ir_sensor_sda_i(ir_sensor_sda_i),
        .ir_sensor_sda_o(ir_sensor_sda_o),
        .ir_sensor_sda_t(ir_sensor_sda_t),
        .je_tri_o(je_tri_o),
        .servo_pwm(servo_pwm),
        .spi_rtl_0_io0_i(spi_rtl_0_io0_i),
        .spi_rtl_0_io0_o(spi_rtl_0_io0_o),
        .spi_rtl_0_io0_t(spi_rtl_0_io0_t),
        .spi_rtl_0_io1_i(spi_rtl_0_io1_i),
        .spi_rtl_0_io1_o(spi_rtl_0_io1_o),
        .spi_rtl_0_io1_t(spi_rtl_0_io1_t),
        .spi_rtl_0_sck_i(spi_rtl_0_sck_i),
        .spi_rtl_0_sck_o(spi_rtl_0_sck_o),
        .spi_rtl_0_sck_t(spi_rtl_0_sck_t),
        .spi_rtl_0_ss_i({spi_rtl_0_ss_i_1,spi_rtl_0_ss_i_0}),
        .spi_rtl_0_ss_o({spi_rtl_0_ss_o_1,spi_rtl_0_ss_o_0}),
        .spi_rtl_0_ss_t(spi_rtl_0_ss_t));
  IOBUF ir_sensor_scl_iobuf
       (.I(ir_sensor_scl_o),
        .IO(ir_sensor_scl_io),
        .O(ir_sensor_scl_i),
        .T(ir_sensor_scl_t));
  IOBUF ir_sensor_sda_iobuf
       (.I(ir_sensor_sda_o),
        .IO(ir_sensor_sda_io),
        .O(ir_sensor_sda_i),
        .T(ir_sensor_sda_t));
  IOBUF spi_rtl_0_io0_iobuf
       (.I(spi_rtl_0_io0_o),
        .IO(spi_rtl_0_io0_io),
        .O(spi_rtl_0_io0_i),
        .T(spi_rtl_0_io0_t));
  IOBUF spi_rtl_0_io1_iobuf
       (.I(spi_rtl_0_io1_o),
        .IO(spi_rtl_0_io1_io),
        .O(spi_rtl_0_io1_i),
        .T(spi_rtl_0_io1_t));
  IOBUF spi_rtl_0_sck_iobuf
       (.I(spi_rtl_0_sck_o),
        .IO(spi_rtl_0_sck_io),
        .O(spi_rtl_0_sck_i),
        .T(spi_rtl_0_sck_t));
  IOBUF spi_rtl_0_ss_iobuf_0
       (.I(spi_rtl_0_ss_o_0),
        .IO(spi_rtl_0_ss_io[0]),
        .O(spi_rtl_0_ss_i_0),
        .T(spi_rtl_0_ss_t));
  IOBUF spi_rtl_0_ss_iobuf_1
       (.I(spi_rtl_0_ss_o_1),
        .IO(spi_rtl_0_ss_io[1]),
        .O(spi_rtl_0_ss_i_1),
        .T(spi_rtl_0_ss_t));
endmodule
