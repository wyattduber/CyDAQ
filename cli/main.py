from copy import deepcopy
import datetime
import os
import json
import time
from check_params import ParameterConstructor

from command_comm import cmd
from master_enum import nameToEnum, sig_serial
from serial_comm import ctrl_comm

class CyDAQ_CLI:
	"""
	TODO
	"""

	CYDAQ_NOT_CONNECTED = "CyDAQ not connected"
	CLI_START_MESSAGE = "CyDAQ Command Line Interface"

	WRAPPER_INFO = "INFO"
	WRAPPER_ERROR = "ERROR"
	WRAPPER_IGNORE = "IGNORE"

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
			command = raw_command.split(",")
			command = [s.strip(" ") for s in command]

			# First process commands that don't require direct connection to the CyDAQ
			if command[0] == 'q' or command[0] == 'quit':
				self._print_to_output("Terminating...\n")
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

			# Now need to check if connection is still active before any of the next commands can run
			if not self._is_cydaq_connected():
				self._print_to_output(self.CYDAQ_NOT_CONNECTED, self.WRAPPER_ERROR)
				# Try to establish connection again
				# cmd_obj = cmd()
				self.cmd_obj.ctrl_comm_obj._init_comm()
				self.cmd_obj.refresh_port()
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
		usages = {}  # TODO dict for individual command usage messages

		if cmnd:
			self._print_to_output("\tUnknown command. Command List:", self.WRAPPER_INFO)
		else:
			self._print_to_output("\tCommand List & Info", self.WRAPPER_INFO)
		helpMsg = """	h/help\t\t\t\t Print This Help Menu
	ping\t\t\t\t Ping the Zybo
	configure\t\t\t Configure Parameters (Guided)
	clear\t\t\t\t Clear config to default
	print\t\t\t\t Print Current Config
	send\t\t\t\t Send config to cyDAQ
	set (key) (value)\t\t Set one config value
	setm (json list)\t\t Set multiple config values as a json object
	wrapper (enable/disable)\t\t Enable Wrapper Mode for CLIWrapper library
	flush\t\t\t\t Flush 
	start\t\t\t\t Start sampling
	stop, [filename]\t\t Stop Sampling
	generate\t\t\t Start/Stop DAC Generation
	q/quit\t\t\t\t Exit The Command-Line"""
		self._print_to_output(helpMsg, self.WRAPPER_INFO)

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

	def _start_sampling(self):
		self.cmd_obj.send_start_cmd()

	def _stop_sampling(self, outFile=None):
		sampleRate = self.config["Sample Rate"]
		time = 0
		period = 1 / int(sampleRate)
		if outFile is None or outFile == "":
			outFile = self._generateFilename()
		writeFunction = self._writeCSV
		f = None
		with open(outFile, "w") as f:
			self._print_to_output("Fetching samples...", self.WRAPPER_INFO)
			self.cmd_obj.send_fetch()

			# open a new connection to get data
			comm_obj = ctrl_comm()
			comm_obj.open(self.cmd_obj.port)

			# read the data one byte at a time and write to file
			byte = comm_obj.read_byte()
			if byte != False and byte == sig_serial.START_BYTE.value:
				byte_value = 0
				while byte_value != ord(sig_serial.END_BYTE.value):
					try:
						byte_value = comm_obj.read_uint16()
					except:
						break
					if byte_value != ord(sig_serial.END_BYTE.value):
						volts = self._adc_raw_to_volts(byte_value)
						if volts > 12: # TODO this is terrible but it eliminates the bad 6 at the end
							continue
						writeFunction(f, volts, time_stamp=time * period)
						time += 1
			
			comm_obj.close()
			self._print_to_output("Wrote samples to {}".format(outFile), self.WRAPPER_INFO)

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

	# TODO this probably needs removed/changed
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

if __name__ == "__main__":
	CyDAQ_CLI().start()
