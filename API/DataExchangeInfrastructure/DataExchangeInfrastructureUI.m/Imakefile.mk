# COPYRIGHT 2000-2001 DASSAULT SYSTEMES PROVENCE
#======================================================================
# Imakefile for module DataExchangeInfrastructureUI.m
#======================================================================
#
# 18/07/2000: ERB: Creation
# 23/08/2001: JHH: Suppression des LINK_WITH inutiles
#======================================================================
#
# SHARED LIBRARY 
#
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
OS = COMMON

LINK_WITH =	JS0CORBA CO0LSTPV CO0LSTST NS0S3STR \
			DI0PANV2 JS0FM CD0FRAME DataExchangeInfrastructure \
			DataExchangeKernelItfCPP DataExchangeBaseRepsItfCPP \
