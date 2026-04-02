#
BUILT_OBJECT_TYPE = NONE
#
#if os intel_a
BUILD = YES
LOCAL_CCFLAGS  = /wd4996
LOCAL_ASFLAGS  = /I"$(IPrivate)" /I"$(IProtected)" /I"$(ILocal)"
OPTIMIZATION_C = /O2
#else
BUILD = NO
#endif
#
