-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.1 (win64) Build 2902540 Wed May 27 19:54:49 MDT 2020
-- Date        : Wed Mar 29 21:27:16 2023
-- Host        : DESKTOP-F6K4P93 running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode funcsim
--               u:/sdmay23-47/petalinux/hw/hw/hw.srcs/sources_1/bd/system/ip/system_axis_subset_converter_0_0/system_axis_subset_converter_0_0_sim_netlist.vhdl
-- Design      : system_axis_subset_converter_0_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z010clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity system_axis_subset_converter_0_0_axis_subset_converter_v1_1_21_core is
  port (
    m_axis_tlast : out STD_LOGIC;
    aclk : in STD_LOGIC;
    aresetn : in STD_LOGIC;
    aclken : in STD_LOGIC;
    s_axis_tvalid : in STD_LOGIC;
    m_axis_tready : in STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of system_axis_subset_converter_0_0_axis_subset_converter_v1_1_21_core : entity is "axis_subset_converter_v1_1_21_core";
end system_axis_subset_converter_0_0_axis_subset_converter_v1_1_21_core;

architecture STRUCTURE of system_axis_subset_converter_0_0_axis_subset_converter_v1_1_21_core is
  signal clear : STD_LOGIC;
  signal \gen_pulsed_tlast_cntr.pulsed_tlast_cntr\ : STD_LOGIC;
  signal \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\ : STD_LOGIC_VECTOR ( 6 downto 0 );
  signal \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\ : STD_LOGIC_VECTOR ( 6 downto 0 );
  signal m_axis_tlast_INST_0_i_1_n_0 : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \gen_pulsed_tlast_cntr.pulsed_tlast_cntr[0]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \gen_pulsed_tlast_cntr.pulsed_tlast_cntr[1]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \gen_pulsed_tlast_cntr.pulsed_tlast_cntr[2]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \gen_pulsed_tlast_cntr.pulsed_tlast_cntr[3]_i_1\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \gen_pulsed_tlast_cntr.pulsed_tlast_cntr[4]_i_1\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of m_axis_tlast_INST_0_i_1 : label is "soft_lutpair1";
begin
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr[0]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(0),
      O => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(0)
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(0),
      I1 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(1),
      O => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(1)
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"6A"
    )
        port map (
      I0 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(2),
      I1 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(1),
      I2 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(0),
      O => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(2)
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6AAA"
    )
        port map (
      I0 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(3),
      I1 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(0),
      I2 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(1),
      I3 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(2),
      O => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(3)
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr[4]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"6AAAAAAA"
    )
        port map (
      I0 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(4),
      I1 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(2),
      I2 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(3),
      I3 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(0),
      I4 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(1),
      O => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(4)
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr[5]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"6AAAAAAAAAAAAAAA"
    )
        port map (
      I0 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(5),
      I1 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(1),
      I2 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(0),
      I3 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(3),
      I4 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(2),
      I5 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(4),
      O => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(5)
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr[6]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => aresetn,
      O => clear
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr[6]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"80"
    )
        port map (
      I0 => aclken,
      I1 => s_axis_tvalid,
      I2 => m_axis_tready,
      O => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr\
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr[6]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"6AAAAAAAAAAAAAAA"
    )
        port map (
      I0 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(6),
      I1 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(4),
      I2 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(2),
      I3 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(3),
      I4 => m_axis_tlast_INST_0_i_1_n_0,
      I5 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(5),
      O => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(6)
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => aclk,
      CE => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr\,
      D => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(0),
      Q => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(0),
      R => clear
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => aclk,
      CE => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr\,
      D => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(1),
      Q => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(1),
      R => clear
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => aclk,
      CE => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr\,
      D => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(2),
      Q => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(2),
      R => clear
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => aclk,
      CE => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr\,
      D => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(3),
      Q => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(3),
      R => clear
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => aclk,
      CE => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr\,
      D => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(4),
      Q => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(4),
      R => clear
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => aclk,
      CE => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr\,
      D => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(5),
      Q => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(5),
      R => clear
    );
\gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => aclk,
      CE => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr\,
      D => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_ns\(6),
      Q => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(6),
      R => clear
    );
m_axis_tlast_INST_0: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8000000000000000"
    )
        port map (
      I0 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(6),
      I1 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(4),
      I2 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(2),
      I3 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(3),
      I4 => m_axis_tlast_INST_0_i_1_n_0,
      I5 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(5),
      O => m_axis_tlast
    );
