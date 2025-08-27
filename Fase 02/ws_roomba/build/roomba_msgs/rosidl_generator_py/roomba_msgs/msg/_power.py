# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roomba_msgs:msg/Power.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Power(type):
    """Metaclass of message 'Power'."""

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
                'roomba_msgs.msg.Power')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__power
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__power
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__power
            cls._TYPE_SUPPORT = module.type_support_msg__msg__power
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__power

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Power(metaclass=Metaclass_Power):
    """Message class 'Power'."""

    __slots__ = [
        '_voltage',
        '_current',
        '_temperature',
        '_charge',
        '_capacity',
        '_home_base',
        '_internal_charger',
        '_ir_char_omni',
        '_ir_char_left',
        '_ir_char_right',
        '_left_wheel_overcurrent',
        '_right_wheel_overcurrent',
        '_main_brush_overcurrent',
        '_side_brush_overcurrent',
        '_left_motor_current',
        '_right_motor_current',
        '_main_brush_motor_current',
        '_side_brush_motor_current',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'voltage': 'float',
        'current': 'float',
        'temperature': 'float',
        'charge': 'float',
        'capacity': 'float',
        'home_base': 'boolean',
        'internal_charger': 'boolean',
        'ir_char_omni': 'uint8',
        'ir_char_left': 'uint8',
        'ir_char_right': 'uint8',
        'left_wheel_overcurrent': 'boolean',
        'right_wheel_overcurrent': 'boolean',
        'main_brush_overcurrent': 'boolean',
        'side_brush_overcurrent': 'boolean',
        'left_motor_current': 'int16',
        'right_motor_current': 'int16',
        'main_brush_motor_current': 'int16',
        'side_brush_motor_current': 'int16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
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
        self.voltage = kwargs.get('voltage', float())
        self.current = kwargs.get('current', float())
        self.temperature = kwargs.get('temperature', float())
        self.charge = kwargs.get('charge', float())
        self.capacity = kwargs.get('capacity', float())
        self.home_base = kwargs.get('home_base', bool())
        self.internal_charger = kwargs.get('internal_charger', bool())
        self.ir_char_omni = kwargs.get('ir_char_omni', int())
        self.ir_char_left = kwargs.get('ir_char_left', int())
        self.ir_char_right = kwargs.get('ir_char_right', int())
        self.left_wheel_overcurrent = kwargs.get('left_wheel_overcurrent', bool())
        self.right_wheel_overcurrent = kwargs.get('right_wheel_overcurrent', bool())
        self.main_brush_overcurrent = kwargs.get('main_brush_overcurrent', bool())
        self.side_brush_overcurrent = kwargs.get('side_brush_overcurrent', bool())
        self.left_motor_current = kwargs.get('left_motor_current', int())
        self.right_motor_current = kwargs.get('right_motor_current', int())
        self.main_brush_motor_current = kwargs.get('main_brush_motor_current', int())
        self.side_brush_motor_current = kwargs.get('side_brush_motor_current', int())

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
        if self.voltage != other.voltage:
            return False
        if self.current != other.current:
            return False
        if self.temperature != other.temperature:
            return False
        if self.charge != other.charge:
            return False
        if self.capacity != other.capacity:
            return False
        if self.home_base != other.home_base:
            return False
        if self.internal_charger != other.internal_charger:
            return False
        if self.ir_char_omni != other.ir_char_omni:
            return False
        if self.ir_char_left != other.ir_char_left:
            return False
        if self.ir_char_right != other.ir_char_right:
            return False
        if self.left_wheel_overcurrent != other.left_wheel_overcurrent:
            return False
        if self.right_wheel_overcurrent != other.right_wheel_overcurrent:
            return False
        if self.main_brush_overcurrent != other.main_brush_overcurrent:
            return False
        if self.side_brush_overcurrent != other.side_brush_overcurrent:
            return False
        if self.left_motor_current != other.left_motor_current:
            return False
        if self.right_motor_current != other.right_motor_current:
            return False
        if self.main_brush_motor_current != other.main_brush_motor_current:
            return False
        if self.side_brush_motor_current != other.side_brush_motor_current:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._voltage = value

    @builtins.property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature = value

    @builtins.property
    def charge(self):
        """Message field 'charge'."""
        return self._charge

    @charge.setter
    def charge(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'charge' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'charge' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._charge = value

    @builtins.property
    def capacity(self):
        """Message field 'capacity'."""
        return self._capacity

    @capacity.setter
    def capacity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'capacity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'capacity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._capacity = value

    @builtins.property
    def home_base(self):
        """Message field 'home_base'."""
        return self._home_base

    @home_base.setter
    def home_base(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'home_base' field must be of type 'bool'"
        self._home_base = value

    @builtins.property
    def internal_charger(self):
        """Message field 'internal_charger'."""
        return self._internal_charger

    @internal_charger.setter
    def internal_charger(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'internal_charger' field must be of type 'bool'"
        self._internal_charger = value

    @builtins.property
    def ir_char_omni(self):
        """Message field 'ir_char_omni'."""
        return self._ir_char_omni

    @ir_char_omni.setter
    def ir_char_omni(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ir_char_omni' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ir_char_omni' field must be an unsigned integer in [0, 255]"
        self._ir_char_omni = value

    @builtins.property
    def ir_char_left(self):
        """Message field 'ir_char_left'."""
        return self._ir_char_left

    @ir_char_left.setter
    def ir_char_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ir_char_left' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ir_char_left' field must be an unsigned integer in [0, 255]"
        self._ir_char_left = value

    @builtins.property
    def ir_char_right(self):
        """Message field 'ir_char_right'."""
        return self._ir_char_right

    @ir_char_right.setter
    def ir_char_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ir_char_right' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ir_char_right' field must be an unsigned integer in [0, 255]"
        self._ir_char_right = value

    @builtins.property
    def left_wheel_overcurrent(self):
        """Message field 'left_wheel_overcurrent'."""
        return self._left_wheel_overcurrent

    @left_wheel_overcurrent.setter
    def left_wheel_overcurrent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'left_wheel_overcurrent' field must be of type 'bool'"
        self._left_wheel_overcurrent = value

    @builtins.property
    def right_wheel_overcurrent(self):
        """Message field 'right_wheel_overcurrent'."""
        return self._right_wheel_overcurrent

    @right_wheel_overcurrent.setter
    def right_wheel_overcurrent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'right_wheel_overcurrent' field must be of type 'bool'"
        self._right_wheel_overcurrent = value

    @builtins.property
    def main_brush_overcurrent(self):
        """Message field 'main_brush_overcurrent'."""
        return self._main_brush_overcurrent

    @main_brush_overcurrent.setter
    def main_brush_overcurrent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'main_brush_overcurrent' field must be of type 'bool'"
        self._main_brush_overcurrent = value

    @builtins.property
    def side_brush_overcurrent(self):
        """Message field 'side_brush_overcurrent'."""
        return self._side_brush_overcurrent

    @side_brush_overcurrent.setter
    def side_brush_overcurrent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'side_brush_overcurrent' field must be of type 'bool'"
        self._side_brush_overcurrent = value

    @builtins.property
    def left_motor_current(self):
        """Message field 'left_motor_current'."""
        return self._left_motor_current

    @left_motor_current.setter
    def left_motor_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'left_motor_current' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'left_motor_current' field must be an integer in [-32768, 32767]"
        self._left_motor_current = value

    @builtins.property
    def right_motor_current(self):
        """Message field 'right_motor_current'."""
        return self._right_motor_current

    @right_motor_current.setter
    def right_motor_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'right_motor_current' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'right_motor_current' field must be an integer in [-32768, 32767]"
        self._right_motor_current = value

    @builtins.property
    def main_brush_motor_current(self):
        """Message field 'main_brush_motor_current'."""
        return self._main_brush_motor_current

    @main_brush_motor_current.setter
    def main_brush_motor_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'main_brush_motor_current' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'main_brush_motor_current' field must be an integer in [-32768, 32767]"
        self._main_brush_motor_current = value

    @builtins.property
    def side_brush_motor_current(self):
        """Message field 'side_brush_motor_current'."""
        return self._side_brush_motor_current

    @side_brush_motor_current.setter
    def side_brush_motor_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'side_brush_motor_current' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'side_brush_motor_current' field must be an integer in [-32768, 32767]"
        self._side_brush_motor_current = value
