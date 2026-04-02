// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// Imakefile for load module CATTPSUIResources.m
//
//=============================================================================
// Usage notes:
//
//=============================================================================
// Nov. 2000  Creation                                                  T. Pech
//=============================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = CATTPSInteractiveServices \
                   CATTPSCmdConnectionMgt    \                   

LINK_WITH = JS0GROUP                      \ # System
            JS0FM                         \ # System
            SystemUUID                    \ # System
            CATMathematics                \ # CATMathematics
            DI0PANV2                      \ # Dialog
            CATApplicationFrame           \ # ApplicationFrame
            CATIAApplicationFrame         \ # CATIAApplicationFrame
            CATInteractiveInterfaces      \
            CATDialogEngine               \
            CATVisualization              \
            CATViz                        \ # Visualization
            CATObjectModelerBase          \ # ObjectModelerBase
            CATObjectSpecsModeler         \
            CATProductStructure1          \ # ProductStructure
            CATProductStructure2          \ # ProductStructureUI
            CATTTRSItf                    \ # CATTTRSInterfaces
            CATTTRSUUID                   \ # CATTTRSInterfaces
            CATMecModInterfaces           \
            CATMechanicalModeler          \
            CATMechanicalModelerUI        \
        \ # TTRSModeler                   \ # MechanicalModeler
            CATMmiUUID                    \ # MecModInterfaces
            CATGitInterfaces              \ # GSMInterfaces                    
            CATAssemblyInterfaces         \
            CATSketcherInterfaces         \
            SketcherInterfacesUUID        \
            CATDraftingInterfaces         \
            CATDfiUUID                    \ # DraftingInterfaces
            CATTPSItf                     \ # CATTPSInterfaces
            CATTPSUUID                    \ # CATTPSInterfaces
            CATMathStream                 \
            CATConstraintModeler          \
            CATConstraintModelerItf       \
            CATConstraintModelerUI        \
            CATProductStructureInterfaces \
            YP00IMPL                      \ #Cluster
            CATCGMGeoMath                 \
            DraftingItfCPP                \ # DraftingInterfaces
            YI00IMPL                      \
            CATMechanicalCommands         \ #CATIUdfFeature
            CATSktAssistant               \ # SketcherToolsUI
            CD0FRAME                      \
            CATGMModelInterfaces          \


