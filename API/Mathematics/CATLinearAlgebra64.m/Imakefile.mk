#
BUILT_OBJECT_TYPE = NONE
#
#if os win_b64
BUILD = YES
LOCAL_ASFLAGS = /D_WIN64 /I"$(IPrivate)" /I"$(IProtected)" /I"$(ILocal)"
#else
BUILD = NO
#endif
#
