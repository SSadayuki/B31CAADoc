#
BUILT_OBJECT_TYPE= SHARED LIBRARY
#
#if defined ( CATIAV5R21 ) || defined ( CATIAR210 )  

#if defined ( CATIAR210 ) 
LINK_WITH= \
  JS0GROUP \
  JS0MT \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects CATGeometricObjectsCGM CATTopologicalObjects CATGMOperatorsInterfaces  CATGeometricOperators \
  CATTechTools  \
  ds_DataSite \
  CATObjectModelerBase MecModItfCPP CATOmbSelectiveLoading CATOmbSwitchEngine CATOmiSwitchEngineItf  \
  VVSNetBase \
  CATClnBase \
  CATObjectSpecsModeler \
  GN0GRAPH \
  CATMechanicalModeler \
  CATMecModLiveInterfaces \
  CATMecModLiveUseItf \
  ObjectModelerSystem \
  CATGMModelInterfaces
#else
LINK_WITH= \
  JS0GROUP \
  JS0MT \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects CATGeometricObjectsCGM CATTopologicalObjects CATGMOperatorsInterfaces CATGeometricOperators \
  CATTechTools  \
  ds_DataSite \
  CATObjectModelerBase MecModItfCPP       \
  VVSNetBase \
  CATClnBase \
  CATObjectSpecsModeler \
  GN0GRAPH \
  CATMechanicalModeler \
  CATInteractiveInterfaces \
  CATGMModelInterfaces
#endif

#else

LINK_WITH= \
  JS0GROUP \
  JS0MT \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects CATGeometricObjectsCGM CATTopologicalObjects CATGeometricOperators \
  CATTechTools  \
  ds_DataSite \
  CATObjectModelerBase MecModItfCPP \
  VVSNetBase \
  CATClnBase \
  CATObjectSpecsModeler \
  CATGMModelInterfaces
  
#endif
#
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#



