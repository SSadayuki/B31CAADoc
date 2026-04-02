#
# Imakefile for the  module HLRTopologyV4
#
# History :
#
# Feb. 1998 HKL Creation
# Jun. 1999 HKL Added CATV4Procedural for gcwbox
# Jan. 2000 HKL Ajout de CATVisualization pour HLREntityRep
# Nov. 2007 DPS/CHU Ajout de HLRPolyBody pour integration des CATPolyBody en AddBody
# Dec. 2007 PTO Nettoyage Imakfile.mk
#

#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = HLRTopologyV4 HLRTopologyRep HLRPolyBody

# Fortran's dynamic commons
COMDYN_MODULE = V4SysCOMD


LINK_WITH = \
  AC0CATPL \
  AD0XXBAS \
  CATCdbEntity \
  CATV4Topology \
  CATV4Procedural \
  JS0GROUP \
  HLRGeometryV4 \
  HLRV4Interface \
  CATTessellationHLR \
  CATTesHLRUtilities \
  CATNewTopologicalObjects \
  CATGeometricObjects \
  CATMathematics \
  CATMathStream \
  CATCGMGeoMath \
  CATViz \
  PolyMODEL \
  PolyhedralUtilities \
  PolyMathContainers \
  V4SysCOMD

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
