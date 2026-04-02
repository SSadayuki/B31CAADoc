#@ autoformat 17:03:25

BUILT_OBJECT_TYPE= SHARED LIBRARY

#if defined(CATIAV5R21)
BUILD = NO
#endif

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

LINK_WITH = \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATStyleProcessor              \ # CATStyleProcessor              CATStyleProcessor
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATLatticeInterfaces           \ # GSOInterfaces                  CATLatticeInterfaces
    CATLatticeModel                \ # GSOModel                       CATLatticeModel
    IntroInfra                     \ # IntrospectionInfrastructure    IntroInfra
    CATMathematics                 \ # Mathematics                    CATMathematics
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    AC0XXLNK                       \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    SGInfra                        \ # SGInfra                        SGInfra
    SceneGraphManager              \ # SGManager                      SceneGraphManager
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
    UIVCoreTools                   \ # UIVCoreTools                   UIVCoreTools
    VisuDialog                     \ # VisuImmersiveDialog            VisuDialog
    CATVisImmersivePanel           \ # VisuImmersiveUI                CATVisImmersivePanel
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	KnowledgeItf				           \ # KnowledgeInterfaces	
	CAT3DAppFeatureUIResources     \
#
OS = Windows_NT
LOCAL_CCFLAGS  = /EHs /wd4091
