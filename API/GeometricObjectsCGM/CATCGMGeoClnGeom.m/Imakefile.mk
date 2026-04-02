#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
OS = COMMON
#
LINK_WITH=JS0GROUP \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATCGMGeoMath \
  CurveCGM 

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
	



