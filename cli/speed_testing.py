import CLIWrapper
import unittest
import time

cli = CLIWrapper.CLI()

class TestTransferSpeeds(unittest.TestCase):

    # 5 Second Sample Rate Test
    def five_seconds(self):
        result = sample(5)
        fancy_date(result)
        self.assertTrue(result > 0)


    # 10 Second Sample Rate Test
    def ten_seconds(self):
        result = sample(5)
        fancy_date(result)
        self.assertTrue(result > 0)

    
    # 30 Second Sample Rate Test
    def thirty_seconds(self):
        result = sample(5)
        fancy_date(result)
        self.assertTrue(result > 0)

    
    def sample(self, length):
        cli.start_sampling()
        time.sleep(length)
        start = current_time_millis()
        cli.stop_sampling()
        stop = current_time_millis()
        return (stop - start)
        

    def current_time_millis(self):
        return round(time.time() * 1000)


    def fancy_date(self, millis):
        seconds = (millis / 1000) % 60
        seconds = int(seconds)
        minutes = (millis / (1000 * 60)) % 60
        minutes = int(minutes)
        hours = (millis / (1000 * 60 * 60)) % 24

        print("Data Transfer took approximately: %d:%d:%d" % (hours, minutes, seconds))
