BUILT_OBJECT_TYPE=LOAD MODULE

LINK_WITH =  CATMMediaBase CATMMediaImage CATVisualization JS0CORBA JS0GROUP JS0FM NS0SI18N YN000MFL XMLParserItf

OS = Windows_NT
LOCAL_LDFLAGS = setargv.obj
SYS_LIBS = vfw32.lib

OS = IRIX
SYS_LIBS = -ldmedia  -lmoviefile -lcl -lawareaudio    -lX11  -lm -lXt

OS = irix_a64
SYS_LIBS =  -lX11  -lm -lXt

OS = SunOS
SYS_LIBS = -lXm

## @linux mcf 2004-06-01.14:14:19 [Linux support] ##
OS = Linux
SYS_LIBS = -lXm