m_axis_tlast_INST_0_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(0),
      I1 => \gen_pulsed_tlast_cntr.pulsed_tlast_cntr_reg\(1),
      O => m_axis_tlast_INST_0_i_1_n_0
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 is
  port (
    aclk : in STD_LOGIC;
    aresetn : in STD_LOGIC;
    aclken : in STD_LOGIC;
    s_axis_tvalid : in STD_LOGIC;
    s_axis_tready : out STD_LOGIC;
    s_axis_tdata : in STD_LOGIC_VECTOR ( 15 downto 0 );
    s_axis_tstrb : in STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axis_tkeep : in STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axis_tlast : in STD_LOGIC;
    s_axis_tid : in STD_LOGIC_VECTOR ( 4 downto 0 );
    s_axis_tdest : in STD_LOGIC_VECTOR ( 0 to 0 );
    s_axis_tuser : in STD_LOGIC_VECTOR ( 0 to 0 );
    m_axis_tvalid : out STD_LOGIC;
    m_axis_tready : in STD_LOGIC;
    m_axis_tdata : out STD_LOGIC_VECTOR ( 15 downto 0 );
    m_axis_tstrb : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axis_tkeep : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axis_tlast : out STD_LOGIC;
    m_axis_tid : out STD_LOGIC_VECTOR ( 4 downto 0 );
    m_axis_tdest : out STD_LOGIC_VECTOR ( 0 to 0 );
    m_axis_tuser : out STD_LOGIC_VECTOR ( 0 to 0 );
    transfer_dropped : out STD_LOGIC;
    sparse_tkeep_removed : out STD_LOGIC
  );
  attribute C_DEFAULT_TLAST : integer;
  attribute C_DEFAULT_TLAST of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 128;
  attribute C_FAMILY : string;
  attribute C_FAMILY of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is "zynq";
  attribute C_M_AXIS_SIGNAL_SET : string;
  attribute C_M_AXIS_SIGNAL_SET of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is "32'b00000000000000000000000000110011";
  attribute C_M_AXIS_TDATA_WIDTH : integer;
  attribute C_M_AXIS_TDATA_WIDTH of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 16;
  attribute C_M_AXIS_TDEST_WIDTH : integer;
  attribute C_M_AXIS_TDEST_WIDTH of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 1;
  attribute C_M_AXIS_TID_WIDTH : integer;
  attribute C_M_AXIS_TID_WIDTH of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 5;
  attribute C_M_AXIS_TUSER_WIDTH : integer;
  attribute C_M_AXIS_TUSER_WIDTH of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 1;
  attribute C_S_AXIS_SIGNAL_SET : string;
  attribute C_S_AXIS_SIGNAL_SET of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is "32'b00000000000000000000000000100011";
  attribute C_S_AXIS_TDATA_WIDTH : integer;
  attribute C_S_AXIS_TDATA_WIDTH of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 16;
  attribute C_S_AXIS_TDEST_WIDTH : integer;
  attribute C_S_AXIS_TDEST_WIDTH of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 1;
  attribute C_S_AXIS_TID_WIDTH : integer;
  attribute C_S_AXIS_TID_WIDTH of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 5;
  attribute C_S_AXIS_TUSER_WIDTH : integer;
  attribute C_S_AXIS_TUSER_WIDTH of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 1;
  attribute G_INDX_SS_TDATA : integer;
  attribute G_INDX_SS_TDATA of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 1;
  attribute G_INDX_SS_TDEST : integer;
  attribute G_INDX_SS_TDEST of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 6;
  attribute G_INDX_SS_TID : integer;
  attribute G_INDX_SS_TID of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 5;
  attribute G_INDX_SS_TKEEP : integer;
  attribute G_INDX_SS_TKEEP of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 3;
  attribute G_INDX_SS_TLAST : integer;
  attribute G_INDX_SS_TLAST of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 4;
  attribute G_INDX_SS_TREADY : integer;
  attribute G_INDX_SS_TREADY of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 0;
  attribute G_INDX_SS_TSTRB : integer;
  attribute G_INDX_SS_TSTRB of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 2;
  attribute G_INDX_SS_TUSER : integer;
  attribute G_INDX_SS_TUSER of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 7;
  attribute G_MASK_SS_TDATA : integer;
  attribute G_MASK_SS_TDATA of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 2;
  attribute G_MASK_SS_TDEST : integer;
  attribute G_MASK_SS_TDEST of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 64;
  attribute G_MASK_SS_TID : integer;
  attribute G_MASK_SS_TID of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 32;
  attribute G_MASK_SS_TKEEP : integer;
  attribute G_MASK_SS_TKEEP of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 8;
  attribute G_MASK_SS_TLAST : integer;
  attribute G_MASK_SS_TLAST of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 16;
  attribute G_MASK_SS_TREADY : integer;
  attribute G_MASK_SS_TREADY of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 1;
  attribute G_MASK_SS_TSTRB : integer;
  attribute G_MASK_SS_TSTRB of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 4;
  attribute G_MASK_SS_TUSER : integer;
  attribute G_MASK_SS_TUSER of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 128;
  attribute G_TASK_SEVERITY_ERR : integer;
  attribute G_TASK_SEVERITY_ERR of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 2;
  attribute G_TASK_SEVERITY_INFO : integer;
  attribute G_TASK_SEVERITY_INFO of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 0;
  attribute G_TASK_SEVERITY_WARNING : integer;
  attribute G_TASK_SEVERITY_WARNING of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is 1;
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 : entity is "top_system_axis_subset_converter_0_0";
end system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0;

