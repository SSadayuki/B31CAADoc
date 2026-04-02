BUILT_OBJECT_TYPE = NONE

FLEX_VERSION = 2.5.35
BISON_VERSION = 2.4.1

# LOCAL_BYFLAGS = --report-file E:\tmp\bison.log
# LOCAL_FLFLAGS= --header-file=

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
