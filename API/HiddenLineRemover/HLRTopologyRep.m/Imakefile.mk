#
# Imakefile for the  module HLRTopologyRep
#
# History :
#
# Nov. 99 HKL Creation
#

#
BUILT_OBJECT_TYPE=NONE
# BUILT_OBJECT_TYPE=SHARED LIBRARY
#

LINK_WITH = \
  HLRDebug \
  HLRModele \
  HLRTools \
  JS0CORBA \
  YN000MAT \
  YP00IMPL \
  VE0HLR

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

OS = Windows_NT
