
import os
import time
import serial

# NOT READY YET

ser = serial.Serial(
    port="COM7", 
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

ser.write(b'@\x04!')
res = b""
count = 0
t0 = time.time()
with open('data.txt', 'w') as datafile:
    while not res.endswith(b"!"):
        res = ser.read_all()
        datafile.write(res.decode("ascii"))
        count+=1
t1 = time.time()
print("Time: ", t1-t0)
print(count)

ser.write(b'stop!')