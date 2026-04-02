# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module CATArrKnowledgeDefs.m
#======================================================================
#
#  Dec 2000  Creation: George Hielscher (GHR)
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES =  \
CATArrangementItf \
RouRoutableInterfaces \
AS0STARTUP \
AD0XXBAS \
AC0SPBAS \
CATMathematics \
DI0PANV2 \
CATLifSpecs \
CATLifDictionary \
CD0FRAME \
JS0FM \
DI0PANV2 \
JS0CORBA \
NS0S3STR KnowledgeItf \
CATGeometricObjects CATArrangementInterfacesUUID CATEsuUtil \
CATEsuProductServices
# END WIZARD EDITION ZONE

LINK_WITH = $(WIZARD_LINK_MODULES)

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=KnowledgeInterfacesUUID
#else
LINK_WITH_IID=
#endif

# System dependant variables
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
