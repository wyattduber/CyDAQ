import sys
sys.path.insert(0, "../cli")
sys.path.insert(0, "./cli")
import CLIWrapper
import unittest
import time
import pandas

cli = CLIWrapper.CLI()


class TestTransferSpeeds(unittest.TestCase):

    # 5 Second Sample Rate Test
    def test_five_seconds(self):
        result = self.sample(5)
        self.fancy_data(result, len(pandas.read_csv("5.csv")), 5)
        self.assertTrue(result > 0)

    # 10 Second Sample Rate Test
    def test_ten_seconds(self):
        result = self.sample(10)
        self.fancy_data(result, len(pandas.read_csv("10.csv")), 10)
        self.assertTrue(result > 0)

    # 30 Second Sample Rate Test
    def test_thirty_seconds(self):
        result = self.sample(30)
        self.fancy_data(result, len(pandas.read_csv("30.csv")), 30)
        self.assertTrue(result > 0)

    def sample(self, length):
        cli.start_sampling()
        time.sleep(length)
        start = self.current_time_millis()
        cli.stop_sampling(f"{length}.csv")
        stop = self.current_time_millis()
        return stop - start

    @staticmethod
    def current_time_millis():
        return round(time.time() * 1000)

    @staticmethod
    def fancy_data(millis, lines, type):
        seconds = (millis / 1000) % 60
        seconds = int(seconds)
        minutes = (millis / (1000 * 60)) % 60
        minutes = int(minutes)

        print(f"\n{type} second test:")
        print("\tData Transfer took approximately: %d:%d" % (minutes, seconds))
        print(f"\tLines Generated: {lines}")
        print("\tLines Transferred per Second: " + "{:,}".format(round(lines / (millis / 1000))) + "\n")


if  __name__ == '__main__':
    cli.enable_mock()
    unittest.main()
