#@ autoformat 16:08:07
# COPYRIGHT DASSAULT SYSTEMES 2004
#======================================================================
# Imakefile for module CATTerTechnoResult.m
#======================================================================
#
#  Mar 2004  Creation: juw
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6CLIENTANDV5=
#
LINK_WITH_V6CLIENT_ONLY=
#

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
	$(LINK_WITH_V6CLIENTANDV5)     \
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATTerTechnoResultServices     \ # CATTechResult                  CATTerTechnoResultServices
    CATTerTechnoResultInterfacesUUID \ # CATTechResultInterfaces        CATTerTechnoResultInterfacesUUID
    CATTerTechnoResultItf          \ # CATTechResultInterfaces        CATTerTechnoResultItf
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    GN0GRAPH                       \ # GenericNaming                  CATGngGraph
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerLive       \ # MechanicalModelerLive          CATMechanicalModelerLive
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATOmx                         \ # ObjectModelerCollection        CATOmx
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPartDesignBase              \ # PartDesignFeature              CATPartDesignBase
    CATPartDesignFeature           \ # PartDesignFeature              CATPartDesignFeature
    PartFeatureBase                \ # PartFeatureBase                PartFeatureBase
    CATPartInterfaces              \ # PartInterfaces                 CATPartInterfaces
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
    CATMathStream                  \
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY)     \
	CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    DataAdmin                      \ # CATDataCompatibilityInfra      DataAdmin
    CATGipMechanical               \ # CATGlobalImportIntegration     CATGipMechanical
    CATGipSpec                     \ # CATGlobalImportIntegration     CATGipSpec
    CATGlobalImportInterfaces      \ # CATGlobalImportInterfaces      CATGlobalImportInterfaces
    CATTTRSItf                     \ # CATTTRSInterfaces              CATTTRSItf
    CATTTRSItfAdapter              \ # CATTTRSInterfaces              CATTTRSItfAdapter
    CATTemplateInterfaces          \ # CATTemplateInterfaces          CATTemplateInterfaces
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
    SceneGraphManager              \ # SGManager                      SceneGraphManager
#endif
#

#if !defined(_DS_COMPUTE_SERVER)
LINK_WITH_V6CLIENTANDV5= \
#
#if defined(CATIAR201)
LINK_WITH_V6CLIENT_ONLY = \
	CATAfrComponentsModel          \ # AfrComponentsModel             CATAfrComponentsModel    
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrSelection                \ # AfrSelection                   CATAfrSelection
    CATVisController               \ # VisualizationController        CATVisController
#
#elif defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	CATIAApplicationFrame          \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATApplicationFrame            \ #                                
    CATIAApplicationFrameUUID      \ #                                
    CATVisualization               \ #                                
    CATViz                         \ #                                
#
#endif
#endif
