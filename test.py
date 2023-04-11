# Testing script for new firmware. Makes things a bit easier. Should be deleted at the end to clean up repo.

import struct
import serial

from cli.master_enum import enum_commands, sig_serial

ser = serial.Serial(
    port="COM8",
    baudrate=921600,
    timeout=1,
    bytesize=serial.EIGHTBITS,
    stopbits=serial.STOPBITS_ONE,
    xonxoff=False,
    rtscts=False,
    dsrdtr=False,
    parity=serial.PARITY_NONE,
)
print(ser)

ser.write(sig_serial.START_BYTE.value.encode('ascii'))
ser.write(struct.pack('!B', enum_commands.PING.value))
ser.write(sig_serial.END_BYTE.value.encode('ascii'))

while True:
    data = ser.read_all()
    if data != b'':
        print(data)