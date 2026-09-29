# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pal_device_msgs:msg/BatteryState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BatteryState(type):
    """Metaclass of message 'BatteryState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FULL': b'\x05',
        'HIGH': b'\x04',
        'MEDIUM': b'\x03',
        'LOW': b'\x02',
        'CRITICAL_LOW': b'\x01',
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
                'pal_device_msgs.msg.BatteryState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__battery_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__battery_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__battery_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__battery_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__battery_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FULL': cls.__constants['FULL'],
            'HIGH': cls.__constants['HIGH'],
            'MEDIUM': cls.__constants['MEDIUM'],
            'LOW': cls.__constants['LOW'],
            'CRITICAL_LOW': cls.__constants['CRITICAL_LOW'],
        }

    @property
    def FULL(self):
        """Message constant 'FULL'."""
        return Metaclass_BatteryState.__constants['FULL']

    @property
    def HIGH(self):
        """Message constant 'HIGH'."""
        return Metaclass_BatteryState.__constants['HIGH']

    @property
    def MEDIUM(self):
        """Message constant 'MEDIUM'."""
        return Metaclass_BatteryState.__constants['MEDIUM']

    @property
    def LOW(self):
        """Message constant 'LOW'."""
        return Metaclass_BatteryState.__constants['LOW']

    @property
    def CRITICAL_LOW(self):
        """Message constant 'CRITICAL_LOW'."""
        return Metaclass_BatteryState.__constants['CRITICAL_LOW']


class BatteryState(metaclass=Metaclass_BatteryState):
    """
    Message class 'BatteryState'.

    Constants:
      FULL
      HIGH
      MEDIUM
      LOW
      CRITICAL_LOW
    """

    __slots__ = [
        '_charge_state',
        '_battery_percentage',
    ]

    _fields_and_field_types = {
        'charge_state': 'int8',
        'battery_percentage': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.charge_state = kwargs.get('charge_state', int())
        self.battery_percentage = kwargs.get('battery_percentage', float())

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
        if self.charge_state != other.charge_state:
            return False
        if self.battery_percentage != other.battery_percentage:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def charge_state(self):
        """Message field 'charge_state'."""
        return self._charge_state

    @charge_state.setter
    def charge_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charge_state' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'charge_state' field must be an integer in [-128, 127]"
        self._charge_state = value

    @builtins.property
    def battery_percentage(self):
        """Message field 'battery_percentage'."""
        return self._battery_percentage

    @battery_percentage.setter
    def battery_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_percentage = value
