# COPYRIGHT DASSAULT SYSTEMES PROVENCE 2003, All Rights reserved
#======================================================================
# Imakefile for module STEPGenericResources.m
#======================================================================
#
# 22/01/2003: JHH: Creation pour ouverture Part42
# 30/07/2003: DFB: Ajout de CATMathStream, warning du compilo
# 16/10/2003: ARH: Ajout de AD0XXBAS pour open step
#======================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = DataExchangeInfrastructure KS0LATE KS0SIMPL  \
	    JS0CORBA STEPExchangeEnv YN000MAT \
	    AD0SDBAS \
		CATMathStream AD0XXBAS



