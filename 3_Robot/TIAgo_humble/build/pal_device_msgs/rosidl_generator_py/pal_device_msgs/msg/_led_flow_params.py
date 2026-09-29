# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pal_device_msgs:msg/LedFlowParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LedFlowParams(type):
    """Metaclass of message 'LedFlowParams'."""

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
            module = import_type_support('pal_device_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pal_device_msgs.msg.LedFlowParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__led_flow_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__led_flow_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__led_flow_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__led_flow_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__led_flow_params

            from std_msgs.msg import ColorRGBA
            if ColorRGBA.__class__._TYPE_SUPPORT is None:
                ColorRGBA.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LedFlowParams(metaclass=Metaclass_LedFlowParams):
    """Message class 'LedFlowParams'."""

    __slots__ = [
        '_first_color',
        '_second_color',
        '_percentage',
        '_velocity',
    ]

    _fields_and_field_types = {
        'first_color': 'std_msgs/ColorRGBA',
        'second_color': 'std_msgs/ColorRGBA',
        'percentage': 'float',
        'velocity': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import ColorRGBA
        self.first_color = kwargs.get('first_color', ColorRGBA())
        from std_msgs.msg import ColorRGBA
        self.second_color = kwargs.get('second_color', ColorRGBA())
        self.percentage = kwargs.get('percentage', float())
        self.velocity = kwargs.get('velocity', float())

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
        if self.first_color != other.first_color:
            return False
        if self.second_color != other.second_color:
            return False
        if self.percentage != other.percentage:
            return False
        if self.velocity != other.velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def first_color(self):
        """Message field 'first_color'."""
        return self._first_color

    @first_color.setter
    def first_color(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
            assert \
                isinstance(value, ColorRGBA), \
                "The 'first_color' field must be a sub message of type 'ColorRGBA'"
        self._first_color = value

    @builtins.property
    def second_color(self):
        """Message field 'second_color'."""
        return self._second_color

    @second_color.setter
    def second_color(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
            assert \
                isinstance(value, ColorRGBA), \
                "The 'second_color' field must be a sub message of type 'ColorRGBA'"
        self._second_color = value

    @builtins.property
    def percentage(self):
        """Message field 'percentage'."""
        return self._percentage

    @percentage.setter
    def percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._percentage = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity = value
