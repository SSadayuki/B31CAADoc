#
# Imakefile for the  module HLRUti
#
# History :
#
# mar. 2004  Tuan anh PHUNG (tpg)   Creation
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = JS0GROUP \
  CATMathematics \
  CATMathStream \
  CATTessellationHLR \
  VE0BASE \
  CATViz \
  CATV4Procedural \
  CATV4gUtilities \
  HLRTopologyRep \

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

