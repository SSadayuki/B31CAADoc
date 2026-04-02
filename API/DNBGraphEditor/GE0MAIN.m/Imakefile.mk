#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= SHARED LIBRARY

INCLUDED_MODULES =  GE0ITFS GE0BASE GE0VISU GE0MSSG GE0Settings


LINK_WITH =  JS0GROUP ObjectModeler SpecsModeler \
	      VE0GROUP Mathematics CATIAApplicationFrame \
	     DI0PANV2 JS0FM CD0WIN CATVisualization \
		 PV0MAIN DNBGraphEditor CATViz CATMathStream

# Unnecessary Link_With 03/06/2002 YMS
# AC0CATPL

#
OS = aix_a64
SYS_LIBS = -lXm -lXt -lX11
#
OS = aix_a
SYS_LIBS = -lXm -lXt -lX11
#BUILD = NO
#
OS = HP-UX
#BUILD = NO
#
OS = SunOS
#BUILD = NO
#
OS = IRIX
SYS_LIBS = -lXm -lXt -lX11
#BUILD = NO
#
OS = Windows_NT
#LOCAL_CCFLAGS=-FR
#BUILD = NO









