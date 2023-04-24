from enum import IntEnum

import config

class enum_commands(IntEnum):
    """
           This class defines a table of commands that are sent to the ZYBO specifying the settings for
           the Zybo

          """
    INPUT_SELECT = 0
    SAMPLE_RATE_SET = 1
    FILTER_SELECT = 2
    CORNER_FREQ_SET = 3
    FETCH_SAMPLES = 4
    ADC_SELECT = 5
    PING = 7
    START_SAMPLING = 8
    STOP_SAMPLING = 9
    DAC_MODE_SELECT = 10
    DAC_NUM_REPS_SET = 11
    DAC_GEN_RATE_SET = 12
    DAC_SEND_DATASET = 13
    START_GENERATION = 14
    STOP_GENERATION = 15
    START_BALANCE_BEAM = 16


class enum_dac_mode(IntEnum):
    """
           This class defines a table of commands that are sent to the ZYBO specifying the settings for
           the Zybo

          """

    disabled = 0
    dataset = 1
    passthrough = 2


class enum_filter(IntEnum):
    """
           This class defines a table of commands that are sent to the ZYBO specifying the settings for
           the Zybo

          """
    LP1 = 0
    HP1 = 1
    BP2 = 2
    BP6 = 3
    HP6 = 4
    LP6 = 5
    NOTCH = 6
    NO_FILTER = 7


class enum_input(IntEnum):
    """
           This class defines a table of commands that are sent to the ZYBO specifying the settings for
           the Zybo

          """

    audio_in = 0
    analog_in = 1
    volt_1 = 2
    volt_3 = 3
    volt_5 = 4
    digital_i2c = 5
    digital_spi_bus = 6
    digital_uart = 7


class enum_output(IntEnum):
    """
           This class defines a table of commands that are sent to the ZYBO specifying the settings for
           the Zybo

          """

    xadc = 0
    digital = 1


enum_dic = {
    "5 volt": enum_input.volt_5.value,
    "3.3 volt": enum_input.volt_3.value,
    "1.8 volt": enum_input.volt_1.value,
    "5 Volt": enum_input.volt_5.value,
    "3.3 Volt": enum_input.volt_3.value,
    "1.8 Volt": enum_input.volt_1.value,
    "Analog In": enum_input.analog_in.value,
    "Audio In": enum_input.audio_in.value,
    "Digital I2C Bus": enum_input.digital_i2c.value,
    "Digital SPI Bus": enum_input.digital_spi_bus.value,
    "Digital UART": enum_input.digital_uart.value,
    "All Pass": enum_filter.NO_FILTER.value,
    "60 hz Notch": enum_filter.NOTCH.value,
    "N/A": enum_filter.NO_FILTER.value,  # I wonder if this will affect anything, so keep an eye on this.
    "1st Order High Pass": enum_filter.HP1.value,
    "1st Order Low Pass": enum_filter.LP1.value,
    "2nd Order Band Pass": enum_filter.BP2.value,
    "6th Order High Pass": enum_filter.HP6.value,
    "6th Order Low Pass": enum_filter.LP6.value,
    "6th Order Band Pass": enum_filter.BP6.value,
    "XADC": enum_output.xadc.value,
    "Digital": enum_output.digital.value,
    "Disabled": enum_dac_mode.disabled.value,
    "Dataset": enum_dac_mode.dataset.value,
    "Passthrough": enum_dac_mode.passthrough.value
}

key_dic = {
    "Input": "Input",
    "Filter": "Filter",
    "Output": "Output",
    "Lower Corner": "Lower Corner",
    "Upper Corner": "Upper Corner",
    "Sample Rate": "Sample Rate",
    "Mid Corner": "Mid Corner"
}


def nameToEnum(name):
    return enum_dic[name]


