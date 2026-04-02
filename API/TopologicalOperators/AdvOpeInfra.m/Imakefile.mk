BUILT_OBJECT_TYPE=NONE
#
#
OS = Windows_NT
#if os win_b64
#    Don't see the warning C4577 exception EHsc 
LOCAL_POST_CCFLAGS = /D_HAS_EXCEPTIONS=0
#else
OPTIMIZATION_CPP = /O2
#endif
#

