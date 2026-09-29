# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pal_device_msgs:srv/TimedFadeEffect.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TimedFadeEffect_Request(type):
    """Metaclass of message 'TimedFadeEffect_Request'."""

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
                'pal_device_msgs.srv.TimedFadeEffect_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__timed_fade_effect__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__timed_fade_effect__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__timed_fade_effect__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__timed_fade_effect__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__timed_fade_effect__request

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from pal_device_msgs.msg import LedGroup
            if LedGroup.__class__._TYPE_SUPPORT is None:
                LedGroup.__class__.__import_type_support__()

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


class TimedFadeEffect_Request(metaclass=Metaclass_TimedFadeEffect_Request):
    """Message class 'TimedFadeEffect_Request'."""

    __slots__ = [
        '_leds',
        '_first_color',
        '_second_color',
        '_color_change_duration',
        '_reverse_fade',
        '_effect_duration',
        '_priority',
    ]

    _fields_and_field_types = {
        'leds': 'pal_device_msgs/LedGroup',
        'first_color': 'std_msgs/ColorRGBA',
        'second_color': 'std_msgs/ColorRGBA',
        'color_change_duration': 'builtin_interfaces/Duration',
        'reverse_fade': 'boolean',
        'effect_duration': 'builtin_interfaces/Duration',
        'priority': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['pal_device_msgs', 'msg'], 'LedGroup'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from pal_device_msgs.msg import LedGroup
        self.leds = kwargs.get('leds', LedGroup())
        from std_msgs.msg import ColorRGBA
        self.first_color = kwargs.get('first_color', ColorRGBA())
        from std_msgs.msg import ColorRGBA
        self.second_color = kwargs.get('second_color', ColorRGBA())
        from builtin_interfaces.msg import Duration
        self.color_change_duration = kwargs.get('color_change_duration', Duration())
        self.reverse_fade = kwargs.get('reverse_fade', bool())
        from builtin_interfaces.msg import Duration
        self.effect_duration = kwargs.get('effect_duration', Duration())
        self.priority = kwargs.get('priority', int())

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
        if self.leds != other.leds:
            return False
        if self.first_color != other.first_color:
            return False
        if self.second_color != other.second_color:
            return False
        if self.color_change_duration != other.color_change_duration:
            return False
        if self.reverse_fade != other.reverse_fade:
            return False
        if self.effect_duration != other.effect_duration:
            return False
        if self.priority != other.priority:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def leds(self):
        """Message field 'leds'."""
        return self._leds

    @leds.setter
    def leds(self, value):
        if __debug__:
            from pal_device_msgs.msg import LedGroup
            assert \
                isinstance(value, LedGroup), \
                "The 'leds' field must be a sub message of type 'LedGroup'"
        self._leds = value

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
    def color_change_duration(self):
        """Message field 'color_change_duration'."""
        return self._color_change_duration

    @color_change_duration.setter
    def color_change_duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'color_change_duration' field must be a sub message of type 'Duration'"
        self._color_change_duration = value

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

    @builtins.property
    def effect_duration(self):
        """Message field 'effect_duration'."""
        return self._effect_duration

    @effect_duration.setter
    def effect_duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'effect_duration' field must be a sub message of type 'Duration'"
        self._effect_duration = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'priority' field must be an unsigned integer in [0, 255]"
        self._priority = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TimedFadeEffect_Response(type):
    """Metaclass of message 'TimedFadeEffect_Response'."""

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
                'pal_device_msgs.srv.TimedFadeEffect_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__timed_fade_effect__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__timed_fade_effect__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__timed_fade_effect__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__timed_fade_effect__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__timed_fade_effect__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TimedFadeEffect_Response(metaclass=Metaclass_TimedFadeEffect_Response):
    """Message class 'TimedFadeEffect_Response'."""

    __slots__ = [
        '_effect_id',
    ]

    _fields_and_field_types = {
        'effect_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.effect_id = kwargs.get('effect_id', int())

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
        if self.effect_id != other.effect_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def effect_id(self):
        """Message field 'effect_id'."""
        return self._effect_id

    @effect_id.setter
    def effect_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'effect_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'effect_id' field must be an unsigned integer in [0, 4294967295]"
        self._effect_id = value


class Metaclass_TimedFadeEffect(type):
    """Metaclass of service 'TimedFadeEffect'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pal_device_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pal_device_msgs.srv.TimedFadeEffect')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__timed_fade_effect

            from pal_device_msgs.srv import _timed_fade_effect
            if _timed_fade_effect.Metaclass_TimedFadeEffect_Request._TYPE_SUPPORT is None:
                _timed_fade_effect.Metaclass_TimedFadeEffect_Request.__import_type_support__()
            if _timed_fade_effect.Metaclass_TimedFadeEffect_Response._TYPE_SUPPORT is None:
                _timed_fade_effect.Metaclass_TimedFadeEffect_Response.__import_type_support__()


class TimedFadeEffect(metaclass=Metaclass_TimedFadeEffect):
    from pal_device_msgs.srv._timed_fade_effect import TimedFadeEffect_Request as Request
    from pal_device_msgs.srv._timed_fade_effect import TimedFadeEffect_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
