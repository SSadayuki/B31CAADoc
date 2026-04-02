#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
MultimediaUUID
#else
LINK_WITH_FOR_IID =
#endif
#
#  Multimedia
#

BUILT_OBJECT_TYPE=SHARED LIBRARY
LINK_WITH=$(LINK_WITH_FOR_IID)  CATMMediaBase CATMMediaItf CATMMediaCapture JS0GROUP JS0FM CATVisualization DI0PANV2 CATMathematics

OS = AIX
SYS_LIBS = 

OS = HP-UX
SYS_LIBS = 

OS = IRIX
SYS_LIBS = -ldmedia -lmoviefile -lcl -lawareaudio  -lX11  -lm
# SYS_LIBS = -ldmedia -lmovieplay -lmoviefile -lcl -lawareaudio  -lGL  -lX11 -lXext -lm

OS = irix_a64
SYS_LIBS =  -lX11  -lm

OS = SunOS
SYS_LIBS = 

OS = Windows_NT

