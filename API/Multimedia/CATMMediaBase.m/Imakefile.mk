#
#  Multimedia Framework
#

BUILT_OBJECT_TYPE=SHARED LIBRARY
#LINK_WITH = JS0GROUP JS0FM CATVisualization DI0PANV2 CATMMediaVideo CATMMediaAudio
LINK_WITH = JS0GROUP JS0FM CATVisualization DI0PANV2 CATMMediaVideo  CATMMediaCapture CATMMediaAudio
INCLUDED_MODULES = CATMMediaInternals CATMMediaCodec 
OS = AIX
SYS_LIBS =  -lX11 -lm -lXt

OS = HP-UX
#SYS_LIBS =   -lX11 -lm -lXt
SYS_LIBS =   -lX11 -lXt

OS = IRIX
#SYS_LIBS = -ldmedia -lmovieplay -lmoviefile -lcl -lawareaudio  -lGL  -lX11 -lXext -lm -lXt
SYS_LIBS = -ldmedia  -lmoviefile -lcl -lawareaudio    -lX11  -lm -lXt

OS = irix_a64
#SYS_LIBS = -ldmedia -lmovieplay -lmoviefile -lcl -lawareaudio  -lGL  -lX11 -lXext -lm -lXt
SYS_LIBS = -lX11  -lm -lXt

OS = SunOS
SYS_LIBS =  -lX11 -lm -lXt

OS = Windows_NT
LOCAL_LDFLAGS = /NODEFAULTLIB:LIBCMTD
SYS_LIBS = strmbasd.lib vfw32.lib winmm.lib dmoguids.lib

OS = win_b64
LINK_WITH = JS0GROUP JS0FM CATVisualization DI0PANV2 CATMMediaVideo  CATMMediaCapture CATMMediaAudio strmiids
LOCAL_LDFLAGS = /NODEFAULTLIB:LIBCMTD /NODEFAULTLIB:LIBC
SYS_LIBS = strmbasd.lib vfw32.lib winmm.lib dmoguids.lib
