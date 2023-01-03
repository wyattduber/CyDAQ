from serial_comm import ctrl_comm
from master_enum import enum_filter, enum_commands, sig_serial
import struct
import time as t

# ctrl_comm_obj = ctrl_comm()



class cmd:

    def __init__(self):
        print("cmd init")
        # TODO remove global
        # global ctrl_comm_obj
        self.ctrl_comm_obj = ctrl_comm()

    def recieve_acknowlege_zybo(self):
        """
            receives ACK! from the ZYBO

            Returns:
                None
            """

        if self.ctrl_comm_obj.isOpen() is True:
            while True:
                cnt = 0
                if self.ctrl_comm_obj.read_byte() == sig_serial.START_BYTE.value:
                    buffer = ""
                    byte_value = ""
                    if len(buffer) < 6:
                        while byte_value != sig_serial.END_BYTE.value:
                            byte_value = self.ctrl_comm_obj.read_byte()
                            if byte_value != sig_serial.END_BYTE.value:
                                buffer += byte_value

                    if len(buffer) != 3:
                        # self.__throw_exception('SerialReadTimeout')
                        print("read cycle count: " + str(cnt))
                        return False
                    # buffer = buffer.decode('ascii')
                    if buffer == "ACK":
                        return True
                    elif buffer == 'ERR':
                        print('CyDAQ encountered error during configuration, contact ETG')
                        return False
                    else:
                        # self.__throw_exception('ack was not received')
                        print("'ack' was not received")
                        return False
                else:
                    """
                    buffer = ""
                    byte_value = ""
                    if len(buffer) < 6:
                        while byte_value != sig_serial.END_BYTE.value:
                            byte_value = ctrl_comm_obj.read_byte()
                            if byte_value != False and byte_value != sig_serial.END_BYTE.value:
                                buffer += byte_value
                    """
                    return False
        else:
            return False


    # NOTE: Probably won't use this anymore TODO delete?
    def send_parameters(self, port_select, data):
        """
        sends all parameters to the Zybo

        Args:
            port_select: Zybo comm port
            input_set: input selection enum value
            sample_rate: sample rate value
            filter_select: filter select enum value
            corner_freq_lower: lower corner frequency value
            corner_freq_upper: upper corner frequency value


        Returns: True if cydaq was programmed successfully, false otherwise

        """
        if "Sample Rate" not in data:
            sample_rate = 44100
        else:
            sample_rate = data["Sample Rate"]
        dac_mode_select = data["Dac Mode"]
        if "Input" not in data:
            input_set = 0
        else:
            input_set = data["Input"]
        if "Filter" not in data:
            filter_select = 0
        else:
            filter_select = data["Filter"]
        if "Upper Corner" not in data:
            corner_freq_upper = 2000
        else:
            corner_freq_upper = data["Upper Corner"]
        if "Lower Corner" not in data:
            corner_freq_lower = 100
        else:
            corner_freq_lower = data["Lower Corner"]
        if "Mid Corner" not in data:
            corner_freq = 100
        else:
            corner_freq = data["Mid Corner"]
        if "Dac Reps" not in data:
            dac_reps = 0
        else:
            dac_reps = data["Dac Reps"]
        if "Dac Generation Rate" not in data:
            dac_gen_rate = 0
        else:
            dac_gen_rate = data["Dac Generation Rate"]

        try:
            ctrl_comm_obj.open(port_select)
        except ValueError as e:
            return -1
        cnt = 0
        cursor = 0
        wait = 0
        while cnt < 3 and cursor < 7:
            if cursor == 0 and wait == 0:
                self.send_input(port_select, input_set)
                wait = 1
            elif cursor == 1 and wait == 0:
                self.send_sample_rate(port_select, sample_rate)
                wait = 1
            elif cursor == 2 and wait == 0:
                self.send_filter(port_select, filter_select)
                wait = 1
            elif cursor == 3 and wait == 0:
                if corner_freq_upper == 0 or corner_freq_lower == 0 or corner_freq == 0:
                    wait = 0
                    cursor += 1
                else:
                    self.send_corner_freq(port_select, corner_freq_upper, corner_freq_lower, corner_freq, filter_select)
                    wait = 1
            elif cursor == 4 and wait == 0:
                # Once the command is implemented on the firmware side, use this code
                # self.send_dac_mode(port_select, dac_mode_select)
                # wait = 1

                wait = 0
                cursor += 1
            elif cursor == 5 and wait == 0:
                self.send_dac_reps(port_select, dac_reps)
                wait = 1
            elif cursor == 6 and wait == 0:
                self.send_dac_gen_rate(port_select, dac_gen_rate)
                wait = 1
            if wait == 1:
                if recieve_acknowlege_zybo(port_select):
                    print("Ack received")
                    cursor += 1
                    cnt = 0
                    wait = 0
                else:
                    pass
            else:
                cnt += 1
        if cnt < 3:
            print("Commands Sent/Received")
        else:
            print("Commands Not Sent/Received")
            self.flush(port_select)
            return 0
        ctrl_comm_obj.close()
        return 1

    def send_dataset(self, port_select, dataset):
        """
        sends dataset to the Zybo

        Args:
            port_select: Zybo comm port
            dataset: set of shorts


        Returns: True if successfully sent, false otherwise

        """
        try:
            ctrl_comm_obj.open(port_select)
        except ValueError as e:
            return -1
        cnt = 0
        cursor = 0
        wait = 0
        while cnt < 1 and cursor < 2:
            if cursor == 0 and wait == 0:
                self.send_dataset_size(port_select, len(dataset))
                wait = 1
            elif cursor == 1 and wait == 0:
                self.send_data(port_select, dataset)
                wait = 1
            if wait == 1:
                if recieve_acknowlege_zybo(port_select):
                    print("Ack received")
                    cursor += 1
                    cnt = 0
                    wait = 0
                else:
                    pass
            else:
                cnt += 1
        if cnt < 1:
            print("Commands Sent/Received")
        else:
            print("Commands Not Sent/Received")
            return -2
        ctrl_comm_obj.close()
        return 1

    def send_data(self, port_select, dataset):
        """
                Sends the Dataset.

                Args:
                    port_select: Zybo comm port
                    dataset:  the dataset

                Returns:
                    True
                """

        ctrl_comm_obj.open(port_select)
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            for i in range(len(dataset)):
                ctrl_comm_obj.write(struct.pack('!H', int(dataset[i])))
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())

        else:
            self.__throw_exception('Sending Dataset Failed')
            return False

    def send_dataset_size(self, port_select, dataset_size):
        """
                Sends the Dataset Size.

                Args:
                    port_select: Zybo comm port
                    dataset_size: size of the dataset

                Returns:
                    True
                """

        ctrl_comm_obj.open(port_select)
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(struct.pack('!BI', enum_commands.DAC_SEND_DATASET.value, int(dataset_size)))
            print("Dataset Size = " + str(dataset_size))
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())

        else:
            self.__throw_exception('Sending Dataset Size Failed')
            return False

    def validate_params(self, data):
        pass

    def send_start_gen_cmd(self, port_select):
        cursor = 0
        wait = 0
        ctrl_comm_obj.open(port_select)
        while cursor < 1:
            if cursor == 0:
                self.send_start_gen(port_select)
                wait = 1
            if wait == 1 and recieve_acknowlege_zybo(port_select):
                print("Generation start ACK received")
                cursor += 1
                wait = 0
            else:
                pass
        ctrl_comm_obj.close()
        return True

    def send_stop_gen_cmd(self, port_select):
        cursor = 0
        wait = 0
        ctrl_comm_obj.open(port_select)
        while cursor < 1:
            if cursor == 0:
                self.send_stop_gen(port_select)
                wait = 1
            if wait == 1 and recieve_acknowlege_zybo(port_select):
                print("Generation stop ACK received")
                cursor += 1
                wait = 0
            else:
                pass
        ctrl_comm_obj.close()
        return True

    def send_start_cmd(self, port_select):
        cursor = 0
        wait = 0
        ctrl_comm_obj.open(port_select)
        while cursor < 1:
            if cursor == 0:
                self.send_start(port_select)
                wait = 1
            if wait == 1 and recieve_acknowlege_zybo(port_select):
                print("Sampling start ACK received")
                cursor += 1
                wait = 0
            else:
                pass
        ctrl_comm_obj.close()
        return True

    def send_stop_cmd(self, port_select):
        # The 'cursor' variable name is a legacy holdover from when the fetch command was sent inside this while loop.
        # Instead of properly fixing the code, I've left it like this for two reasons: one, a timeout feature needs to
        # be added anyway (so we can fail safe AND so we're not constantly pinging CyDAQ with a stop command); two, 
        # Basically all of the GUI code needs to be rewritten.
        cursor = 0
        wait = 0
        ctrl_comm_obj.open(port_select)
        while cursor < 1:
            if cursor == 0:
                self.send_stop(port_select)
                wait = 1
            if wait == 1 and recieve_acknowlege_zybo(port_select):
                print("Sampling stop ACK received")
                cursor += 1
                wait = 0
            else:
                pass
        ctrl_comm_obj.close()

    def send_fetch(self, port_select):
        ctrl_comm_obj.open(port_select)
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(struct.pack('!B', enum_commands.FETCH_SAMPLES.value))
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())

        else:
            self.__throw_exception('Sample transfer init failed')
            return False
        ctrl_comm_obj.close()

    def send_input(self, port_select, input_set):
        """
                Sends the Input.

                Args:
                    port_select: Zybo comm port
                    input_set: input select enum value

                Returns:
                    True
                """
        ctrl_comm_obj.open(port_select)
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(struct.pack('!B', enum_commands.INPUT_SELECT.value))
            ctrl_comm_obj.write(struct.pack('!B', int(input_set)))
            print("Input set Enum = " + str(input_set))
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())

        else:
            self.__throw_exception('Sending Input Failed')
            return False

    def send_sample_rate(self, port_select, sample_rate):
        """
                Sends the Input.

                Args:
                    port_select: Zybo comm port
                    sample_rate: sample rate enum value

                Returns:
                    True
                """

        ctrl_comm_obj.open(port_select)
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(struct.pack('!BI', enum_commands.SAMPLE_RATE_SET.value, int(sample_rate)))
            print("Sample Rate = " + str(sample_rate))
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())

        else:
            self.__throw_exception('Sending Sample Rate Failed')
            return False

    def send_filter(self, port_select, filter_select):
        """
                Sends the Input.

                Args:
                    port_select: Zybo comm port
                    filter_select: filter selection enum

                Returns:
                    True or False
                """
        ctrl_comm_obj.open(port_select)
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(struct.pack('!BB', enum_commands.FILTER_SELECT.value, int(filter_select)))
            print("Filter Enum = " + str(filter_select))
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())

        else:
            self.__throw_exception('Sending filter failed')
            return False

    def send_corner_freq(self, port_select, u_corner_freq, l_corner_freq, corner_freq, filter):
        """
                Sends the Input.

                Args:
                    port_select: Zybo comm port
                    u_corner_freq: upper corner frequency value
                    l_corner_freq: lower corner frequency value


                Returns:
                    True or false
                """
        val_to_write = None
        ctrl_comm_obj.open(port_select)

        if ctrl_comm_obj.isOpen() is True:
            if filter == enum_filter.BP2.value or filter == enum_filter.BP6.value:
                val_to_write = struct.pack('!BHH', enum_commands.CORNER_FREQ_SET.value, int(l_corner_freq),
                                           int(u_corner_freq))
                print("Corner Frequency = " + str(l_corner_freq) + " / " + str(u_corner_freq))
            elif filter == enum_filter.LP1.value or filter == enum_filter.LP6.value:
                val_to_write = struct.pack('!BHH', enum_commands.CORNER_FREQ_SET.value, int(corner_freq), 0)
                print("Corner Frequency = " + str(corner_freq) + " / " + str(0))
            elif filter == enum_filter.HP1.value or filter == enum_filter.HP6.value:
                val_to_write = struct.pack('!BHH', enum_commands.CORNER_FREQ_SET.value, int(corner_freq), 0)
                print("Corner Frequency = " + str(corner_freq) + " / " + str(0))
            else:
                val_to_write = struct.pack('!BHH', enum_commands.CORNER_FREQ_SET.value, int(l_corner_freq),
                                           int(u_corner_freq))
                print("Corner Frequency = " + str(l_corner_freq) + " / " + str(u_corner_freq))

            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(val_to_write)
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())
            return True
        else:
            self.__throw_exception('Sending corner freq failed')
            return False

    def send_dac_mode(self, port_select, dac_mode):
        """
        Sends the DAC Mode.

        Args:
            port_select: Zybo comm port
            dac_mode: DAC Mode select enum value

        Returns:
            True
        """
        ctrl_comm_obj.open(port_select)
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(struct.pack('!B', enum_commands.DAC_MODE_SELECT.value))
            ctrl_comm_obj.write(struct.pack('!B', int(dac_mode)))
            print("DAC Mode set Enum = " + str(dac_mode))
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())

        else:
            self.__throw_exception('Sending DAC Mode Failed')
            return False

    def send_dac_reps(self, port_select, dac_reps):
        """
        Sends the number of DAC repetitions.

        Args:
            port_select: Zybo comm port
            dac_reps: number of DAC repetitions

        Returns:
            True
        """
        ctrl_comm_obj.open(port_select)
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(struct.pack('!BI', enum_commands.DAC_NUM_REPS_SET.value, int(dac_reps)))
            print("DAC repetitions = " + str(dac_reps))
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())

        else:
            self.__throw_exception('Sending DAC Reps Failed')
            return False

    def send_dac_gen_rate(self, port_select, dac_gen_rate):
        """
        Sends the DAC Generation Rate.

        Args:
            port_select: Zybo comm port
            dac_gen_rate: DAC Generation Rate

        Returns:
            True
        """
        ctrl_comm_obj.open(port_select)
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(struct.pack('!BI', enum_commands.DAC_GEN_RATE_SET.value, int(dac_gen_rate)))
            print("DAC Generation Rate = " + str(dac_gen_rate))
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())

        else:
            self.__throw_exception('Sending DAC Reps Failed')
            return False

    def send_start(self, port_select):
        """
                Sends the Input.

                Args:
                    port_select: Zybo comm port

                Returns:
                    True or false
                """
        ctrl_comm_obj.open(port_select)
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(struct.pack('!B', enum_commands.START_SAMPLING.value))
            ctrl_comm_obj.write(struct.pack('!B', enum_commands.START_SAMPLING.value))
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())

        else:
            self.__throw_exception('Sending start failed')
            return False

    def send_start_gen(self, port_select):
        ctrl_comm_obj.open(port_select)
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(struct.pack('!B', enum_commands.START_GENERATION.value))
            ctrl_comm_obj.write(struct.pack('!B', enum_commands.START_GENERATION.value))
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())
        else:
            self.__throw_exception('Sending start gen failed')
            return False

    def send_stop_gen(self, port_select):
        ctrl_comm_obj.open(port_select)
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(struct.pack('!B', enum_commands.STOP_GENERATION.value))
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())
        else:
            self.__throw_exception('Sending stop gen failed')
            return False

    def send_stop(self, port_select):
        """
                Sends the Input.

                Args:
                    port_select: Zybo comm port

                Returns:
                    True or false
                """
        ctrl_comm_obj.open(port_select)
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(struct.pack('!B', enum_commands.STOP_GENERATION.value))
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())


        else:
            self.__throw_exception('Sending stop failed')
            return False

    def __throw_exception(self, text):
        """
        Throws an exception for a read timeout
        """
        raise Exception(text)

    def close(self):
        ctrl_comm_obj.close()

    def flush(self, port_select):
        ctrl_comm_obj.open(port_select)
        for i in range(50000):
            if ctrl_comm_obj.isOpen() is True:
                ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
                ctrl_comm_obj.write(0)
                ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())
            else:
                self.__throw_exception('Sending flush failed')
                return False
        if ctrl_comm_obj.isOpen() is True:
            ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode())
            ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode())
        else:
            self.__throw_exception('Sending Empty Dataset Failed')
            return False
        self.ping_zybo(port_select)
        ctrl_comm_obj.close()

    def ping_zybo(self, port_select):
        """
                Handshake between zybo and the cydaq

                Args:
                    port_select: Zybo comm port


                Returns:
                    None
                """
        try:
            self.ctrl_comm_obj.open(port_select)
        except ValueError:
            return False
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(sig_serial.START_BYTE.value.encode('ascii'))
            self.ctrl_comm_obj.write(struct.pack('!B', enum_commands.PING.value))
            self.ctrl_comm_obj.write(sig_serial.END_BYTE.value.encode('ascii'))
            cnt = 0
            while True:
                if self.recieve_acknowlege_zybo():
                    return True
                elif cnt > 10:
                    return False
                else:
                    t.sleep(0.1)
                    cnt += 1
                    if self.ctrl_comm_obj.read_byte() == sig_serial.START_BYTE.value:
                        buffer = ""
                        byte_value = ""
                        if len(buffer) < 20:
                            while byte_value != sig_serial.END_BYTE.value:
                                byte_value = self.ctrl_comm_obj.read_byte()
                                if byte_value != sig_serial.END_BYTE.value:
                                    buffer += byte_value
                        else:
                            print("Acknowledge was incorrect")
                            return False
                        if buffer == 'ACK':
                            print(buffer)
                            return True
                        else:
                            print("Acknowledge was incorrect")
                            return False
                    else:
                        pass
        else:
            return False

    # not needed since struct library takes care of byte convertions for us
    # def decimal_to_binary(self, number):
    #     bin_num = bin(int(number))
    #     return bin_num
    #
    # def binary_to_hex(self, number):
    #     hex_num = hex(int(number, 2))
    #     return hex_num
    #
    # def hex_to_dec(self, hex_number):
    #     dec_num = str(int(hex_number, 16))
    #     return dec_num
