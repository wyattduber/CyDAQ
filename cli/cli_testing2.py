import CLIWrapper

cli = CLIWrapper.CLI()

# Ping Test
print(cli.ping())

# cli.set_values("{\"Sample Rate\": 500, \"Dac Reps\": 10, \"Dac Mode\": \"Disabled\"}")
cli.set_values("{\"Sample Rate\": 500}")
print(cli.get_config())