# Testing script for new firmware. Makes things a bit easier. Should be deleted at the end to clean up repo.

import struct
import serial
import time

from cli.master_enum import enum_commands, config

ser = serial.Serial(
    port="COM10",
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

ser.write(config.START_BYTE.encode('ascii'))
ser.write(struct.pack('!B', enum_commands.PING.value))
ser.write(config.END_BYTE.encode('ascii'))

ser.write(config.START_BYTE.encode('ascii'))
ser.write(struct.pack('!B', enum_commands.PING.value))
ser.write(config.END_BYTE.encode('ascii'))

ser.write(config.START_BYTE.encode())
ser.write(struct.pack('!B', enum_commands.START_SAMPLING.value))
ser.write(struct.pack('!B', enum_commands.START_SAMPLING.value))
ser.write(config.END_BYTE.encode())

time.sleep(1)


ser.write(config.START_BYTE.encode())
ser.write(struct.pack('!B', enum_commands.FETCH_SAMPLES.value))
ser.write(config.END_BYTE.encode())

while True:
    data = ser.read_all()
    if data != b'':
        print(data)