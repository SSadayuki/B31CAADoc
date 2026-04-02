# COPYRIGHT DASSAULT SYSTEMES 1999
#==============================================================================
# Imakefile for module FrFLoft.m
#==============================================================================
#  Jul 2004 Optimisation O2                                                 amr
#  Oct 2002 plus de reference a la R9                                       mmo
#  Fev 2002 Ajout des options pour le compilateur Fortran SUN en R9         mmo
#  Dec 1999 transfert de code                                               prg
#==============================================================================
#
#
BUILT_OBJECT_TYPE=NONE

#
OS=COMMON

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
