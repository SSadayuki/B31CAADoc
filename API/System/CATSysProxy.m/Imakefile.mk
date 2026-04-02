# COPYRIGHT DASSAULT SYSTEMES 2002
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
LINK_WITH = JS0GROUP
BUILD=YES

# System dependant variables
OS = AIX
OS = HP-UX
OS = IRIX
OS = SunOS
LOCAL_LDFLAGS= -z interpose
SYS_LIBS= -lxnet

OS = win_a
BUILD=NO

OS = intel_a
SYS_LIBS= ws2_32.lib psapi.lib
LOCAL_LDFLAGS=

OS = win_b
SYS_LIBS= ws2_32.lib psapi.lib
LOCAL_LDFLAGS=

OS = win_b64
SYS_LIBS= ws2_32.lib psapi.lib
LOCAL_LDFLAGS=

OS = intel_a64
SYS_LIBS= ws2_32.lib psapi.lib
LOCAL_LDFLAGS=
