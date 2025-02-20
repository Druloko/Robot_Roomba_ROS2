======
iRobot
======

A Python implementation of the iRobot Open Interface.

Main Features
-------------
* Provides a low level interface for building Open Interface commands to send over a serial connection
* Provides a low level set of response parsers to read data returned from robots
* Provides a high level object oriented Interface for the Create2
* Provides a REPL to interactively control a Create2 robot over a serial connection

Code Examples
-------------
**Low Level Interface**::

    from irobot.openinterface.commands import set_mode_full, request_sensor_data # or other commands
    from irobot.openinterface.constants import RESPONSE_SIZES
    from irobot.openinterface.response_parsers import unsigned_byte_response
    # open a serial connection
    # assumed to be serial here
    # change mode
    serial.write(set_mode_full())
    # read oi mode
    serial.write(request_sensor_data(35))
    unsigned_byte_response(serial.read(RESPONSE_SIZES[35]))

**High Level Object Oriented Interface for the Create2**::

    from irobot.robots.create2 import Create2
    from irobot.openinterface.constants import MODES
    # instantiate robot
    robot = Create2(port)
    # read sensor
    print(robot.left_encoder_counts)
    # change mode to drive (SAFE|FULL)
    robot.oi_mode = MODES.SAFE
    robot.drive_straight(50)
    # stop driving
    robot.drive_straight(0)
    # return to passive mode
    robot.oi_mode = MODES.PASSIVE
    # shutdown OI
    robot.stop()

| **REPL**
|
| Launch ``console_interfaces.create2`` (this should be callable as Create2 from the command line after installation)
| In the REPL, the robot is bound to the ``robot`` variable
| Issue Python commands as you see fit
| To see what data is being sent/received enable logging
|     ``enable_logging()``
| To turn off
|     ``disable_logging()``

Example:

::

    >>> enable_logging()
    >>> robot.sensor_group0
        INFO
            Last command sent 19.53 seconds ago
            Sending Command
            Decimal:	[142|0]
            Hex:		[8E|0]
            Bin:		[10001110|00000000]
        INFO
            Received
            Decimal:	[3|0|1|1|1|1|0|0|0|0|0|0|0|0|0|0|2|67|20|4|101|38|10|136|10|136]
            Hex:		[3|0|1|1|1|1|0|0|0|0|0|0|0|0|0|0|2|43|14|4|65|26|A|88|A|88]
            Bin:		[00000011|00000000|00000001|00000001|00000001|00000001|00000000| ... |10001000|00001010|10001000]

API Reference
-------------
The commands and response parsers in ``openinterface`` provide all the primitives needed to issue and retrieve the response for any command in the Roomba Open Interface Spec.::

	openinterface.commands

		low level support for packing data to send over a serial connection

			pack_op_code
			pack_signed_byte
			pack_unsigned_byte
			pack_2unsigned_bytes
			pack_3signed_bytes
			pack_3unsigned_bytes
			pack_4unsigned_bytes
			pack_schedule
			pack_drive
			pack_drive_special_cases

		functions for building data packets for each command

			start
			reset
			stop
			set_baud
			set_mode_passive
			set_mode_safe
			set_mode_full
			clean
			clean_max
			clean_spot
			seek_dock
			power_down
			get_days
			set_schedule
			set_day_time
			drive
			drive_direct
			drive_pwm
			set_motors
			set_motors_pwm
			set_leds
			set_scheduling_leds
			set_raw_leds
			trigger_buttons
			set_ascii_leds
			set_song
			play_song
			request_sensor_data

::

	openinterface.response_parsers

		low level support for unpacking data received over a serial connection

			binary_response
			packed_binary_response
			byte_response
			unsigned_byte_response
			short_response
			unsigned_short_response

		classes to extract composite responses

			PackedBinaryData					Ex: BumpsAndWheelDrop
			BumpsAndWheelDrop						  bump_right
			WheelOvercurrents						  bump_left
			Buttons								  wheel_drop_right
			ChargingSources							  wheel_drop_left
			LightBumper
			Stasis
			SensorGroup0
			SensorGroup1
			SensorGroup2
			SensorGroup3
			SensorGroup4
			SensorGroup5
			SensorGroup6
			SensorGroup100
			SensorGroup101
			SensorGroup106
			SensorGroup107

::

	openinterface.constants

		named value used in the spec used as parameters to functions and range checking

			BAUD_RATE
			DAYS
			DRIVE
			MOTORS
			LEDS
			WEEKDAY_LEDS
			SCHEDULING_LEDS
			RAW_LED
			BUTTONS
			ROBOT
			MODES
			WHEEL_OVERCURRENT
			BUMPS_WHEEL_DROPS
			CHARGE_SOURCE
			LIGHT_BUMPER
			STASIS
			POWER_SAVE_TIME
			RESPONSE_SIZES


The class ``Create2`` in ``robots.create2`` is built upon the primitives in ``openinterface`` and provides niceties like management of the serial connection.  All sensors are exposed as properties of the ``Create2`` class while actions are implemented as methods.

