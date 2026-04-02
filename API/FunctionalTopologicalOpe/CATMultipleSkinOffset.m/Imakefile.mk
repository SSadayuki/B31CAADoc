#======================================================================
# COPYRIGHT DASSAULT SYSTEMES 2017
#======================================================================
# Imakefile for module CATMultipleSkinOffset.m
#
# Creation by QF2.
#  Oct 2017
#======================================================================
#

BUILT_OBJECT_TYPE = NONE

# Module inclus dans la librairie partagee de CATFunctionalTopologicalOpe.m. 

#
OS = Windows_NT
#if os win_b64
#    Don't see the warning C4577 exception EHsc 
LOCAL_POST_CCFLAGS = /D_HAS_EXCEPTIONS=0
#else
OPTIMIZATION_CPP = /O2
#endif
#

