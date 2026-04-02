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
BUILT_OBJECT_TYPE=SHARED LIBRARY
LEX=flex

# pour referencer le modules prereq
# meme vide, il faut le laisser
LINK_WITH=$(LINK_WITH_FOR_IID) CATCGMGeoMath CATGeometricObjects VE0MDL CATVizBase JS0GROUP CATMathematics CATMathStream NS0SI18N DI0PANV2 \
			CD0FRAME JS0FM Collections AC0SPBAS \
			AC0SPDOC ObjectModeler KnowledgeItf CATOmiClusterItf CATObjectModelerBase \
			CP0SPEC AC0XXLNK \
			CD0AUTOSTART SystemUUID  CK0FEAT CATLiteralFeatures CATProductStructureInterfaces\
			YN000FUN MecModItfCPP CATLifAutomation CATObjectSpecsModeler\
			CATInteractiveInterfaces InfItfCPP TECHNLNK CATAutoItf CATOmiClusterItf \
			CATLifGenerativeParser CATXDocLinkItf AC0CATPL CATKWEPointer CATCkeKnowledgeEnoviaLink XMLParserItf Search CATPDMBaseItfCPP
			         

INCLUDED_MODULES = CATLifIntegration CATLifInspector CATLifLibrary CATLifExpressions CATLifParser  CATLifRelations CATLifDesignTable CATLifBehaviour  \
									 CATLifList CATLifFunction CATLifServices \
									 CATLifTechFeature CK0AUTO CATKmrVBParser \
                   CATLifEquivalentDimensions
