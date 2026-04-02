#======================================================================
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATCclIntegration.m
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=NONE 
 
LINK_WITH = VE0BASE VE0GRPH2 CATDialogEngine CD0STWIN \
        CATObjectModelerBase CATObjectSpecsModeler \
		CATCclInterfaces CATCclContainer CATCuiViewController \
        JS0GROUP JS0CORBA JS0SCBAK JS0STR JS0FM NS0S3STR \
        DI0PANV2 CD0FRAME CD0WIN CO0LSTST CO0LSTPV CO0RCINT \
		CATLiteralFeatures CK0PARAM \
        CP0SPEC AC0SPBAS AC0SPCHECK AC0SPDOC \
	  CATFmuServices CATInteractiveInterfaces CATKnowledgeModeler

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