architecture STRUCTURE of system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0 is
  signal \<const0>\ : STD_LOGIC;
  signal \^m_axis_tready\ : STD_LOGIC;
  signal \^s_axis_tdata\ : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal \^s_axis_tid\ : STD_LOGIC_VECTOR ( 4 downto 0 );
  signal \^s_axis_tvalid\ : STD_LOGIC;
begin
  \^m_axis_tready\ <= m_axis_tready;
  \^s_axis_tdata\(15 downto 0) <= s_axis_tdata(15 downto 0);
  \^s_axis_tid\(4 downto 0) <= s_axis_tid(4 downto 0);
  \^s_axis_tvalid\ <= s_axis_tvalid;
  m_axis_tdata(15 downto 0) <= \^s_axis_tdata\(15 downto 0);
  m_axis_tdest(0) <= \<const0>\;
  m_axis_tid(4 downto 0) <= \^s_axis_tid\(4 downto 0);
  m_axis_tkeep(1) <= \<const0>\;
  m_axis_tkeep(0) <= \<const0>\;
  m_axis_tstrb(1) <= \<const0>\;
  m_axis_tstrb(0) <= \<const0>\;
  m_axis_tuser(0) <= \<const0>\;
  m_axis_tvalid <= \^s_axis_tvalid\;
  s_axis_tready <= \^m_axis_tready\;
  sparse_tkeep_removed <= \<const0>\;
  transfer_dropped <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
