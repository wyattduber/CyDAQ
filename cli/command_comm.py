from serial_comm import ctrl_comm
from master_enum import enum_commands
import struct
import serial
import time as t

import config

class cmd:

    def __init__(self, mock_mode=False):
        self.ctrl_comm_obj = ctrl_comm(mock_mode=mock_mode)
        self.port = self.ctrl_comm_obj.get_port()

    def __del__(self):
        self.ctrl_comm_obj.kill_mock()

    def refresh_port(self):
        self.port = self.ctrl_comm_obj.get_port()

    def recieve_acknowlege_zybo(self):
        """
        receives ACK! from the ZYBO

        Returns:
            None
        """

        if self.ctrl_comm_obj.isOpen() is True:
            while True:
                cnt = 0
                if self.ctrl_comm_obj.read_byte() == config.START_BYTE:
                    buffer = ""
                    byte_value = ""
                    if len(buffer) < 6:
                        while byte_value != config.END_BYTE:
                            byte_value = self.ctrl_comm_obj.read_byte()
                            if byte_value != config.END_BYTE:
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
                        self.__throw_exception('ack was not received')
                        print("'ack' was not received")
                        return False
                else:
                    """
                    buffer = ""
                    byte_value = ""
                    if len(buffer) < 6:
                        while byte_value != config.END_BYTE:
                            byte_value = ctrl_comm_obj.read_byte()
                            if byte_value != False and byte_value != config.END_BYTE:
                                buffer += byte_value
                    """
                    return False
        else:
            return False

    def send_dataset(self, dataset):
        """
        sends dataset to the Zybo

        Args:
            port_select: Zybo comm port
            dataset: set of shorts


        Returns: True if successfully sent, false otherwise
        """
        try:
            self.ctrl_comm_obj.open(self.port)
        except ValueError as e:
            return -1
        cnt = 0
        cursor = 0
        wait = 0
        while cnt < 1 and cursor < 2:
            if cursor == 0 and wait == 0:
                self.send_dataset_size(self.port, len(dataset))
                wait = 1
            elif cursor == 1 and wait == 0:
                self.send_data(self.port, dataset)
                wait = 1
            if wait == 1:
                if self.recieve_acknowlege_zybo():
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
        self.ctrl_comm_obj.close()
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

        self.ctrl_comm_obj.open(port_select)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            for i in range(len(dataset)):
                self.ctrl_comm_obj.write(struct.pack('!H', int(dataset[i])))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())

        else:
            self.__throw_exception('Sending Dataset Failed')

    def send_dataset_size(self, dataset_size):
        """
        Sends the Dataset Size.

        Args:
            port_select: Zybo comm port
            dataset_size: size of the dataset

        Returns:
            True
        """

        self.ctrl_comm_obj.open(self.port)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!BI', enum_commands.DAC_SEND_DATASET.value, int(dataset_size)))
            print("Dataset Size = " + str(dataset_size))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())

        else:
            self.__throw_exception('Sending Dataset Size Failed')

    def validate_params(self, data):
        pass

    def send_start_gen_cmd(self):
        cursor = 0
        wait = 0
        self.ctrl_comm_obj.open(self.port)
        while cursor < 1:
            if cursor == 0:
                self.send_start_gen()
                wait = 1
            if wait == 1 and self.recieve_acknowlege_zybo():
                print("Generation start ACK received")
                cursor += 1
                wait = 0
            else:
                pass
        self.ctrl_comm_obj.close()
        return True

    def send_stop_gen_cmd(self):
        cursor = 0
        wait = 0
        self.ctrl_comm_obj.open(self.port)
        while cursor < 1:
            if cursor == 0:
                self.send_stop_gen()
                wait = 1
            if wait == 1 and self.recieve_acknowlege_zybo():
                print("Generation stop ACK received")
                cursor += 1
                wait = 0
            else:
                pass
        self.ctrl_comm_obj.close()
        return True

    def send_start_cmd(self):
        cursor = 0
        wait = 0
        self.ctrl_comm_obj.open(self.port)
        while cursor < 1:
            if cursor == 0:
                self.send_start()
                wait = 1
            if wait == 1 and self.recieve_acknowlege_zybo():
                print("Sampling start ACK received")
                cursor += 1
                wait = 0
            else:
                pass
        self.ctrl_comm_obj.close()
        return True

    def send_stop_cmd(self):
        # The 'cursor' variable name is a legacy holdover from when the fetch command was sent inside this while loop.
        # Instead of properly fixing the code, I've left it like this for two reasons: one, a timeout feature needs to
        # be added anyway (so we can fail safe AND so we're not constantly pinging CyDAQ with a stop command); two, 
        # Basically all of the GUI code needs to be rewritten.
        cursor = 0
        wait = 0
        self.ctrl_comm_obj.open(self.port)
        while cursor < 1:
            if cursor == 0:
                self.send_stop()
                wait = 1
            if wait == 1 and self.recieve_acknowlege_zybo():
                print("Sampling stop ACK received")
                cursor += 1
                wait = 0
            else:
                pass
        self.ctrl_comm_obj.close()

    def send_fetch(self):
        self.ctrl_comm_obj.open(self.port)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!B', enum_commands.FETCH_SAMPLES.value))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())

        else:
            self.__throw_exception('Sample transfer init failed')
        self.ctrl_comm_obj.close()

    def send_input(self, input_set):
        """
        Sends the Input.

        Args:
            port_select: Zybo comm port
            input_set: input select enum value

        Returns:
            True
        """
        self.ctrl_comm_obj.open(self.port)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!B', enum_commands.INPUT_SELECT.value))
            self.ctrl_comm_obj.write(struct.pack('!B', int(input_set)))
            # print("Input set Enum = " + str(input_set))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())

        else:
            self.__throw_exception('Sending Input Failed')

    def send_sample_rate(self, sample_rate):
        """
        Sends the Input.

        Args:
            port_select: Zybo comm port
            sample_rate: sample rate enum value

        Returns:
            True
        """

        self.ctrl_comm_obj.open(self.port)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!BI', enum_commands.SAMPLE_RATE_SET.value, int(sample_rate)))
            # print("Sample Rate = " + str(sample_rate))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())

        else:
            self.__throw_exception('Sending Sample Rate Failed')

    def send_filter(self, filter_select):
        """
        Sends the Input.

        Args:
            port_select: Zybo comm port
            filter_select: filter selection enum

        Returns:
            True or False
        """
        self.ctrl_comm_obj.open(self.port)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!BB', enum_commands.FILTER_SELECT.value, int(filter_select)))
            # print("Filter Enum = " + str(filter_select))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())

        else:
            self.__throw_exception('Sending filter failed')

    def send_corner_freq(self, u_corner_freq, l_corner_freq, corner_freq, filter):
        """
        Sends the Input.

        Args:
            u_corner_freq: upper corner frequency value
            l_corner_freq: lower corner frequency value


        Returns:
            True or false
        """
        val_to_write = None
        self.ctrl_comm_obj.open(self.port)
        #TODO Clean up strings to use enums
        # print("DEBUG: u_corner_freq: ", u_corner_freq, " l_corner_freq: ", l_corner_freq, " corner_freq: ", corner_freq, " filter: ", filter)
        if self.ctrl_comm_obj.isOpen() is True:
            if filter == "2nd Order Band Pass" or filter == "6th Order Band Pass":
                val_to_write = struct.pack('!BHH', enum_commands.CORNER_FREQ_SET.value, int(l_corner_freq),
                                           int(u_corner_freq))
            elif filter == "1st Order Low Pass" or filter == "6th Order Low Pass":
                val_to_write = struct.pack('!BHH', enum_commands.CORNER_FREQ_SET.value, int(corner_freq), 0)
            elif filter == "1st Order High Pass" or filter == "6th Order High Pass":
                val_to_write = struct.pack('!BHH', enum_commands.CORNER_FREQ_SET.value, int(corner_freq), 0)
            else:
                val_to_write = struct.pack('!BHH', enum_commands.CORNER_FREQ_SET.value, int(l_corner_freq),
                                           int(u_corner_freq))

            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(val_to_write)
            self.ctrl_comm_obj.write(config.END_BYTE.encode())
            return True
        else:
            self.__throw_exception('Sending corner freq failed')

    def send_dac_mode(self, dac_mode):
        """
        Sends the DAC Mode.

        Args:
            port_select: Zybo comm port
            dac_mode: DAC Mode select enum value

        Returns:
            True
        """
        self.ctrl_comm_obj.open(self.port)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!B', enum_commands.DAC_MODE_SELECT.value))
            self.ctrl_comm_obj.write(struct.pack('!B', int(dac_mode)))
            # print("DAC Mode set Enum = " + str(dac_mode))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())

        else:
            self.__throw_exception('Sending DAC Mode Failed')

    def send_dac_reps(self, dac_reps):
        """
        Sends the number of DAC repetitions.

        Args:
            port_select: Zybo comm port
            dac_reps: number of DAC repetitions

        Returns:
            True
        """
        self.ctrl_comm_obj.open(self.port)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!BI', enum_commands.DAC_NUM_REPS_SET.value, int(dac_reps)))
            # print("DAC repetitions = " + str(dac_reps))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())

        else:
            self.__throw_exception('Sending DAC Reps Failed')

    def send_dac_gen_rate(self, dac_gen_rate):
        """
        Sends the DAC Generation Rate.

        Args:
            port_select: Zybo comm port
            dac_gen_rate: DAC Generation Rate

        Returns:
            True
        """
        self.ctrl_comm_obj.open(self.port)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!BI', enum_commands.DAC_GEN_RATE_SET.value, int(dac_gen_rate)))
            # print("DAC Generation Rate = " + str(dac_gen_rate))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())

        else:
            self.__throw_exception('Sending DAC Reps Failed')

    def send_start(self):
        print("sending start")
        """
        Sends the Input.

        Args:
            port_select: Zybo comm port

        Returns:
            True or false
        """
        self.ctrl_comm_obj.open(self.port)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!B', enum_commands.START_SAMPLING.value))
            self.ctrl_comm_obj.write(struct.pack('!B', enum_commands.START_SAMPLING.value))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())

        else:
            self.__throw_exception('Sending start failed')
            return False

    def send_stop_sampling(self):
        self.ctrl_comm_obj.open(self.port)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!B', enum_commands.STOP_SAMPLING.value))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())

        else:
            self.__throw_exception('Sending start failed')
            return False

    def send_start_gen(self):
        self.ctrl_comm_obj.open(self.port)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!B', enum_commands.START_GENERATION.value))
            self.ctrl_comm_obj.write(struct.pack('!B', enum_commands.START_GENERATION.value))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())
        else:
            self.__throw_exception('Sending start gen failed')

    def send_stop_gen(self):
        self.ctrl_comm_obj.open(self.port)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!B', enum_commands.STOP_GENERATION.value))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())
        else:
            self.__throw_exception('Sending stop gen failed')

    def send_stop(self):
        """
        Sends the Input.

        Args:
            port_select: Zybo comm port

        Returns:
            True or false
        """
        self.ctrl_comm_obj.open(self.port)
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!B', enum_commands.STOP_GENERATION.value))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())


        else:
            self.__throw_exception('Sending stop failed')

    def __throw_exception(self, text):
        """Throws an exception for a read timeout"""
        raise Exception(text)

    def close(self):
        self.ctrl_comm_obj.close()

    def flush(self):
        self.ctrl_comm_obj.open(self.port)
        for i in range(50000):
            if self.ctrl_comm_obj.isOpen() is True:
                self.ctrl_comm_obj.write(config.START_BYTE.encode())
                self.ctrl_comm_obj.write(0)
                self.ctrl_comm_obj.write(config.END_BYTE.encode())
            else:
                self.__throw_exception('Sending flush failed')
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(config.END_BYTE.encode())
        else:
            self.__throw_exception('Sending Empty Dataset Failed')
        self.ping_zybo()
        self.ctrl_comm_obj.close()

    def ping_zybo(self):
        """
        Handshake between zybo and the cydaq

        Args:
            port_select: Zybo comm port

        Returns:
            None
        """
        try:
            self.ctrl_comm_obj.open(self.port)
        except (ValueError, serial.serialutil.SerialException):
            return False
        if self.ctrl_comm_obj.isOpen() is True:
            self.ctrl_comm_obj.write(config.START_BYTE.encode('ascii'))
            self.ctrl_comm_obj.write(struct.pack('!B', enum_commands.PING.value))
            self.ctrl_comm_obj.write(config.END_BYTE.encode('ascii'))
            cnt = 0
            while True:
                if self.recieve_acknowlege_zybo():
                    return True
                elif cnt > 3:
                    return False
                else:
                    t.sleep(0.1)
                    cnt += 1
                    if self.ctrl_comm_obj.read_byte() == config.START_BYTE:
                        buffer = ""
                        byte_value = ""
                        if len(buffer) < 20:
                            while byte_value != config.END_BYTE:
                                byte_value = self.ctrl_comm_obj.read_byte()
                                if byte_value != config.END_BYTE:
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

         
    def is_mock_mode(self):
        return self.ctrl_comm_obj.is_mock_mode()

    ### Balance Beam Commands ###

    def start_bb(self, kp=None, ki=None, kd=None, N=None, set=None):
        """
        Sends the start command to the CyDAQ
        """
        try:
            self.ctrl_comm_obj.open(self.port)
        except ValueError:
            return False

        # Send Start Command
        if self.ctrl_comm_obj.isOpen():
            self.ctrl_comm_obj.write(config.START_BYTE.encode())
            self.ctrl_comm_obj.write(struct.pack('!B', enum_commands.START_BALANCE_BEAM.value))
            self.ctrl_comm_obj.write(config.END_BYTE.encode())
        else:
            self.__throw_exception('Starting balance beam mode failed')

        # Set Default Values on Startup or Use Given Values
        if not [x for x in (kp, ki, kd, N, set) if x is None]:
            self.update_constants(kp, ki, kd, N)
            self.update_set(N)
        else:
            self.update_constants(config.DEFAULT_KP, config.DEFAULT_KI, config.DEFAULT_KD, config.DEFAULT_N)
            self.update_set(config.DEFAULT_SET)

    def stop_bb(self):
        """
        Sends the stop command to the CyDAQ.
        """
        try:
            self.ctrl_comm_obj.open(self.port)
        except ValueError:
            return False

        if self.ctrl_comm_obj.isOpen():
            # Then, send stop command
            self.ctrl_comm_obj.write('q!'.encode())
        else:
            self.__throw_exception('Stopping balance beam mode failed')

    def update_constants(self, kp, ki, kd, N):
        """
        Send the user-defined constants to the CyDAQ.
        """
        try:
            self.ctrl_comm_obj.open(self.port)
        except ValueError:
            return False

        if self.ctrl_comm_obj.isOpen():
            self.ctrl_comm_obj.write(f"kp {kp}!".encode())
            self.ctrl_comm_obj.write(f"ki {ki}!".encode())
            self.ctrl_comm_obj.write(f"kd {kd}!".encode())
            self.ctrl_comm_obj.write(f"n {N}!".encode())
        else:
            self.__throw_exception('Updating constants failed')

    def update_set(self, setv):
        """
        Send the user-defined set point in cm to the CyDAQ.
        Args:
            setv: The set point in cm
        """
        try:
            self.ctrl_comm_obj.open(self.port)
        except ValueError:
            return False

        if self.ctrl_comm_obj.isOpen():
            self.ctrl_comm_obj.write(f"r {setv}!".encode())
        else:
            self.__throw_exception('Updating set failed')

    def offset_inc(self):
        """
        Increase the offset for calibration.
        """
        try:
            self.ctrl_comm_obj.open(self.port)
        except ValueError:
            return False

        if self.ctrl_comm_obj.isOpen():
            self.ctrl_comm_obj.write(f"{config.BB_CMD_SERVO_OFFSET} 1!".encode())
        else:
            self.__throw_exception('Increasing offset failed')

    def offset_dec(self):
        """
        Decrease the offset for calibration.
        """
        try:
            self.ctrl_comm_obj.open(self.port)
        except ValueError:
            return False

        if self.ctrl_comm_obj.isOpen():
            self.ctrl_comm_obj.write(f"{config.BB_CMD_SERVO_OFFSET} -1!".encode())
        else:
            self.__throw_exception('Decreasing offset failed')

    def pause_bb(self):
        """
        Pause the Balance Beam Mode.
        """
        try:
            self.ctrl_comm_obj.open(self.port)
        except ValueError:
            return False
        
        if self.ctrl_comm_obj.isOpen():
            self.ctrl_comm_obj.write(config.BB_CMD_PAUSE.encode())
        else:
            self.__throw_exception('Error pausing')

    def resume_bb(self):
        """
        Resume the Balance Beam Mode.
        """
        try:
            self.ctrl_comm_obj.open(self.port)
        except ValueError:
            return False
        
        if self.ctrl_comm_obj.isOpen():
            self.ctrl_comm_obj.write(config.BB_CMD_RESUME.encode())
        else:
            self.__throw_exception('Error pausing')

    def read_bb_buffer(self):
        """
        Method that receives the buffer being sent from the CyDAQ
        Parses the buffer into either positive or negataive numbers
        and returns the number to the CLI tool to be output.
        """
        try:
            self.ctrl_comm_obj.open(self.port)
        except ValueError:
            return False
        
        if self.ctrl_comm_obj.isOpen():
            byte_value = ""
            buffer = ""

            while byte_value != ' ': # Check for each number
                byte_value = self.ctrl_comm_obj.read_byte()
                if type(byte_value) == type(False):
                    return False
                if byte_value == '-': # If value is negative
                    for i in range(0, 6):
                        if byte_value == ' ': # number sent might be less than 3 decimals
                            break
                        buffer += byte_value
                        byte_value = self.ctrl_comm_obj.read_byte()
                    return buffer
                elif byte_value.isnumeric(): # If value is positive
                    for i in range(0, 5):
                        if byte_value == ' ': # number sent might be less than 3 decimals
                            break
                        buffer += byte_value
                        byte_value = self.ctrl_comm_obj.read_byte()
                    return buffer