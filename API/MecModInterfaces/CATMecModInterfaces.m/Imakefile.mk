#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATMmiUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# Makefile for the .idl files
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) JS0GROUP CATInfInterfaces CATSketcherInterfaces \
          CATObjectSpecsModeler CATObjectModelerBase CATMathematics CATVisualization CATGMModelInterfaces

INCLUDED_MODULES = MecModItf  MecModItfCPP MecModPubIDL MecModProIDL CATMmNotifs \
           MecModItfSymbolicGroups


