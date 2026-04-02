#
# Imakefile for the  module HLRTools
#
# History :
#
# Mar. 1998  Jose CHILLAN (jch)   Creation
#

BUILT_OBJECT_TYPE = NONE
#BUILT_OBJECT_TYPE = LOAD MODULE
#BUILT = NO

LINK_WITH = \
  JS0CORBA \
  JS0MT \
  TessAPI \
  TessDebug

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

