# COPYRIGHT 1999-2009 DASSAULT SYSTEMES PROVENCE
#======================================================================
# Imakefile for module DataExchImportInterface.m
#======================================================================
#
# 23/11/2009 - Jean-Pierre CRISPI (JRX) : Creation
#======================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH =  JS0CORBA \
	     YN000MAT CO0LSTPV YP00IMPL NS0S3STR \
		 CATCGMGeoMath CATMathStream \
		 DXM2V5 CATMMM \
         	 DataExchangeKernelItfCPP DataExchangeBaseRepsItfCPP \
	         DataExchangeInfrastructure  \
		 PartAndNCGMDataExchange \
		 
#  PartV6DataXCADImpl \ # TEMPORAIRE (SPLIT)
#		 CATMecModLiveUseItf CATMecModUseItf \
# TessPolygon TessAPI AC0XXLNK AD0XXBAS
  
  
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
#INSERTION ZONE NOT FOUND, MOVE AND APPEND THIS VARIABLE IN YOUR LINK STATEMENT
#LINK_WITH = ... $(WIZARD_LINK_MODULES) ...
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
