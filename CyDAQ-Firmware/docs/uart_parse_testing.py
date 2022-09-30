#
# A simple pyserial example program that can be used to test the CyDAQ's command
#   parsing. It's also useful for quickly sending datasets to drive the DAC.
#
#   Uses pyserial and bytearrays to exactly define the bytes sent to CyDAQ
#

import serial, time

#change 'port' to your CyDAQ's port
s = serial.Serial(port='COM6', baudrate=921600)

vals_ramp_4bit = [
0, 
4369, 
8738, 
13107, 
17476, 
21845, 
26214, 
30583, 
34952, 
39321, 
43690, 
48059, 
52428, 
56797, 
61166, 
65535
]

vals_sin_100 = [
32768, 
34825, 
36874, 
38908, 
40916, 
42893, 
44830, 
46719, 
48553, 
50325, 
52028, 
53654, 
55198, 
56654, 
58015, 
59277, 
60434, 
61482, 
62416, 
63234, 
63931, 
64506, 
64955, 
65277, 
65470, 
65535, 
65470, 
65277, 
64955, 
64506, 
63931, 
63234, 
62416, 
61482, 
60434, 
59277, 
58015, 
56654, 
55198, 
53654, 
52028, 
50325, 
48553, 
46719, 
44830, 
42893, 
40916, 
38908, 
36874, 
34825, 
32768, 
30710, 
28661, 
26627, 
24619, 
22642, 
20705, 
18816, 
16982, 
15210, 
13507, 
11881, 
10337, 
8881, 
7520, 
6258, 
5101, 
4053, 
3119, 
2301, 
1604, 
1029, 
580, 
258, 
65, 
0, 
65, 
258, 
580, 
1029, 
1604, 
2301, 
3119, 
4053, 
5101, 
6258, 
7520, 
8881, 
10337, 
11881, 
13507, 
15210, 
16982, 
18816, 
20705, 
22642, 
24619, 
26627, 
28661, 
30710
]

vals_sin_120 = [
32768, 
34482, 
36193, 
37893, 
39580, 
41248, 
42893, 
44510, 
46095, 
47644, 
49151, 
50614, 
52028, 
53389, 
54693, 
55938, 
57118, 
58233, 
59277, 
60249, 
61145, 
61964, 
62702, 
63359, 
63931, 
64418, 
64819, 
65132, 
65355, 
65490, 
65535, 
65490, 
65355, 
65132, 
64819, 
64418, 
63931, 
63359, 
62702, 
61964, 
61145, 
60249, 
59277, 
58233, 
57118, 
55938, 
54693, 
53389, 
52028, 
50614, 
49151, 
47644, 
46095, 
44510, 
42893, 
41248, 
39580, 
37893, 
36193, 
34482, 
32768, 
31053, 
29342, 
27642, 
25955, 
24287, 
22642, 
21025, 
19440, 
17891, 
16384, 
14921, 
13507, 
12146, 
10842, 
9597, 
8417, 
7302, 
6258, 
5286, 
4390, 
3571, 
2833, 
2176, 
1604, 
1117, 
716, 
403, 
180, 
45, 
0, 
45, 
180, 
403, 
716, 
1117, 
1604, 
2176, 
2833, 
3571, 
4390, 
5286, 
6258, 
7302, 
8417, 
9597, 
10842, 
12146, 
13507, 
14921, 
16384, 
17891, 
19440, 
21025, 
22642, 
24287, 
25955, 
27642, 
29342, 
31053
]

vals = [
0, 
329, 
658, 
987, 
1316, 
1645, 
1974, 
2303, 
2632, 
2961, 
3290, 
3619, 
3948, 
4277, 
4606, 
4935, 
5264, 
5593, 
5922, 
6251, 
6580, 
6909, 
7238, 
7567, 
7896, 
8225, 
8554, 
8883, 
9212, 
9541, 
9870, 
10199, 
10528, 
10857, 
11186, 
11515, 
11844, 
12173, 
12502, 
12831, 
13160, 
13489, 
13818, 
14147, 
14476, 
14805, 
15134, 
15463, 
15792, 
16121, 
16450, 
16779, 
17108, 
17437, 
17766, 
18095, 
18424, 
18753, 
19082, 
19411, 
19740, 
20069, 
20398, 
20727, 
21056, 
21385, 
21714, 
22043, 
22372, 
22701, 
23030, 
23359, 
23688, 
24017, 
24346, 
24675, 
25004, 
25333, 
25662, 
25991, 
26320, 
26649, 
26978, 
27307, 
27636, 
27965, 
28294, 
28623, 
28952, 
29281, 
29610, 
29939, 
30268, 
30597, 
30926, 
31255, 
31584, 
31913, 
32242, 
32571, 
32900, 
33229, 
33558, 
33887, 
34216, 
34545, 
34874, 
35203, 
35532, 
35861, 
36190, 
36519, 
36848, 
37177, 
37506, 
37835, 
38164, 
38493, 
38822, 
39151, 
39480, 
39809, 
40138, 
40467, 
40796, 
41125, 
41454, 
41783, 
42112, 
42441, 
42770, 
43099, 
43428, 
43757, 
44086, 
44415, 
44744, 
45073, 
45402, 
45731, 
46060, 
46389, 
46718, 
47047, 
47376, 
47705, 
48034, 
48363, 
48692, 
49021, 
49350, 
49679, 
50008, 
50337, 
50666, 
50995, 
51324, 
51653, 
51982, 
52311, 
52640, 
52969, 
53298, 
53627, 
53956, 
54285, 
54614, 
54943, 
55272, 
55601, 
55930, 
56259, 
56588, 
56917, 
57246, 
57575, 
57904, 
58233, 
58562, 
58891, 
59220, 
59549, 
59878, 
60207, 
60536, 
60865, 
61194, 
61523, 
61852, 
62181, 
62510, 
62839, 
63168, 
63497, 
63826, 
64155, 
64484, 
64813, 
65142, 
65471
]

