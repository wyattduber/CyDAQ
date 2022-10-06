import datetime
import os
import argparse
from check_params import ParameterConstructor

from command_comm import cmd
from serial_comm import get_port

cmd_obj = cmd()
comm_port = get_port()

# Represents the configuration for the zybo board. Construction can be guided using the configure() function
# or manually using other commands
config = {}

def print_help(cmd):
	usages = {}  # TODO dict for individual command usage messages

	if cmd:
		print("\tUnknown command. Command List:")
	else:
		print("\tCommand List & Info")
	helpMsg = """	h\t\t\t\t Print This Help Menu
	pi\t\t\t\t Ping the Zybo
	c\t\t\t\t Configure Parameters (Guided)
	pr\t\t\t\t Print Current Config
	se\t\t\t\t Send config to cyDAQ
	sp (key) (value)\t\t Set one config value
	spl (json list)\t\t\t Set multiple config values as a json list
	f\t\t\t\t Flush 
	s [filename]\t\t\t Start/Stop Sampling
	g\t\t\t\t Start/Stop DAC Generation
	q\t\t\t\t Exit The Command-Line"""
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
	print(config)

def send():
	"""
	Send the current configuration to the cyDAQ
	"""
	# TODO add config validation before sending?

	return cmd_obj.send
	

def update_config(key, value):
	"""
	Updates a single entry in the config
	"""

def update_config(json):
	"""
	Updates multiple entries specified as a JSON list string
	"""
	# verify json list
	# convert to object
	# iterate and update

def flush():
	pass

def sampling():
	pass

# TODO this probably needs removed/changed
def construct():
	pc = ParameterConstructor()
	ticket = pc.ticket()
	
	# Go through each ticket and let the user input either an integer or pick from a list
	while(ticket is not None):
		print(ticket["Node"])
		if ticket["Type"] == "Integer":
			print ("[{}, {}] :".format(ticket["Bounds"][0], ticket["Bounds"][1]))
		else:
			if len(ticket["Options"]) == 1:
				pc.input(ticket["Options"][0])
			print(ticket["Options"])
		if not handle_ticket(pc):
			return None
		ticket = pc.ticket()
	params = pc.toDict()

	# Dataset dac mode requires a file input
	if(params["Dac Mode"] == 'Dataset'):
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
						row_data[i] = float(item)
					except ValueError:
						pass
				try:
					if len(row_data) == 1:
						data.append(float(row_data[0]))
					else:
						data.append(float(row_data))
				except ValueError:
					pass
		return data
	except:
		return None

def main():
	running = True
	print("CyDAQ Command Line Interface")

	#try to connect to cyDAQ. If unable, print error and exit CLI
	if(comm_port == "" or comm_port is None):
		print("Zybo not connected")
		return 0

	while running:
		command = input("> ")
		if command == 'h':
			print_help(False)
		elif command == 'pi':
			ping()
		elif command == 'c':
			configure()
		elif command == 'pr':
			print_config()
		elif command == 'se':
			send()
		elif command == 'sp':
			pass
		elif command == 'spl':
			pass
		elif command == 'f':
			flush()
		elif command == 's':
			sampling()	
		elif command == 'g':
			pass
		elif command == 'q':
			print("Terminating...\n")
			running = False	
		else:
			print_help(True)

if __name__ == "__main__":
	main()
