# COPYRIGHT 1999-2003 DASSAULT SYSTEMES PROVENCE
#======================================================================
# Imakefile for module DXParserLight.m
#======================================================================
#======================================================================
#
# SHARED LIBRARY 
#
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = DXZlib
 
LINK_WITH = JS0CORBA JS0GROUP YN000MAT CATOMY DataExchangeKernelItfCPP \
            DataExchangeInfrastructure DataExchangeBaseRepsItf \
			   PolyMathContainers

			
