# COPYRIGHT DASSAULT SYSTEMES 2002
#======================================================================
# Imakefile for module CATNewSceneBrowser.m
#======================================================================
#
#  July 2003 Creation: YRX
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH_1 = JS0CORBA JS0FM ApplicationFrame CATNavigatorItf DI0PANV2 CD0FRAME \
			  AC0XXLNK AD0XXBAS CATVisualization OSMInterfacesItf CATFeatObjects\
			  YN000MFL AC0SPBAS CATDMUBase \
        CATViz CATNavigator2Itf CATMathStream
			 
			

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
