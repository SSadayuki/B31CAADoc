#
BUILT_OBJECT_TYPE= SHARED LIBRARY
#

#ifdef CATIAR423
INCLUDED_MODULES = \
  Autocheck \
  BVHTools
#endif

LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
BOOPER \
CATCGMGeoMath \
CATCGMKernel \
CATGMGeometricInterfaces \
CATGMModelInterfaces \
CATGeometricObjects \
CATMathStream \
CATMathematics \
CATPolyhedralBodyOperators \
CATPolyhedralInterfaces \
CATPolyhedralMathematics \
CATPolyhedralObjects \
CATSysMultiThreading \
CATSysTS \
CATTechTools \
CATTessellation \
CATTopologicalObjects \
HLREngine \
HLRModele \
HLRProject \
HLRTools \
JS03TRA \
JS0GROUP \
JS0MT \
JS0SCBAK \
PolyBodyBoolean \
PolyMODEL \
PolyMathContainers \
PolyhedralUtilities \
TessAPI \
TessBodyAdapters \
TessPolygon \
YI00IMPL \
CATGMPolyObjects

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

