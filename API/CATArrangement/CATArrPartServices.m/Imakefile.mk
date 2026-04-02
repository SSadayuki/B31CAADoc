#
# CATArrangement Product Services 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=   \
Collections \
CATMathematics \
CATObjectModelerBase CATObjectSpecsModeler \
CATProductStructure1 \
CATVisualization \
CATArrangementItf CATArrangementInterfacesUUID ArrArrangementInterfaces \
SketcherItf PartItfCPP CATGitInterfaces CATInteractiveInterfaces MecModItfCPP YP00IMPL \
CATEsuUtil MF0STARTUP CATPspUtilities YI00IMPL CATLiteralFeatures CATLifDictionary CATArrProductServices \
CATEsuProductServices JS0FM CATMmiUUID CD0FRAME CATCclInterfaces CATPspUUID RouRoutableInterfaces

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID
#else
LINK_WITH_IID=
#endif

#------------
OS = COMMON
