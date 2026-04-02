#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
MechanicalModelerUUID \
ObjectSpecsModelerUUID
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module CATMfCheckAndClean.m
#======================================================================
#
#  Avr. 2000  Creation: PPB
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) \
AC0SPBAS \
AC0SPCHECK \
CATApplicationFrame \
CATClnBase \
CATClnGenericNaming \
CATClnSpecs \
CATGeometricObjects \
CATGeomReroute \
CATGitInterfaces \
CATGngFeatures \
CATGngGraph \
CATInteractiveInterfaces \
CATMathematics \
CATMechanicalModelerLive \
CATMecModInterfaces \
CATMecModLiveUseItf \
CATMmlSys \
CATMmrSys \
CATObjectModelerBase \
CATObjectSpecsModeler \
CATProductStructure1 \
CATTopologicalObjects \
CATUdfInterfaces \
CATVisualization \
CATViz \
GN0NAME \
JS0GROUP \
MF0STARTUP \
PartItf \
