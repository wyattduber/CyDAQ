import pty
import os
import threading
import time
import serial

master,slave = pty.openpty() #open the pseudoterminal
s_name = os.ttyname(slave) #translate the slave fd to a filename

def listener(port):
    print("---LISTENER STARTED---")
    while True:
        res = b""
        while not res.endswith(b"!"):
            res += os.read(port, 1)
        print("Command recieved: ", res) 

        if res == b'stop!':
            break
        elif res == b'@\x04!':
            os.write(port, b'@')
            os.write(port, b'\x61\x61'*100_000_000)
            os.write(port, b'!') 
        else:
            print("unknown command")

#create a separate thread that listens on the master device for commands
thread = threading.Thread(target=listener, args=[master])
thread.start()

ser = serial.Serial(
    port=s_name, 
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