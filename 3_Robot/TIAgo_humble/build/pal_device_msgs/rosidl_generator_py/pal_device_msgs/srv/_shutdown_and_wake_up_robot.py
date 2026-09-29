# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pal_device_msgs:srv/ShutdownAndWakeUpRobot.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ShutdownAndWakeUpRobot_Request(type):
    """Metaclass of message 'ShutdownAndWakeUpRobot_Request'."""

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
                'pal_device_msgs.srv.ShutdownAndWakeUpRobot_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__shutdown_and_wake_up_robot__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__shutdown_and_wake_up_robot__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__shutdown_and_wake_up_robot__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__shutdown_and_wake_up_robot__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__shutdown_and_wake_up_robot__request

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ShutdownAndWakeUpRobot_Request(metaclass=Metaclass_ShutdownAndWakeUpRobot_Request):
    """Message class 'ShutdownAndWakeUpRobot_Request'."""

    __slots__ = [
        '_shutdown_duration',
    ]

    _fields_and_field_types = {
        'shutdown_duration': 'builtin_interfaces/Duration',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Duration
        self.shutdown_duration = kwargs.get('shutdown_duration', Duration())

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
        if self.shutdown_duration != other.shutdown_duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def shutdown_duration(self):
        """Message field 'shutdown_duration'."""
        return self._shutdown_duration

    @shutdown_duration.setter
    def shutdown_duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'shutdown_duration' field must be a sub message of type 'Duration'"
        self._shutdown_duration = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ShutdownAndWakeUpRobot_Response(type):
    """Metaclass of message 'ShutdownAndWakeUpRobot_Response'."""

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
                'pal_device_msgs.srv.ShutdownAndWakeUpRobot_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__shutdown_and_wake_up_robot__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__shutdown_and_wake_up_robot__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__shutdown_and_wake_up_robot__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__shutdown_and_wake_up_robot__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__shutdown_and_wake_up_robot__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ShutdownAndWakeUpRobot_Response(metaclass=Metaclass_ShutdownAndWakeUpRobot_Response):
    """Message class 'ShutdownAndWakeUpRobot_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_ShutdownAndWakeUpRobot(type):
    """Metaclass of service 'ShutdownAndWakeUpRobot'."""

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
                'pal_device_msgs.srv.ShutdownAndWakeUpRobot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__shutdown_and_wake_up_robot

            from pal_device_msgs.srv import _shutdown_and_wake_up_robot
            if _shutdown_and_wake_up_robot.Metaclass_ShutdownAndWakeUpRobot_Request._TYPE_SUPPORT is None:
                _shutdown_and_wake_up_robot.Metaclass_ShutdownAndWakeUpRobot_Request.__import_type_support__()
            if _shutdown_and_wake_up_robot.Metaclass_ShutdownAndWakeUpRobot_Response._TYPE_SUPPORT is None:
                _shutdown_and_wake_up_robot.Metaclass_ShutdownAndWakeUpRobot_Response.__import_type_support__()


class ShutdownAndWakeUpRobot(metaclass=Metaclass_ShutdownAndWakeUpRobot):
    from pal_device_msgs.srv._shutdown_and_wake_up_robot import ShutdownAndWakeUpRobot_Request as Request
    from pal_device_msgs.srv._shutdown_and_wake_up_robot import ShutdownAndWakeUpRobot_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
