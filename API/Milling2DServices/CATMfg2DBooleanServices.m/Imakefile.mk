BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = \
  CATGeometricObjects \
  CATMathematics \
  CATMfgNurbsServices \
  CATV4Geometry \
  CATV4Maths \
  CATV4System \
  CATWTTesselationBase \
  JS0GROUP

INCLUDED_MODULES = \
  DebugTools \
  Mfg2DBooleanBase \
  Mfg2DBooleanImplementation \
  Mfg2DBooleanOperator \
  Mfg2DGraph \
  MfgPocketingOperationParser

IMPACT_ON_IMPORT = YES

#if os AIX
  SYS_LIBS = -lxlf -lxlf90 -lxlfpad
#endif
