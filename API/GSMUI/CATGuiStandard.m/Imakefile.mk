# -----------------------------------------------
#
#      Imakefile of GSMUI/CATStandard.m
#
# -----------------------------------------------

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
	DI0PANV2                       \ # Dialog                         DI0PANV2
	CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
	CATLifSpecs                    \ # KnowledgeInterfaces            KnowledgeItf
	KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
	CK0PARAM                       \ # LiteralsEditor                 CATLiteralsEditor
	AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
	CATOmnMain                     \ # ObjectModelerNavigator          CATOmnMai
	JS0CORBA                       \ # System                         JS0GROUP
	JS0FM                          \ # System                         JS0FM
	CATSurfacicUIResources          \ # CATSurfacicUIResources         CATSurfacicUIResources
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
#
#endif
#endif
