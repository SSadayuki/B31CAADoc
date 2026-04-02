#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH =	$(LINK_WITH_FOR_IID)          \
			JS0CORBA                      \
			JS0FM                         \
			CATObjectSpecsModeler         \
			CATObjectModelerBase          \
			CATProductStructure1          \
			CATApplicationFrame           \
			CATVisualization              \
			CATGraphicProperties          \
			CATMathematics                \
			CATNavigatorItf               \
			CATNavigator2Itf              \
			CATDMUPersistency             \
			CATDMUBase                    \
			CATLightXml                   \ # pour 3DXML
			CAT3DXmlInterfaces            \ # pour 3DXML
			CAT3DXmlBaseServices          \ # pour 3DXML
			CAT3DXmlLightBaseServices     \ # pour 3DXML
			CATBinaryXml                  \ # pour 3DXML
			XMLParserItf                  \ # pour 3DXML
			CATProductStructureInterfaces \ # pour IDL
			CATSimulationBase             \ # pour IDL
			SELECT                        \ # pour CATI3DCompass
			SimulationItf                 \ # pour implementation des groups a CATIPrezData
			OSMInterfacesItf              \ # pour implementation des scenes a CATIPrezData
			CATFeatObjects                \ # pour implementation des scenes a CATIPrezData
			SpaceAnalysisItf              \ # pour implementation des sections a CATIPrezData
			DI0PANV2                      \ # Pour CATPrezCmd
			CATDialogEngine               \ # Pour CATPrezCmd
			CATViz                        \ # Impose par definition d'ALIAS
			CATMathStream                   # Impose par definition d'ALIAS
