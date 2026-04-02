#
# Imakefile for the module CATTessellation
#
# History :
#
# Oct.  1998  Alain COLLET (ca)   Creation
# July. 2007  Thierry CHAILLOUX   Reduction du nombre de dependance
#                                    Suppression  CATTesHLRUtilities/CATTesHLRUtilitiesMisc 
#                                    Objectif split HLR/Tessellation
#
#
#ifdef SPATIAL_SPECIFICATION
BUILD = NO
#endif
BUILT_OBJECT_TYPE=SHARED LIBRARY
#

#BUILD = NO

#ifdef CATIAR417
DUMMY_INCLUDE = \
  TessellateCommon \
  CGMV5Tessellator \
  TessellateCache
#else
#ifdef CATIAV5R24
DUMMY_INCLUDE =
#endif
#endif

INCLUDED_MODULES = \
  $(DUMMY_INCLUDE) \
  _Tessellator \
  _TessImplAPI \
  _TessImplDiscretize \
  TessAPI \
  TessCacheEngine \
  TessDebug \
  TessDiscretize \
  TessGeom \
  TessTopology \
  TessBodyAdapters \
  TessellationItf

#ifdef CATIAR417
DUMMY_LINK_WITH = \
  CATSysTS \
  JS0GROUP \
  CATPolyhedralMathematics \
  CATGMModelInterfaces \
  CATGMGeometricInterfaces
#else
#ifdef CATIAV5R24
DUMMY_LINK_WITH = \
  CATPolyhedralMathematicsDummy \
  CATGMGeometricInterfaces \
  CATPolygonalTools \
  CATTopologicalObjects \
  TessellateCommon
#endif
#endif

LINK_WITH = \
  $(DUMMY_LINK_WITH) \
  CO0HTAB \
  CO0LSTPV \
  JS0ERROR \
  JS0CORBA \
  JS0MT \
  CATMathematics \
  CATMathStream \
  CATAdvancedMathematics \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATPolyhedralInterfaces \
  CATPolyhedralObjects \
  CATTechTools \
  CATSysAllocator

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATTessellation CATGMModelInterfaces
#endif

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
