# generated from rosidl_generator_py/resource/_idl.py.em
# with input from play_motion2_msgs:srv/GetMotionInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetMotionInfo_Request(type):
    """Metaclass of message 'GetMotionInfo_Request'."""

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
            module = import_type_support('play_motion2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'play_motion2_msgs.srv.GetMotionInfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_motion_info__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_motion_info__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_motion_info__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_motion_info__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_motion_info__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetMotionInfo_Request(metaclass=Metaclass_GetMotionInfo_Request):
    """Message class 'GetMotionInfo_Request'."""

    __slots__ = [
        '_motion_key',
    ]

    _fields_and_field_types = {
        'motion_key': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motion_key = kwargs.get('motion_key', str())

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
        if self.motion_key != other.motion_key:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motion_key(self):
        """Message field 'motion_key'."""
        return self._motion_key

    @motion_key.setter
    def motion_key(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'motion_key' field must be of type 'str'"
        self._motion_key = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetMotionInfo_Response(type):
    """Metaclass of message 'GetMotionInfo_Response'."""

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
            module = import_type_support('play_motion2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'play_motion2_msgs.srv.GetMotionInfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_motion_info__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_motion_info__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_motion_info__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_motion_info__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_motion_info__response

            from play_motion2_msgs.msg import Motion
            if Motion.__class__._TYPE_SUPPORT is None:
                Motion.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetMotionInfo_Response(metaclass=Metaclass_GetMotionInfo_Response):
    """Message class 'GetMotionInfo_Response'."""

    __slots__ = [
        '_motion',
    ]

    _fields_and_field_types = {
        'motion': 'play_motion2_msgs/Motion',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['play_motion2_msgs', 'msg'], 'Motion'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from play_motion2_msgs.msg import Motion
        self.motion = kwargs.get('motion', Motion())

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
        if self.motion != other.motion:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motion(self):
        """Message field 'motion'."""
        return self._motion

    @motion.setter
    def motion(self, value):
        if __debug__:
            from play_motion2_msgs.msg import Motion
            assert \
                isinstance(value, Motion), \
                "The 'motion' field must be a sub message of type 'Motion'"
        self._motion = value


class Metaclass_GetMotionInfo(type):
    """Metaclass of service 'GetMotionInfo'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('play_motion2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'play_motion2_msgs.srv.GetMotionInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_motion_info

            from play_motion2_msgs.srv import _get_motion_info
            if _get_motion_info.Metaclass_GetMotionInfo_Request._TYPE_SUPPORT is None:
                _get_motion_info.Metaclass_GetMotionInfo_Request.__import_type_support__()
            if _get_motion_info.Metaclass_GetMotionInfo_Response._TYPE_SUPPORT is None:
                _get_motion_info.Metaclass_GetMotionInfo_Response.__import_type_support__()


class GetMotionInfo(metaclass=Metaclass_GetMotionInfo):
    from play_motion2_msgs.srv._get_motion_info import GetMotionInfo_Request as Request
    from play_motion2_msgs.srv._get_motion_info import GetMotionInfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
