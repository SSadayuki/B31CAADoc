#
# Imakefile for the  module HLRTools
#
# History :
#
# Mar. 1998  Jose CHILLAN (jch)   Creation
# Jul. 2001  Laurent ALT          Decoupage de HLRTools en deux modules 
#                               (HLRTools et HLRToolsMisc)
#

BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = HLRToolsMisc

# CATMathematics is necessary for CGMOdtImpact instrumented code
LINK_WITH = \
  CATMathematics \
  CATCGMGeoMath \
  CATMathStream \
  YP0LOGRP

#
OS = COMMON

#
OS = AIX

#
OS = IRIX

#
OS = HP-UX

#
OS = SunOS

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
