-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.1 (win64) Build 2902540 Wed May 27 19:54:49 MDT 2020
-- Date        : Wed Mar 29 21:27:16 2023
-- Host        : DESKTOP-F6K4P93 running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               u:/sdmay23-47/petalinux/hw/hw/hw.srcs/sources_1/bd/system/ip/system_axis_subset_converter_0_0/system_axis_subset_converter_0_0_stub.vhdl
-- Design      : system_axis_subset_converter_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z010clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity system_axis_subset_converter_0_0 is
  Port ( 
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

end system_axis_subset_converter_0_0;

architecture stub of system_axis_subset_converter_0_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "aclk,aresetn,s_axis_tvalid,s_axis_tready,s_axis_tdata[15:0],s_axis_tid[4:0],m_axis_tvalid,m_axis_tready,m_axis_tdata[15:0],m_axis_tlast,m_axis_tid[4:0]";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "top_system_axis_subset_converter_0_0,Vivado 2020.1";
begin
end;
