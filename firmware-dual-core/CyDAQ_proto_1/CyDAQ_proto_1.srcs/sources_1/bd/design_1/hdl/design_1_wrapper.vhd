--Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
----------------------------------------------------------------------------------
--Tool Version: Vivado v.2020.1 (win64) Build 2902540 Wed May 27 19:54:49 MDT 2020
--Date        : Wed Mar 15 13:56:51 2023
--Host        : DESKTOP-F6K4P93 running 64-bit major release  (build 9200)
--Command     : generate_target design_1_wrapper.bd
--Design      : design_1_wrapper
--Purpose     : IP block netlist
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_wrapper is
  port (
    DDR_addr : inout STD_LOGIC_VECTOR ( 14 downto 0 );
    DDR_ba : inout STD_LOGIC_VECTOR ( 2 downto 0 );
    DDR_cas_n : inout STD_LOGIC;
    DDR_ck_n : inout STD_LOGIC;
    DDR_ck_p : inout STD_LOGIC;
    DDR_cke : inout STD_LOGIC;
    DDR_cs_n : inout STD_LOGIC;
    DDR_dm : inout STD_LOGIC_VECTOR ( 3 downto 0 );
    DDR_dq : inout STD_LOGIC_VECTOR ( 31 downto 0 );
    DDR_dqs_n : inout STD_LOGIC_VECTOR ( 3 downto 0 );
    DDR_dqs_p : inout STD_LOGIC_VECTOR ( 3 downto 0 );
    DDR_odt : inout STD_LOGIC;
    DDR_ras_n : inout STD_LOGIC;
    DDR_reset_n : inout STD_LOGIC;
    DDR_we_n : inout STD_LOGIC;
    FIXED_IO_ddr_vrn : inout STD_LOGIC;
    FIXED_IO_ddr_vrp : inout STD_LOGIC;
    FIXED_IO_mio : inout STD_LOGIC_VECTOR ( 53 downto 0 );
    FIXED_IO_ps_clk : inout STD_LOGIC;
    FIXED_IO_ps_porb : inout STD_LOGIC;
    FIXED_IO_ps_srstb : inout STD_LOGIC;
    Vp_Vn_0_v_n : in STD_LOGIC;
    Vp_Vn_0_v_p : in STD_LOGIC;
    btns_4bits : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ir_gpo : out STD_LOGIC_VECTOR ( 0 to 0 );
    ir_sensor_scl_io : inout STD_LOGIC;
    ir_sensor_sda_io : inout STD_LOGIC;
    je_tri_o : out STD_LOGIC_VECTOR ( 7 downto 0 );
    servo_pwm : out STD_LOGIC;
    spi_rtl_0_io0_io : inout STD_LOGIC;
    spi_rtl_0_io1_io : inout STD_LOGIC;
    spi_rtl_0_sck_io : inout STD_LOGIC;
    spi_rtl_0_ss_io : inout STD_LOGIC_VECTOR ( 1 downto 0 )
  );
end design_1_wrapper;

