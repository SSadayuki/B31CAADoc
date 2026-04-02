BUILT_OBJECT_TYPE = NONE

BUILD = NO

## System dependant variables

#
OS = Windows
BUILD = YES
# C4530: C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc
LOCAL_CCFLAGS = /wd4530

#
OS = Darwin
BUILD = YES

#
OS = Linux
BUILD = YES

#
OS = MOBILE
BUILD = YES

#
OS = AIX
BUILD = NO
LOCAL_POST_CCFLAGS = -qstaticinline

#
OS = SunOS
BUILD = NO
LOCAL_POST_CCFLAGS = -features=mutable

