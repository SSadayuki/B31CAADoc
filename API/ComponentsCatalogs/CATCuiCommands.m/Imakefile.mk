#======================================================================
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATCuiCommands.m
#======================================================================
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
ComponentsCatalogsUUID
InteractiveInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif

#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH = $(LINK_WITH_FOR_IID) VE0BASE VE0GRPH2 CATDialogEngine \
	CATObjectModelerBase CATObjectSpecsModeler \
	CATCclInterfaces CATComponentsCatalogs CATCuiOptions \
	JS0GROUP JS0CORBA JS0SCBAK JS0STR JS0FM NS0S3STR \
	DI0PANV2 CD0FRAME CD0WIN CO0LSTST CO0LSTPV CO0RCINT \
	CATLiteralFeatures CK0PARAM \
	CP0SPEC AC0SPBAS AC0SPCHECK AC0SPDOC \
	CATFileMenu CATInteractiveInterfaces CATViz KnowledgeItf CATCclContainer

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
