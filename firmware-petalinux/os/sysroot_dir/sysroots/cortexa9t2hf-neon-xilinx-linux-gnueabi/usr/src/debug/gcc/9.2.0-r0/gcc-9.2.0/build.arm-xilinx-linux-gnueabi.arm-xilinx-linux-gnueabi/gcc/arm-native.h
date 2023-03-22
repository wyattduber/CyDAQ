/* -*- buffer-read-only: t -*-
   Generated automatically by parsecpu.awk from arm-cpus.in.
   Do not edit.

   Copyright (C) 2011-2019 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 3,
   or (at your option) any later version.

   GCC is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public
   License along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

static struct vendor_cpu vendor41_cpu_table[] = {
  {"0x926", "armv5tej+fp", "arm926ej-s"},
  {"0xa26", "armv5tej+fp", "arm1026ej-s"},
  {"0xb36", "armv6j+fp", "arm1136jf-s"},
  {"0xb76", "armv6kz+fp", "arm1176jzf-s"},
  {"0xb02", "armv6k+fp", "mpcore"},
  {"0xb56", "armv6t2+fp", "arm1156t2f-s"},
  {"0xc21", "armv6s-m", "cortex-m1"},
  {"0xc20", "armv6s-m", "cortex-m0"},
  {"0xc05", "armv7-a+mp+sec+neon-fp16", "cortex-a5"},
  {"0xc07", "armv7ve+simd", "cortex-a7"},
  {"0xc08", "armv7-a+sec+simd", "cortex-a8"},
  {"0xc09", "armv7-a+mp+sec+neon-fp16", "cortex-a9"},
  {"0xc0d", "armv7ve+simd", "cortex-a12"},
  {"0xc0f", "armv7ve+simd", "cortex-a15"},
  {"0xc0e", "armv7ve+simd", "cortex-a17"},
  {"0xc14", "armv7-r+fp", "cortex-r4f"},
  {"0xc15", "armv7-r+idiv+fp", "cortex-r5"},
  {"0xc17", "armv7-r+idiv+vfpv3-d16-fp16", "cortex-r7"},
  {"0xc18", "armv7-r+idiv+vfpv3-d16-fp16", "cortex-r8"},
  {"0xc24", "armv7e-m+fp", "cortex-m4"},
  {"0xc23", "armv7-m", "cortex-m3"},
  {"0xd01", "armv8-a+crc+simd", "cortex-a32"},
  {"0xd04", "armv8-a+crc+simd", "cortex-a35"},
  {"0xd03", "armv8-a+crc+simd", "cortex-a53"},
  {"0xd07", "armv8-a+crc+simd", "cortex-a57"},
  {"0xd08", "armv8-a+crc+simd", "cortex-a72"},
  {"0xd09", "armv8-a+crc+simd", "cortex-a73"},
  {"0xd05", "armv8.2-a+fp16+dotprod+simd", "cortex-a55"},
  {"0xd0a", "armv8.2-a+fp16+dotprod+simd", "cortex-a75"},
  {"0xd0b", "armv8.2-a+fp16+dotprod+simd", "cortex-a76"},
  {"0xd0c", "armv8.2-a+fp16+dotprod+simd", "neoverse-n1"},
  {"0xd13", "armv8-r+crc+simd", "cortex-r52"},
  {NULL, NULL, NULL}
};

static struct vendor vendors_table[] = {
  {"0x41", vendor41_cpu_table},
  {NULL, NULL}
};
