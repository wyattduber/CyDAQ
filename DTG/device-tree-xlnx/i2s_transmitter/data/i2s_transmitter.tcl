#
# (C) Copyright 2018 Xilinx, Inc.
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation; either version 2 of
# the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#

proc generate {drv_handle} {
	foreach i [get_sw_cores device_tree] {
		set common_tcl_file "[get_property "REPOSITORY" $i]/data/common_proc.tcl"
		if {[file exists $common_tcl_file]} {
			source $common_tcl_file
			break
		}
	}
	set node [gen_peripheral_nodes $drv_handle]
	if {$node == 0} {
		return
	}
	set compatible [get_comp_str $drv_handle]
	set compatible [append compatible " " "xlnx,i2s-transmitter-1.0"]
	set_drv_prop $drv_handle compatible "$compatible" stringlist
	set dwidth [get_property CONFIG.C_DWIDTH [get_cells -hier $drv_handle]]
	hsi::utils::add_new_dts_param "$node" "xlnx,dwidth" $dwidth hexint
	set num_channels [get_property CONFIG.C_NUM_CHANNELS [get_cells -hier $drv_handle]]
	hsi::utils::add_new_dts_param "$node" "xlnx,num-channels" $num_channels hexint
	set depth [get_property CONFIG.C_DEPTH [get_cells -hier $drv_handle]]
	hsi::utils::add_new_dts_param "$node" "xlnx,depth" $depth hexint
	set ip [get_cells -hier $drv_handle]
	set freq ""
	set clk [get_pins -of_objects $ip "aud_mclk"]
	if {[llength $clk] } {
		set freq [get_property CLK_FREQ $clk]
		hsi::utils::add_new_dts_param $node "aud_mclk" "$freq" int
	}
}
