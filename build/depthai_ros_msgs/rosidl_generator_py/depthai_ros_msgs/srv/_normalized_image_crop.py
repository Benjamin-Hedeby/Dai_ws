# generated from rosidl_generator_py/resource/_idl.py.em
# with input from depthai_ros_msgs:srv/NormalizedImageCrop.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NormalizedImageCrop_Request(type):
    """Metaclass of message 'NormalizedImageCrop_Request'."""

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
            module = import_type_support('depthai_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'depthai_ros_msgs.srv.NormalizedImageCrop_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__normalized_image_crop__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__normalized_image_crop__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__normalized_image_crop__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__normalized_image_crop__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__normalized_image_crop__request

            from geometry_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NormalizedImageCrop_Request(metaclass=Metaclass_NormalizedImageCrop_Request):
    """Message class 'NormalizedImageCrop_Request'."""

    __slots__ = [
        '_top_left',
        '_bottom_right',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'top_left': 'geometry_msgs/Pose2D',
        'bottom_right': 'geometry_msgs/Pose2D',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose2D
        self.top_left = kwargs.get('top_left', Pose2D())
        from geometry_msgs.msg import Pose2D
        self.bottom_right = kwargs.get('bottom_right', Pose2D())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.top_left != other.top_left:
            return False
        if self.bottom_right != other.bottom_right:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def top_left(self):
        """Message field 'top_left'."""
        return self._top_left

    @top_left.setter
    def top_left(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'top_left' field must be a sub message of type 'Pose2D'"
        self._top_left = value

    @builtins.property
    def bottom_right(self):
        """Message field 'bottom_right'."""
        return self._bottom_right

    @bottom_right.setter
    def bottom_right(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'bottom_right' field must be a sub message of type 'Pose2D'"
        self._bottom_right = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NormalizedImageCrop_Response(type):
    """Metaclass of message 'NormalizedImageCrop_Response'."""

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
            module = import_type_support('depthai_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'depthai_ros_msgs.srv.NormalizedImageCrop_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__normalized_image_crop__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__normalized_image_crop__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__normalized_image_crop__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__normalized_image_crop__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__normalized_image_crop__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NormalizedImageCrop_Response(metaclass=Metaclass_NormalizedImageCrop_Response):
    """Message class 'NormalizedImageCrop_Response'."""

    __slots__ = [
        '_status',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'int64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'status' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._status = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NormalizedImageCrop_Event(type):
    """Metaclass of message 'NormalizedImageCrop_Event'."""

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
            module = import_type_support('depthai_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'depthai_ros_msgs.srv.NormalizedImageCrop_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__normalized_image_crop__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__normalized_image_crop__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__normalized_image_crop__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__normalized_image_crop__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__normalized_image_crop__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NormalizedImageCrop_Event(metaclass=Metaclass_NormalizedImageCrop_Event):
    """Message class 'NormalizedImageCrop_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<depthai_ros_msgs/NormalizedImageCrop_Request, 1>',
        'response': 'sequence<depthai_ros_msgs/NormalizedImageCrop_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['depthai_ros_msgs', 'srv'], 'NormalizedImageCrop_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['depthai_ros_msgs', 'srv'], 'NormalizedImageCrop_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from depthai_ros_msgs.srv import NormalizedImageCrop_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, NormalizedImageCrop_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'NormalizedImageCrop_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from depthai_ros_msgs.srv import NormalizedImageCrop_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, NormalizedImageCrop_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'NormalizedImageCrop_Response'"
        self._response = value


class Metaclass_NormalizedImageCrop(type):
    """Metaclass of service 'NormalizedImageCrop'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('depthai_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'depthai_ros_msgs.srv.NormalizedImageCrop')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__normalized_image_crop

            from depthai_ros_msgs.srv import _normalized_image_crop
            if _normalized_image_crop.Metaclass_NormalizedImageCrop_Request._TYPE_SUPPORT is None:
                _normalized_image_crop.Metaclass_NormalizedImageCrop_Request.__import_type_support__()
            if _normalized_image_crop.Metaclass_NormalizedImageCrop_Response._TYPE_SUPPORT is None:
                _normalized_image_crop.Metaclass_NormalizedImageCrop_Response.__import_type_support__()
            if _normalized_image_crop.Metaclass_NormalizedImageCrop_Event._TYPE_SUPPORT is None:
                _normalized_image_crop.Metaclass_NormalizedImageCrop_Event.__import_type_support__()


class NormalizedImageCrop(metaclass=Metaclass_NormalizedImageCrop):
    from depthai_ros_msgs.srv._normalized_image_crop import NormalizedImageCrop_Request as Request
    from depthai_ros_msgs.srv._normalized_image_crop import NormalizedImageCrop_Response as Response
    from depthai_ros_msgs.srv._normalized_image_crop import NormalizedImageCrop_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
