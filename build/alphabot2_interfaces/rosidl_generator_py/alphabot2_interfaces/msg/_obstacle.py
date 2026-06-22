# generated from rosidl_generator_py/resource/_idl.py.em
# with input from alphabot2_interfaces:msg/Obstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Obstacle(type):
    """Metaclass of message 'Obstacle'."""

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
            module = import_type_support('alphabot2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'alphabot2_interfaces.msg.Obstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Obstacle(metaclass=Metaclass_Obstacle):
    """Message class 'Obstacle'."""

    __slots__ = [
        '_left_obstacle',
        '_right_obstacle',
    ]

    _fields_and_field_types = {
        'left_obstacle': 'boolean',
        'right_obstacle': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_obstacle = kwargs.get('left_obstacle', bool())
        self.right_obstacle = kwargs.get('right_obstacle', bool())

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
        if self.left_obstacle != other.left_obstacle:
            return False
        if self.right_obstacle != other.right_obstacle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_obstacle(self):
        """Message field 'left_obstacle'."""
        return self._left_obstacle

    @left_obstacle.setter
    def left_obstacle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_obstacle' field must be of type 'bool'"
        self._left_obstacle = value

    @builtins.property
    def right_obstacle(self):
        """Message field 'right_obstacle'."""
        return self._right_obstacle

    @right_obstacle.setter
    def right_obstacle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_obstacle' field must be of type 'bool'"
        self._right_obstacle = value
