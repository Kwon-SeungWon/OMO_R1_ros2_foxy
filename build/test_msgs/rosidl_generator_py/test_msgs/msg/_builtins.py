# generated from rosidl_generator_py/resource/_idl.py.em
# with input from test_msgs:msg/Builtins.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Builtins(type):
    """Metaclass of message 'Builtins'."""

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
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.msg.Builtins')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__builtins
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__builtins
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__builtins
            cls._TYPE_SUPPORT = module.type_support_msg__msg__builtins
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__builtins

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Builtins(metaclass=Metaclass_Builtins):
    """Message class 'Builtins'."""

    __slots__ = [
        '_duration_value',
        '_time_value',
    ]

    _fields_and_field_types = {
        'duration_value': 'builtin_interfaces/Duration',
        'time_value': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Duration
        self.duration_value = kwargs.get('duration_value', Duration())
        from builtin_interfaces.msg import Time
        self.time_value = kwargs.get('time_value', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.duration_value != other.duration_value:
            return False
        if self.time_value != other.time_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def duration_value(self):
        """Message field 'duration_value'."""
        return self._duration_value

    @duration_value.setter
    def duration_value(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'duration_value' field must be a sub message of type 'Duration'"
        self._duration_value = value

    @property
    def time_value(self):
        """Message field 'time_value'."""
        return self._time_value

    @time_value.setter
    def time_value(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'time_value' field must be a sub message of type 'Time'"
        self._time_value = value
