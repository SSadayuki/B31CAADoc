# COPYRIGHT DASSAULT SYSTEMES 2002
#======================================================================
# Imakefile for module ....m
#======================================================================
#
#  Nov 2002  Creation: SQU
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH_1 = JS0FM JS0GROUP CATDialogEngine DI0PANV2 \
CATApplicationFrame CATOSMInterfaces AS0STARTUP CATVisualization \
Scene AD0XXBAS CATPrsScene AC0SPBAS CATMathematics ProductStructureItf \
CATNewSceneBrowser CATNavigatorItf \
CATViz CATMathStream CATNavigator2Itf

#
OS = AIX
LINK_WITH = $(LINK_WITH_1)

#
OS = HP-UX
LINK_WITH = $(LINK_WITH_1)

#
OS = IRIX
LINK_WITH = $(LINK_WITH_1)

#
OS = SunOS
LINK_WITH = $(LINK_WITH_1)

#
OS = Windows_NT
LINK_WITH = $(LINK_WITH_1)
