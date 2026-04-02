#@ autoformat 14:06:24
# -------------------------------------------------------
#
#             iMakeFile of CATSurfacicResources/CATSurfacicResourcesInit.m
#
# -------------------------------------------------------

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATLifSpecs                    \ # KnowledgeInterfaces            KnowledgeItf
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
	JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#

#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
	CATMmlSys                      \ # MechanicalModeler              CATMmlSys
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
	CATMmrSys                      \ # MechanicalModeler              CATMmrSys
#
#endif
#endif

