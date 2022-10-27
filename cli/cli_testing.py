import CLIWrapper

cli = CLIWrapper.CLI("main.py")

# Ping Test
print(cli.ping())

# Get Config Test
print(cli.get_config())

# Send Config to CyDAQ Test
cli.send_config_to_cydaq()

# Set Value Test
cli.set_value("Dac Mode", "Enabled")
print(cli.get_config())

# Set Multiple Values Test
# cli.set_values("{\"Sample Rate\": 500, \"Dac Reps\": 10, \"Dac Mode\": \"Disabled\"}")
# print(cli.get_config())

# Start/Stop Sampling Test
cli.start_sampling()
cli.stop_sampling("")

# Start/Stop Generating Test
cli.generate()
cli.generate()

# Send the Config to the CyDAQ
cli.send_config_to_cydaq()
