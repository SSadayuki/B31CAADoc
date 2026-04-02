#@ autoformat 14:06:24

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6CLIENT_ONLY=
#
INCLUDED_MODULES_V5_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    CATMathematics                 \ # Mathematics                    CATMathematics
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    MechanicalBuildInfraItfCPP     \ # MechanicalBuildInfraItf        MechanicalBuildInfraItf
    CP0CLIP                        \ # ObjectModelerBase              CATObjectModelerBase
    CATOMY                         \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#
INCLUDED_MODULES = \
    PartItf                        \
    PartItfCPP                     \
    $(INCLUDED_MODULES_V5_ONLY)    \
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY) \
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
#
#endif

#if !defined(_DS_COMPUTE_SERVER)
#if defined(CATIAR201)
LINK_WITH_V6CLIENT_ONLY = \
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATSurfacicUserExperienceItf   \ # CATSurfacicUserExperienceItf   CATSurfacicUserExperienceItf
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATApplicationFrame            \ # 
    
INCLUDED_MODULES_V5_ONLY= \
    PartPubIDL                     \ #
    PartProIDL                     \ #                                  
#
#endif
#endif
#endif
