import CLIWrapper
import time

cli = CLIWrapper.CLI()


def main():
    cli.start_sampling()
    time.sleep(10)
    start = current_time_millis()
    cli.stop_sampling()
    stop = current_time_millis()
    fancy_date(stop - start)


def current_time_millis():
    return round(time.time() * 1000)


def fancy_date(millis):
    seconds = (millis / 1000) % 60
    seconds = int(seconds)
    minutes = (millis / (1000 * 60)) % 60
    minutes = int(minutes)
    hours = (millis / (1000 * 60 * 60)) % 24

    print("Data Transfer took approximately: %d:%d:%d" % (hours, minutes, seconds))


if __name__ == "__main__":
    main()
