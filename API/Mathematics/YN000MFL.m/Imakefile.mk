#
BUILT_OBJECT_TYPE = NONE
#
# Enhances perfo on IRIX
OS = IRIX
SYS_LIBS = -lfastm
LOCAL_CCFLAGS  = -float
#
#

# Enhances perfo on SunOS
OS = SunOS
LOCAL_CCFLAGS = -xlibmil
OPTIMIZATION_CPP = -xO4
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
