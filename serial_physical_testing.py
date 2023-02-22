
import os
import time
import serial

# NOT READY YET

COMM_PORT = "COM7"

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

ser.write(b'@0!')
res = b""
count = 0
size = 0
t0 = time.time()
with open('data.txt', 'bw') as datafile:
    while not res.endswith(b"!"):
        res = ser.read_all()
        if res.endswith(b"!"):
            break
        if res == b'': # no data
            continue
        # toWrite = res.decode("ascii")
        toWrite = res
        size += len(toWrite)
        print(toWrite)
        datafile.write(toWrite)
        count+=1
t1 = time.time()
print("Time: ", t1-t0)
print("chunks: ", count)
print("size: ", size)