# COPYRIGHT Dassault Systemes Provence 2008
#======================================================================
# Imakefile for module XCADAnnotationDataExchange.m
#======================================================================
#  08/07/2008; Claude Guinamard : Creation.
#======================================================================

#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = JS0GROUP \
JS0GROUP 
# END WIZARD EDITION ZONE

LINK_WITH = $(WIZARD_LINK_MODULES) \
			AC0SPBAS \
			AD0XXBAS \
			CATTPSItf \
			CATTTRSItf CATTTRSUUID \
			CATTPSUUID  \
			CATMathematics \
			CATViz \
			CATVisualization \
			PartDesignDataExchange \
			DataExchangeBaseRepsItfCPP DataExchangeKernelItfCPP DataExchangeInfrastructure \
			YI00IMPL YP00IMPL \
			CATInteractiveInterfaces \
			MecModItfCPP \
			JS0FM CD0FRAME \
			DraftingItfCPP \
			KnowledgeItf   \ # KnowledgeInterfaces
			JS0CORBA NS0SI18N AS0STARTUP CO0LSTPV YN000MAT AC0XXLNK \ # Proto AssyFTA
			PartAndNCGMDataExchange \  # HideShow Geometry of capture

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
