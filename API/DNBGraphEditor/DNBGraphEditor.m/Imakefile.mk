#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE= SHARED LIBRARY

INCLUDED_MODULES =  DNBDpmPertBase DNBDpmPertVisu DNBPertNotifications

LINK_WITH = ObjectModeler SpecsModeler \
			 AC0SPBAS \
			CD0WIN \
			CATIAApplicationFrame \
			CATViz \
			CATVisualization \
            CATMathStream \
			DI0PANV2 \
			GE0MAIN  \
			JS0GROUP JS0FM\
			Mathematics\
			VE0GROUP \
			PV0MAIN \				# For balloon help
		    ProcessInterfaces \
		    DNBDPMItf CATApplicationFrame \
			
# Useless Iink_With 03/25/2002 YMS
# AC0CATPL \
# DI0STATE \
		
#
OS = aix_a64
SYS_LIBS = -lXm -lXt -lX11
#
OS = aix_a
SYS_LIBS = -lXm -lXt -lX11
#
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









