BUILT_OBJECT_TYPE=SHARED LIBRARY

BUILD = NO

OS = intel_a
BUILD = YES
SYS_LIBS = gdiplus.lib vfw32.lib winmm.lib kernel32.lib advapi32.lib version.lib user32.lib gdi32.lib comctl32.lib ole32.lib olepro32.lib oleaut32.lib uuid.lib
LOCAL_CCFLAGS = /D "DEBUG"
LOCAL_LDFLAGS = /NODEFAULTLIB:LIBCMTD /DEF:$(MODPATH)\src\MJPEGCodecVFW.def

OS = win_b
BUILD = YES
#SYS_LIBS = gdiplus.lib vfw32.lib winmm.lib kernel32.lib advapi32.lib version.lib largeint.lib user32.lib gdi32.lib comctl32.lib ole32.lib olepro32.lib oleaut32.lib uuid.lib
#LOCAL_CCFLAGS = /D "DEBUG"
#LOCAL_LDFLAGS = /NODEFAULTLIB:LIBCMTD /DEF:$(MODPATH)\src\MJPEGCodecVFW.def

OS = win_b64
BUILD = YES
SYS_LIBS = gdiplus.lib vfw32.lib winmm.lib kernel32.lib advapi32.lib version.lib user32.lib gdi32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib
LOCAL_CCFLAGS = /D "DEBUG"
LOCAL_LDFLAGS = /NODEFAULTLIB:LIBCMTD /DEF:$(MODPATH)\src\MJPEGCodecVFW.def

