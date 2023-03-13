import struct
import serial

from master_enum import enum_commands, sig_serial

# For testing petalinux comm applicaion. Delete when done...

COMM_PORT = "COM8"

ser = serial.Serial(
    port=COMM_PORT, 
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

print("done")