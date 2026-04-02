#==============================================================================================================
# COPYRIGHT DASSAULT SYSTEMES PROVENCE 2011
#==============================================================================================================
# Imakefile for module CATCloudMeshCleaner library
#==============================================================================================================
# 12-Sep-2011 - DNR - Nouveau module CATCldMeshCleaner.m
#==============================================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = \

LINK_WITH = \
  CATCloudBasicResources \
  CATMathematics \
  CO0RCINT
	
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
