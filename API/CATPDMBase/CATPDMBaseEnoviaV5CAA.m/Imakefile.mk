#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= SHARED LIBRARY

LOCAL_CCFLAGS = -DCATPDMLogIntegration

LINK_WITH = JS0GROUP JS0FM AD0XXBAS AC0ITEMS AS0STARTUP \
            ApplicationFrame CATVisualization \
            CATPDMBaseItf CATPDMBase  \
	        CATObjectSpecsModeler   \
	        CATProductStructureInterfaces \
	        

#
OS = AIX
# 
OS = HP-UX
#
OS = IRIX
#
OS = SunOS

OS = Windows_NT



