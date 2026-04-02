LINK_WITH_FOR_IID =
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
INCLUDED_MODULES = CGMTagToFillet
#
OS = COMMON
#

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

BUILD = YES

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
  JS0FM \
  JS0GROUP \
  DI0STATE \
  DI0PANV2 \
  CATDialogEngine \
  #CATIAApplicationFrame \
  #CAT3DControl \
  #CATVisualization \
  CATMechanicalModelerUI \
  CATObjectSpecsModeler \
  AD0XXBAS \
  CATGitInterfaces \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces \
  PartItf \
  CATMecModUseItf \	
  MecModItfCPP \	    
  Mathematics \
  CATMathStream \
  CATGMGeometricInterfaces \
  CATGeometricOperators \
  CATTopologicalObjects \
  #CATTopologicalOperators \
  #CATFunctionalTopologicalOpe \
  CATGeometricObjects \
  PRTNOTIF \
  PartDesignFeature \
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
  #CATApplicationFrame \
  SceneGraphManager              \ # SGManager                      SceneGraphManager
  CATAfrFoundation \
  CATMecModUIUseItf \
  CATMecModLiveInterfaces \
  MF0GEOM \
  CATMecModLiveUseItf \
  CATConstraintModeler2Itf \
  SGInfra \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
  CATApplicationFrame \
  CATVisualization \
#
#endif
#endif



                
#---------------------------------------------------------------------------------------
# Afin d'eviter un Build CXR1 
#---------------------------------------------------------------------------------------
OS = wnt40i
BUILD=NONE
OS = wnt40a
BUILD=NONE
OS = irix53
BUILD=NONE
OS = hp1020ansi
BUILD=NONE
OS = aix410
BUILD=NONE
OS = sun53
BUILD=NONE
