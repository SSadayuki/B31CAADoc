#@ autoformat 12:03:19
#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = CATFrrAcquisition CATFrrComponents CATFrrCPMesh CATFrrDialogs \
                   CATFrrOperators CATFrrReps CATFrrUtilities CATFrrLightSourceManipulator \
                   CATFrrCPOperators CATFrrCPParameters

LINK_WITH= \
    AdvancedMathematics            \ # AdvancedMathematics            CATAdvancedMathematics
    FrFTopologicalOpe              \ # AdvancedTopologicalOpe         CATAdvancedTopologicalOpe
    PowerTopologicalOpe            \ # AdvancedTopologicalOpe         CATAdvancedTopologicalOpe
    CD0FRAME                       \ # ApplicationFrame               CATApplicationFrame
    CD0WIN                         \ # ApplicationFrame               CATApplicationFrame
    BasicTopology                  \ # BasicTopologicalOpe            CATBasicTopologicalOpe
    CAAFreeStyleItf                \ # CAAFreeStyleItf                CAAFreeStyleItf
    CAAFreeStyleItfUUID            \ # CAAFreeStyleItf                CAAFreeStyleItfUUID
    CATCloudEditorItfCPP           \ # CATCloudEditorInterfaces       CATCloudEditorInterfaces
    CATCldResOperServices          \ # CATCloudEditorResources        CATCldResOperators
    SELECT                         \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicDumpController      \ # CATSurfacicResources           CATSurfacicDumpController
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicComponents          \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATConstraintModeler           \ # ConstraintModeler              CATConstraintModeler
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    CATCbtSmoothing                \ # CurveBasedTopoOperators        CATCurveBasedTopoOperators
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0APPLI                       \ # DialogEngine                   CATDialogEngine
    CATFreeFormOperators           \ # FreeFormOperators              CATFreeFormOperators
    PowerFrFOperators              \ # FreeFormOperators              CATFreeFormOperators
    CATFaiItf                      \ # FreeStyleAnalysisInterface     CATFaiItf
    CATFrr2DDiagram                \ # FreeStyleResources             CATFrr2DDiagram
    CATFsiItf                      \ # FreeStyleShapeInterface        CATFsiItf
    FreeStyleShapeInterfaceUUID    \ # FreeStyleShapeInterface        FreeStyleShapeInterfaceUUID
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoInterfaces               \ # GSMModel                       CATGmoInterfaces
    CATGmoMecMod                   \ # GSMModel                       GSMModelBasic
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    GN0GRAPH                       \ # GenericNaming                  CATGngGraph
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    Y300IINT                       \ # GeometricOperators             CATGeometricOperators
    Y30UIUTI                       \ # GeometricOperators             CATGeometricOperators
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMathStream                  \ # Mathematics                    CATMathStream
    Mathematics                    \ # Mathematics                    CATMathematics
    YN000MAT                       \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    CATMcoInterfaces               \ # MechanicalCommands             CATUdfInterfaces
    MF0GEOM                        \ # MechanicalModeler              CATMechanicalModeler
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    BOOPER                         \ # NewTopologicalObjects          CATTopologicalObjects
    YI00IMPL                       \ # NewTopologicalObjects          CATTopologicalObjects
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSysMultiThreading           \ # System                         CATSysMultiThreading
    CATSysTS                       \ # System                         CATSysTS
    JS0FM                          \ # System                         JS0FM
    CO0LSTPV                       \ # System                         JS0GROUP
    CO0LSTST                       \ # System                         JS0GROUP
    CO0RCINT                       \ # System                         JS0GROUP
    Collections                    \ # System                         JS0GROUP
    JS03TRA                        \ # System                         JS0GROUP
    JS0CORBA                       \ # System                         JS0GROUP
    JS0ERROR                       \ # System                         JS0GROUP
    JS0SCBAK                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
    SystemUUID                     \ # System                         SystemUUID
    TessAPI                        \ # Tessellation                   CATTessellation
    BODYNOPE                       \ # TopologicalOperators           CATTopologicalOperators
    HybBoolean                     \ # TopologicalOperators           CATTopologicalOperators
    Primitives                     \ # TopologicalOperators           CATTopologicalOperators
    CATTopologicalOperatorsLight   \ # TopologicalOperatorsLight      CATTopologicalOperatorsLight
    CATVisualization               \ # Visualization                  CATVisualization
    CATViz                         \ # VisualizationBase              CATViz
#
ALIASES_ON_IMPORT = CATFreeStyleResources CATSurfacicComponents

