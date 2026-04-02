#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATMatInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATMatWorkshop
#======================================================================
# CREATED  15 Feb 1999 BY EGO
# MODIFIED xx xxx xxxx BY xxx
#          modification reason   
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  CATApplicationFrame \
                                CATMatInterfaces \
                                JS0GROUP \
                                CATVisualization \

 

#
#
OS = AIX
SYS_INCPATH = 
SYS_LIBS = 
SYS_LIBPATH = 

#
#
OS = HP-UX
SYS_INCPATH =     
SYS_LIBS = 
SYS_LIBPATH =  

#
#
OS = IRIX
SYS_INCPATH = 
SYS_LIBS =
SYS_LIBPATH =

#
#
OS = Windows_NT
