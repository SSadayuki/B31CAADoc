BUILT_OBJECT_TYPE=SHARED LIBRARY

#if os Windows
CXX_WARNINGPROMOTE=CATOsmWarningPromote.h
#endif

COMMON_INCLUDED_MODULES=SpecsModeler AC0SPBAS AC0SPTRANSAC AC0SPDOC CP0SPEC \
  AC0EARLY AC0SPEXT AC0STAND CATOsmProxy CATOsmLink CATCclLocalRef \
  CATOsmParser_osm CATOsmIn CATOsmItf AC0SPCAA CATOsmCore CATOsmGenesis CATOsmUpdate

COMMON_LINK_WITH=@ObjectModelerCollection CATObjectModelerBase SystemUUID CP0CLIP AC0XXLNK AC0SPCAA TECHNLNK CATClnBase \
  CATSysAllocator JS0ZLIB JS0FM DataAdmin CATObjectModelerItf CATObjectModelerNavigator

#ifdef CATIAR206

#ifdef CATIAR417
R417_LINK_WITH=AC0CATPL
#else
R417_LINK_WITH=
#endif

# Warning: to remove OSMServicesPhase2, wait for client to have removed their link_with!
INCLUDED_MODULES=$(COMMON_INCLUDED_MODULES) CATOsmNewUpdate OSMServicesPhase2
LINK_WITH=$(COMMON_LINK_WITH) \
  CatXmlItf CatXmlItfBase ObjectModelerSystem CATObjectModelerContBase \
	DataCommonProtocolUse CATPLMIdentification CATPLMIdentificationAccess \
	CATProviderItf CATOmiClusterItf CATDWCInfra CATUpdEngine CATOme PLMModelerContextualLinkItf $(R417_LINK_WITH)

#else

ALIASES_ON_IMPORT=CATObjectSpecsModeler CATOmx
INCLUDED_MODULES=$(COMMON_INCLUDED_MODULES) RollImpl AC0PROJECT CATGrpModeler
LINK_WITH=XMLUtils xmlxerces CATXMLParserItf AC0CATPL CATIAEntity $(COMMON_LINK_WITH)

#endif
