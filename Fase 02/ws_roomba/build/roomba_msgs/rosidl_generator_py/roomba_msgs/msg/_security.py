# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roomba_msgs:msg/Security.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Security(type):
    """Metaclass of message 'Security'."""

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
                'roomba_msgs.msg.Security')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__security
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__security
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__security
            cls._TYPE_SUPPORT = module.type_support_msg__msg__security
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__security

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Security(metaclass=Metaclass_Security):
    """Message class 'Security'."""

    __slots__ = [
        '_bump_left',
        '_bump_right',
        '_wheel_drop_left',
        '_wheel_drop_right',
        '_wall',
        '_virtual_wall',
        '_cliff_left',
        '_cliff_right',
        '_cliff_front_left',
        '_cliff_front_right',
        '_cliff_left_signal',
        '_cliff_right_signal',
        '_cliff_front_left_signal',
        '_cliff_front_right_signal',
        '_wall_signal',
        '_light_bumper_left',
        '_light_bumper_right',
        '_light_bumper_center_left',
        '_light_bumper_center_right',
        '_light_bumper_front_left',
        '_light_bumper_front_right',
        '_light_bump_left_signal',
        '_light_bump_right_signal',
        '_light_bump_center_left_signal',
        '_light_bump_center_right_signal',
        '_light_bump_front_left_signal',
        '_light_bump_front_right_signal',
        '_dirt_detect',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'bump_left': 'boolean',
        'bump_right': 'boolean',
        'wheel_drop_left': 'boolean',
        'wheel_drop_right': 'boolean',
        'wall': 'boolean',
        'virtual_wall': 'boolean',
        'cliff_left': 'boolean',
        'cliff_right': 'boolean',
        'cliff_front_left': 'boolean',
        'cliff_front_right': 'boolean',
        'cliff_left_signal': 'uint16',
        'cliff_right_signal': 'uint16',
        'cliff_front_left_signal': 'uint16',
        'cliff_front_right_signal': 'uint16',
        'wall_signal': 'uint16',
        'light_bumper_left': 'boolean',
        'light_bumper_right': 'boolean',
        'light_bumper_center_left': 'boolean',
        'light_bumper_center_right': 'boolean',
        'light_bumper_front_left': 'boolean',
        'light_bumper_front_right': 'boolean',
        'light_bump_left_signal': 'uint16',
        'light_bump_right_signal': 'uint16',
        'light_bump_center_left_signal': 'uint16',
        'light_bump_center_right_signal': 'uint16',
        'light_bump_front_left_signal': 'uint16',
        'light_bump_front_right_signal': 'uint16',
        'dirt_detect': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.bump_left = kwargs.get('bump_left', bool())
        self.bump_right = kwargs.get('bump_right', bool())
        self.wheel_drop_left = kwargs.get('wheel_drop_left', bool())
        self.wheel_drop_right = kwargs.get('wheel_drop_right', bool())
        self.wall = kwargs.get('wall', bool())
        self.virtual_wall = kwargs.get('virtual_wall', bool())
        self.cliff_left = kwargs.get('cliff_left', bool())
        self.cliff_right = kwargs.get('cliff_right', bool())
        self.cliff_front_left = kwargs.get('cliff_front_left', bool())
        self.cliff_front_right = kwargs.get('cliff_front_right', bool())
        self.cliff_left_signal = kwargs.get('cliff_left_signal', int())
        self.cliff_right_signal = kwargs.get('cliff_right_signal', int())
        self.cliff_front_left_signal = kwargs.get('cliff_front_left_signal', int())
        self.cliff_front_right_signal = kwargs.get('cliff_front_right_signal', int())
        self.wall_signal = kwargs.get('wall_signal', int())
        self.light_bumper_left = kwargs.get('light_bumper_left', bool())
        self.light_bumper_right = kwargs.get('light_bumper_right', bool())
        self.light_bumper_center_left = kwargs.get('light_bumper_center_left', bool())
        self.light_bumper_center_right = kwargs.get('light_bumper_center_right', bool())
        self.light_bumper_front_left = kwargs.get('light_bumper_front_left', bool())
        self.light_bumper_front_right = kwargs.get('light_bumper_front_right', bool())
        self.light_bump_left_signal = kwargs.get('light_bump_left_signal', int())
        self.light_bump_right_signal = kwargs.get('light_bump_right_signal', int())
        self.light_bump_center_left_signal = kwargs.get('light_bump_center_left_signal', int())
        self.light_bump_center_right_signal = kwargs.get('light_bump_center_right_signal', int())
        self.light_bump_front_left_signal = kwargs.get('light_bump_front_left_signal', int())
        self.light_bump_front_right_signal = kwargs.get('light_bump_front_right_signal', int())
        self.dirt_detect = kwargs.get('dirt_detect', int())

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
        if self.bump_left != other.bump_left:
            return False
        if self.bump_right != other.bump_right:
            return False
        if self.wheel_drop_left != other.wheel_drop_left:
            return False
        if self.wheel_drop_right != other.wheel_drop_right:
            return False
        if self.wall != other.wall:
            return False
        if self.virtual_wall != other.virtual_wall:
            return False
        if self.cliff_left != other.cliff_left:
            return False
        if self.cliff_right != other.cliff_right:
            return False
        if self.cliff_front_left != other.cliff_front_left:
            return False
        if self.cliff_front_right != other.cliff_front_right:
            return False
        if self.cliff_left_signal != other.cliff_left_signal:
            return False
        if self.cliff_right_signal != other.cliff_right_signal:
            return False
        if self.cliff_front_left_signal != other.cliff_front_left_signal:
            return False
        if self.cliff_front_right_signal != other.cliff_front_right_signal:
            return False
        if self.wall_signal != other.wall_signal:
            return False
        if self.light_bumper_left != other.light_bumper_left:
            return False
        if self.light_bumper_right != other.light_bumper_right:
            return False
        if self.light_bumper_center_left != other.light_bumper_center_left:
            return False
        if self.light_bumper_center_right != other.light_bumper_center_right:
            return False
        if self.light_bumper_front_left != other.light_bumper_front_left:
            return False
        if self.light_bumper_front_right != other.light_bumper_front_right:
            return False
        if self.light_bump_left_signal != other.light_bump_left_signal:
            return False
        if self.light_bump_right_signal != other.light_bump_right_signal:
            return False
        if self.light_bump_center_left_signal != other.light_bump_center_left_signal:
            return False
        if self.light_bump_center_right_signal != other.light_bump_center_right_signal:
            return False
        if self.light_bump_front_left_signal != other.light_bump_front_left_signal:
            return False
        if self.light_bump_front_right_signal != other.light_bump_front_right_signal:
            return False
        if self.dirt_detect != other.dirt_detect:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bump_left(self):
        """Message field 'bump_left'."""
        return self._bump_left

    @bump_left.setter
    def bump_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'bump_left' field must be of type 'bool'"
        self._bump_left = value

    @builtins.property
    def bump_right(self):
        """Message field 'bump_right'."""
        return self._bump_right

    @bump_right.setter
    def bump_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'bump_right' field must be of type 'bool'"
        self._bump_right = value

    @builtins.property
    def wheel_drop_left(self):
        """Message field 'wheel_drop_left'."""
        return self._wheel_drop_left

    @wheel_drop_left.setter
    def wheel_drop_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'wheel_drop_left' field must be of type 'bool'"
        self._wheel_drop_left = value

    @builtins.property
    def wheel_drop_right(self):
        """Message field 'wheel_drop_right'."""
        return self._wheel_drop_right

    @wheel_drop_right.setter
    def wheel_drop_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'wheel_drop_right' field must be of type 'bool'"
        self._wheel_drop_right = value

    @builtins.property
    def wall(self):
        """Message field 'wall'."""
        return self._wall

    @wall.setter
    def wall(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'wall' field must be of type 'bool'"
        self._wall = value

    @builtins.property
    def virtual_wall(self):
        """Message field 'virtual_wall'."""
        return self._virtual_wall

    @virtual_wall.setter
    def virtual_wall(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'virtual_wall' field must be of type 'bool'"
        self._virtual_wall = value

    @builtins.property
    def cliff_left(self):
        """Message field 'cliff_left'."""
        return self._cliff_left

    @cliff_left.setter
    def cliff_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'cliff_left' field must be of type 'bool'"
        self._cliff_left = value

    @builtins.property
    def cliff_right(self):
        """Message field 'cliff_right'."""
        return self._cliff_right

    @cliff_right.setter
    def cliff_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'cliff_right' field must be of type 'bool'"
        self._cliff_right = value

    @builtins.property
    def cliff_front_left(self):
        """Message field 'cliff_front_left'."""
        return self._cliff_front_left

    @cliff_front_left.setter
    def cliff_front_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'cliff_front_left' field must be of type 'bool'"
        self._cliff_front_left = value

    @builtins.property
    def cliff_front_right(self):
        """Message field 'cliff_front_right'."""
        return self._cliff_front_right

    @cliff_front_right.setter
    def cliff_front_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'cliff_front_right' field must be of type 'bool'"
        self._cliff_front_right = value

    @builtins.property
    def cliff_left_signal(self):
        """Message field 'cliff_left_signal'."""
        return self._cliff_left_signal

    @cliff_left_signal.setter
    def cliff_left_signal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'cliff_left_signal' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cliff_left_signal' field must be an unsigned integer in [0, 65535]"
        self._cliff_left_signal = value

    @builtins.property
    def cliff_right_signal(self):
        """Message field 'cliff_right_signal'."""
        return self._cliff_right_signal

    @cliff_right_signal.setter
    def cliff_right_signal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'cliff_right_signal' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cliff_right_signal' field must be an unsigned integer in [0, 65535]"
        self._cliff_right_signal = value

    @builtins.property
    def cliff_front_left_signal(self):
        """Message field 'cliff_front_left_signal'."""
        return self._cliff_front_left_signal

    @cliff_front_left_signal.setter
    def cliff_front_left_signal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'cliff_front_left_signal' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cliff_front_left_signal' field must be an unsigned integer in [0, 65535]"
        self._cliff_front_left_signal = value

    @builtins.property
    def cliff_front_right_signal(self):
        """Message field 'cliff_front_right_signal'."""
        return self._cliff_front_right_signal

    @cliff_front_right_signal.setter
    def cliff_front_right_signal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'cliff_front_right_signal' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cliff_front_right_signal' field must be an unsigned integer in [0, 65535]"
        self._cliff_front_right_signal = value

    @builtins.property
    def wall_signal(self):
        """Message field 'wall_signal'."""
        return self._wall_signal

    @wall_signal.setter
    def wall_signal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'wall_signal' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'wall_signal' field must be an unsigned integer in [0, 65535]"
        self._wall_signal = value

    @builtins.property
    def light_bumper_left(self):
        """Message field 'light_bumper_left'."""
        return self._light_bumper_left

    @light_bumper_left.setter
    def light_bumper_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'light_bumper_left' field must be of type 'bool'"
        self._light_bumper_left = value

    @builtins.property
    def light_bumper_right(self):
        """Message field 'light_bumper_right'."""
        return self._light_bumper_right

    @light_bumper_right.setter
    def light_bumper_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'light_bumper_right' field must be of type 'bool'"
        self._light_bumper_right = value

    @builtins.property
    def light_bumper_center_left(self):
        """Message field 'light_bumper_center_left'."""
        return self._light_bumper_center_left

    @light_bumper_center_left.setter
    def light_bumper_center_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'light_bumper_center_left' field must be of type 'bool'"
        self._light_bumper_center_left = value

    @builtins.property
    def light_bumper_center_right(self):
        """Message field 'light_bumper_center_right'."""
        return self._light_bumper_center_right

    @light_bumper_center_right.setter
    def light_bumper_center_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'light_bumper_center_right' field must be of type 'bool'"
        self._light_bumper_center_right = value

    @builtins.property
    def light_bumper_front_left(self):
        """Message field 'light_bumper_front_left'."""
        return self._light_bumper_front_left

    @light_bumper_front_left.setter
    def light_bumper_front_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'light_bumper_front_left' field must be of type 'bool'"
        self._light_bumper_front_left = value

    @builtins.property
    def light_bumper_front_right(self):
        """Message field 'light_bumper_front_right'."""
        return self._light_bumper_front_right

    @light_bumper_front_right.setter
    def light_bumper_front_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'light_bumper_front_right' field must be of type 'bool'"
        self._light_bumper_front_right = value

    @builtins.property
    def light_bump_left_signal(self):
        """Message field 'light_bump_left_signal'."""
        return self._light_bump_left_signal

    @light_bump_left_signal.setter
    def light_bump_left_signal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'light_bump_left_signal' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'light_bump_left_signal' field must be an unsigned integer in [0, 65535]"
        self._light_bump_left_signal = value

    @builtins.property
    def light_bump_right_signal(self):
        """Message field 'light_bump_right_signal'."""
        return self._light_bump_right_signal

    @light_bump_right_signal.setter
    def light_bump_right_signal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'light_bump_right_signal' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'light_bump_right_signal' field must be an unsigned integer in [0, 65535]"
        self._light_bump_right_signal = value

    @builtins.property
    def light_bump_center_left_signal(self):
        """Message field 'light_bump_center_left_signal'."""
        return self._light_bump_center_left_signal

    @light_bump_center_left_signal.setter
    def light_bump_center_left_signal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'light_bump_center_left_signal' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'light_bump_center_left_signal' field must be an unsigned integer in [0, 65535]"
        self._light_bump_center_left_signal = value

    @builtins.property
    def light_bump_center_right_signal(self):
        """Message field 'light_bump_center_right_signal'."""
        return self._light_bump_center_right_signal

    @light_bump_center_right_signal.setter
    def light_bump_center_right_signal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'light_bump_center_right_signal' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'light_bump_center_right_signal' field must be an unsigned integer in [0, 65535]"
        self._light_bump_center_right_signal = value

    @builtins.property
    def light_bump_front_left_signal(self):
        """Message field 'light_bump_front_left_signal'."""
        return self._light_bump_front_left_signal

    @light_bump_front_left_signal.setter
    def light_bump_front_left_signal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'light_bump_front_left_signal' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'light_bump_front_left_signal' field must be an unsigned integer in [0, 65535]"
        self._light_bump_front_left_signal = value

    @builtins.property
    def light_bump_front_right_signal(self):
        """Message field 'light_bump_front_right_signal'."""
        return self._light_bump_front_right_signal

    @light_bump_front_right_signal.setter
    def light_bump_front_right_signal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'light_bump_front_right_signal' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'light_bump_front_right_signal' field must be an unsigned integer in [0, 65535]"
        self._light_bump_front_right_signal = value

    @builtins.property
    def dirt_detect(self):
        """Message field 'dirt_detect'."""
        return self._dirt_detect

    @dirt_detect.setter
    def dirt_detect(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'dirt_detect' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dirt_detect' field must be an unsigned integer in [0, 255]"
        self._dirt_detect = value
