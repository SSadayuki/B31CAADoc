#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATGemUUID \
CATAfrUUID \
CATVisUUID \
GeometricObjectsUUID \
ObjectModelerBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#

#
#if defined (CATIAR213)
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  CATTechDebug CATTechTools CATCGMV5Foreign CATCXDebug \
  CATOmiSwitchEngineItf CATCXDebug \
  JS0FM JS0GROUP  CATObjectModelerBase ObjectModelerSystem \
  DI0PANV2 CATCioCGMV5Interop \
  CATAfrFoundation CATAfrItf CATVisFoundation  CATGraphicProperties CATVisItf \
  CATMathematics  CATAdvancedMathematics CATGMModelInterfaces CATMathStream  \
  CATGeometricObjects CATGMGeometricInterfaces CATGeometricObjectsCGM CATCGMGeoMath CATTopologicalObjects  \
  CATGeometricOperators \
  Primitives PrimitivesLight  \
  CATFmuFileAccess \
  VPMEditorInterfaces CATMecModInterfacesUI   CATMecModUIUseItf CATAssUseItf
#else
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  CATTechDebug CATTechTools CATCXDebug \
  CATCGMV5Foreign \
  JS0FM \
  JS0GROUP \
  CATObjectModelerBase  \
  DI0PANV2 \
  CATApplicationFrame \
  CATVisualization CATViz CATGraphicProperties \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATGeometricObjectsCGM \
  CATTopologicalObjects \
  CATCioCGMV5Interop \
  CATGeometricOperators \
  Primitives PrimitivesLight  \
  CATAdvancedMathematics \
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