#0x40 = @ = start char; 0x21 = ! = stop char

#ack command raw bytes
ack_b = bytearray()
ack_b.append(0x40)
ack_b.append(0x07)
ack_b.append(0x21)

#DAC num repetitions command raw bytes
dac_set_b = bytearray()
dac_set_b.append(0x40)
dac_set_b.append(0x0B)
dac_set_b.append(0x00)  #
dac_set_b.append(0x00)  #
dac_set_b.append(0x00)  #
dac_set_b.append(0x00)  #0 = repeat forever
dac_set_b.append(0x21)

#DAC rate command raw bytes
dac_rate_b = bytearray()
dac_rate_b.append(0x40)
dac_rate_b.append(0x0C)

#dac_rate_b.append(0x00) #
#dac_rate_b.append(0x00) #
#dac_rate_b.append(0xAC) #
#dac_rate_b.append(0x44) #0xAC44 = 44100 Hz

dac_rate_b.append(0x00) #
dac_rate_b.append(0x01) #
dac_rate_b.append(0xEE) #
dac_rate_b.append(0x00) #0x01EF00 = 126720 Hz

#dac_rate_b.append(0x00) #
#dac_rate_b.append(0x86) #
#dac_rate_b.append(0x95) #
#dac_rate_b.append(0x20) #0x869520 = ~8 MHz, too fast

#dac_rate_b.append(0x00) #
#dac_rate_b.append(0x03) #
#dac_rate_b.append(0x0D) #
#dac_rate_b.append(0x40) #0x030D40

dac_rate_b.append(0x21)

#DAC start command
dac_run_b = bytearray()
dac_run_b.append(0x40)
dac_run_b.append(0x0E)
dac_run_b.append(0x21)

#DAC stop command
dac_srun_b = bytearray()
dac_srun_b.append(0x40)
dac_srun_b.append(0x0F)
dac_srun_b.append(0x21)

#DAC "dataset transmission start" command raw bytes
dac_ds_s_b = bytearray()
dac_ds_s_b.append(0x40)
dac_ds_s_b.append(0x0D)
dac_ds_s_b.append(0x00)                 #
dac_ds_s_b.append(0x00)                 #
dac_ds_s_b.append(0x00)                 #
dac_ds_s_b.append(len(vals_sin_120))  #dataset length
dac_ds_s_b.append(0x21)

#DAC dataset stream bytes
dac_ds_b = bytearray()
dac_ds_b.append(0x40)
dac_ds_b.append(0xDE)   #
dac_ds_b.append(0xAD)   #entry 1 = 0xDEAD
dac_ds_b.append(0xBE)   #
dac_ds_b.append(0xEF)   #entry 2 = 0xBEEF
dac_ds_b.append(0x21)

#select filter
set_lp_b = bytearray()
set_lp_b.append(0x40)
set_lp_b.append(0x02)
set_lp_b.append(0x03)       #select lpf
set_lp_b.append(0x21)

#set_corn_b = bytearray()
#set_corn_b.append(0x40)
#set_corn_b.append(0x03)
#set_corn_b.append(0x03)    #
#set_corn_b.append(0xE8)    #
#set_corn_b.append(0x27)    #
#set_corn_b.append(0x10)    #10k ish corner
#set_corn_b.append(0x21)

#set corner
set_corn_b = bytearray()
set_corn_b.append(0x40)
set_corn_b.append(0x03)
set_corn_b.append(0x00)     #
set_corn_b.append(0x00)     #
set_corn_b.append(0x04)     #
set_corn_b.append(0xB0)     #1.2k corner
set_corn_b.append(0x21)

#select input
sel_inp_b = bytearray()
sel_inp_b.append(0x40)
sel_inp_b.append(0x00)
sel_inp_b.append(0x01)
sel_inp_b.append(0x21)

#select active ADC
sel_adc_b = bytearray()
sel_adc_b.append(0x40)
sel_adc_b.append(0x05)
sel_adc_b.append(0x01)  #use SPI adc
sel_adc_b.append(0x21)

#s.write(sel_inp_b)
#s.write(set_lp_b)
#s.write(set_corn_b)
#s.write(sel_adc_b)


s.write(dac_ds_s_b) #command dataset transmission

sv = bytearray()
sv.append(0x40)
s.write(sv)         #start dataset

for v in vals_sin_120:
    val_b = bytearray()
    val_b.append( (v >> 8) & 0xFF )
    val_b.append( (v) & 0xFF )

    s.write(val_b)

ev = bytearray()
ev.append(0x21)
s.write(ev)         #end dataset

s.write(dac_rate_b) #send DAC rate
s.write(dac_set_b)  #send # reps
s.write(dac_run_b)  #start running
input("press any key to stop generation")   #wait for keypress
s.write(dac_srun_b) #stop running


#print return, if any
time.sleep(1)
while(s.inWaiting() > 0):
    print(s.read(1))
