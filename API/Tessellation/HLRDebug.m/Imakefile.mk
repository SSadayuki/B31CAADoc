#
# Imakefile for the  module HLRDebug
#
# History :
#
# Jan. 98  Jose CHILLAN (jch)   Creation
#

BUILT_OBJECT_TYPE = NONE
#BUILT_OBJECT_TYPE = SHARED LIBRARY
#

LINK_WITH = \
  HLRTools \
  JS03TRA

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
