# COPYRIGHT 1999-2007 DASSAULT SYSTEMES PROVENCE
#======================================================================
# Imakefile for module DXM2V5.m
#======================================================================
#
# 14/12/1999: JHH: Creation
# 24/05/2000: JHH: Suppression lib M2ToV5
# 23/08/2001: JHH: Suppression des LINK_WITH inutiles
#                  ATTENTION: YP00IMPL est necessaire pour les listes d'objets CGM
# 30/07/2003: DFB: Ajout de CATCGMGeoMath, warning du compilo
# 08/01/2007: JHH: Ajout de CATMMM (remplace CATVioMMM)
#======================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH =  AC0XXLNK AD0XXBAS JS0CORBA \
	     CO0LSTPV NS0S3STR YI00IMPL \
	     DataExchangeInfrastructure \
		 DataExchangeKernelItfCPP DataExchangeBaseRepsItfCPP \
		 CATMMM YP00IMPL \
		 CATCGMGeoMath CATMathStream

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
