BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = \
  PolyBarGraph \
  PolyBodyTools \
  PolyFactoryImpl \
  PolyFunctions \
  PolyLayers \
  PolyMeshImpl \
  PolyMeshTools \
  PolyMODEL \
  PolyPartitions \
  PolySerializers \
  PolyStream \
  PolySupports \
  PolyVoxel \
  PolyVoxelHybrid

LINK_WITH = \
  CATMathematics \
  CATMathStream \
  CATPolyhedralInterfaces \
  CATPolyhedralMathematics \
  CATSysMultiThreading \
  JS0GROUP \
  JS0SCBAK

OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
