# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module MathMeshParam.m
#======================================================================
#
#  Jul 2004  : amr : Optimisation O2
#  Feb 2003  Creation module CATParamaterization.m:llr
#  Feb 2003  ktu : Localisation dans MathMeshParam.m
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE = NONE
 
#LINK_WITH = JS0GROUP CATMathematics

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
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

OS = Linux
# CPT on 2020/11/12: to prevent to link with unresolved symbols
# set LOCAL_2NDLDFLAGS only if ( MKMK_GCC_SANITIZER does not exist or is empty )
LOCAL_2NDLDFLAGS=$(MKMK_GCC_SANITIZER:%-"-Wl,-z,defs ")
