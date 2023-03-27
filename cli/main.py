from copy import deepcopy
from scipy.io import savemat
import datetime
import os
import json
import time
import traceback

from check_params import ParameterConstructor

from command_comm import cmd
from master_enum import nameToEnum

class CyDAQ_CLI:
	"""
	Handles the creation of a command line interface to communicate with a CyDAQ device. 

	To use, instantiate the object then call the start() method on it, which will block for user input.
	
	For example, the following is all that is needed to start the CLI tool: 
	
	CyDAQ_CLI().start()
	"""

	CYDAQ_NOT_CONNECTED = "CyDAQ not connected"
	CLI_START_MESSAGE = "CyDAQ Command Line Interface"

	WRAPPER_INFO = "INFO"
	WRAPPER_ERROR = "ERROR"
	WRAPPER_IGNORE = "IGNORE"

	HELP_MSG = """	h/help\t\t\t\t Print This Help Menu
	ping\t\t\t\t Ping the Zybo
	configure\t\t\t Configure Parameters (Guided)
	clear\t\t\t\t Clear config to default
	print\t\t\t\t Print Current Config
	send\t\t\t\t Send config to cyDAQ
	set (key) (value)\t\t Set one config value
	setm (json list)\t\t Set multiple config values as a json object
	wrapper (enable/disable)\t Enable Wrapper Mode for CLIWrapper library
	flush\t\t\t\t Flush 
	start\t\t\t\t Start sampling
	stop, [filename]\t\t Stop Sampling
	generate\t\t\t Start/Stop DAC Generation
	mock, (enable/disable/status)\t Enable CyDAQ serial mocking mode
	bb_start\t\t\t Start Balance Beam Mode
	bb_stop\t\t\t\t Stop Balance Beam Mode
	bb_const, (kp) (ki) (kd) (N)\t Send updated constants for bb calc
	bb_set, (value)\t\t\t Send updated set value for bb calc
	bb_offset_inc\t\t\t Increase the balance beam offset
	bb_offset_dec\t\t\t Decrease the balance beam offset
	bb_pause\t\t\t Pause the Balance Beam
	bb_resume\t\t\t Resume the Balance Beam
	q/quit\t\t\t\t Exit The Command-Line"""

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

	def start(self):
		"""Start the CLI tool. Blocks indefinately for user input until the quit command is issued."""

		self._print_to_output(self.CLI_START_MESSAGE)
	
		# Need to check CyDAQ connection once before input prompt
		if not self._is_cydaq_connected():
			self._print_to_output(self.CYDAQ_NOT_CONNECTED, self.WRAPPER_ERROR)

		while True:
			# Get user input and split up individual commands
			try:
				raw_command = input("> ")
			except EOFError:
				break
			except KeyboardInterrupt:
				print()
				break
			command = raw_command.split(",")
			command = [s.strip(" ") for s in command]

			# First process commands that don't require direct connection to the CyDAQ
			if command[0] == 'q' or command[0] == 'quit':
				self._print_to_output("Terminating...\n")
				if self.balance_beam_enabled:
					self._stop_beam_mode() # Stop Balance Beam mode if running
				break
			elif command[0] == "" or command[0] == "\n":
				continue
			elif command[0] == 'h' or command[0] == 'help':
				self._print_help(False)
				continue
			elif command[0] == 'configure':
				self.config = self._construct()
				continue
			elif command[0] == 'clear':
				self.config = self.default_config.copy()
				self._print_to_output("success")
				continue
			elif command[0] == 'print':
				self._print_to_output(json.dumps(self.config), self.WRAPPER_INFO)	
				continue
			elif command[0] == 'set':
				if len(command) == 3:
					self._update_single_config(command[1], command[2])
				else:
					self._print_to_output("Invalid syntax. Ex: set, Sample Rate, 200")
				continue
			elif command[0] == 'setm':
				raw_json = raw_command.split(',',1)[1]
				self._print_to_output("setm json: {0}".format(raw_json))
				self._update_multiple_config(raw_json)
				continue
			elif command[0] == 'wrapper':
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
			elif command[0] == 'mock':
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
						self._print_to_output(str(self.mock_mode), self.WRAPPER_INFO)
						continue
				self._print_to_output("Invalid syntax. Ex: mock, enable")
				continue

			# Now need to check if connection is still active before any of the next commands can run
			if not self._is_cydaq_connected():
				self._print_to_output(self.CYDAQ_NOT_CONNECTED, self.WRAPPER_ERROR)
				# Try to establish connection again
				self.cmd_obj = cmd(self.mock_mode)
				continue

			# Next check for commands that require direct connection to CyDAQ. 
			if command[0] == 'ping':
				self._ping()
				continue
			elif command[0] == 'send':
				self._send()
				continue
			elif command[0] == 'flush':
				self.cmd_obj.flush()
				continue
			elif command[0] == 'start':
				self._start_sampling()
				continue
			elif command[0] == "stop":
				if len(command) == 1:
					self._stop_sampling()
				elif len(command) == 2:
					self._stop_sampling(outFile=command[1])
				continue
			elif command[0] == 'generate':
				if not generating:
					self.cmd_obj.send_start_gen()
					generating = True
					self._print_to_output("Generating Started", self.WRAPPER_INFO)
				else:
					self.cmd_obj.send_stop_gen()
					generating = not generating
					self._print_to_output("Generating Stopped", self.WRAPPER_INFO)
				continue
			elif command[0] == 'bb_start':
				if self.balance_beam_enabled:
					self._print_to_output("Balance Beam Mode is already enabled!")
					continue
				self._start_beam_mode()
				self.balance_beam_enabled = True
				continue
			elif command[0] == 'bb_stop':
				if not self.balance_beam_enabled:
					self._print_to_output("Balance Beam Mode is not enabled!")
					continue
				self._stop_beam_mode()
				continue
			elif command[0] == 'bb_const':
				if not self.balance_beam_enabled:
					self._print_to_output("Balance Beam Mode is not enabled!")
					continue
				args = command[1].split(' ')
				self._update_constants(args[0], args[1], args[2], args[3])
				continue
			elif command[0] == 'bb_set':
				if not self.balance_beam_enabled:
					self._print_to_output("Balance Beam Mode is not enabled!")
					continue
				self._update_set(command[1])
				continue
			elif command[0] == 'bb_offset_inc':
				if not self.balance_beam_enabled:
					self._print_to_output("Balance Beam Mode is not enabled!")
					continue
				self._offset_inc()
				continue
			elif command[0] == 'bb_offset_dec':
				if not self.balance_beam_enabled:
					self._print_to_output("Balance Beam Mode is not enabled!")
					continue
				self._offset_dec()
				continue
			elif command[0] == 'bb_pause':
				if not self.balance_beam_enabled:
					self._print_to_output("Balance Beam Mode is not enabled!")
					continue
				self._pause_bb()
				continue
			elif command[0] == 'bb_resume':
				if not self.balance_beam_enabled:
					self._print_to_output("Balance Beam Mode is not enabled!")
					continue
				self._resume_bb()
				continue

			# Otherwise command not found
			self._print_help(True)

	def _print_to_output(self, message, log_level=WRAPPER_IGNORE):
		for line in message.split("\n"):
			if self.wrapper_mode:
				print("%{0}% {1}".format(log_level, message))
			else:
				print(line)

	def _is_cydaq_connected(self):
		self.cmd_obj.refresh_port()
		if self.cmd_obj.port == "" or self.cmd_obj.port is None:
			return False
		return True
		

	def _print_help(self, cmnd):
		if cmnd:
			self._print_to_output("\tUnknown command. Command List:", self.WRAPPER_INFO)
		else:
			self._print_to_output("\tCommand List & Info", self.WRAPPER_INFO)
		self._print_to_output(self.HELP_MSG, self.WRAPPER_INFO)

	def _ping(self):
		"""
		Sends a command to the device to determine what the latency of the device communication is

		Returns:
			True if the message was acknowleged, False if device is not connected.
		"""
		a = datetime.datetime.now()
		self.cmd_obj.ping_zybo()
		b = datetime.datetime.now()
		c = b - a
		self._print_to_output("CyDaq latency {} microseconds".format(c.microseconds), self.WRAPPER_INFO)
		return 1

	def _send(self):
		"""
		Send the current configuration to the cyDAQ

		If required configuration values aren't set, they are taken from default_config
		defined at the top of this file
		"""

		config_send = deepcopy(self.default_config)
		for key in self.config:
			config_send[key] = self.config[key]

		# TODO add config validation before sending?

		def send_config_with_retry(func, *args):
			"""
			Calls func with specified args. Func must be a cmd_obj function that sends 
			config data to the cyDAQ. 
			"""
			n = 3
			i = 0
			while i < n:
				func(*args)
				if self.cmd_obj.recieve_acknowlege_zybo():
					break
				i += 1

		# must be sent in order? (Not 100% sure on this but the old code did so I'm rolling with it)
		send_config_with_retry(self.cmd_obj.send_input, nameToEnum(config_send["Input"]))
		send_config_with_retry(self.cmd_obj.send_sample_rate, config_send["Sample Rate"])
		send_config_with_retry(self.cmd_obj.send_filter, nameToEnum(config_send["Filter"]))

		upper = config_send["Upper Corner"]
		lower = config_send["Lower Corner"]
		mid = config_send["Mid Corner"]
		# This logic is probably wrong but it's how it was before... TODO fix?
		if upper != 0 or lower != 0 or mid != 0:
			send_config_with_retry(self.cmd_obj.send_corner_freq, upper, lower, mid, config_send["Filter"])

		# send_config_value(cmd_obj.send_dac_mode, comm_port,  nameToEnum(config_send["Input"])) 	#TODO was commented
		#  out before
		send_config_with_retry(self.cmd_obj.send_dac_reps, config_send["Dac Reps"])
		send_config_with_retry(self.cmd_obj.send_dac_gen_rate, config_send["Dac Generation Rate"])

	def _update_single_config(self, key, value):
		"""Updates a single entry in the config"""
		# TODO some form of config validation here
		self.config[key] = value

	def _update_multiple_config(self, json_str):
		"""Updates multiple entries specified as a JSON object"""
		# TODO some form of config validation here
		jsonList = {}

		try:
			self._print_to_output(json_str, self.WRAPPER_INFO)
			jsonList = json.loads(json_str)
		except json.JSONDecodeError:
			self._print_to_output("ERROR: Improper JSON specified", self.WRAPPER_ERROR)

		for key in jsonList:
			self.config[key] = jsonList[key]

	### Sampling Methods ###

	def _start_sampling(self):
		self.cmd_obj.send_start_cmd()

	def _stop_sampling(self, outFile=None):
		sampleRate = self.config["Sample Rate"]
		time = 0
		period = 1 / int(sampleRate)
		if outFile is None or outFile == "":
			outFile = self._generateFilename()
		_, extension = os.path.splitext(outFile)
		matDict = {} # Dictionary used to matlab file writing
		writeFunction = self._writeCSV
		f = None
		if extension == ".csv":
			f = open(outFile, 'w')
		self._print_to_output("Fetching samples...", self.WRAPPER_INFO)
		self.cmd_obj.send_fetch()

		# open a new connection to get data
		comm_obj = self.cmd_obj.ctrl_comm_obj
		comm_obj.open(self.cmd_obj.port)

		#wait for an @, which signals start of data
		byte = b""
		while byte != b"@":
			byte = comm_obj.read()

		# read all from the buffer, writing it to file
		res = bytearray(b"")
		count = 0
		listening = True
		while listening:
			res.extend(comm_obj.read_all())
			if b"!" in res:
				listening = False
			# print(res)
			if len(res) < 2:
				continue
			while len(res) >= 2:
				# for some reason @ACK is sent at the end of data. Filter it out...
				if res[0:2] == b'@A' or res[0:2] == b'CK':
					res.pop(0)
					res.pop(0)
					continue

				# grab next two bytes and convert to uint16
				raw_num = int.from_bytes(res[0:2], byteorder="little", signed=False)
				res.pop(0)
				res.pop(0)
				volts = self._adc_raw_to_volts(raw_num)

				# hacky fix for bad data. Need firmware to fix though
				if volts > 12:
					continue

				if extension == ".csv":
					writeFunction(f, self._adc_raw_to_volts(raw_num), time_stamp=time*period)
				elif extension == ".mat":
					matDict[f"{str(time * period)}"] = self._adc_raw_to_volts(raw_num)
				time+=1
			count+=1
		# print("Batch count: ", count)

		comm_obj.close()
		self._print_to_output("Wrote samples to {}".format(outFile), self.WRAPPER_INFO)
		if extension == ".csv":
			f.close()
		elif extension == ".mat":
			savemat(outFile, matDict)


	def _construct(self):
		pc = ParameterConstructor()
		ticket = pc.ticket()

		# Go through each ticket and let the user input either an integer or pick from a list
		while ticket is not None:
			self._print_to_output(ticket["Node"], self.WRAPPER_INFO)
			if ticket["Type"] == "Integer":
				self._print_to_output("[{}, {}] :".format(ticket["Bounds"][0], ticket["Bounds"][1]), self.WRAPPER_INFO)
			else:
				if len(ticket["Options"]) == 1:
					pc.input(ticket["Options"][0])
				self._print_to_output(ticket["Options"], self.WRAPPER_INFO)
			if not self._handle_ticket(pc):
				return None
			ticket = pc.ticket()
		params = pc.toDict()

		# Dataset dac mode requires a file input
		if params["Dac Mode"] == 'Dataset':
			valid_data = True
			while valid_data:
				self._print_to_output('Filepath for DAC dataset (must be .csv)', self.WRAPPER_INFO)
				dac_dataset_filepath = input(': ')
				if '.csv' in dac_dataset_filepath:
					if self._loadCSV(dac_dataset_filepath) is not None:
						params['Dataset Filepath'] = dac_dataset_filepath
						valid_data = False
				else:
					self._print_to_output("file must be .csv", self.WRAPPER_ERROR)
		self._print_to_output(params, self.WRAPPER_INFO)
		return params

	def _handle_ticket(self, pc):
		response = input(' :')
		if '/' in response:
			words = response.split(' ')
			if words[0] == '/back':
				pc.back()
			elif words[0] == '/goto':
				if len(words) < 2:
					self._print_to_output('Not enough arguments, second arg should be the Step to navigate back to', self.WRAPPER_ERROR)
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
					self._print_to_output("File too large", self.WRAPPER_ERROR)
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

	def _start_beam_mode(self):
		self.cmd_obj.start_bb()

	def _stop_beam_mode(self):
		self.cmd_obj.stop_bb()
		self.balance_beam_enabled = False

	def _update_constants(self, kp, ki, kd, N):
		self.cmd_obj.update_constants(kp, ki, kd, N)

	def _update_set(self, setv):
		self.cmd_obj.update_set(setv)

	def _offset_inc(self):
		self.cmd_obj.offset_inc()

	def _offset_dec(self):
		self.cmd_obj.offset_dec()

	def _pause_bb(self):
		self.cmd_obj.pause_bb()

	def _resume_bb(self):
		self.cmd_obj.resume_bb()

if __name__ == "__main__":
	try:
		cli = CyDAQ_CLI()
		cli.start()
	except Exception as e: # Doesn't catch keyboard interrupt
		cli._print_to_output("exceptinon uncaught in CLI: " + traceback.format_exc())
