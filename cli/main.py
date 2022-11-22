from copy import deepcopy
import datetime
import os
import json
import time
from check_params import ParameterConstructor

from command_comm import cmd, recieve_acknowlege_zybo
from master_enum import nameToEnum, sig_serial
from serial_comm import ctrl_comm, get_port

cmd_obj = cmd()
comm_port = get_port()

# Default values that are sent to the cyDAQ
default_config = {
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

# Represents the configuration for the cyDAQ. Construction can be guided using the configure() function
# or manually using other commands
config = default_config.copy()


def print_help(cmnd):
	usages = {}  # TODO dict for individual command usage messages

	if cmnd:
		print("\tUnknown command. Command List:")
	else:
		print("\tCommand List & Info")
	helpMsg = """	h/help\t\t\t\t Print This Help Menu
	ping\t\t\t\t Ping the Zybo
	configure\t\t\t Configure Parameters (Guided)
	clear\t\t\t\t Clear config to default
	print\t\t\t\t Print Current Config
	send\t\t\t\t Send config to cyDAQ
	set (key) (value)\t\t Set one config value
	setm (json list)\t\t Set multiple config values as a json object
	flush\t\t\t\t Flush 
	start\t\t\t\t Start sampling
	stop, [filename]\t\t Stop Sampling
	generate\t\t\t Start/Stop DAC Generation
	q/quit\t\t\t\t Exit The Command-Line"""
	print(helpMsg)


def ping():
	"""
		Sends a command to the device to determine what the latency of the device communication is

		Returns:
			True if the message was acknowleged, False if device is not connected.
		"""
	a = datetime.datetime.now()
	cmd_obj.ping_zybo(comm_port)
	b = datetime.datetime.now()
	c = b - a
	print("CyDaq latency {} microseconds".format(c.microseconds))
	return 1


def configure():
	global config
	config = construct()


def print_config():
	global config
	print(json.dumps(config))


def send():
	"""
	Send the current configuration to the cyDAQ

	If required configuration values aren't set, they are taken from default_config
	defined at the top of this file
	"""

	config_send = deepcopy(default_config)
	for key in config:
		config_send[key] = config[key]

	# TODO add config validation before sending?

	def send_config_with_retry(func, *args):
		"""
		Calls func with specified args. Func must be a cmd_obj function that sends 
		config data to the cyDAQ. 
		"""
		n = 3
		i = 0
		while i < n:
			# print("calling func: ", func, " with args: ", args)
			func(*args)
			if recieve_acknowlege_zybo(comm_port):
				break
			i += 1

	# must be sent in order? (Not 100% sure on this but the old code did so I'm rolling with it)
	send_config_with_retry(cmd_obj.send_input, comm_port, nameToEnum(config_send["Input"]))
	send_config_with_retry(cmd_obj.send_sample_rate, comm_port, config_send["Sample Rate"])
	send_config_with_retry(cmd_obj.send_filter, comm_port, nameToEnum(config_send["Filter"]))

	upper = config_send["Upper Corner"]
	lower = config_send["Lower Corner"]
	mid = config_send["Mid Corner"]
	# This logic is probably wrong but it's how it was before... TODO fix?
	if upper != 0 or lower != 0 or mid != 0:
		send_config_with_retry(cmd_obj.send_corner_freq, comm_port, upper, lower, mid, config_send["Filter"])

	# send_config_value(cmd_obj.send_dac_mode, comm_port,  nameToEnum(config_send["Input"])) 	#TODO was commented
	#  out before
	send_config_with_retry(cmd_obj.send_dac_reps, comm_port, config_send["Dac Reps"])
	send_config_with_retry(cmd_obj.send_dac_gen_rate, comm_port, config_send["Dac Generation Rate"])


def update_single_config(key, value):
	"""
	Updates a single entry in the config
	"""
	# TODO some form of config validation here
	config[key] = value


def update_multiple_config(json_str):
	"""
	Updates multiple entries specified as a JSON object
	"""

	# TODO some form of config validation here

	jsonList = {}

	try:
		print(json_str)
		jsonList = json.loads(json_str)
	except json.JSONDecodeError:
		print("ERROR: Improper JSON specified")

	for key in jsonList:
		config[key] = jsonList[key]


def flush():
	pass


def start_sampling():
	cmd_obj.send_start_cmd(comm_port)


def stop_sampling(outFile=None):
	sampleRate = config["Sample Rate"]
	time = 0
	period = 1 / int(sampleRate)
	if outFile is None or outFile == "":
		outFile = generateFilename()
	writeFunction = writeCSV
	f = None
	with open(outFile, "w") as f:
		print("Fetching samples...")
		cmd_obj.send_fetch(comm_port)

		# open a new connection to get data
		comm_obj = ctrl_comm()
		comm_obj.open(comm_port)

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
					writeFunction(f, adc_raw_to_volts(byte_value), time_stamp=time * period)
					time += 1
		print("Wrote samples to ", outFile)


def construct():
	pc = ParameterConstructor()
	ticket = pc.ticket()

	# Go through each ticket and let the user input either an integer or pick from a list
	while ticket is not None:
		print(ticket["Node"])
		if ticket["Type"] == "Integer":
			print("[{}, {}] :".format(ticket["Bounds"][0], ticket["Bounds"][1]))
		else:
			if len(ticket["Options"]) == 1:
				pc.input(ticket["Options"][0])
			print(ticket["Options"])
		if not handle_ticket(pc):
			return None
		ticket = pc.ticket()
	params = pc.toDict()

	# Dataset dac mode requires a file input
	if params["Dac Mode"] == 'Dataset':
		valid_data = True
		while valid_data:
			print('Filepath for DAC dataset (must be .csv)')
			dac_dataset_filepath = input(': ')
			if '.csv' in dac_dataset_filepath:
				if loadCSV(dac_dataset_filepath) is not None:
					params['Dataset Filepath'] = dac_dataset_filepath
					valid_data = False
			else:
				print("file must be .csv")
	print(params)
	return params


def handle_ticket(pc):
	response = input(' :')
	if '/' in response:
		words = response.split(' ')
		if words[0] == '/back':
			pc.back()
		elif words[0] == '/goto':
			if len(words) < 2:
				print('Not enough arguments, second arg should be the Step to navigate back to')
			pc.goto(' '.join(words[1:]))
		elif words[0] == '/quit':
			return 0
		pass
	else:
		pc.input(response)
	return 1


# TODO this probably needs removed/changed
def loadCSV(filepath):
	data = []
	try:
		with open(filepath) as f:
			if os.path.getsize(filepath) > 6000000:
				print("File too large")
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


def writeCSV(f, value, time_stamp=None):
	if time_stamp is not None:
		f.write("{},{}\n".format(time_stamp, value))
	else:
		f.write("{}\n".format(value))


def generateFilename():
	return 'sample_{}.csv'.format(time.strftime('%Y%m%d-%H%M%S'))


def adc_raw_to_volts(sample):
	ADC_N_BITS = 12  # Number of bits in the ADC
	ADC_DC_OFFSET_V = 0.5  # DC level shift on ADC
	ADC_MAX_V = 1  # Max voltage amplitude at ADC (should equal a raw reading of 2^ADC_N_BITS)
	ADC_GAIN = 10  # Gain needed to rescale ADC measured voltage back (CyDAQ uses 5:1 divider)
	sample_volts = sample / (2 ** ADC_N_BITS - 1) * ADC_MAX_V
	return (sample_volts - ADC_DC_OFFSET_V) * ADC_GAIN


def main():
	global comm_port
	generating = False

	# try to connect to cyDAQ. If unable, print error and exit CLI
	if comm_port == "" or comm_port is None:
		print("Zybo not connected")
		return 0

	print("CyDAQ Command Line Interface")
	while True:
		try:
			raw_command = input("> ")
		except EOFError:
			break
		command = raw_command.split(",")
		command = [s.strip(" ") for s in command]

		if command[0] == 'q' or command[0] == 'quit':
			print("Terminating...\n")
			break

		# make sure zybo is still connected
		comm_port = get_port()
		if comm_port == "" or comm_port is None:
			print("Zybo not connected")
			continue

		if command[0] == 'h' or command[0] == 'help':
			print_help(False)
		elif command[0] == 'ping':
			ping()
		elif command[0] == 'configure':
			configure()
		elif command[0] == 'clear':
			global config
			config = default_config.copy()
			print("success")
		elif command[0] == 'print':
			print_config()
		elif command[0] == 'send':
			send()
		elif command[0] == 'set':
			if len(command) == 3:
				update_single_config(command[1], command[2])
		elif command[0] == 'setm':
			json = raw_command.split(',',1)[1]
			print("setm json: ", json)
			update_multiple_config(json)
		elif command[0] == 'flush':
			flush()
		elif command[0] == 'start':
			start_sampling()
		elif command[0] == "stop":
			if len(command) == 1:
				stop_sampling()
			elif len(command) == 2:
				stop_sampling(outFile=command[1])
		elif command[0] == 'generate':
			if not generating:
				cmd_obj.send_start_gen(comm_port)
				generating = True
				print("Generating Started")
			else:
				cmd_obj.send_stop_gen(comm_port)
				generating = not generating
				print("Generating Stopped")
		elif command[0] == "" or command[0] == "\n":
			pass
		else:
			print_help(True)


if __name__ == "__main__":
	main()
