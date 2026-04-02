BUILT_OBJECT_TYPE= SHARED LIBRARY

#if defined ( CATIAV5R20 )  

LINK_WITH=JS0GROUP JS0MT CATMathematics CATMathStream CATGeometricObjects CATCGMGeoMath CATGMModelInterfaces CATGMOperatorsInterfaces \
 CATGeometricObjectsCGM CATTopologicalObjects CATGeometricOperators CATObjectModelerBase CATObjectSpecsModeler CATClnBase CATCioCGMV5Interop CATMechanicalModeler  \
 CATTechDebug CATTechTools CATCGMV5SpecsQuery \
  GeometrySizeOptimization

#else

LINK_WITH=JS0GROUP JS0MT CATMathematics CATMathStream CATGeometricObjects CATCGMGeoMath CATGMModelInterfaces CATGMOperatorsInterfaces \
 CATGeometricObjectsCGM CATTopologicalObjects CATGeometricOperators CATObjectModelerBase CATClnBase CATCioCGMV5Interop \
 CATTechDebug CATTechTools CATCGMV5SpecsQuery \
 CATOmbSelectiveLoading CATOmbSwitchEngine CATOmiSwitchEngineItf  

#endif

OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

