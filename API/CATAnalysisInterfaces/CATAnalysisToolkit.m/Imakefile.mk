#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
LiteralFeaturesUUID \
ObjectModelerBaseUUID \
InteractiveInterfacesUUID \
ObjectSpecsModelerUUID \
SystemUUID \
CATProductStructureInterfacesUUID\
GSMInterfacesUUID
#else
LINK_WITH_FOR_IID = 
#endif

BUILT_OBJECT_TYPE= SHARED LIBRARY

LINK_WITH =  $(LINK_WITH_FOR_IID)  JS0GROUP JS0FM \
			CATObjectSpecsModeler \
			CATObjectModelerBase \
			CATInfInterfaces CATAutoItf \
			CATLiteralFeatures KnowledgeItf CATLifAutomation \
			CATAnalysisInterface \
			CATVisualization CATViz \	 
			CATProductStructure1 CATMecModInterfaces \
			CATKnowledgeModeler CK0AUTO \
			CATMathematics CATMathStream \
			CATMatInterfaces \
			CD0WIN CATCafAutomation CATScriptReplayInteractions \
			CATProductStructureInterfaces  \
			TECHNLNK
