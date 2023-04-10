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

#======= Sample Rate ===========
# sample_rate = 88
# ser.write(sig_serial.START_BYTE.value.encode())
# ser.write(struct.pack('!BI', enum_commands.SAMPLE_RATE_SET.value, int(sample_rate)))
# ser.write(sig_serial.END_BYTE.value.encode())

#====== Input set ===========
# audio_in = 0
# analog_in = 1
# volt_1 = 2
# volt_3 = 3
# volt_5 = 4
# digital_i2c = 5
# digital_spi_bus = 6
# digital_uart = 7

# input_set = 3
# ser.write(sig_serial.START_BYTE.value.encode())
# ser.write(struct.pack('!B', enum_commands.INPUT_SELECT.value))
# ser.write(struct.pack('!B', int(input_set)))
# ser.write(sig_serial.END_BYTE.value.encode())

#=========== Filter Select ================
    # LP1 = 0
    # HP1 = 1
    # BP2 = 2
    # BP6 = 3
    # HP6 = 4
    # LP6 = 5
    # NOTCH = 6
    # NO_FILTER = 7

filter_select = 1
ser.write(sig_serial.START_BYTE.value.encode())
ser.write(struct.pack('!BB', enum_commands.FILTER_SELECT.value, int(filter_select)))
ser.write(sig_serial.END_BYTE.value.encode())

#=========== Corner Freq ====================
val_to_write = None
u_corner_freq=2000
l_corner_freq=100
corner_freq= 100
filter = "2nd Order Band Pass"
if filter == "2nd Order Band Pass" or filter == "6th Order Band Pass":
    val_to_write = struct.pack('!BHH', enum_commands.CORNER_FREQ_SET.value, int(l_corner_freq),
                                int(u_corner_freq))
    # print("1) Corner Frequency = " + str(l_corner_freq) + " / " + str(u_corner_freq))
elif filter == "1st Order Low Pass" or filter == "6th Order Low Pass":
    val_to_write = struct.pack('!BHH', enum_commands.CORNER_FREQ_SET.value, int(corner_freq), 0)
    # print("2) Corner Frequency = " + str(corner_freq) + " / " + str(0))
elif filter == "1st Order High Pass" or filter == "6th Order High Pass":
    val_to_write = struct.pack('!BHH', enum_commands.CORNER_FREQ_SET.value, int(corner_freq), 0)
    # print("3) Corner Frequency = " + str(corner_freq) + " / " + str(0))
else:
    val_to_write = struct.pack('!BHH', enum_commands.CORNER_FREQ_SET.value, int(l_corner_freq),
                                int(u_corner_freq))
    # print("4) Corner Frequency = " + str(l_corner_freq) + " / " + str(u_corner_freq))
ser.write(sig_serial.START_BYTE.value.encode())
ser.write(val_to_write)
ser.write(sig_serial.END_BYTE.value.encode())

while True:
    data = ser.read_all()
    if data != b'':
        print(data)
