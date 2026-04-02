#
#  Multimedia Framework
#

BUILT_OBJECT_TYPE=SHARED LIBRARY
LINK_WITH = JS0GROUP JS0FM JS0MT JS0ERROR CATMathematics CATVisualization DI0PANV2 CATMMediaCodec
OS = AIX
SYS_LIBS =  -lX11 -lm -lXt

OS = HP-UX
SYS_LIBS =   -lX11 -lXt

OS = IRIX
SYS_LIBS = -lX11  -lm -lXt

OS = SunOS
SYS_LIBS =  -lX11 -lm -lXt

OS = Windows_NT

