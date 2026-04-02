#
# Copyright Dassault Systemes Provence 2003, all rights reserved
#
#==============================================================================
# Imakefile for the bigger module CATCbgSmoothing.m
#==============================================================================
#
# 02/07/2004 : AMR : Optimisation O2
# 14/04/2003 : JCV : Creation
#              
#==============================================================================
#
BUILT_OBJECT_TYPE=NONE

#
OS = COMMON

#LINK_WITH= CATSurfacicGeoOperators 

#
OS = SunOS

OPTIMIZATION_CPP         =-xO4
OPTIMIZATION_FORTRAN=-xO4

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

