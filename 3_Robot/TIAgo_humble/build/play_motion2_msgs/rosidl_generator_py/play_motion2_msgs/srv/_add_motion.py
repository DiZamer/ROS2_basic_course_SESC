# generated from rosidl_generator_py/resource/_idl.py.em
# with input from play_motion2_msgs:srv/AddMotion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AddMotion_Request(type):
    """Metaclass of message 'AddMotion_Request'."""

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
                'play_motion2_msgs.srv.AddMotion_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__add_motion__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__add_motion__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__add_motion__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__add_motion__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__add_motion__request

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


class AddMotion_Request(metaclass=Metaclass_AddMotion_Request):
    """Message class 'AddMotion_Request'."""

    __slots__ = [
        '_motion',
        '_overwrite',
    ]

    _fields_and_field_types = {
        'motion': 'play_motion2_msgs/Motion',
        'overwrite': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['play_motion2_msgs', 'msg'], 'Motion'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from play_motion2_msgs.msg import Motion
        self.motion = kwargs.get('motion', Motion())
        self.overwrite = kwargs.get('overwrite', bool())

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
        if self.overwrite != other.overwrite:
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

    @builtins.property
    def overwrite(self):
        """Message field 'overwrite'."""
        return self._overwrite

    @overwrite.setter
    def overwrite(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'overwrite' field must be of type 'bool'"
        self._overwrite = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AddMotion_Response(type):
    """Metaclass of message 'AddMotion_Response'."""

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
                'play_motion2_msgs.srv.AddMotion_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__add_motion__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__add_motion__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__add_motion__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__add_motion__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__add_motion__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AddMotion_Response(metaclass=Metaclass_AddMotion_Response):
    """Message class 'AddMotion_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_AddMotion(type):
    """Metaclass of service 'AddMotion'."""

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
                'play_motion2_msgs.srv.AddMotion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__add_motion

            from play_motion2_msgs.srv import _add_motion
            if _add_motion.Metaclass_AddMotion_Request._TYPE_SUPPORT is None:
                _add_motion.Metaclass_AddMotion_Request.__import_type_support__()
            if _add_motion.Metaclass_AddMotion_Response._TYPE_SUPPORT is None:
                _add_motion.Metaclass_AddMotion_Response.__import_type_support__()


class AddMotion(metaclass=Metaclass_AddMotion):
    from play_motion2_msgs.srv._add_motion import AddMotion_Request as Request
    from play_motion2_msgs.srv._add_motion import AddMotion_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
