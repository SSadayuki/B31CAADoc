#
BUILT_OBJECT_TYPE = NONE
#


BUILD=YES

OS = SunOS
LOCAL_CCFLAGS= -xlibmil -dalign
OPTIMIZATION_CPP = -xO4
#

OS = Windows_NT
BUILD=YES
LOCAL_CCFLAGS=/openmp

#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

OS = Linux
BUILD=YES
LOCAL_CCFLAGS=-fopenmp 
