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
	set compatible [append compatible " " "xlnx,sdi-tx"]
	set_drv_prop $drv_handle compatible "$compatible" stringlist
	set exdes_board [get_property CONFIG.C_EXDES_BOARD [get_cells -hier $drv_handle]]
	hsi::utils::add_new_dts_param "${node}" "xlnx,exdes-board" $exdes_board string
	set exdes_config [get_property CONFIG.C_EXDES_CONFIG [get_cells -hier $drv_handle]]
	hsi::utils::add_new_dts_param "${node}" "xlnx,exdes-config" $exdes_config string
	set adv_features [get_property CONFIG.C_INCLUDE_ADV_FEATURES [get_cells -hier $drv_handle]]
	hsi::utils::add_new_dts_param "${node}" "xlnx,include-adv-features" $adv_features string
	set axilite [get_property CONFIG.C_INCLUDE_AXILITE [get_cells -hier $drv_handle]]
	hsi::utils::add_new_dts_param "${node}" "xlnx,include-axilite" $axilite string
	set edh [get_property CONFIG.C_INCLUDE_EDH [get_cells -hier $drv_handle]]
	hsi::utils::add_new_dts_param "${node}" "xlnx,include-edh" $edh string
	set linerate [get_property CONFIG.C_LINE_RATE [get_cells -hier $drv_handle]]
	hsi::utils::add_new_dts_param "${node}" "xlnx,line-rate" $linerate string
	set pixelclock [get_property CONFIG.C_PIXELS_PER_CLOCK [get_cells -hier $drv_handle]]
	hsi::utils::add_new_dts_param "${node}" "xlnx,pixels-per-clock" $pixelclock string
	set video_intf [get_property CONFIG.C_VIDEO_INTF [get_cells -hier $drv_handle]]
	hsi::utils::add_new_dts_param "$node" "xlnx,video-intf" $video_intf string
}
