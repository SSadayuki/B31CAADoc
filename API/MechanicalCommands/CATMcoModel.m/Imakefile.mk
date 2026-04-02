#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
MechanicalCommandsUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
#else
LINK_WITH_FOR_IID =
#endif
#======================================================================
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATUdfModel.m
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH=$(LINK_WITH_FOR_IID)  CATLiteralFeatures \
        CATObjectModelerBase AC0SPBAS\
        AC0SPBAS AD0XXBAS AC0XXLNK AC0SPDOC \
        JS0GROUP JS0CORBA JS0SCBAK JS0STR JS0ERROR NS0S3STR \
        CO0LSTST CO0LSTPV CO0RCINT CD0FRAME DI0PANV2 JS0FM \
		CATMathematics \
        SystemUUID CATInteractiveInterfaces CATMathStream \
		CATUdfInterfaces 

INCLUDED_MODULES = CATMcoServices

ALIASES_ON_IMPORT=CATMcoModel CATInteractiveInterfaces CATUdfInterfaces CATMmrReplace

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
