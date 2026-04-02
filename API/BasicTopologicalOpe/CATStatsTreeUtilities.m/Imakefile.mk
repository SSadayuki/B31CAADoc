#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
OS = COMMON
#  //-------------------------------------------------------------------------------------
#  // TCX 10-03-00 : interdiction absolue et definitive de referencer GeometricObjectsCGM
#  //   Les outils de DEBUG sont offerts dans GeometricObjects :
#  //       CATCGMDebug.h et CATCX_NCGM.h
#  //-------------------------------------------------------------------------------------
#
LINK_WITH = \
  JS0GROUP \
  CATMathematics \
  CATCGMGeoMath \
  CATMathStream \
  CATAdvancedMathematics \
  CATGeometricObjects \
  CATTopologicalObjects \
  CATGeometricOperators \
  CATTopologicalOperators \
  CATBasicTopologicalOpe \
  CATFreeFormOperators \
  MPROCTools \
# // NHD  CATCXTopology
#
# priere de respecter les LINK_WITH


