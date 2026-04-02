#
# Imakefile for the  module HLGeometryV4
#
# History :
#
# Feb. 98  Jose CHILLAN (jch)   Creation
#

#
BUILT_OBJECT_TYPE= NONE
#

LINK_WITH = \
  CATV4Maths \
  CATCdbEntity \
  Collections \
  HLRDebug \
  HLRGeometry \
  HLRModele \
  HLRTools \
  HLRTopologyV4 \
  V4Geom1 \
  YN000MAT \
  YP00IMPL
# HLRFortran
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
