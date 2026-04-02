#@ autoformat 16:08:07

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6CLIENTANDV5=
#
LINK_WITH_V6CLIENT_ONLY=
#

INCLUDED_MODULES = PRTBUILD
  
LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
	$(LINK_WITH_V6CLIENTANDV5)     \
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATCDMOperatorsInterfaces      \ # CDMOperatorsInterfaces         CATCDMOperatorsInterfaces
    CATFunctionalTopologicalOpe    \ # FunctionalTopologicalOpe       CATFunctionalTopologicalOpe
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    CATMathematics                 \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPartDesignBase              \ # PartDesignFeature              CATPartDesignBase
    PartFeatureBase                \ # PartFeatureBase                PartFeatureBase
    PartItf                        \ # PartInterfaces                 CATPartInterfaces
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY)     \
	SGInfra                        \ # SGInfra						  SGInfra
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#endif
#

#if !defined(_DS_COMPUTE_SERVER)
LINK_WITH_V6CLIENTANDV5= \
#
#if defined(CATIAR201)
LINK_WITH_V6CLIENT_ONLY = \
	CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
#
#elif defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	CATViz                         \ #                                
    CATVisualization               \ #                                
#
#endif
#endif
