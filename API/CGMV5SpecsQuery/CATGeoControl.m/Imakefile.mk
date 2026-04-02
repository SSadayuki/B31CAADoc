#
BUILT_OBJECT_TYPE= SHARED LIBRARY
#
LINK_WITH= JS0GROUP \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATGeometricObjectsCGM \
  CATTopologicalObjects \
           CATCioCGMV5Interop
#
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

