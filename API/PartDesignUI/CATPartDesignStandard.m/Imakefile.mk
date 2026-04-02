 
#@ autoformat 11:03:03
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
		ObjectSpecsModelerUUID         \ # ObjectSpecsModeler             ObjectSpecsModelerUUID
		PartInterfacesUUID             \ # PartInterfaces                 PartInterfacesUUID
#
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY PRTSTANDARD
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
 
INCLUDED_MODULES = PRTSTANDARD\

COMON_LINK_WITH =  CATPartInterfaces \
									 CATPartDesignFeature\
									 JS0STR\
									 CATInteractiveInterfaces\
									 
LINK_WITH= \
		$(LINK_WITH_V5_ONLY)           \
		$(LINK_WITH_V6_ONLY)           \
		$(LINK_WITH_FOR_IID)           \
		$(COMON_LINK_WITH)             \
		DI0PANV2                       \ # Dialog                         DI0PANV2
		JS0FM                          \ # System                         JS0FM
		CATLifSpecs                    \
		CATLifDictionary               \
		KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
		KnowledgeItfCPP                \ # KnowledgeInterfaces            KnowledgeItf
		CATOmnMain                     \
		YN000MAT                       \
		CATSurfacicResources           \
   	CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
		CATAfrProperties               \ # AfrProperties                  CATAfrProperties
		CATMagnitude                   \ # Magnitude                      CATMagnitude
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
CATKnowledgeModeler            \ # KnowledgeModeler               CATKnowledgeModeler
#
#endif
#endif

