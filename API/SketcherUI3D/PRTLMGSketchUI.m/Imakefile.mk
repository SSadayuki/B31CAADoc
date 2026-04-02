#if defined(CATIAR201)

BUILD=NO
BUILT_OBJECT_TYPE=NONE

#else

# COPYRIGHT Dassault Systemes 2007
#======================================================================
# Imakefile for module PRTLMGSketchUI.m
#======================================================================
#
#  Feb 2007  Creation:  ydu
#======================================================================
#
# SHARED LIBRARY 
#
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
SketcherInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
BUILT_OBJECT_TYPE=SHARED LIBRARY

OS = COMMON
LINK_WITH = $(LINK_WITH_FOR_IID) \
JS0GROUP \
JS0FM \ 
DI0PANV2 \ 
CATApplicationFrame \
CATMathematics \
CATDialogEngine \
JS0GROUP \
JS0FM \
DI0PANV2 \
CATMathematics \
CATDialogEngine \
CATSurfacicUIResources \
CATMechanicalModelerUI \
CATSketcherInterfaces \
YI00IMPL \
YP00IMPL \
CATCGMGeoMath \
MecModItfCPP \
CATVisualization \
AC0SPBAS \
AD0XXBAS \
CATInteractiveInterfaces \
SI0REPER \
PartItf

#endif








