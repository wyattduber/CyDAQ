import CLIWrapper

cli = CLIWrapper.CLI("main.py")

print(cli.ping())
print(cli.clear_config())
print(cli.get_config())
cli.send_config_to_cydaq()