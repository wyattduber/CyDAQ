# Simple script for manual testing of the ball & beam lab mode

import serial

com_port = "COM4"

s = serial.Serial(port=com_port, baudrate=921600)

# BB mode bytes
input_sel = bytearray()
input_sel.append(ord('@'))
input_sel.append(16)
input_sel.append(ord('!'))

s.write(input_sel)

while True:
    print(str(s.read()))

s.close()
