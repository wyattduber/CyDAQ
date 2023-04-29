from copy import deepcopy
import traceback
from scipy.io import savemat
from threading import Thread
import datetime
import re
import os
import json
import time
import paramiko

from check_params import ParameterConstructor

from command_comm import cmd
from master_enum import nameToEnum

import config


class CyDAQ_CLI:
    """
	Handles the creation of a command line interface to communicate with a CyDAQ device. 

	To use, instantiate the object then call the start() method on it, which will block for user input.
	
	For example, the following is all that is needed to start the CLI tool: 
	
	CyDAQ_CLI().start()
	"""

    HELP_MSG = """	h/help\t\t\t\t\t\t\t Print This Help Menu
	p/ping\t\t\t\t\t\t\t Ping the Zybo
	configure\t\t\t\t\t\t Configure Parameters (Guided)
	clear\t\t\t\t\t\t\t Clear config to default
	print\t\t\t\t\t\t\t Print Current Config
	send\t\t\t\t\t\t\t Send config to cyDAQ
	set, (key) (value)\t\t\t\t Set one config value
	setm, (json list)\t\t\t\t Set multiple config values as a json object
	wrapper, (enable/disable)\t\t Enable Wrapper Mode for CLIWrapper library
	flush\t\t\t\t\t\t\t Flush 
	start\t\t\t\t\t\t\t Start sampling
	stop, [filename]\t\t\t\t Stop Sampling. Supports .csv or .mat files
	generate\t\t\t\t\t\t Start/Stop DAC Generation
	mock, (enable/disable/status)\t Enable CyDAQ serial mocking mode
	bb_start\t\t\t\t\t\t Start Balance Beam Mode
    \tbb_start, (kp) (ki) (kd) (N) (Set)\t Start with specific balance beam values
	bb_stop\t\t\t\t\t\t\t Stop Balance Beam Mode
	bb_fetch_pos\t\t\t\t\t Fetch the current position the balance beam
	bb_const, (kp) (ki) (kd) (N)\t Send updated constants for bb calc
	bb_set, (value)\t\t\t\t\t Send updated set value for bb calc
	bb_offset_inc\t\t\t\t\t Increase the balance beam offset
	bb_offset_dec\t\t\t\t\t Decrease the balance beam offset
	bb_pause\t\t\t\t\t\t Pause the Balance Beam
	bb_resume\t\t\t\t\t\t Resume the Balance Beam
	q/quit\t\t\t\t\t\t\t Exit The Command-Line"""

    def __init__(self):
        self.cmd_obj = cmd()

        self.default_config = {
            "Sample Rate": 100,
            "Input": "Analog In",
            "Filter": "All Pass",
            "Upper Corner": 2000,
            "Lower Corner": 100,
            "Mid Corner": 100,
            "Dac Reps": 0,
            "Dac Generation Rate": 0,
            "Dac Mode": "Disabled",
        }

        self.config = self.default_config.copy()
        self.wrapper_mode = False
        self.mock_mode = False
        self.balance_beam_enabled = False
        self.is_working_cmd_sent = False
        self.generating = False
        self.bb_thread = None
        self.stop_thread = True
        self.bb_pos = ""
        self.sampling = False

    def start(self):
        """Start the CLI tool. Blocks indefinitely for user input until the quit command is issued."""

        self._print_to_output(config.CLI_START_MESSAGE)

        # Need to check CyDAQ connection once before input prompt
        if not self._is_cydaq_connected():
            self._print_to_output(config.CYDAQ_NOT_CONNECTED, config.WRAPPER_ERROR)

        while True:
            # Get user input and split up individual commands
            try:
                raw_command = input(config.INPUT_CHAR + " ")
            except EOFError:
                break
            except KeyboardInterrupt:
                print()
                break
            command = raw_command.split(",")
            command = [s.strip(" ") for s in command]

            # First process commands that don't require direct connection to the CyDAQ
            if command[0].lower() == 'q' or command[0].lower() == 'quit':
                self._print_to_output("Terminating...\n")
                if self.balance_beam_enabled:
                    self._stop_beam_mode()  # Stop Balance Beam mode if running
                break
            elif command[0] == "" or command[0] == "\n":
                continue
            elif command[0].lower() == 'h' or command[0].lower() == 'help':
                self._print_help(False)
                continue
            elif command[0].lower() == 'configure':
                self.config = self._construct()
                continue
            elif command[0].lower() == 'clear':
                self.config = self.default_config.copy()
                self._print_to_output("success")
                continue
            elif command[0].lower() == 'print':
                self._print_to_output(json.dumps(self.config), config.WRAPPER_INFO)
                continue
            elif command[0].lower() == 'set':
                if len(command) == 3:
                    self._update_single_config(command[1], command[2])
                else:
                    self._print_to_output("Invalid syntax. Ex: set, Sample Rate, 200")
                continue
            elif command[0].lower() == 'setm':
                raw_json = raw_command.split(',', 1)[1]
                # self._print_to_output("setm json: {0}".format(raw_json))
                self._update_multiple_config(raw_json)
                continue
            elif command[0].lower() == 'wrapper':
                if len(command) == 2:
                    if command[1] == 'enable':
                        self.wrapper_mode = True
                    elif command[1] == 'disable':
                        self.wrapper_mode = False
                    else:
                        self._print_to_output("Invalid syntax. Ex: wrapper, enable/disable")
                else:
                    self._print_to_output("Invalid syntax. Ex: wrapper, enable/disable")
                continue
            elif command[0].lower() == 'mock':
                if len(command) == 2:
                    if command[1] == 'enable' or command[1] == 'e':
                        if self.mock_mode:
                            continue
                        self.cmd_obj = cmd(mock_mode=True)
                        self.mock_mode = self.cmd_obj.is_mock_mode()
                        continue
                    elif command[1] == 'disable' or command[1] == 'd':
                        if not self.mock_mode:
                            continue
                        self.cmd_obj = cmd(mock_mode=False)
                        self.mock_mode = self.cmd_obj.is_mock_mode()
                        continue
                    elif command[1] == 'status' or command[1] == 's':
                        self._print_to_output(str(self.mock_mode), config.WRAPPER_INFO)
                        continue
                self._print_to_output("Invalid syntax. Ex: mock, enable")
                continue

            # Now need to check if connection is still active before any of the next commands can run
            if not self._is_cydaq_connected():
                self._print_to_output(config.CYDAQ_NOT_CONNECTED, config.WRAPPER_ERROR)
                # Try to establish connection again
                self.cmd_obj = cmd(self.mock_mode)
                continue

            # Next check for commands that require direct connection to CyDAQ.
            if command[0].lower() == 'ping' or command[0] == 'p':
                # raise Exception("REE")
                self._ping()
                continue
            elif command[0].lower() == 'send':
                self._send()
                continue
            elif command[0].lower() == 'flush':
                self.cmd_obj.flush()
                continue
            elif command[0].lower() == 'start':
                self._start_sampling()
                continue
            elif command[0].lower() == "stop":
                if len(command) == 1:
                    self._stop_sampling()
                elif len(command) == 2:
                    self._stop_sampling(outFile=command[1])
                continue
            elif command[0].lower() == 'generate':
                if not self.generating:
                    self.cmd_obj.send_start_gen()
                    self.generating = True
                    self._print_to_output("Generating Started", config.WRAPPER_INFO)
                else:
                    self.cmd_obj.send_stop_gen()
                    self.generating = not self.generating
                    self._print_to_output("Generating Stopped", config.WRAPPER_INFO)
                continue
            elif command[0].lower() == 'bb_start':
                if len(command) == 1:
                    if self.balance_beam_enabled:
                        self._print_to_output("Balance Beam Mode is already enabled!", config.WRAPPER_INFO)
                        continue
                    self.bb_pos = "-9"  # Default start value for plotting
                    self._start_beam_mode()
                elif len(command) == 2:
                    args = command[1].split(' ')
                    if len(args) == 5:
                        if self.balance_beam_enabled:
                            self._print_to_output("Balance Beam Mode is already enabled!", config.WRAPPER_INFO)
                            continue
                        self.bb_pos = "-9"  # Default start value for plotting
                        self._start_beam_mode(args[0], args[1], args[2], args[3], args[4])
                    else:
                        self._print_to_output("Invalid syntax. Ex: bb_start, 0 0 0 0 0")
                else:
                    self._print_to_output("Invalid syntax. Ex: bb_start, 0 0 0 0 0")
                continue

            # The following commands require that the balance beam mode is already enabled
            # If the balance beam mode is not enabled, let the user know and deny the command
            if not self.balance_beam_enabled:
                self._print_to_output("Balance Beam Mode is not enabled!", config.WRAPPER_INFO)
                continue

            if command[0].lower() == 'bb_stop':
                self.is_working_cmd_sent = True
                self._stop_beam_mode()
                continue
            elif command[0].lower() == 'bb_fetch_pos':
                self.is_working_cmd_sent = True
                self._print_to_output(self.bb_pos, log_level="BB_LIVE")
                continue
            elif command[0].lower() == 'bb_const':
                self.is_working_cmd_sent = True
                args = command[1].split(' ')
                if len(args) != 4:
                    self._print_to_output("Invalid syntax. Ex: bb_const, 0 0 0 0")
                else:
                    self._update_constants(args[0], args[1], args[2], args[3])
                continue
            elif command[0].lower() == 'bb_set':
                self.is_working_cmd_sent = True
                if len(command) != 2:
                    self._print_to_output("Invalid syntax. Ex: bb_set, 0")
                else:
                    self._update_set(command[1])
                continue
            elif command[0].lower() == 'bb_offset_inc':
                self.is_working_cmd_sent = True
                self._offset_inc()
                continue
            elif command[0].lower() == 'bb_offset_dec':
                self.is_working_cmd_sent = True
                self._offset_dec()
                continue
            elif command[0].lower() == 'bb_pause':
                self.is_working_cmd_sent = True
                self._pause_bb()
                continue
            elif command[0].lower() == 'bb_resume':
                self.is_working_cmd_sent = True
                self._resume_bb()
                continue

            # Otherwise command not found
            self._print_help(True)
            

    def _print_to_output(self, message, log_level=config.WRAPPER_IGNORE):
        for line in message.split("\n"):
            if self.wrapper_mode:
                print("%{0}% {1}".format(log_level, message))
            else:
                print(line)

    def _is_cydaq_connected(self):
        self.cmd_obj.refresh_port()

        # on new firmware, when petalinux boots up only the debug port is visible
        # this means get_port() will think it's running old firmware, even though it's not
        # if the debug port doesn't respond with ACK, then we know it's not actually the old firmware.
        # That being said, the old firmware can't ping the CyDAQ while sampling. So while the 
        # CLI is in "sampling mode", don't do this extra check.
        if not self.sampling and not self.balance_beam_enabled and self.cmd_obj.port is not None and self.cmd_obj.port != "" and self.cmd_obj.ping_zybo() is False:
            self.cmd_obj.ctrl_comm_obj.old_firmware = False
            self.cmd_obj.port = None

        if self.cmd_obj.port == "" or self.cmd_obj.port is None:
            return False
        return True

    def _print_help(self, cmnd):
        if cmnd:
            self._print_to_output("\tUnknown command. Command List:", config.WRAPPER_INFO)
        else:
            self._print_to_output("\tCommand List & Info", config.WRAPPER_INFO)
        self._print_to_output(self.HELP_MSG, config.WRAPPER_INFO)

    def _ping(self):
        """
		Sends a command to the device to determine what the latency of the device communication is

		Returns:
			True if the message was acknowleged, False if device is not connected.
		"""
        a = datetime.datetime.now()
        success = self.cmd_obj.ping_zybo()
        if not success:
            self._print_to_output(config.CYDAQ_NOT_CONNECTED, config.WRAPPER_ERROR)
            return False
        b = datetime.datetime.now()
        c = b - a
        self._print_to_output("CyDaq latency {} microseconds".format(c.microseconds), config.WRAPPER_INFO)
        return True

    def _send(self):
        """
		Send the current configuration to the cyDAQ

		If required configuration values aren't set, they are taken from default_config
		defined at the top of this file
		"""

        config_send = deepcopy(self.default_config)
        for key in self.config:
            config_send[key] = self.config[key]

        def send_config_with_response(func, *args):
            """
			Calls func with specified args. Func must be a cmd_obj function that sends 
			config data to the cyDAQ. 
			"""
            func(*args)
            response = self.cmd_obj.recieve_acknowlege_zybo()
            if not response:
                raise Exception()

        try:
            # must be sent in order? (Not 100% sure on this but the old code did so I'm rolling with it)
            send_config_with_response(self.cmd_obj.send_input, nameToEnum(config_send["Input"]))
            send_config_with_response(self.cmd_obj.send_sample_rate, config_send["Sample Rate"])
            send_config_with_response(self.cmd_obj.send_filter, nameToEnum(config_send["Filter"]))

            upper = config_send["Upper Corner"]
            lower = config_send["Lower Corner"]
            mid = config_send["Mid Corner"]

            if upper != 0 or lower != 0 or mid != 0:
                send_config_with_response(self.cmd_obj.send_corner_freq, upper, lower, mid, config_send["Filter"])

            send_config_with_response(self.cmd_obj.send_dac_reps, config_send["Dac Reps"])
            send_config_with_response(self.cmd_obj.send_dac_gen_rate, config_send["Dac Generation Rate"])
        except:
            self._print_to_output(message="Error sending config!", log_level=config.WRAPPER_INFO)
            return

        self._print_to_output(message="Config sent successfully!", log_level=config.WRAPPER_INFO)

    def _update_single_config(self, key, value):
        """Updates a single entry in the config"""
        self.config[key] = value

    def _update_multiple_config(self, json_str):
        """Updates multiple entries specified as a JSON object"""
        jsonList = {}

        try:
            self._print_to_output(json_str, config.WRAPPER_INFO)
            jsonList = json.loads(json_str)
        except json.JSONDecodeError:
            self._print_to_output("ERROR: Improper JSON specified", config.WRAPPER_ERROR)

        for key in jsonList:
            self.config[key] = jsonList[key]

    ### Sampling Methods ###

    def _start_sampling(self):
        self.sampling = True
        self.cmd_obj.send_start_cmd()

    def _stop_sampling(self, outFile=None):
        self.sampling = False
        sampleRate = self.config["Sample Rate"]
        sample_time = 0
        period = 1 / int(sampleRate)
        if outFile is None or outFile == "":
            outFile = self._generateFilename()
        _, extension = os.path.splitext(outFile)

        # used if writing to matlab file
        matKeys = []
        matValues = []

        writeFunction = self._writeCSV
        f = None
        if extension == ".csv":
            try:
                f = open(outFile, 'w')
            except Exception as e:
                self._print_to_output("Error opening file!", config.WRAPPER_ERROR)
                return
        # TODO move these to a seperate functions to keep it clean
        if self.cmd_obj.ctrl_comm_obj.old_firmware:
            self._print_to_output("Fetching samples...", config.WRAPPER_INFO)
            self.cmd_obj.send_fetch()

            # open a new connection to get data
            comm_obj = self.cmd_obj.ctrl_comm_obj
            comm_obj.open(self.cmd_obj.port)
            print("trying to read fetched samples on port: ", self.cmd_obj.port)

            # wait for an @, which signals start of data
            byte = b""
            while byte != b"@":
                # if byte != b"":
                print(byte)
                byte = comm_obj.read()

            # read all from the buffer, writing it to file
            res = bytearray(b"")
            count = 0
            listening = True
            while listening:
                res.extend(comm_obj.read_all())
                if len(res) < 2:
                    continue
                # print(res)

                while len(res) >= 2:
                    # old firmware sent data in the following format: @[DATA]00000000@ACK!
                    # where [DATA] is two byte sensor values
                    # new firmware mimics this, but can be changed
                    # Note: the @ at the start has already been read at this point
                    if len(res) <= 6 and b'@ACK!' in res:
                        listening = False
                        break

                    # old firmware behaivor would put 8 '0' chars at the end of the data for some reason...
                    # just filter that out
                    if res[0:2] == b'00':
                        res.pop(0)
                        res.pop(0)
                        continue

                    # grab next two bytes and convert to uint16
                    raw_num = int.from_bytes(res[0:2], byteorder="little", signed=False)
                    res.pop(0)
                    res.pop(0)

                    if extension == ".csv":
                        writeFunction(f, self._adc_raw_to_volts(raw_num), time_stamp=sample_time * period)
                    elif extension == ".mat":
                        matKeys.append(sample_time * period)
                        matValues.append(self._adc_raw_to_volts(raw_num))
                    sample_time += 1
                count += 1
            # print("Batch count: ", count)

            comm_obj.close()
            self._print_to_output("Wrote samples to {}".format(outFile), config.WRAPPER_INFO)
            if extension == ".csv":
                f.close()
            elif extension == ".mat":
                savemat(outFile, {"keys": matKeys, "values": matValues})
        else:
            # TODO handle matlab files
            # new firmware, can use scp instead
            print("Send stop command!")
            self.cmd_obj.send_stop_sampling()
            self.cmd_obj.recieve_acknowlege_zybo()
            print("Fetching samples with scp!")

            if not os.path.exists("C:\Temp"):
                os.makedirs("C:\Temp")

            # Create an SSH client
            ssh = None
            ssh_count = 0
            connected = False
            # keep retrying the ssh connection until a timeout
            while not connected:
                try:
                    ssh = paramiko.SSHClient()
                    ssh.set_missing_host_key_policy(paramiko.AutoAddPolicy())
                    ssh.connect(config.SSH_HOSTNAME, config.SSH_PORT, config.SSH_USERNAME, config.SSH_PASSWORD)
                    connected = True
                    self._print_to_output("ssh connect successful!", config.WRAPPER_IGNORE)
                except BaseException as e:
                    # print("base exception caught!!", e)
                    self._print_to_output("ssh connect failed! sleeping " + str(config.SSH_SLEEP_TIME) + " seconds",
                                          config.WRAPPER_IGNORE)
                    time.sleep(config.SSH_SLEEP_TIME)
                    ssh.close()
                    ssh_count += 1
                    if ssh_count > config.SSH_NUM_RETRIES:
                        print("max number of retry for SCP connection reached!", config.WRAPPER_ERROR)
                        break

            if ssh is None:
                pass  # TODO print error
            scp = ssh.open_sftp()

            start_time = time.time()

            # Copy the remote file to the local machine
            scp.get(config.SCP_REMOTE_PATH, config.SCP_LOCAL_PATH)

            end_time = time.time()

            transfer_time = end_time - start_time
            transfer_speed = int(os.path.getsize(config.SCP_LOCAL_PATH) / transfer_time)

            self._print_to_output("SCP finished. Transfer speed: " + str(transfer_speed) + " bytes/second or " + str(
                transfer_speed / 1000000) + " MB/second")

            # Close the SCP client and SSH connection
            scp.close()
            ssh.close()

            # read from temp data.bin, and write sample file to given file locaiton 
            with open(config.SCP_LOCAL_PATH, "rb") as temp_file:
                while True:
                    raw_num = temp_file.read(2)

                    if not raw_num:
                        break

                    raw_num = int.from_bytes(raw_num, byteorder="little", signed=False)

                    if extension == ".csv":
                        writeFunction(f, self._adc_raw_to_volts(raw_num), time_stamp=sample_time * period)
                    elif extension == ".mat":
                        matKeys.append(sample_time * period)
                        matValues.append(self._adc_raw_to_volts(raw_num))
                    sample_time += 1

            # delete temp file
            os.remove(config.SCP_LOCAL_PATH)

            if extension == ".csv":
                f.close()
            elif extension == ".mat":
                savemat(outFile, {"keys": matKeys, "values": matValues})

            self._print_to_output("Wrote samples to {}".format(outFile), config.WRAPPER_INFO)

    def _construct(self):
        pc = ParameterConstructor()
        ticket = pc.ticket()

        # Go through each ticket and let the user input either an integer or pick from a list
        while ticket is not None:
            self._print_to_output(ticket["Node"], config.WRAPPER_INFO)
            if ticket["Type"] == "Integer":
                self._print_to_output("[{}, {}] :".format(ticket["Bounds"][0], ticket["Bounds"][1]),
                                      config.WRAPPER_INFO)
            else:
                if len(ticket["Options"]) == 1:
                    pc.input(ticket["Options"][0])
                self._print_to_output(ticket["Options"], config.WRAPPER_INFO)
            if not self._handle_ticket(pc):
                return None
            ticket = pc.ticket()
        params = pc.toDict()

        # Dataset dac mode requires a file input
        if params["Dac Mode"] == 'Dataset':
            valid_data = True
            while valid_data:
                self._print_to_output('Filepath for DAC dataset (must be .csv)', config.WRAPPER_INFO)
                dac_dataset_filepath = input(': ')
                if '.csv' in dac_dataset_filepath:
                    if self._loadCSV(dac_dataset_filepath) is not None:
                        params['Dataset Filepath'] = dac_dataset_filepath
                        valid_data = False
                else:
                    self._print_to_output("file must be .csv", config.WRAPPER_ERROR)
        self._print_to_output(params, config.WRAPPER_INFO)
        return params

    def _handle_ticket(self, pc):
        response = input(' :')
        if '/' in response:
            words = response.split(' ')
            if words[0] == '/back':
                pc.back()
            elif words[0] == '/goto':
                if len(words) < 2:
                    self._print_to_output('Not enough arguments, second arg should be the Step to navigate back to',
                                          config.WRAPPER_ERROR)
                pc.goto(' '.join(words[1:]))
            elif words[0] == '/quit':
                return 0
            pass
        else:
            pc.input(response)
        return 1

    # TODO this probably needs removed/changed. Will address when used
    def _loadCSV(self, filepath):
        data = []
        try:
            with open(filepath) as f:
                if os.path.getsize(filepath) > 6000000:
                    self._print_to_output("File too large", config.WRAPPER_ERROR)
                    return None
                for line in f:
                    row_data = line.strip("\n").split()
                    for i, item in enumerate(row_data):
                        try:
                            row_data[i] = float(item)  # type: ignore
                        except ValueError:
                            pass
                    try:
                        if len(row_data) == 1:
                            data.append(float(row_data[0]))
                        else:
                            data.append(float(row_data))  # type: ignore
                    except ValueError:
                        pass
            return data
        except:
            return None

    def _writeCSV(self, f, value, time_stamp=None):
        if time_stamp is not None:
            f.write("{},{}\n".format(time_stamp, value))
        else:
            f.write("{}\n".format(value))

    def _generateFilename(self):
        return 'sample_{}.csv'.format(time.strftime('%Y%m%d-%H%M%S'))

    def _adc_raw_to_volts(self, sample):
        ADC_N_BITS = 12  # Number of bits in the ADC
        ADC_DC_OFFSET_V = 0.5  # DC level shift on ADC
        ADC_MAX_V = 1  # Max voltage amplitude at ADC (should equal a raw reading of 2^ADC_N_BITS)
        ADC_GAIN = 10  # Gain needed to rescale ADC measured voltage back (CyDAQ uses 5:1 divider)
        sample_volts = sample / (2 ** ADC_N_BITS - 1) * ADC_MAX_V
        return (sample_volts - ADC_DC_OFFSET_V) * ADC_GAIN

    ### Balance Beam Methods ###

    def _start_beam_mode(self, kp=None, ki=None, kd=None, N=None, set=None):
        # Start Balance Beam Mode (Send Start Command)
        self.cmd_obj.start_bb(kp, ki, kd, N, set)

        # Check and see if the buffer returns false, or a number
        # If it returns a number, balance beam is connected and functional
        # If it returns false, the balance beam is not connected and thread should not start
        buffer = self.cmd_obj.read_bb_buffer()
        if isinstance(buffer, bool):
            if not buffer:
                self._print_to_output(config.BALANCE_BEAM_NOT_CONNECTED, config.WRAPPER_INFO)
                return

        # Start thread to get buffer and print it
        self.balance_beam_enabled = True
        self.stop_thread = False
        self.bb_thread = Thread(target=self._read_bb_buffer)
        self.bb_thread.start()

    def _stop_beam_mode(self):
        self.stop_thread = True
        self.bb_thread = None

        # Pause to give the thread enough time to finish
        time.sleep(0.1)

        self.cmd_obj.stop_bb()
        self.balance_beam_enabled = False
        self.is_working_cmd_sent = False

    def _update_constants(self, kp, ki, kd, N):
        self.cmd_obj.update_constants(kp, ki, kd, N)
        self.is_working_cmd_sent = False

    def _update_set(self, setv):
        self.cmd_obj.update_set(setv)
        self.is_working_cmd_sent = False

    def _offset_inc(self):
        self.cmd_obj.offset_inc()
        self.is_working_cmd_sent = False

    def _offset_dec(self):
        self.cmd_obj.offset_dec()
        self.is_working_cmd_sent = False

    def _pause_bb(self):
        self.cmd_obj.pause_bb()
        self.is_working_cmd_sent = False

    def _resume_bb(self):
        self.cmd_obj.resume_bb()
        self.is_working_cmd_sent = False

    def _read_bb_buffer(self):
        while not self.stop_thread:
            # Read the buffer
            buffer = self.cmd_obj.read_bb_buffer()

            # Check for if the actual balance beam is not connected to the CyDAQ
            if type(buffer) == type(False):
                if not buffer:
                    if self.is_working_cmd_sent:  # Fix for the trailing "not connected" error when running stop
                        continue
                    self._print_to_output(config.BALANCE_BEAM_NOT_CONNECTED, log_level="ERROR")
                    self.stop_thread = True
                    self.balance_beam_enabled = False
                    self._stop_beam_mode()
                    print(f"Buffer is false for some reason! {buffer}")
                    return
            if buffer == "0xc9\r":  # Alternate balance beam not connected code
                if self.is_working_cmd_sent:  # Fix for the trailing "not connected" error when running stop
                    continue
                self._print_to_output(config.BALANCE_BEAM_NOT_CONNECTED, log_level="ERROR")
                self.stop_thread = True
                self.balance_beam_enabled = False
                print(f"Buffer is the weird code for some reason! {buffer}")
                return

            # Check if the buffer has improper syntax, and if so, throw it out
            pattern = re.compile("\d\.[0-9]+")
            neg_pattern = re.compile("-\d\.[0-9]+")
            if not pattern.match(buffer) and not neg_pattern.match(buffer):
                continue
            if self.wrapper_mode:
                self.bb_pos = buffer
            else:
                self._print_to_output(buffer, log_level="BB_LIVE")


if __name__ == "__main__":
    try:
        cli = CyDAQ_CLI()
        cli.start()
    except Exception as e:  # Doesn't catch keyboard interrupt
        # TODO clean this printing up. Right now a large chunk of the stack trace isn't
        # making it into the GUI logs. Need to fix
        print("additional exception info: ", e)
        print("more printing: ", traceback.format_exc())
        # print("stack trace: ", e.with_traceback())
        cli._print_to_output("unhandled exception in CLI: " + traceback.format_exc())
        # cli._print_to_output("unhandled exception in CLI: " + e)
