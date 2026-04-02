#
BUILT_OBJECT_TYPE= SHARED LIBRARY
#
LINK_WITH= \
  JS0GROUP  JS0MT \
  CATMathematics  CATMathStream \
  CATGeometricObjects CATGeometricObjectsCGM  CATTopologicalObjects \
  CATTechTools   CATCGMV5SpecsQuery  ds_DataSite \
  CATObjectModelerBase MecModItfCPP   VVSNetBase  
#
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

