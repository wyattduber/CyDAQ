# Simple script for setting up inputs/filters

import serial

com_port = "COM4"

s = serial.Serial(port=com_port, baudrate=921600)

#Input Select bytes
input_sel = bytearray()
input_sel.append(ord('@'))
input_sel.append(0x00)
input_sel.append(0x01)
input_sel.append(ord('!'))

# Sampling rate bytes
fs_sel = bytearray()
fs_sel.append(ord('@'))
fs_sel.append(0x01)
fs_sel += int.to_bytes(44100, 4, 'big')
fs_sel.append(ord('!'))

print(fs_sel)

# Filter select bytes
filt_sel = bytearray()
filt_sel.append(ord('@'))
filt_sel.append(0x02)
filt_sel.append(7)
filt_sel.append(ord('!'))

# Corner select bytes
low_corner = int(1e3)
high_corner = int(40e3)

lc_bytes = [(low_corner >> 8) & 0xff,
            (low_corner) & 0xff]
hc_bytes = [(high_corner >> 8) & 0xff,
            (high_corner) & 0xff]

print(hex(lc_bytes[0]) + ',' + hex(lc_bytes[1]))

corn_sel = bytearray()
corn_sel.append(ord('@'))
corn_sel.append(0x03)
corn_sel.append(lc_bytes[0])
corn_sel.append(lc_bytes[1])
corn_sel.append(hc_bytes[0])
corn_sel.append(hc_bytes[1])
corn_sel.append(ord('!'))

s.write(input_sel)
s.write(fs_sel)
s.write(filt_sel)
s.write(corn_sel)
s.close()
