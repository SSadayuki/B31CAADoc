BUILT_OBJECT_TYPE=SHARED LIBRARY


LINK_WITH= \
  JS0GROUP GN0GRAPH \
  CATObjectModelerBase \
  CATMathematics   CATMathStream CATTechTools \
  GN0GRAPH \
  AC0SPBAS CATInteractiveInterfaces\
  CATGeometricObjects \
  CATCGMGeoMath \
  CATTopologicalObjects \
  CATMecModInterfaces CATMmrDbgTools \
  CATViz \
  CATCioCGMV5Interop

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

