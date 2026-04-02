#
# Imakefile for the  module HLRTopologyV4
#
# History :
#
# Feb. 98  Jose CHILLAN (jch)   Creation
#

#
BUILT_OBJECT_TYPE= NONE

# Fortran's dynamic commons
COMDYN_MODULE = V4SysCOMD


LINK_WITH = \
  AC0CATPL \
  AD0XXBAS \
  CATCdbEntity \
  CATV4epsilon \
  CATV4Topology \
  Collections \
  HLRDebug \
  HLRGeometry \
  HLRGeometryV4 \
  HLRModele \
  HLRTools \
  HLRTopology \
  CATV4Geometry \
  YI00IMPL \
  YN000MAT \
  YP00IMPL

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
