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
	set compatible "xlnx,v-scd"
	set_drv_prop $drv_handle compatible "$compatible" stringlist
	set ip [get_cells -hier $drv_handle]
	set max_data_width [get_property CONFIG.MAX_DATA_WIDTH [get_cells -hier $drv_handle]]
	hsi::utils::add_new_dts_param "${node}" "xlnx,max-data-width" $max_data_width int
	set memory_scd [get_property CONFIG.MEMORY_BASED [get_cells -hier $drv_handle]]
	if {$memory_scd == 1} {
		set max_nr_streams [get_property CONFIG.MAX_NR_STREAMS [get_cells -hier $drv_handle]]
		hsi::utils::add_new_dts_param "$node" "xlnx,numstreams" $max_nr_streams int
		hsi::utils::add_new_dts_param $node "#address-cells" 1 int
		hsi::utils::add_new_dts_param $node "#size-cells" 0 int
		hsi::utils::add_new_dts_param $node "xlnx,memorybased" "" boolean
		hsi::utils::add_new_dts_param "$node" "#dma-cells" 1 int
		set aximm_addr_width [get_property CONFIG.AXIMM_ADDR_WIDTH [get_cells -hier $drv_handle]]
		hsi::utils::add_new_dts_param "$node" "xlnx,addrwidth" $aximm_addr_width hexint
		for {set stream 0} {$stream < $max_nr_streams} {incr stream} {
			set scd_node [add_or_get_dt_node -n "subdev@$stream" -p $node]
			set port_node [add_or_get_dt_node -n "port@0" -l port_$stream -p $scd_node]
			hsi::utils::add_new_dts_param "$port_node" "reg" 0 int
			set endpoint [add_or_get_dt_node -n "endpoint" -l scd_in$stream -p $port_node]
			hsi::utils::add_new_dts_param "$endpoint" "remote-endpoint" vcap0_out$stream reference
		}
		set dt_overlay [get_property CONFIG.dt_overlay [get_os]]
		if {$dt_overlay} {
			set bus_node "overlay2"
		} else {
			set bus_node "amba_pl"
		}
		set dts_file [current_dt_tree]
		set dma_names ""
		set dmas ""
		set vcap_scd [add_or_get_dt_node -n "video_cap" -l videocap -d $dts_file -p $bus_node]
		for {set stream 0} {$stream < $max_nr_streams} {incr stream} {
			append dma_names " " "port$stream"
			set peri "$drv_handle $stream"
			set dmas [lappend dmas $peri]
		}
		hsi::utils::add_new_dts_param "$vcap_scd" "dma-names" $dma_names stringlist
		generate_dmas $vcap_scd $dmas
		set ports_vcap [add_or_get_dt_node -n "ports" -l ports_vcap -p $vcap_scd]
		hsi::utils::add_new_dts_param $ports_vcap "#address-cells" 1 int
		hsi::utils::add_new_dts_param $ports_vcap "#size-cells" 0 int
		hsi::utils::add_new_dts_param $vcap_scd "compatible" "xlnx,video" string
		for {set stream 0} {$stream < $max_nr_streams} {incr stream} {
			set port_vcap_node [add_or_get_dt_node -n "port@$stream" -l port$stream -p $ports_vcap]
			hsi::utils::add_new_dts_param "$port_vcap_node" "reg" $stream int
			hsi::utils::add_new_dts_param "$port_vcap_node" "direction" output string
			set vcap_endpoint [add_or_get_dt_node -n "endpoint" -l vcap0_out$stream -p $port_vcap_node]
			hsi::utils::add_new_dts_param "$vcap_endpoint" "remote-endpoint" scd_in$stream reference
		}
	} else {
		set max_nr_streams [get_property CONFIG.MAX_NR_STREAMS [get_cells -hier $drv_handle]]
		hsi::utils::add_new_dts_param "$node" "xlnx,numstreams" $max_nr_streams int
		hsi::utils::add_new_dts_param $node "#address-cells" 1 int
		hsi::utils::add_new_dts_param $node "#size-cells" 0 int
	}
}

proc generate_dmas {vcap_scd dmas} {
	set len [llength $dmas]
	switch $len {
		"1" {
			set refs [lindex $dmas 0]
			hsi::utils::add_new_dts_param "$vcap_scd" "dmas" $refs reference
		}
		"2" {
			set refs [lindex $dmas 0]
			append refs ">, <&[lindex $dmas 1]"
			hsi::utils::add_new_dts_param "$vcap_scd" "dmas" $refs reference
		}
		"3" {
			set refs [lindex $dmas 0]
			append refs ">, <&[lindex $dmas 1]>, <&[lindex $dmas 2]"
			hsi::utils::add_new_dts_param "$vcap_scd" "dmas" $refs reference
		}
		"4" {
			set refs [lindex $dmas 0]
			append refs ">, <&[lindex $dmas 1]>, <&[lindex $dmas 2]>, <&[lindex $dmas 3]"
			hsi::utils::add_new_dts_param "$vcap_scd" "dmas" $refs reference
		}
		"5" {
			set refs [lindex $dmas 0]
			append refs ">, <&[lindex $dmas 1]>, <&[lindex $dmas 2]>, <&[lindex $dmas 3]>, <&[lindex $dmas 4]"
			hsi::utils::add_new_dts_param "$vcap_scd" "dmas" $refs reference
		}
		"6" {
			set refs [lindex $dmas 0]
			append refs ">, <&[lindex $dmas 1]>, <&[lindex $dmas 2]>, <&[lindex $dmas 3]>, <&[lindex $dmas 4]>, <&[lindex $dmas 5]"
			hsi::utils::add_new_dts_param "$vcap_scd" "dmas" $refs reference
		}
		"7" {
			set refs [lindex $dmas 0]
			append refs ">, <&[lindex $dmas 1]>, <&[lindex $dmas 2]>, <&[lindex $dmas 3]>, <&[lindex $dmas 4]>, <&[lindex $dmas 5]>, <&[lindex $dmas 6]"
			hsi::utils::add_new_dts_param "$vcap_scd" "dmas" $refs reference
		}
		"8" {
			set refs [lindex $dmas 0]
			append refs ">, <&[lindex $dmas 1]>, <&[lindex $dmas 2]>, <&[lindex $dmas 3]>, <&[lindex $dmas 4]>, <&[lindex $dmas 5]>, <&[lindex $dmas 6]>, <&[lindex $dmas 7]"
			hsi::utils::add_new_dts_param "$vcap_scd" "dmas" $refs reference
		}
	}
}
