#
# Imakefile for the  module HLRV4Interface
#
# History :
#
# Feb. 1999  Jose CHILLAN (jch)   Creation
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = \
  CATV4Procedural \
  CATV4gUtilities \
  CATMathematics \
  CATMathStream \
  JS0GROUP \
  CATTesHLRUtilities \
  CATTessellationHLR \
  CATTessellationHLRCGM \
  CATTessellation \
  CATNewTopologicalObjects \
  CATV4Topology \
            HLRModele

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

