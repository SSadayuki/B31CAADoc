# COPYRIGHT DASSAULT SYSTEMES 2002
#======================================================================
# Imakefile for module CATNewScenesToolBar.m
#======================================================================
#
#  May 2003 Creation: SQU
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH_1 = JS0CORBA JS0FM ApplicationFrame CATNavigatorItf CATNavigator2Itf \
			  AD0XXBAS AS0STARTUP CATVisualization OSMInterfacesItf Scene \
        CATViz


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
