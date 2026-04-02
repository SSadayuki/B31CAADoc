#@ autoformat 09:06:23
#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

INCLUDED_MODULES = PrtExposedView

LINK_WITH        = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    Search                         \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    AC0XXLNK                       \ # ObjectModelerBase              CATObjectModelerBase
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    PartItf                        \ # PartInterfaces                 CATPartInterfaces
    JS0GROUP                       \ # System                         JS0GROUP
	CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
#

OS = HP-UX

INSTANCIATION_MODE = -pta -ptv


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATMagnitude                   \ # Magnitude                      CATMagnitude
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
#
#endif
#endif
