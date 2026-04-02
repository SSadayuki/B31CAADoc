#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
KnowledgeInterfacesUUID \
LiteralFeaturesUUID \
ObjectModelerBaseUUID \
InteractiveInterfacesUUID \
ObjectSpecsModelerUUID \

#else
LINK_WITH_FOR_IID =
#endif


#ifdef CATIAR210
LINK_WITH_PHASE1=
LINK_WITH_PHASE2=CatXmlItf CatXmlItfExt CATMagnitude DataCommonProtocolUse CATOmx CATSysTS
#else
LINK_WITH_PHASE1=VE0GROUP \
                 CATInfInterfaces \
                 CATProductStructureInterfaces \
                 CATXDocLinkItf \
                 CATXDocLinkInterfacesUUID \
                 CATTechnologicalPackageUIItf \
                 XMLParserItf
LINK_WITH_PHASE2=
#endif

#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
PROGRAM_NAME = CATLiteralFeatures

# pour referencer le modules prereq
# meme vide, il faut le laisser
LINK_WITH=$(LINK_WITH_FOR_IID) JS0GROUP NS0SI18N \
			 JS0FM Collections AC0SPBAS \
			AC0SPDOC ObjectModeler KnowledgeItf \
      ObjectModelerSystem \
			CP0SPEC AC0XXLNK \
		  SystemUUID \
			TECHNLNK   \
			CATOmiClusterItf CATObjectModelerBase \
	 DataAdmin \
	CATObjectModelerNavigator \
	@ObjectModelerCollection \
  ${LINK_WITH_PHASE1} ${LINK_WITH_PHASE2}

INCLUDED_MODULES = CK0FEAT CATLifDictionary CATLifToolkit CATLifDriver
#ifndef CATIAR210
ALIASES_ON_IMPORT = CATLiteralFeatures KnowledgeItf
#endif
