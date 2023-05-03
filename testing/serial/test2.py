local_path = "./sample_data.bin"
f = open("./output.csv", 'w')
sampleRate = 44100

def _adc_raw_to_volts(sample):
        ADC_N_BITS = 12  # Number of bits in the ADC
        ADC_DC_OFFSET_V = 0.5  # DC level shift on ADC
        ADC_MAX_V = 1  # Max voltage amplitude at ADC (should equal a raw reading of 2^ADC_N_BITS)
        ADC_GAIN = 10  # Gain needed to rescale ADC measured voltage back (CyDAQ uses 5:1 divider)
        sample_volts = sample / (2 ** ADC_N_BITS - 1) * ADC_MAX_V
        return (sample_volts - ADC_DC_OFFSET_V) * ADC_GAIN

def _writeCSV(f, value, time_stamp=None):
        if time_stamp is not None:
            f.write("{},{}\n".format(time_stamp, value))
        else:
            f.write("{}\n".format(value))

sample_time = 0
period = 1 / int(sampleRate)
with open(local_path, "rb") as temp_file:
    while True:
        raw_num = temp_file.read(2)
        
        if not raw_num:
            break

        raw_num = int.from_bytes(raw_num, byteorder="little", signed=False)

        _writeCSV(f, _adc_raw_to_volts(raw_num), time_stamp=sample_time * period)
        sample_time += 1