::

	robots.create2
		methods
			wake
			start
			reset
			stop
			set_baud
			clean
			clean_max
			clean_spot
			seek_dock
			power_down
			set_schedule
			clear_schedule
			set_day_time
			drive
			drive_straight
			spin_left
			spin_right
			drive_direct
			drive_pwm
			set_motors
			set_motors_pwm
			set_leds
			set_scheduling_leds
			set_raw_leds
			set_ascii_leds
			trigger_buttons
			set_song
			play_song

		properties
			enable_quirks
			auto_wake
			bumps_and_wheel_drops
			wall_sensor
			cliff_left
			cliff_front_left
			cliff_front_right
			cliff_right
			virtual_wall
			wheel_overcurrents
			dirt_detect
			ir_char_omni
			ir_char_left
			ir_char_right
			buttons
			distance
			angle
			charging_state
			voltage
			current
			temperature
			battery_charge
			battery_capacity
			wall_signal
			cliff_left_signal
			cliff_front_left_signal
			cliff_front_right_signal
			cliff_right_signal
			charging_sources
			oi_mode
			song_number
			is_song_playing
			number_stream_packets
			requested_velocity
			requested_radius
			requested_right_velocity
			requested_left_velocity
			left_encoder_counts
			right_encoder_counts
			light_bumper
			light_bump_left_signal
			light_bump_front_left_signal
			light_bump_center_left_signal
			light_bump_center_right_signal
			light_bump_front_right_signal
			light_bump_right_signal
			left_motor_current
			right_motor_current
			main_brush_motor_current
			side_brush_motor_current
			stasis
			sensor_group0
			sensor_group1
			sensor_group2
			sensor_group3
			sensor_group4
			sensor_group5
			sensor_group6
			sensor_group100
			sensor_group101
			sensor_group106
			sensor_group107
			firmware_version

The ``Create2`` class also provides the following features not explicitly provided in the spec:

* auto_wake - the Open Interface goes to sleep after 5 minutes of inactivity when in Passive mode.  With this property set to True, the ``Create2`` object will track idle time when in Passive mode and automatically wake the robot when a command is issued if necessary.  Enabled by default in the constructor. *wake maybe be called any time with wake()*
* enable_quirks - Roomba 500/600 firmware versions prior to 3.3.0 return an incorrect value for distance and angle.  With this property set to True, the properties ``distance`` and ``angle`` will use the encoder counts to determine the correct value.  This only works for the ``distance`` and ``angle`` properties.  Distance and angle in the *sensor groups* will still report the wrong value.
* firmware_version - a property of the ``Create2`` class that gets the welcome message in order to determine the firmware version.  Reading this property will reset the robot and will take approximately 5 seconds to complete. To see this used to automatically determine if ``enable_quirks`` should be set, please see ``check_for_quirks`` in ``console_interfaces.create2``.


Please see the `iRobot Roomba Open Interface Spec <http://www.irobotweb.com/~/media/MainSite/PDFs/About/STEM/Create/iRobot_Roomba_600_Open_Interface_Spec.pdf>`_ for a listing of all commands and their purposes.

Changelog
---------
| irobot-1.0.0b1
|     Initial release
|
| irobot-1.0.0b2
|     Bugfix: Improperly set baud rate on serial connection preventing the library from working under Linux.
| irobot-1.0.0b3
|     Bugfix: Wrong op code for seek_dock
|     Bugfix: Use of Python 2.7 incompatible version of super()


Installation
------------
| This is beta software. It has been tested under Pyhon 2.7 and 3.x under Windows 8 and Python 3.x under Debain GNU/Linux 8 (jessie) 64 bit.
|
| Download the zip package `irobot-1.0.0b3.tar.gz <http://blog.lemoneerlabs.com/src/iRobot/irobot-1.0.0b3.tar.gz>`_
|
| Install with pip
|  ``pip install [path to zip file]``
|

Linux notes:

* In order to use the Create Cable on ``/dev/ttyUSB0`` I had to
   - remove modemmanager (apparently is takes possession of ``/dev/ttyUSB0``)
   - add myself to ``dialout`` with ``sudo adduser [username] dialout``

Tests
-----
| Unit tests for verifying some of the command builders may be found in ``tests.commands_test``
| A test script to connect to a Create2 over a serial connection and exercise all read commands maybe found in ``tests.create2_test``


Known Issues/Notes
------------------
* Issues
   - set_raw_leds does not presently behave as detailed in the spec. The issue has been reported to the manufacturer.
   - The orange and green wires are swapped on the official Create Cables preventing the robot form waking. You will need to create your own cable in order to use the ``auto_wake`` feature.
* Notes
   - the arguments to ``set_raw_leds`` are integers that should be composed by ORing the segments you wish to turn on. Example: ``set_raw_leds(RAW_LED.A | RAW_LED.B | RAW_LED.C)`` to turn on segments A, B, and C of the first display.
   - the notes argument to ``set_song`` is a list of tuples where each tuple is a note and a duration. Eample: ``set_song(0, [(57,32),(59,32),(60,32)])`` to create a song as song0 consisting of the notes A, B, and C played for .5 seconds each.

Author
------
`Matthew Witherwax (lemoneer) <http://blog.lemoneerlabs.com/page/About>`_

License
-------
::

    MIT License

    Copyright (c) 2016 Matthew Witherwax

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.