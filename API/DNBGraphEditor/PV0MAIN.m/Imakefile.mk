#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= SHARED LIBRARY

INCLUDED_MODULES =  PV0ITFS PV0BASE PV0VISU

LINK_WITH = JS0GROUP 		\
		ObjectModeler 	\
		SpecsModeler 	\
	     	VE0GROUP 		\
		Mathematics 	\
        CATMathStream   \
		CATIAApplicationFrame \
	     	DI0PANV2 		\
		JS0FM 		\
		CD0WIN 		\
		CATViz		\
		CATVisualization	\
		AC0DOMAIN 		\
		GE0Settings 	\


# Useless Link_With 03/27/2002 YMS		
# CATDialogEngine \
# Useless Link_With 03/06/2002 YMS
# AC0CATPL \
# DI0STATE \
				
#
OS = AIX
SYS_LIBS = -lXm -lXt -lX11
#BUILD = NO
#
OS = HP-UX
SYS_LIBS = -lXm -lXt -lX11
#BUILD = NO
#
OS = SunOS
SYS_LIBS = -lXm -lXt -lX11
#BUILD = NO
#
OS = IRIX
SYS_LIBS = -lXm -lXt -lX11
#BUILD = NO
#
OS = Windows_NT
#LOCAL_CCFLAGS=-FR
#BUILD = NO









