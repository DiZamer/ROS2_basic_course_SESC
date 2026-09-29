# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pal_device_msgs:msg/LedFadeParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LedFadeParams(type):
    """Metaclass of message 'LedFadeParams'."""

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
                'pal_device_msgs.msg.LedFadeParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__led_fade_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__led_fade_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__led_fade_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__led_fade_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__led_fade_params

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

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


class LedFadeParams(metaclass=Metaclass_LedFadeParams):
    """Message class 'LedFadeParams'."""

    __slots__ = [
        '_first_color',
        '_second_color',
        '_transition_duration',
        '_reverse_fade',
    ]

    _fields_and_field_types = {
        'first_color': 'std_msgs/ColorRGBA',
        'second_color': 'std_msgs/ColorRGBA',
        'transition_duration': 'builtin_interfaces/Duration',
        'reverse_fade': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import ColorRGBA
        self.first_color = kwargs.get('first_color', ColorRGBA())
        from std_msgs.msg import ColorRGBA
        self.second_color = kwargs.get('second_color', ColorRGBA())
        from builtin_interfaces.msg import Duration
        self.transition_duration = kwargs.get('transition_duration', Duration())
        self.reverse_fade = kwargs.get('reverse_fade', bool())

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
        if self.transition_duration != other.transition_duration:
            return False
        if self.reverse_fade != other.reverse_fade:
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
    def transition_duration(self):
        """Message field 'transition_duration'."""
        return self._transition_duration

    @transition_duration.setter
    def transition_duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'transition_duration' field must be a sub message of type 'Duration'"
        self._transition_duration = value

    @builtins.property
    def reverse_fade(self):
        """Message field 'reverse_fade'."""
        return self._reverse_fade

    @reverse_fade.setter
    def reverse_fade(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reverse_fade' field must be of type 'bool'"
        self._reverse_fade = value
