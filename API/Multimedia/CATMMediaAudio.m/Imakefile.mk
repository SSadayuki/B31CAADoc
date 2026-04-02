BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = JS0GROUP DI0PANV2 JS0FM JS0MT CATSysMainThreadMQ


OS = AIX
# LOCAL_CCFLAGS = -I/usr/lpp/som/include -I/usr/lpp/UMS/include
# SYS_LIBS = -lUMSobj -lXt
SYS_LIBS = -lXt

OS = HP-UX
SYS_LIBS =

OS = IRIX
SYS_LIBS = -ldmedia -laudio -laudiofile -lpthread -lXt

OS = irix_a64
SYS_LIBS = -lpthread -lXt

OS = SunOS
SYS_LIBS =

OS = intel_a
SYS_LIBS = winmm.lib

OS = win_b
SYS_LIBS = winmm.lib

OS = win_b64
SYS_LIBS = winmm.lib

OS = intel_a64
SYS_LIBS = winmm.lib

OS = win_a
SYS_LIBS = winmm.lib
