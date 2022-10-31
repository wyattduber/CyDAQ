import CLIWrapper
import unittest

cli = CLIWrapper.CLI("main.py")


class TestCLIWrapper(unittest.TestCase):

    # Ping Test
    def test_pint(self):
        # print(cli.ping())
        ping = cli.ping()
        self.assertTrue(ping < 50000 or ping > 1)

    # Get Config Test
    def test_get_config(self):
        should = "{\"Sample Rate\": 100, \"Input\": \"Analog In\", \"Filter\": \"All Pass\", \"Upper Corner\": 2000, " \
                 "\"Lower Corner\": 100, \"Mid Corner\": 100, \"Dac Reps\": 0, \"Dac Generation Rate\": 0, " \
                 "\"Dac Mode\": \"Disabled\"}"
        config = cli.get_config()
        print(should)
        print(config)
        self.assertTrue(config == should)

    # Send Config to CyDAQ Test
    def test_send_config(self):
        cli.send_config_to_cydaq()

    # Set Value Test
    def test_set_value(self):
        cli.set_value("Dac Mode", "Enabled")
        print(cli.get_config())

    # Set Multiple Values Test
    def test_set_values(self):
        # cli.set_values("{\"Sample Rate\": 500, \"Dac Reps\": 10, \"Dac Mode\": \"Disabled\"}")
        # print(cli.get_config())
        pass

    # Start/Stop Sampling Test
    def test_sampling(self):
        cli.start_sampling()
        cli.stop_sampling("")

    # Start/Stop Generating Test
    def test_generate(self):
        cli.generate()
        cli.generate()
