# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roomba_msgs:msg/Movement.idl
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


class Metaclass_Movement(type):
    """Metaclass of message 'Movement'."""

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
                'roomba_msgs.msg.Movement')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__movement
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__movement
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__movement
            cls._TYPE_SUPPORT = module.type_support_msg__msg__movement
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__movement

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Movement(metaclass=Metaclass_Movement):
    """Message class 'Movement'."""

    __slots__ = [
        '_distance',
        '_angle',
        '_left_encoder_counts',
        '_right_encoder_counts',
        '_requested_left_velocity',
        '_requested_right_velocity',
        '_requested_radius',
        '_requested_velocity',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'distance': 'float',
        'angle': 'float',
        'left_encoder_counts': 'int32',
        'right_encoder_counts': 'int32',
        'requested_left_velocity': 'int16',
        'requested_right_velocity': 'int16',
        'requested_radius': 'int16',
        'requested_velocity': 'int16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.distance = kwargs.get('distance', float())
        self.angle = kwargs.get('angle', float())
        self.left_encoder_counts = kwargs.get('left_encoder_counts', int())
        self.right_encoder_counts = kwargs.get('right_encoder_counts', int())
        self.requested_left_velocity = kwargs.get('requested_left_velocity', int())
        self.requested_right_velocity = kwargs.get('requested_right_velocity', int())
        self.requested_radius = kwargs.get('requested_radius', int())
        self.requested_velocity = kwargs.get('requested_velocity', int())

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
        if self.distance != other.distance:
            return False
        if self.angle != other.angle:
            return False
        if self.left_encoder_counts != other.left_encoder_counts:
            return False
        if self.right_encoder_counts != other.right_encoder_counts:
            return False
        if self.requested_left_velocity != other.requested_left_velocity:
            return False
        if self.requested_right_velocity != other.requested_right_velocity:
            return False
        if self.requested_radius != other.requested_radius:
            return False
        if self.requested_velocity != other.requested_velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle = value

    @builtins.property
    def left_encoder_counts(self):
        """Message field 'left_encoder_counts'."""
        return self._left_encoder_counts

    @left_encoder_counts.setter
    def left_encoder_counts(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'left_encoder_counts' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'left_encoder_counts' field must be an integer in [-2147483648, 2147483647]"
        self._left_encoder_counts = value

    @builtins.property
    def right_encoder_counts(self):
        """Message field 'right_encoder_counts'."""
        return self._right_encoder_counts

    @right_encoder_counts.setter
    def right_encoder_counts(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'right_encoder_counts' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_encoder_counts' field must be an integer in [-2147483648, 2147483647]"
        self._right_encoder_counts = value

    @builtins.property
    def requested_left_velocity(self):
        """Message field 'requested_left_velocity'."""
        return self._requested_left_velocity

    @requested_left_velocity.setter
    def requested_left_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'requested_left_velocity' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'requested_left_velocity' field must be an integer in [-32768, 32767]"
        self._requested_left_velocity = value

    @builtins.property
    def requested_right_velocity(self):
        """Message field 'requested_right_velocity'."""
        return self._requested_right_velocity

    @requested_right_velocity.setter
    def requested_right_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'requested_right_velocity' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'requested_right_velocity' field must be an integer in [-32768, 32767]"
        self._requested_right_velocity = value

    @builtins.property
    def requested_radius(self):
        """Message field 'requested_radius'."""
        return self._requested_radius

    @requested_radius.setter
    def requested_radius(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'requested_radius' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'requested_radius' field must be an integer in [-32768, 32767]"
        self._requested_radius = value

    @builtins.property
    def requested_velocity(self):
        """Message field 'requested_velocity'."""
        return self._requested_velocity

    @requested_velocity.setter
    def requested_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'requested_velocity' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'requested_velocity' field must be an integer in [-32768, 32767]"
        self._requested_velocity = value
