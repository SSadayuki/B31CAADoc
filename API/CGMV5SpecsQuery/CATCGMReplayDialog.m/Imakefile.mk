 
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATGemTstUUID \
ObjectModelerBaseUUID
#else
LINK_WITH_FOR_IID =
#endif

BUILT_OBJECT_TYPE = SHARED LIBRARY
#
#if defined (CATIAR213)
LINK_WITH=$(LINK_WITH_FOR_IID)   \
  JS0FM JS0GROUP DI0PANV2 CATObjectModelerBase ObjectModelerSystem \
  CATVisItf CATAfrFoundation CATInteractiveInterfaces CATAfrItf \
  CATGMModelInterfaces PersistentCell \
  CATMathematics CATMathStream CATGeometricObjects CATGeometricObjectsCGM CATTechGem 
#else
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0FM JS0GROUP DI0PANV2   CATObjectModelerBase CATApplicationFrame CATViz CATGMModelInterfaces PersistentCell  \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATTechGem \
  CATGeometricObjectsCGM
#endif  
  
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
 
