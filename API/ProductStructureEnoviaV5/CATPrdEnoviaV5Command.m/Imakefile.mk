#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= SHARED LIBRARY

LOCAL_CCFLAGS = -DCATPDMLogIntegration

LINK_WITH = JS0GROUP JS0FM AD0XXBAS AC0ITEMS AS0STARTUP DI0STATE DI0PANV2  \
            ApplicationFrame CATVisualization \
            CATEnoviaV5AdapterBase CATEnoviaV5AttrMap CATPrdEnoviaV5Impl CATEnoviaPlugInterfaces CATEnoviaV5AdapterItf\
	     	    CATPDMBaseItf CATPDMBase  \
	          CATObjectSpecsModeler PRDCommands  \
	          CATProductStructureInterfaces \
	          CATCclInterfaces CATInteractiveInterfaces    \
	          CATEnoviaV5VPMNav CATEnoviaV5Save \
	          CATPrdEnoviaV5SaveUI 
# // VVD BOEING SAVE PANEL
#
OS = AIX
# 
OS = HP-UX
#
OS = IRIX
#
OS = SunOS

OS = Windows_NT



