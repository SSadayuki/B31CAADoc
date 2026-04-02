#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAApplicationFrameUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = VE0TOPT VE0VR VE0VRML

LINK_WITH=$(LINK_WITH_FOR_IID)  OM0EDPRO JS0GROUP ObjectModeler VE0GROUP DI0PANV2 DI0STATE ApplicationFrame JS0FM Mathematics CATVisVR CATDlgStandard CATSysMultiThreading \
                                CATGeometricObjects CATCGMGeoMath CATInteractiveInterfaces CATViz CATMathStream CATInfInterfaces


