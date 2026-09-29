# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pal_device_msgs:msg/LedEffectParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LedEffectParams(type):
    """Metaclass of message 'LedEffectParams'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FIXED_COLOR': 0,
        'RAINBOW': 1,
        'FADE': 2,
        'BLINK': 3,
        'PROGRESS': 4,
        'FLOW': 5,
        'PREPROGRAMMED_EFFECT': 6,
        'EFFECT_VIA_TOPIC': 7,
        'DATA_ARRAY': 8,
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
                'pal_device_msgs.msg.LedEffectParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__led_effect_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__led_effect_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__led_effect_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__led_effect_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__led_effect_params

            from pal_device_msgs.msg import LedBlinkParams
            if LedBlinkParams.__class__._TYPE_SUPPORT is None:
                LedBlinkParams.__class__.__import_type_support__()

            from pal_device_msgs.msg import LedDataArrayParams
            if LedDataArrayParams.__class__._TYPE_SUPPORT is None:
                LedDataArrayParams.__class__.__import_type_support__()

            from pal_device_msgs.msg import LedEffectViaTopicParams
            if LedEffectViaTopicParams.__class__._TYPE_SUPPORT is None:
                LedEffectViaTopicParams.__class__.__import_type_support__()

            from pal_device_msgs.msg import LedFadeParams
            if LedFadeParams.__class__._TYPE_SUPPORT is None:
                LedFadeParams.__class__.__import_type_support__()

            from pal_device_msgs.msg import LedFixedColorParams
            if LedFixedColorParams.__class__._TYPE_SUPPORT is None:
                LedFixedColorParams.__class__.__import_type_support__()

            from pal_device_msgs.msg import LedFlowParams
            if LedFlowParams.__class__._TYPE_SUPPORT is None:
                LedFlowParams.__class__.__import_type_support__()

            from pal_device_msgs.msg import LedPreProgrammedParams
            if LedPreProgrammedParams.__class__._TYPE_SUPPORT is None:
                LedPreProgrammedParams.__class__.__import_type_support__()

            from pal_device_msgs.msg import LedProgressParams
            if LedProgressParams.__class__._TYPE_SUPPORT is None:
                LedProgressParams.__class__.__import_type_support__()

            from pal_device_msgs.msg import LedRainbowParams
            if LedRainbowParams.__class__._TYPE_SUPPORT is None:
                LedRainbowParams.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FIXED_COLOR': cls.__constants['FIXED_COLOR'],
            'RAINBOW': cls.__constants['RAINBOW'],
            'FADE': cls.__constants['FADE'],
            'BLINK': cls.__constants['BLINK'],
            'PROGRESS': cls.__constants['PROGRESS'],
            'FLOW': cls.__constants['FLOW'],
            'PREPROGRAMMED_EFFECT': cls.__constants['PREPROGRAMMED_EFFECT'],
            'EFFECT_VIA_TOPIC': cls.__constants['EFFECT_VIA_TOPIC'],
            'DATA_ARRAY': cls.__constants['DATA_ARRAY'],
        }

    @property
    def FIXED_COLOR(self):
        """Message constant 'FIXED_COLOR'."""
        return Metaclass_LedEffectParams.__constants['FIXED_COLOR']

    @property
    def RAINBOW(self):
        """Message constant 'RAINBOW'."""
        return Metaclass_LedEffectParams.__constants['RAINBOW']

    @property
    def FADE(self):
        """Message constant 'FADE'."""
        return Metaclass_LedEffectParams.__constants['FADE']

    @property
    def BLINK(self):
        """Message constant 'BLINK'."""
        return Metaclass_LedEffectParams.__constants['BLINK']

    @property
    def PROGRESS(self):
        """Message constant 'PROGRESS'."""
        return Metaclass_LedEffectParams.__constants['PROGRESS']

    @property
    def FLOW(self):
        """Message constant 'FLOW'."""
        return Metaclass_LedEffectParams.__constants['FLOW']

    @property
    def PREPROGRAMMED_EFFECT(self):
        """Message constant 'PREPROGRAMMED_EFFECT'."""
        return Metaclass_LedEffectParams.__constants['PREPROGRAMMED_EFFECT']

    @property
    def EFFECT_VIA_TOPIC(self):
        """Message constant 'EFFECT_VIA_TOPIC'."""
        return Metaclass_LedEffectParams.__constants['EFFECT_VIA_TOPIC']

    @property
    def DATA_ARRAY(self):
        """Message constant 'DATA_ARRAY'."""
        return Metaclass_LedEffectParams.__constants['DATA_ARRAY']


class LedEffectParams(metaclass=Metaclass_LedEffectParams):
    """
    Message class 'LedEffectParams'.

    Constants:
      FIXED_COLOR
      RAINBOW
      FADE
      BLINK
      PROGRESS
      FLOW
      PREPROGRAMMED_EFFECT
      EFFECT_VIA_TOPIC
      DATA_ARRAY
    """

    __slots__ = [
        '_effect_type',
        '_fixed_color',
        '_rainbow',
        '_fade',
        '_blink',
        '_progress',
        '_flow',
        '_preprogrammed',
        '_effect_via_topic',
        '_data_array',
    ]

    _fields_and_field_types = {
        'effect_type': 'uint8',
        'fixed_color': 'pal_device_msgs/LedFixedColorParams',
        'rainbow': 'pal_device_msgs/LedRainbowParams',
        'fade': 'pal_device_msgs/LedFadeParams',
        'blink': 'pal_device_msgs/LedBlinkParams',
        'progress': 'pal_device_msgs/LedProgressParams',
        'flow': 'pal_device_msgs/LedFlowParams',
        'preprogrammed': 'pal_device_msgs/LedPreProgrammedParams',
        'effect_via_topic': 'pal_device_msgs/LedEffectViaTopicParams',
        'data_array': 'pal_device_msgs/LedDataArrayParams',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pal_device_msgs', 'msg'], 'LedFixedColorParams'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pal_device_msgs', 'msg'], 'LedRainbowParams'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pal_device_msgs', 'msg'], 'LedFadeParams'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pal_device_msgs', 'msg'], 'LedBlinkParams'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pal_device_msgs', 'msg'], 'LedProgressParams'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pal_device_msgs', 'msg'], 'LedFlowParams'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pal_device_msgs', 'msg'], 'LedPreProgrammedParams'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pal_device_msgs', 'msg'], 'LedEffectViaTopicParams'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pal_device_msgs', 'msg'], 'LedDataArrayParams'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.effect_type = kwargs.get('effect_type', int())
        from pal_device_msgs.msg import LedFixedColorParams
        self.fixed_color = kwargs.get('fixed_color', LedFixedColorParams())
        from pal_device_msgs.msg import LedRainbowParams
        self.rainbow = kwargs.get('rainbow', LedRainbowParams())
        from pal_device_msgs.msg import LedFadeParams
        self.fade = kwargs.get('fade', LedFadeParams())
        from pal_device_msgs.msg import LedBlinkParams
        self.blink = kwargs.get('blink', LedBlinkParams())
        from pal_device_msgs.msg import LedProgressParams
        self.progress = kwargs.get('progress', LedProgressParams())
        from pal_device_msgs.msg import LedFlowParams
        self.flow = kwargs.get('flow', LedFlowParams())
        from pal_device_msgs.msg import LedPreProgrammedParams
        self.preprogrammed = kwargs.get('preprogrammed', LedPreProgrammedParams())
        from pal_device_msgs.msg import LedEffectViaTopicParams
        self.effect_via_topic = kwargs.get('effect_via_topic', LedEffectViaTopicParams())
        from pal_device_msgs.msg import LedDataArrayParams
        self.data_array = kwargs.get('data_array', LedDataArrayParams())

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
        if self.effect_type != other.effect_type:
            return False
        if self.fixed_color != other.fixed_color:
            return False
        if self.rainbow != other.rainbow:
            return False
        if self.fade != other.fade:
            return False
        if self.blink != other.blink:
            return False
        if self.progress != other.progress:
            return False
        if self.flow != other.flow:
            return False
        if self.preprogrammed != other.preprogrammed:
            return False
        if self.effect_via_topic != other.effect_via_topic:
            return False
        if self.data_array != other.data_array:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def effect_type(self):
        """Message field 'effect_type'."""
        return self._effect_type

    @effect_type.setter
    def effect_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'effect_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'effect_type' field must be an unsigned integer in [0, 255]"
        self._effect_type = value

    @builtins.property
    def fixed_color(self):
        """Message field 'fixed_color'."""
        return self._fixed_color

    @fixed_color.setter
    def fixed_color(self, value):
        if __debug__:
            from pal_device_msgs.msg import LedFixedColorParams
            assert \
                isinstance(value, LedFixedColorParams), \
                "The 'fixed_color' field must be a sub message of type 'LedFixedColorParams'"
        self._fixed_color = value

    @builtins.property
    def rainbow(self):
        """Message field 'rainbow'."""
        return self._rainbow

    @rainbow.setter
    def rainbow(self, value):
        if __debug__:
            from pal_device_msgs.msg import LedRainbowParams
            assert \
                isinstance(value, LedRainbowParams), \
                "The 'rainbow' field must be a sub message of type 'LedRainbowParams'"
        self._rainbow = value

    @builtins.property
    def fade(self):
        """Message field 'fade'."""
        return self._fade

    @fade.setter
    def fade(self, value):
        if __debug__:
            from pal_device_msgs.msg import LedFadeParams
            assert \
                isinstance(value, LedFadeParams), \
                "The 'fade' field must be a sub message of type 'LedFadeParams'"
        self._fade = value

    @builtins.property
    def blink(self):
        """Message field 'blink'."""
        return self._blink

    @blink.setter
    def blink(self, value):
        if __debug__:
            from pal_device_msgs.msg import LedBlinkParams
            assert \
                isinstance(value, LedBlinkParams), \
                "The 'blink' field must be a sub message of type 'LedBlinkParams'"
        self._blink = value

    @builtins.property
    def progress(self):
        """Message field 'progress'."""
        return self._progress

    @progress.setter
    def progress(self, value):
        if __debug__:
            from pal_device_msgs.msg import LedProgressParams
            assert \
                isinstance(value, LedProgressParams), \
                "The 'progress' field must be a sub message of type 'LedProgressParams'"
        self._progress = value

    @builtins.property
    def flow(self):
        """Message field 'flow'."""
        return self._flow

    @flow.setter
    def flow(self, value):
        if __debug__:
            from pal_device_msgs.msg import LedFlowParams
            assert \
                isinstance(value, LedFlowParams), \
                "The 'flow' field must be a sub message of type 'LedFlowParams'"
        self._flow = value

    @builtins.property
    def preprogrammed(self):
        """Message field 'preprogrammed'."""
        return self._preprogrammed

    @preprogrammed.setter
    def preprogrammed(self, value):
        if __debug__:
            from pal_device_msgs.msg import LedPreProgrammedParams
            assert \
                isinstance(value, LedPreProgrammedParams), \
                "The 'preprogrammed' field must be a sub message of type 'LedPreProgrammedParams'"
        self._preprogrammed = value

    @builtins.property
    def effect_via_topic(self):
        """Message field 'effect_via_topic'."""
        return self._effect_via_topic

    @effect_via_topic.setter
    def effect_via_topic(self, value):
        if __debug__:
            from pal_device_msgs.msg import LedEffectViaTopicParams
            assert \
                isinstance(value, LedEffectViaTopicParams), \
                "The 'effect_via_topic' field must be a sub message of type 'LedEffectViaTopicParams'"
        self._effect_via_topic = value

    @builtins.property
    def data_array(self):
        """Message field 'data_array'."""
        return self._data_array

    @data_array.setter
    def data_array(self, value):
        if __debug__:
            from pal_device_msgs.msg import LedDataArrayParams
            assert \
                isinstance(value, LedDataArrayParams), \
                "The 'data_array' field must be a sub message of type 'LedDataArrayParams'"
        self._data_array = value
