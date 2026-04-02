#
# Imakefile for the  module HLGeometryV4
#
# History :
#
# Feb. 98  Jose CHILLAN (jch)   Creation
#

#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = HLRGeometryV4
#

LINK_WITH = \
  CATV4Procedural \
  CATV4Maths \
  CATCdbEntity \
  Collections \
  HLRDebug \
  HLRGeometry \
  HLRModele \
  HLRTools \
  HLRTopologyV4 \
  CATV4Geometry \
  CATV4Topology \
  CATMathStream \
  CATCGMGeoMath \
  YN000MAT \
  YP00IMPL

COMDYN_MODULE = V4SysCOMD

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