parameter_dict = {
    "root": "DAC Mode",

    "DAC Mode": {
        "Options": ["Disabled", "Dataset", "Passthrough"],
        "Children": {
            "Disabled": "Sampling Rate",
            "Dataset": "DAC Reps Data",
            "Passthrough": "DAC Reps",
        }
    },
    "DAC Reps": {
        "Bounds": [0, 2147483647],
        "Children": "DAC Generation Rate"
    },
    "DAC Generation Rate": {
        "Bounds": [100, 200000],
        "Children": "Sampling Rate"
    },
    "DAC Reps Data": {
        "Bounds": [0, 2147483647],
        "Children": "DAC Generation Rate Data"
    },
    "DAC Generation Rate Data": {
        "Bounds": [100, 200000],
        "Children": None
    },

    "Sampling Rate": {
        "Bounds": [100, 50000],
        "Children": "Inputs"
    },

    "Inputs": {
        "Options": ["5 volt", "3.3 volt", "1.8 volt", "Analog In", "Audio In", "Digital I2C Bus", "Digital SPI Bus",
                    "Digital UART"],
        "Children": {
            "5 volt": "Analog Output",
            "3.3 volt": "Analog Output",
            "1.8 volt": "Analog Output",
            "Analog In": "Analog Output",
            "Audio In": "Analog Output",
            "Digital I2C Bus": "Digital Output",
            "Digital SPI Bus": "Digital Output",
            "Digital UART": "Digital Output"
        }
    },

    "Analog Output": {
        "Options": ["XADC"],
        "Children": {"XADC": "Analog Filter"}
    },

    "Digital Output": {
        "Options": ["Digital"],
        "Children": {"Digital": "Digital Filter"}
    },

    "Analog Filter": {
        "Options": ["All Pass", "60 hz Notch", "1st Order High Pass", "1st Order Low Pass", "6th Order High Pass",
                    "6th Order Low Pass", "2nd Order Band Pass", "6th Order Band Pass"],
        "Children": {
            "All Pass": None,
            "60 hz Notch": None,
            "1st Order High Pass": "Mid Corner Freq",
            "1st Order Low Pass": "Mid Corner Freq",
            "6th Order High Pass": "Mid Corner Freq",
            "6th Order Low Pass": "Mid Corner Freq",
            "2nd Order Band Pass": "Lower Corner Freq",
            "6th Order Band Pass": "Lower Corner Freq",
        }
    },

    "Digital Filter": {
        "Options": ["N/A"],
        "Children": {"N/A": None}
    },

    "Mid Corner Freq": {
        "Bounds": [100, 40000],
        "Children": None
    },

    "Upper Corner Freq": {
        "Bounds": [2000, 40000],
        "Children": None
    },

    "Lower Corner Freq": {
        "Bounds": [100, 20000],
        "Children": "Upper Corner Freq"
    },

    "Nodes": {
        "Node": "Layer",
        "DAC Mode": "Dac Mode",
        "DAC Reps": "Dac Reps",
        "DAC Reps Data": "Dac Reps",
        "DAC Generation Rate": "Dac Generation Rate",
        "DAC Generation Rate Data": "Dac Generation Rate",
        "Sampling Rate": "Sample Rate",
        "Inputs": "Input",
        "Analog Output": "Output",
        "Digital Output": "Output",
        "Analog Filter": "Filter",
        "Digital Filter": "Filter",
        "Mid Corner Freq": "Mid Corner",
        "Upper Corner Freq": "Upper Corner",
        "Lower Corner Freq": "Lower Corner",
    },

    "Dac Mode": {
        "Depth": 0,
        "Type": "Enum",
    },
    "Dac Reps": {
        "Depth": 0,
        "Type": "Integer",
    },
    "Dac Generation Rate": {
        "Depth": 0,
        "Type": "Integer",
    },
    "Sample Rate": {
        "Depth": 1,
        "Type": "Integer",
    },
    "Input": {
        "Depth": 2,
        "Type": "Enum",
    },
    "Output": {
        "Depth": 3,
        "Type": "Enum",
    },
    "Filter": {
        "Depth": 4,
        "Type": "Enum",
    },
    "Mid Corner": {
        "Depth": 5,
        "Type": "Integer",
    },
    "Upper Corner": {
        "Depth": 5,
        "Type": "Integer",
    },
    "Lower Corner": {
        "Depth": 5,
        "Type": "Integer",
    },
}

#                                                           +-----------------------+
#                                                           |                       |
#                                                           |  DAC Mode             |
#                                                           |                       |
#                                                           +------------+----------+
#                                                                        |
#                                                                        |
#                                                                        v
#                                                           +-----------------------+
#                                                           |                       |
#                                                           |  DAC Reps             |
#                                                           |                       |
#                                                           +------------+----------+
#                                                                        |
#                                                                        |
#                                                                        v
#                                                           +-----------------------+
#                                                           |                       |
#                                                           |  DAC Generation Rate  |
#                                                           |                       |
#                                                           +------------+----------+
#                                                                        |
#                                                                        |
#                                                                        v
#                                                           +-----------------------+
#                                                           |                       |
#                                                           |  Sample Rate          |
#                                                           |                       |
#                                                           +------------+----------+
#                                                                        |
#                                                                        |
#                                                                        v
#                                                      +-----------------+------------------+
#                                                      |                                    |
#                                                      |  5 Volt                            |
#                                                      |  3.3 Volt     Digital I2C Bus      |
#                                                      |  1.8 Volt     Digital SPI Bus      |
#                                                      |  Analog In    Digital UART         |
#                                                      |  Audio In                          |
#                                                      |                                    |
#                                                      +-----+----------------+-------------+
#                                                            |                |
#                                           +----------------+                +---------------------+
#                                           v                                                       v
#                               +-----------+-----------+                               +-----------+-----------+
#                               |                       |                               |                       |
#                               |  XADC                 |                               |  Digital              |
#                               |                       |                               |                       |
#                               +-----------+-----------+                               +-----------+-----------+
#                                           |                                                       |
#                                           v                                                       v
#                +--------------------------+--------------------------------+          +-----------+-----------+
#                |                 1st Order High Pass                       |          |                       |
#                |  All Pass       1st Order Low Pass   2nd Order Band Pass  |          |  N/A                  |
#                |  60 hz Notch    6th Order High Pass  6th Order Band Pass  |          |                       |
#                |                 6th Order Low Pass                        |          |                       |
#                +-------------------------+----------------------+----------+          +-----------------------+
#                                          |                      |
#                                          v                      v
#                               +----------+---------+   +--------+----------+
#                               |                    |   |                   |
#                               |  Mid Corner        |   |  Lower Corner     |
#                               |                    |   |                   |
#                               +--------------------+   +--------+----------+
#                                                                 |
#                                                                 v
#                                                        +--------+----------+
#                                                        |                   |
#                                                        |  Upper Corner     |
#                                                        |                   |
#                                                        +-------------------+
