# COPYRIGHT 1999-2001 DASSAULT SYSTEMES PROVENCE
#======================================================================
# Imakefile for module STEPPart42.m
#======================================================================
#
# 23/08/2001: JHH: Suppression des LINK_WITH inutiles
# 30/07/2003: DFB: Ajout de CATMathStream, warning du compilo
#======================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH =	DataExchangeInfrastructure KS0LATE KS0SIMPL \
			JS0CORBA STEPExchangeEnv YN000MAT AD0SDBAS \
			DataExchangeKernelItfCPP DataExchangeBaseRepsItfCPP \
			CATMathStream \
			CATOmxKernel

