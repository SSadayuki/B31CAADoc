#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
KnowledgeInterfacesUUID \
LiteralFeaturesUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=NONE
PROGRAM_NAME = CATLifList

# pour referencer le modules prereq
# meme vide, il faut le laisser
LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP YN000MAT NS0SI18N DI0PANV2 \
			CD0FRAME JS0FM Collections AC0SPBAS \
			AC0SPDOC ObjectModeler KnowledgeItf \
			CP0SPEC AC0XXLNK CATVisualization \
			CD0AUTOSTART CATLifKnowPublic CATScriptEngine SystemUUID CATSysCommunication VE0GROUP \
			KnowledgeItf CATCafAutomation YN000FUN YP00IMPL MecModItfCPP YI00IMPL \
			CATLifGenerativeParser CATObjectSpecsModeler





