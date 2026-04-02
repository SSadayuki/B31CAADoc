#==============================================================================================================
# COPYRIGHT DASSAULT SYSTEMES PROVENCE 2010
#==============================================================================================================
# Imakefile for module CATCloudExactPredicates.m
#==============================================================================================================
# 12-Jul-2010 - DNR - Nouveau module CATCldExactPredicates.
#==============================================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = \
  CATCldExactPredicates

LINK_WITH = \
  CATMathematics \
  JS0ERROR

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
LOCAL_CCFLAGS = /EHsc
