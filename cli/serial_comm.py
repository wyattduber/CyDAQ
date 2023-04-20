import os
import re
import threading
import time
import serial
import serial.tools.list_ports

# Old firmware
OLD_COMM_PORT_DESCRIPTION = "USB Serial Port"

# New firmware
NEW_COMM_PORT_DESCRIPTION = "USB Serial Device"


class ctrl_comm:
    """
    This class creates an abstraction for a connection to a device over a Serial connection. 
    
    When mock_mode is True, a serial connection is mocked by creating a listener in another thread.
    """

    def __init__(self, mock_mode=False):
        # print("ctrl_comm init")
        self.mock_mode = mock_mode
        self.old_firmware = None  # set to true/false once connected
        self._init_comm()
        self.bb_mode = False
        self.bb_pause = False

        if self.mock_mode:
            try:
                import pty
            except ModuleNotFoundError:
                print("Mock mode not supported! Reverting to normal mode.")
                self.mock_mode = False
                return

            master, slave = pty.openpty()  # open the pseudoterminal
            self.__s_comm.port = os.ttyname(slave)  # translate the slave fd to a filename
            self._mock_thread_running = True

            # create a separate thread that listens on the master device for commands
            thread = threading.Thread(target=self._mock_listener, args=[master])
            self.mock_thread = thread
            thread.start()

            # Create a seperate thread that just sends tons of data to the master device
            self.mock_bb_thread = threading.Thread(target=self._mock_bb_data, args=[master])
            self._mock_bb_thread_running = False

    # def __del__(self):
    #     self.kill_mock()

    def _mock_listener(self, port):
        print("---Mock serial started listening on port: {}---".format(port))
        while self._mock_thread_running:
            res = b""
            while not res.endswith(b"!"):
                res += os.read(port, 1)

            print("Command recieved in mock listener: ", res)

            if res == b'stop!':
                self._mock_bb_thread_running = False
                break
            if res == b'@\x07!':  # ping
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif res == b'@\x08\x08!':  # start sampling
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif res == b'@\x04!':  # stop sampling
                time.sleep(.01)  # must sleep or input in main thread flushes data below
                os.write(port, b'@')
                os.write(port, b'\xd5\x07' * 10_000_000)

                # current CyDAQ firmware throws an @ACK in here.. not needed....
                os.write(port, b'@ACK')

                os.write(port, b'!')
            # Below is all of the default config send commands
            # Each one of them is changed when anything in the config changes
            # I can't be bothered to write them out for every setting... so here you go
            elif res == b'@\x00\x01!':  # config send
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif res == b'@\x01\x00\x00\xacD!': # config send
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif res == b'@\x02\x07!':  # config send
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif res == b'@\x03\x00\x00\x00\x00!':  # config send
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif res == b'@\x0b\x00\x00\x00\x00!':  # config send
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif res == b'@\x0c\x00\x00\x00\x00!':  # config send
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif res == b'@\x16!':  # bb_start
                time.sleep(0.01)
                # os.write(port, b'@')
                # os.write(port, b'ACK')
                # os.write(port, b'!')

                self._mock_bb_thread_running = True
                self.mock_bb_thread.start()
            elif res == b'q!':  # bb_stop
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
                self._mock_bb_thread_running = False
            elif res == b'pause on!':  # bb_pause
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')

                if self.bb_pause:
                    self.bb_pause = False
                else:
                    self.bb_pause = True
            elif res == b'pause off!':  # bb_resume
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif res == b'SOI 1!':  # bb_offset_inc
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif res == b'SOI -1!':  # bb_offset_dec
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            # K Constant Commands
            elif re.search(b'kp [0-9]+', res):  # 'kp <int>'
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif re.search(b'ki [0-9]+', res):  # 'ki <int>'
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif re.search(b'kd [0-9]+', res):  # 'kd <int>'
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif re.search(b'n [0-9]+', res):  # 'n <int>'
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            elif re.search(b'r [0-9]+', res):  # set <int>
                os.write(port, b'@')
                os.write(port, b'ACK')
                os.write(port, b'!')
            # TODO implement other commands that need to be mocked here
            else:
                print("Unknown command sent to mock CyDAQ serial connection! Command: ", res)
                os.write(port, b'@')
                os.write(port, b'ERR')
                os.write(port, b'!')
        print("listener on port {} stopped".format(port))

    # Method that runs and sends data to the mock listening port for fake balance beam data
    def _mock_bb_data(self, port):
        while self._mock_thread_running and self._mock_bb_thread_running:
            if self.bb_pause:
                pass
            os.write(port, b'0')
            os.write(port, b'.')
            os.write(port, b'0')
            os.write(port, b'0')
            os.write(port, b'0')
            os.write(port, b' ')

    def _init_comm(self):
        self.__s_comm = serial.Serial()
        self.__s_comm.port = None
        try:
            self.__s_comm.port = self.get_port()
        except:
            # TODO bad..
            pass
        self.__s_comm.baudrate = 921600
        self.__s_comm.bytesize = serial.EIGHTBITS
        self.__s_comm.stopbits = serial.STOPBITS_ONE
        self.__s_comm.xonxoff = False
        self.__s_comm.rtscts = False
        self.__s_comm.dsrdtr = False
        self.__s_comm.parity = serial.PARITY_NONE  # PARITY_EVEN
        self.__s_comm.timeout = 4
        self.__order = "little"

    def get_port(self):
        """
        Returns a list of available serial devices on the host computer.
        Typical usage is to call this function to determine the computer's
        ports and open a connection with the open() function, using one of
        the devices returned by this function.

        Args:
            None

        Returns:
            A list of available serial devices, as strings

    ****CHANGE: Only the COM port that says 'USB Serial Port' (this is what the zybo
                shows up as) will appear
        """
        if self.mock_mode:
            # Mock mode should already have the port set
            return self.__s_comm.port

        all_ports = serial.tools.list_ports.comports()
        open_ports = []
        for element in all_ports:
            if OLD_COMM_PORT_DESCRIPTION in element.description or NEW_COMM_PORT_DESCRIPTION in element.description:
                open_ports.append((element.description, element.device))

        # connected device could be running old or new firmware, need to figure out which
        # old firmware:
        # only one USB port detected, has name "USB Serial Port"

        # new firmware:
        # only one USB port detected, has name "USB Serial Device" (basic scenario in lab) OR
        # two USB ports detected, one is "USB Serial Port" the other is "USB Serial" (when debugging) - need to pick the "USB Serial Device" one
        if len(open_ports) == 0:
            return None
        if len(open_ports) == 1:
            self.old_firmware = OLD_COMM_PORT_DESCRIPTION in open_ports[0][0]
            return str(open_ports[0][1])
        elif len(open_ports) == 2:
            self.old_firmware = False
            if NEW_COMM_PORT_DESCRIPTION in open_ports[0][0]:
                return str(open_ports[0][1])
            elif NEW_COMM_PORT_DESCRIPTION in open_ports[1][0]:
                return str(open_ports[1][1])
            else:
                print("Couldn't find correct new firmware port. Unable to proceed!")
                return None
        else:
            print("Found 3 or more viable COMM ports. Unable to proceed!")
            return None

    def close(self):
        """
        Closes the currently open connection attached to this
        instance.

        Will silently fail if device is already open.

        Args:
            None

        Returns:
            None
        """
        if self.__s_comm.isOpen() is True:
            self.__s_comm.close()

    def open(self, port):
        """
        Used to open a connection to a serial device passed in as the
        parameter to this function. Needs to be called before data can
        be read or written to a device.

        Will silently fail if device is already open.

        Args:
            port: Serial device to open

        Returns:
            None
        """
        if self.__s_comm.port is None or self.__s_comm.port == "":
            self.__s_comm.port = self.get_port()
        if self.__s_comm.isOpen() is False:
            self.__s_comm.port = port
            self.__s_comm.open()
            self.__s_comm.flushInput()
            self.__s_comm.flushOutput()
        else:
            self.__s_comm.flushInput()

    def write(self, data):
        """
        Write data to the serial device.

        Args:
            data: The data to send over the serial device.

        Returns:
            True if data was written, False if device is not open.
        """

        if self.__s_comm.isOpen():
            try:
                self.__s_comm.write(data)
            except serial.serialutil.SerialException:
                print("Serial exception while writing to port", self.__s_comm.port, ". Assuming bad connection.")
                return False
            return True
        else:
            print("else occured")
            return False

    def read_byte(self):
        """
        Read a byte of data.

        Args:
            None

        Returns:
            A byte of data from the serial device. False if device is not open.
        """

        if self.__s_comm.isOpen() is True:
            try:
                buffer = self.__s_comm.read(1)
            except serial.serialutil.SerialException:
                # print("Serial exception while reading. Assuming bad connection.")
                return False

            if len(buffer) >= 2:
                self.__throw_exception('SerialReadTimeout')
            elif not len(buffer):
                # print("Nothing Received over Comm Port")
                return False
            try:
                buffer1 = buffer.decode('ascii')
                return buffer1
            except:
                return False
        else:
            return False

    def read_uint8(self):
        """
        Read a uint8 from the serial device

        Args:
            None

        Returns:
            A uint8 from the serial device. False if the device is not open
        """

        if self.__s_comm.isOpen() is True:
            try:
                buffer = self.__s_comm.read(1)
            except serial.serialutil.SerialException:
                # print("Serial exception while reading. Assuming bad connection.")
                return False

            if 1 != len(buffer):
                self.__throw_exception('SerialReadTimeout')

            return int.from_bytes(buffer, byteorder=self.__order, signed=False)
        else:
            return False

    def read_uint16(self):
        """
        Read a uint16 from the serial device

        Args:
            None

        Returns:
            A uint16 from the serial device. False if the device is not open
        """

        if self.__s_comm.isOpen() is True:
            try:
                buffer = self.__s_comm.read(2)
            except serial.serialutil.SerialException:
                # print("Serial exception while reading. Assuming bad connection.")
                return False

            if len(buffer) != 2:
                self.__throw_exception('SerialReadTimeout')

            return int.from_bytes(buffer, byteorder=self.__order, signed=False)
        else:
            return False

    def read_all(self):
        return self.__s_comm.read_all()

    def read(self):
        return self.__s_comm.read(1)

    def __throw_exception(self, text):
        """
        Throws an exception for a read timeout
        """
        raise Exception(text)

    def isOpen(self):
        return self.__s_comm.is_open

    def getSerialObj(self):
        return self.__s_comm

    def kill_mock(self):
        if self.mock_mode:
            self.open(self.get_port())
            self.write(b'stop!')
            self.close()
            self._mock_thread_running = False
            self.mock_thread.join()

    def is_mock_mode(self):
        return self.mock_mode
