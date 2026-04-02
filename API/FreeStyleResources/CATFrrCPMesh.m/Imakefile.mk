#@ autoformat 06:09:04
#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE = NONE

LINK_WITH = \
    AdvancedMathematics            \ # AdvancedMathematics            CATAdvancedMathematics
    CD0FRAME                       \ # ApplicationFrame               CATApplicationFrame
    CD0WIN                         \ # ApplicationFrame               CATApplicationFrame
    SELECT                         \ # CATIAApplicationFrame          CATIAApplicationFrame
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0APPLI                       \ # DialogEngine                   CATDialogEngine
    FrFObjects                     \ # FreeFormOperators              CATFreeFormOperators
    FrFOpeCrv                      \ # FreeFormOperators              CATFreeFormOperators
    FrFOpeSur                      \ # FreeFormOperators              CATFreeFormOperators
    CATFreeStyleResources          \ # FreeStyleResources             CATFreeStyleResources
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoIntegration              \ # GSMModel                       CATGmoIntegration
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    Y300IINT                       \ # GeometricOperators             CATGeometricOperators
    Y30UIUTI                       \ # GeometricOperators             CATGeometricOperators
    Mathematics                    \ # Mathematics                    CATMathematics
    YN000MAT                       \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    MF0GEOM                        \ # MechanicalModeler              CATMechanicalModeler
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    BOOPER                         \ # NewTopologicalObjects          CATTopologicalObjects
    YI00IMPL                       \ # NewTopologicalObjects          CATTopologicalObjects
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
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
    TessAPI                        \ # Tessellation                   CATTessellation
    Primitives                     \ # TopologicalOperators           CATTopologicalOperators
    CATVisualization               \ # Visualization                  CATVisualization
    VE0BASE                        \ # Visualization                  CATVisualization
    VE0MDL                         \ # Visualization                  CATVisualization
#

OS = AIX
SYS_INCPATH =
SYS_LIBS =
SYS_LIBPATH = 

OS = HP-UX
SYS_INCPATH =
SYS_LIBS =
SYS_LIBPATH =

OS = IRIX
SYS_INCPATH =
SYS_LIBS =
SYS_LIBPATH =

OS=irix_a64
LOCAL_CCFLAGS=-G0
