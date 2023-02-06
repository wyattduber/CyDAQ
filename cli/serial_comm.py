import os
import threading
import serial
import serial.tools.list_ports

class ctrl_comm:
    """
       This class creates an abstraction for a connection to a device over
       a Serial connection.
       """

    def __init__(self, mock_mode=False):
        # print("ctrl_comm init")
        self.mock_mode = mock_mode
        self._init_comm()

        if self.mock_mode:
            print("ctrl_comm init with mock enabled")
            import pty # TODO check if this import works and give useful message if not
            master,slave = pty.openpty() #open the pseudoterminal
            self.__s_comm.port = os.ttyname(slave) #translate the slave fd to a filename
            self._mock_thread_running = True

            # TODO move this to class method so it's cleaner
            def listener(port):
                print("---LISTENER STARTED on port: {}---".format(port))
                while self._mock_thread_running:
                    res = b""
                    while not res.endswith(b"!"):
                        res += os.read(port, 1)
                    print("Command recieved: ", res) 

                    if res == b'stop!':
                        break
                    if res == b'@\x08\x08!': # start sampling
                        os.write(port, b'@')
                        os.write(port, b'ACK') 
                        os.write(port, b'!') 
                    elif res == b'@\x04!': # stop sampling
                        os.write(port, b'@')
                        os.write(port, b'\x02\x02'*10_000_000)
                        os.write(port, b'!') 
                    #TODO implement other commands that need to be mocked here
                    else:
                        print("Unknown command sent to mock CyDAQ serial connection! Command: ", res)
                        os.write(port, b'@')
                        os.write(port, b'ERR')
                        os.write(port, b'!')

            #create a separate thread that listens on the master device for commands
            thread = threading.Thread(target=listener, args=[master])
            self.mock_thread = thread
            thread.start()

    def __del__(self):
        print("__del__ called!")
        if self.mock_mode:
            self._mock_thread_running = False
            self.mock_thread.join()

    def _init_comm(self):
        self.__s_comm = serial.Serial()
        self.__s_comm.port = None
        # while self.__s_comm.port is None:
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
            if "USB Serial Port" in element.description:
                open_ports.append(element.device)
        try:
            zybo_port = open_ports[0]
            port = str(zybo_port)
            # print("Zybo found on ",str(zybo_port))
            return port
        except:
            # print("Zybo not connected")
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

        if self.__s_comm.isOpen() is True:
            try:
                self.__s_comm.write(data)
            except serial.serialutil.SerialException:
                # print("Serial exception while writing. Assuming bad connection.")
                return False
            return True
        else:
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
                print("Nothing Received over Comm Port")
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
        #TODO add error handling
        return self.__s_comm.read_all()

    def __throw_exception(self, text):
        """
        Throws an exception for a read timeout
        """
        raise Exception(text)

    def isOpen(self):
        return self.__s_comm.is_open

    def getSerialObj(self):
        return self.__s_comm