architecture STRUCTURE of design_1_wrapper is
  component design_1 is
  port (
    FIXED_IO_mio : inout STD_LOGIC_VECTOR ( 53 downto 0 );
    FIXED_IO_ddr_vrn : inout STD_LOGIC;
    FIXED_IO_ddr_vrp : inout STD_LOGIC;
    FIXED_IO_ps_srstb : inout STD_LOGIC;
    FIXED_IO_ps_clk : inout STD_LOGIC;
    FIXED_IO_ps_porb : inout STD_LOGIC;
    DDR_cas_n : inout STD_LOGIC;
    DDR_cke : inout STD_LOGIC;
    DDR_ck_n : inout STD_LOGIC;
    DDR_ck_p : inout STD_LOGIC;
    DDR_cs_n : inout STD_LOGIC;
    DDR_reset_n : inout STD_LOGIC;
    DDR_odt : inout STD_LOGIC;
    DDR_ras_n : inout STD_LOGIC;
    DDR_we_n : inout STD_LOGIC;
    DDR_ba : inout STD_LOGIC_VECTOR ( 2 downto 0 );
    DDR_addr : inout STD_LOGIC_VECTOR ( 14 downto 0 );
    DDR_dm : inout STD_LOGIC_VECTOR ( 3 downto 0 );
    DDR_dq : inout STD_LOGIC_VECTOR ( 31 downto 0 );
    DDR_dqs_n : inout STD_LOGIC_VECTOR ( 3 downto 0 );
    DDR_dqs_p : inout STD_LOGIC_VECTOR ( 3 downto 0 );
    Vp_Vn_0_v_n : in STD_LOGIC;
    Vp_Vn_0_v_p : in STD_LOGIC;
    spi_rtl_0_io0_i : in STD_LOGIC;
    spi_rtl_0_io0_o : out STD_LOGIC;
    spi_rtl_0_io0_t : out STD_LOGIC;
    spi_rtl_0_io1_i : in STD_LOGIC;
    spi_rtl_0_io1_o : out STD_LOGIC;
    spi_rtl_0_io1_t : out STD_LOGIC;
    spi_rtl_0_sck_i : in STD_LOGIC;
    spi_rtl_0_sck_o : out STD_LOGIC;
    spi_rtl_0_sck_t : out STD_LOGIC;
    spi_rtl_0_ss_i : in STD_LOGIC_VECTOR ( 1 downto 0 );
    spi_rtl_0_ss_o : out STD_LOGIC_VECTOR ( 1 downto 0 );
    spi_rtl_0_ss_t : out STD_LOGIC;
    ir_sensor_scl_i : in STD_LOGIC;
    ir_sensor_scl_o : out STD_LOGIC;
    ir_sensor_scl_t : out STD_LOGIC;
    ir_sensor_sda_i : in STD_LOGIC;
    ir_sensor_sda_o : out STD_LOGIC;
    ir_sensor_sda_t : out STD_LOGIC;
    ir_gpo : out STD_LOGIC_VECTOR ( 0 to 0 );
    servo_pwm : out STD_LOGIC;
    btns_4bits : in STD_LOGIC_VECTOR ( 3 downto 0 );
    je_tri_o : out STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  end component design_1;
  component IOBUF is
  port (
    I : in STD_LOGIC;
    O : out STD_LOGIC;
    T : in STD_LOGIC;
    IO : inout STD_LOGIC
  );
  end component IOBUF;
  signal ir_sensor_scl_i : STD_LOGIC;
  signal ir_sensor_scl_o : STD_LOGIC;
  signal ir_sensor_scl_t : STD_LOGIC;
  signal ir_sensor_sda_i : STD_LOGIC;
  signal ir_sensor_sda_o : STD_LOGIC;
  signal ir_sensor_sda_t : STD_LOGIC;
  signal spi_rtl_0_io0_i : STD_LOGIC;
  signal spi_rtl_0_io0_o : STD_LOGIC;
  signal spi_rtl_0_io0_t : STD_LOGIC;
  signal spi_rtl_0_io1_i : STD_LOGIC;
  signal spi_rtl_0_io1_o : STD_LOGIC;
  signal spi_rtl_0_io1_t : STD_LOGIC;
  signal spi_rtl_0_sck_i : STD_LOGIC;
  signal spi_rtl_0_sck_o : STD_LOGIC;
  signal spi_rtl_0_sck_t : STD_LOGIC;
  signal spi_rtl_0_ss_i_0 : STD_LOGIC_VECTOR ( 0 to 0 );
  signal spi_rtl_0_ss_i_1 : STD_LOGIC_VECTOR ( 1 to 1 );
  signal spi_rtl_0_ss_io_0 : STD_LOGIC_VECTOR ( 0 to 0 );
  signal spi_rtl_0_ss_io_1 : STD_LOGIC_VECTOR ( 1 to 1 );
  signal spi_rtl_0_ss_o_0 : STD_LOGIC_VECTOR ( 0 to 0 );
  signal spi_rtl_0_ss_o_1 : STD_LOGIC_VECTOR ( 1 to 1 );
  signal spi_rtl_0_ss_t : STD_LOGIC;
begin
design_1_i: component design_1
     port map (
      DDR_addr(14 downto 0) => DDR_addr(14 downto 0),
      DDR_ba(2 downto 0) => DDR_ba(2 downto 0),
      DDR_cas_n => DDR_cas_n,
      DDR_ck_n => DDR_ck_n,
      DDR_ck_p => DDR_ck_p,
      DDR_cke => DDR_cke,
      DDR_cs_n => DDR_cs_n,
      DDR_dm(3 downto 0) => DDR_dm(3 downto 0),
      DDR_dq(31 downto 0) => DDR_dq(31 downto 0),
      DDR_dqs_n(3 downto 0) => DDR_dqs_n(3 downto 0),
      DDR_dqs_p(3 downto 0) => DDR_dqs_p(3 downto 0),
      DDR_odt => DDR_odt,
      DDR_ras_n => DDR_ras_n,
      DDR_reset_n => DDR_reset_n,
      DDR_we_n => DDR_we_n,
      FIXED_IO_ddr_vrn => FIXED_IO_ddr_vrn,
      FIXED_IO_ddr_vrp => FIXED_IO_ddr_vrp,
      FIXED_IO_mio(53 downto 0) => FIXED_IO_mio(53 downto 0),
      FIXED_IO_ps_clk => FIXED_IO_ps_clk,
      FIXED_IO_ps_porb => FIXED_IO_ps_porb,
      FIXED_IO_ps_srstb => FIXED_IO_ps_srstb,
      Vp_Vn_0_v_n => Vp_Vn_0_v_n,
      Vp_Vn_0_v_p => Vp_Vn_0_v_p,
      btns_4bits(3 downto 0) => btns_4bits(3 downto 0),
      ir_gpo(0) => ir_gpo(0),
      ir_sensor_scl_i => ir_sensor_scl_i,
      ir_sensor_scl_o => ir_sensor_scl_o,
      ir_sensor_scl_t => ir_sensor_scl_t,
      ir_sensor_sda_i => ir_sensor_sda_i,
      ir_sensor_sda_o => ir_sensor_sda_o,
      ir_sensor_sda_t => ir_sensor_sda_t,
      je_tri_o(7 downto 0) => je_tri_o(7 downto 0),
      servo_pwm => servo_pwm,
      spi_rtl_0_io0_i => spi_rtl_0_io0_i,
      spi_rtl_0_io0_o => spi_rtl_0_io0_o,
      spi_rtl_0_io0_t => spi_rtl_0_io0_t,
      spi_rtl_0_io1_i => spi_rtl_0_io1_i,
      spi_rtl_0_io1_o => spi_rtl_0_io1_o,
      spi_rtl_0_io1_t => spi_rtl_0_io1_t,
      spi_rtl_0_sck_i => spi_rtl_0_sck_i,
      spi_rtl_0_sck_o => spi_rtl_0_sck_o,
      spi_rtl_0_sck_t => spi_rtl_0_sck_t,
      spi_rtl_0_ss_i(1) => spi_rtl_0_ss_i_1(1),
      spi_rtl_0_ss_i(0) => spi_rtl_0_ss_i_0(0),
      spi_rtl_0_ss_o(1) => spi_rtl_0_ss_o_1(1),
      spi_rtl_0_ss_o(0) => spi_rtl_0_ss_o_0(0),
      spi_rtl_0_ss_t => spi_rtl_0_ss_t
    );
ir_sensor_scl_iobuf: component IOBUF
     port map (
      I => ir_sensor_scl_o,
      IO => ir_sensor_scl_io,
      O => ir_sensor_scl_i,
      T => ir_sensor_scl_t
    );
ir_sensor_sda_iobuf: component IOBUF
     port map (
      I => ir_sensor_sda_o,
      IO => ir_sensor_sda_io,
      O => ir_sensor_sda_i,
      T => ir_sensor_sda_t
    );
spi_rtl_0_io0_iobuf: component IOBUF
     port map (
      I => spi_rtl_0_io0_o,
      IO => spi_rtl_0_io0_io,
      O => spi_rtl_0_io0_i,
      T => spi_rtl_0_io0_t
    );
spi_rtl_0_io1_iobuf: component IOBUF
     port map (
      I => spi_rtl_0_io1_o,
      IO => spi_rtl_0_io1_io,
      O => spi_rtl_0_io1_i,
      T => spi_rtl_0_io1_t
    );
spi_rtl_0_sck_iobuf: component IOBUF
     port map (
      I => spi_rtl_0_sck_o,
      IO => spi_rtl_0_sck_io,
      O => spi_rtl_0_sck_i,
      T => spi_rtl_0_sck_t
    );
spi_rtl_0_ss_iobuf_0: component IOBUF
     port map (
      I => spi_rtl_0_ss_o_0(0),
      IO => spi_rtl_0_ss_io(0),
      O => spi_rtl_0_ss_i_0(0),
      T => spi_rtl_0_ss_t
    );
spi_rtl_0_ss_iobuf_1: component IOBUF
     port map (
      I => spi_rtl_0_ss_o_1(1),
      IO => spi_rtl_0_ss_io(1),
      O => spi_rtl_0_ss_i_1(1),
      T => spi_rtl_0_ss_t
    );
end STRUCTURE;