axis_subset_converter_v1_1_21_core: entity work.system_axis_subset_converter_0_0_axis_subset_converter_v1_1_21_core
     port map (
      aclk => aclk,
      aclken => aclken,
      aresetn => aresetn,
      m_axis_tlast => m_axis_tlast,
      m_axis_tready => \^m_axis_tready\,
      s_axis_tvalid => \^s_axis_tvalid\
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity system_axis_subset_converter_0_0 is
  port (
    aclk : in STD_LOGIC;
    aresetn : in STD_LOGIC;
    s_axis_tvalid : in STD_LOGIC;
    s_axis_tready : out STD_LOGIC;
    s_axis_tdata : in STD_LOGIC_VECTOR ( 15 downto 0 );
    s_axis_tid : in STD_LOGIC_VECTOR ( 4 downto 0 );
    m_axis_tvalid : out STD_LOGIC;
    m_axis_tready : in STD_LOGIC;
    m_axis_tdata : out STD_LOGIC_VECTOR ( 15 downto 0 );
    m_axis_tlast : out STD_LOGIC;
    m_axis_tid : out STD_LOGIC_VECTOR ( 4 downto 0 )
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of system_axis_subset_converter_0_0 : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of system_axis_subset_converter_0_0 : entity is "system_axis_subset_converter_0_0,top_system_axis_subset_converter_0_0,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of system_axis_subset_converter_0_0 : entity is "yes";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of system_axis_subset_converter_0_0 : entity is "top_system_axis_subset_converter_0_0,Vivado 2020.1";
end system_axis_subset_converter_0_0;

architecture STRUCTURE of system_axis_subset_converter_0_0 is
  signal NLW_inst_sparse_tkeep_removed_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_transfer_dropped_UNCONNECTED : STD_LOGIC;
  signal NLW_inst_m_axis_tdest_UNCONNECTED : STD_LOGIC_VECTOR ( 0 to 0 );
  signal NLW_inst_m_axis_tkeep_UNCONNECTED : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal NLW_inst_m_axis_tstrb_UNCONNECTED : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal NLW_inst_m_axis_tuser_UNCONNECTED : STD_LOGIC_VECTOR ( 0 to 0 );
  attribute C_DEFAULT_TLAST : integer;
  attribute C_DEFAULT_TLAST of inst : label is 128;
  attribute C_FAMILY : string;
  attribute C_FAMILY of inst : label is "zynq";
  attribute C_M_AXIS_SIGNAL_SET : string;
  attribute C_M_AXIS_SIGNAL_SET of inst : label is "32'b00000000000000000000000000110011";
  attribute C_M_AXIS_TDATA_WIDTH : integer;
  attribute C_M_AXIS_TDATA_WIDTH of inst : label is 16;
  attribute C_M_AXIS_TDEST_WIDTH : integer;
  attribute C_M_AXIS_TDEST_WIDTH of inst : label is 1;
  attribute C_M_AXIS_TID_WIDTH : integer;
  attribute C_M_AXIS_TID_WIDTH of inst : label is 5;
  attribute C_M_AXIS_TUSER_WIDTH : integer;
  attribute C_M_AXIS_TUSER_WIDTH of inst : label is 1;
  attribute C_S_AXIS_SIGNAL_SET : string;
  attribute C_S_AXIS_SIGNAL_SET of inst : label is "32'b00000000000000000000000000100011";
  attribute C_S_AXIS_TDATA_WIDTH : integer;
  attribute C_S_AXIS_TDATA_WIDTH of inst : label is 16;
  attribute C_S_AXIS_TDEST_WIDTH : integer;
  attribute C_S_AXIS_TDEST_WIDTH of inst : label is 1;
  attribute C_S_AXIS_TID_WIDTH : integer;
  attribute C_S_AXIS_TID_WIDTH of inst : label is 5;
  attribute C_S_AXIS_TUSER_WIDTH : integer;
  attribute C_S_AXIS_TUSER_WIDTH of inst : label is 1;
  attribute G_INDX_SS_TDATA : integer;
  attribute G_INDX_SS_TDATA of inst : label is 1;
  attribute G_INDX_SS_TDEST : integer;
  attribute G_INDX_SS_TDEST of inst : label is 6;
  attribute G_INDX_SS_TID : integer;
  attribute G_INDX_SS_TID of inst : label is 5;
  attribute G_INDX_SS_TKEEP : integer;
  attribute G_INDX_SS_TKEEP of inst : label is 3;
  attribute G_INDX_SS_TLAST : integer;
  attribute G_INDX_SS_TLAST of inst : label is 4;
  attribute G_INDX_SS_TREADY : integer;
  attribute G_INDX_SS_TREADY of inst : label is 0;
  attribute G_INDX_SS_TSTRB : integer;
  attribute G_INDX_SS_TSTRB of inst : label is 2;
  attribute G_INDX_SS_TUSER : integer;
  attribute G_INDX_SS_TUSER of inst : label is 7;
  attribute G_MASK_SS_TDATA : integer;
  attribute G_MASK_SS_TDATA of inst : label is 2;
  attribute G_MASK_SS_TDEST : integer;
  attribute G_MASK_SS_TDEST of inst : label is 64;
  attribute G_MASK_SS_TID : integer;
  attribute G_MASK_SS_TID of inst : label is 32;
  attribute G_MASK_SS_TKEEP : integer;
  attribute G_MASK_SS_TKEEP of inst : label is 8;
  attribute G_MASK_SS_TLAST : integer;
  attribute G_MASK_SS_TLAST of inst : label is 16;
  attribute G_MASK_SS_TREADY : integer;
  attribute G_MASK_SS_TREADY of inst : label is 1;
  attribute G_MASK_SS_TSTRB : integer;
  attribute G_MASK_SS_TSTRB of inst : label is 4;
  attribute G_MASK_SS_TUSER : integer;
  attribute G_MASK_SS_TUSER of inst : label is 128;
  attribute G_TASK_SEVERITY_ERR : integer;
  attribute G_TASK_SEVERITY_ERR of inst : label is 2;
  attribute G_TASK_SEVERITY_INFO : integer;
  attribute G_TASK_SEVERITY_INFO of inst : label is 0;
  attribute G_TASK_SEVERITY_WARNING : integer;
  attribute G_TASK_SEVERITY_WARNING of inst : label is 1;
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of aclk : signal is "xilinx.com:signal:clock:1.0 CLKIF CLK";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of aclk : signal is "XIL_INTERFACENAME CLKIF, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.000, CLK_DOMAIN system_processing_system7_0_0_FCLK_CLK0, ASSOCIATED_BUSIF S_AXIS:M_AXIS, ASSOCIATED_RESET aresetn, INSERT_VIP 0, ASSOCIATED_CLKEN aclken";
  attribute X_INTERFACE_INFO of aresetn : signal is "xilinx.com:signal:reset:1.0 RSTIF RST";
  attribute X_INTERFACE_PARAMETER of aresetn : signal is "XIL_INTERFACENAME RSTIF, POLARITY ACTIVE_LOW, INSERT_VIP 0, TYPE INTERCONNECT";
  attribute X_INTERFACE_INFO of m_axis_tlast : signal is "xilinx.com:interface:axis:1.0 M_AXIS TLAST";
  attribute X_INTERFACE_INFO of m_axis_tready : signal is "xilinx.com:interface:axis:1.0 M_AXIS TREADY";
  attribute X_INTERFACE_INFO of m_axis_tvalid : signal is "xilinx.com:interface:axis:1.0 M_AXIS TVALID";
  attribute X_INTERFACE_INFO of s_axis_tready : signal is "xilinx.com:interface:axis:1.0 S_AXIS TREADY";
  attribute X_INTERFACE_INFO of s_axis_tvalid : signal is "xilinx.com:interface:axis:1.0 S_AXIS TVALID";
  attribute X_INTERFACE_INFO of m_axis_tdata : signal is "xilinx.com:interface:axis:1.0 M_AXIS TDATA";
  attribute X_INTERFACE_INFO of m_axis_tid : signal is "xilinx.com:interface:axis:1.0 M_AXIS TID";
  attribute X_INTERFACE_PARAMETER of m_axis_tid : signal is "XIL_INTERFACENAME M_AXIS, TDATA_NUM_BYTES 2, TDEST_WIDTH 0, TID_WIDTH 5, TUSER_WIDTH 0, HAS_TREADY 1, HAS_TSTRB 0, HAS_TKEEP 0, HAS_TLAST 1, FREQ_HZ 100000000, PHASE 0.000, CLK_DOMAIN system_processing_system7_0_0_FCLK_CLK0, LAYERED_METADATA undef, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of s_axis_tdata : signal is "xilinx.com:interface:axis:1.0 S_AXIS TDATA";
  attribute X_INTERFACE_INFO of s_axis_tid : signal is "xilinx.com:interface:axis:1.0 S_AXIS TID";
  attribute X_INTERFACE_PARAMETER of s_axis_tid : signal is "XIL_INTERFACENAME S_AXIS, TDATA_NUM_BYTES 2, TDEST_WIDTH 0, TID_WIDTH 5, TUSER_WIDTH 0, HAS_TREADY 1, HAS_TSTRB 0, HAS_TKEEP 0, HAS_TLAST 0, FREQ_HZ 100000000, PHASE 0.000, CLK_DOMAIN system_processing_system7_0_0_FCLK_CLK0, LAYERED_METADATA undef, INSERT_VIP 0";
begin
inst: entity work.system_axis_subset_converter_0_0_top_system_axis_subset_converter_0_0
     port map (
      aclk => aclk,
      aclken => '1',
      aresetn => aresetn,
      m_axis_tdata(15 downto 0) => m_axis_tdata(15 downto 0),
      m_axis_tdest(0) => NLW_inst_m_axis_tdest_UNCONNECTED(0),
      m_axis_tid(4 downto 0) => m_axis_tid(4 downto 0),
      m_axis_tkeep(1 downto 0) => NLW_inst_m_axis_tkeep_UNCONNECTED(1 downto 0),
      m_axis_tlast => m_axis_tlast,
      m_axis_tready => m_axis_tready,
      m_axis_tstrb(1 downto 0) => NLW_inst_m_axis_tstrb_UNCONNECTED(1 downto 0),
      m_axis_tuser(0) => NLW_inst_m_axis_tuser_UNCONNECTED(0),
      m_axis_tvalid => m_axis_tvalid,
      s_axis_tdata(15 downto 0) => s_axis_tdata(15 downto 0),
      s_axis_tdest(0) => '0',
      s_axis_tid(4 downto 0) => s_axis_tid(4 downto 0),
      s_axis_tkeep(1 downto 0) => B"11",
      s_axis_tlast => '1',
      s_axis_tready => s_axis_tready,
      s_axis_tstrb(1 downto 0) => B"11",
      s_axis_tuser(0) => '0',
      s_axis_tvalid => s_axis_tvalid,
      sparse_tkeep_removed => NLW_inst_sparse_tkeep_removed_UNCONNECTED,
      transfer_dropped => NLW_inst_transfer_dropped_UNCONNECTED
    );
end STRUCTURE;
