#
BUILT_OBJECT_TYPE= SHARED LIBRARY
#
INCLUDED_MODULES = GMPolyTopo GMPolyGeo GMPolyTopTools \

LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  CATSysTS \
  JS0MT \
  YI00IMPL \
  CATTopologicalObjects \
  CATGeometricObjects \
  CATGMGeometricInterfaces \
  CATGMModelInterfaces \
  CATAdvancedMathematics \
  CATMathematics \
  CATMathStream \
  CATCGMKernel \
  CATPolyhedralInterfaces \
  CATPolyhedralObjects \
  PolyMathContainers \
  CATPolyMeshIntersectors
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

