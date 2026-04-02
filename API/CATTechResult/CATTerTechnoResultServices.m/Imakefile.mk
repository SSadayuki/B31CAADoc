#@ autoformat 16:08:07
# COPYRIGHT DASSAULT SYSTEMES 2004
#======================================================================
# Imakefile for module CATTerTechnoResultServices.m
#======================================================================
#
#  Feb 2004  Creation: juw
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATTerTechnoResultInterfacesUUID \ # CATTechResultInterfaces        CATTerTechnoResultInterfacesUUID
    CATTerTechnoResultItf          \ # CATTechResultInterfaces        CATTerTechnoResultItf
    CATTerTechnoResultItfCPP       \ # CATTechResultInterfaces        CATTerTechnoResultItf
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    SI0BREPA                       \ # GenericNaming                  CATGngBRepAccess
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
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPartDesignBase              \ # PartDesignFeature              CATPartDesignBase
    CATPartDesignFeature           \ # PartDesignFeature              CATPartDesignFeature
    PartFeatureBase                \ # PartFeatureBase                PartFeatureBase
    CATPartInterfaces              \ # PartInterfaces                 CATPartInterfaces
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#



OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATTPSItfCPPBase               \ # CATTPSInterfacesBase           CATTPSItfBase
    CATTemplateInterfaces          \ # CATTemplateInterfaces          CATTemplateInterfaces
	SceneGraphManager              \ # SGManager                      SceneGraphManager
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATIAApplicationFrame          \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATTPSItf                      \ # CATTPSInterfaces               CATTPSItf
    CATUdfInterfaces               \ # MechanicalCommands             CATUdfInterfaces
    CATVisualization               \ #                                
    CATViz                         \ #                                
#
#endif
#endif
