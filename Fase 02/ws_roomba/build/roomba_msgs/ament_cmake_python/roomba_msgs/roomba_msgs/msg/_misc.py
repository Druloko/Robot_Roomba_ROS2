# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roomba_msgs:msg/Misc.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Misc(type):
    """Metaclass of message 'Misc'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('roomba_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roomba_msgs.msg.Misc')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__misc
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__misc
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__misc
            cls._TYPE_SUPPORT = module.type_support_msg__msg__misc
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__misc

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Misc(metaclass=Metaclass_Misc):
    """Message class 'Misc'."""

    __slots__ = [
        '_is_song_playing',
        '_song_number',
        '_button_clean',
        '_button_clock',
        '_button_day',
        '_button_dock',
        '_button_hour',
        '_button_minute',
        '_button_schedule',
        '_button_spot',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'is_song_playing': 'boolean',
        'song_number': 'uint8',
        'button_clean': 'boolean',
        'button_clock': 'boolean',
        'button_day': 'boolean',
        'button_dock': 'boolean',
        'button_hour': 'boolean',
        'button_minute': 'boolean',
        'button_schedule': 'boolean',
        'button_spot': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_song_playing = kwargs.get('is_song_playing', bool())
        self.song_number = kwargs.get('song_number', int())
        self.button_clean = kwargs.get('button_clean', bool())
        self.button_clock = kwargs.get('button_clock', bool())
        self.button_day = kwargs.get('button_day', bool())
        self.button_dock = kwargs.get('button_dock', bool())
        self.button_hour = kwargs.get('button_hour', bool())
        self.button_minute = kwargs.get('button_minute', bool())
        self.button_schedule = kwargs.get('button_schedule', bool())
        self.button_spot = kwargs.get('button_spot', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.is_song_playing != other.is_song_playing:
            return False
        if self.song_number != other.song_number:
            return False
        if self.button_clean != other.button_clean:
            return False
        if self.button_clock != other.button_clock:
            return False
        if self.button_day != other.button_day:
            return False
        if self.button_dock != other.button_dock:
            return False
        if self.button_hour != other.button_hour:
            return False
        if self.button_minute != other.button_minute:
            return False
        if self.button_schedule != other.button_schedule:
            return False
        if self.button_spot != other.button_spot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_song_playing(self):
        """Message field 'is_song_playing'."""
        return self._is_song_playing

    @is_song_playing.setter
    def is_song_playing(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_song_playing' field must be of type 'bool'"
        self._is_song_playing = value

    @builtins.property
    def song_number(self):
        """Message field 'song_number'."""
        return self._song_number

    @song_number.setter
    def song_number(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'song_number' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'song_number' field must be an unsigned integer in [0, 255]"
        self._song_number = value

    @builtins.property
    def button_clean(self):
        """Message field 'button_clean'."""
        return self._button_clean

    @button_clean.setter
    def button_clean(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'button_clean' field must be of type 'bool'"
        self._button_clean = value

    @builtins.property
    def button_clock(self):
        """Message field 'button_clock'."""
        return self._button_clock

    @button_clock.setter
    def button_clock(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'button_clock' field must be of type 'bool'"
        self._button_clock = value

    @builtins.property
    def button_day(self):
        """Message field 'button_day'."""
        return self._button_day

    @button_day.setter
    def button_day(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'button_day' field must be of type 'bool'"
        self._button_day = value

    @builtins.property
    def button_dock(self):
        """Message field 'button_dock'."""
        return self._button_dock

    @button_dock.setter
    def button_dock(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'button_dock' field must be of type 'bool'"
        self._button_dock = value

    @builtins.property
    def button_hour(self):
        """Message field 'button_hour'."""
        return self._button_hour

    @button_hour.setter
    def button_hour(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'button_hour' field must be of type 'bool'"
        self._button_hour = value

    @builtins.property
    def button_minute(self):
        """Message field 'button_minute'."""
        return self._button_minute

    @button_minute.setter
    def button_minute(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'button_minute' field must be of type 'bool'"
        self._button_minute = value

    @builtins.property
    def button_schedule(self):
        """Message field 'button_schedule'."""
        return self._button_schedule

    @button_schedule.setter
    def button_schedule(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'button_schedule' field must be of type 'bool'"
        self._button_schedule = value

    @builtins.property
    def button_spot(self):
        """Message field 'button_spot'."""
        return self._button_spot

    @button_spot.setter
    def button_spot(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'button_spot' field must be of type 'bool'"
        self._button_spot = value
