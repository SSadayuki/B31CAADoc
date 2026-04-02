#
BUILT_OBJECT_TYPE= SHARED LIBRARY
#
#ifdef CATIAR201
LINK_WITH= JS0GROUP \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATTopologicalObjects \
  CATGeometricObjectsCGM \
  CATCXDebug \
  CATTechDebug \
  CATObjectModelerBase \
  CATObjectSpecsModeler \
  CATGngGraph \
  CATCioCGMV5Interop \
  CATMecModInterfaces \
  CATInteractiveInterfaces \
  CATMechanicalModeler \
  DI0PANV2 \
  CD0WIN \
  CATMmrBrepMode \
  CATMmrDbgTools
#else
LINK_WITH= JS0GROUP \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATTopologicalObjects \
  CATGeometricObjectsCGM \
  CATCXDebug \
  CATTechDebug \
  CATObjectModelerBase \
  CATObjectSpecsModeler \
  CATGngGraph \
  CATCioCGMV5Interop \
  CATMecModInterfaces \
  CATInteractiveInterfaces \
  CATMechanicalModeler \
  DI0PANV2 \
  CD0WIN \
  CATMmrDbgTools
#ifdef DESQUE
           CATSubdivisionObjects CATDesignerResources CATFsiItf CATFreeStyleResources
#endif
#endif
#
