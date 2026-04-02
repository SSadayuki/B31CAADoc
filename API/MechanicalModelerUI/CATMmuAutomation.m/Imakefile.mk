#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATMmiUUID \
InfInterfacesUUID \
ObjectModelerBaseUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  CATShfInterfaces\
	CATTPSItf\
	InfItf\
	KnowledgeItf\
	GSMItf\
	SketcherItf\
	PartItf\
	CATMecModInterfaces CATMmiUUID\
	CATMechanicalModeler\
	CATProductStructureInterfaces\
	ApplicationFrame\
	CATObjectModelerBase\
	CATObjectSpecsModeler\
	CATProductStructure1\
	Mathematics\
	CATGngName\
	CATCafAutomation\
	JS0GROUP\
	CATShmInterfaces\
	CATLiteralFeatures CATKnowledgeModeler\
	CATLifAutomation\
	CATInteractiveInterfaces\
   CATGMModelInterfaces\
   CATGMOperatorsInterfaces\
   CATVisualization



