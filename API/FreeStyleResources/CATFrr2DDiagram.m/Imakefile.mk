#@ autoformat 12:03:19
#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = \
    CD0FRAME                       \ # ApplicationFrame               CATApplicationFrame
    CD0WIN                         \ # ApplicationFrame               CATApplicationFrame
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATFrrOperators                \ # FreeStyleResources             CATFreeStyleResources
    CATFrrReps                     \ # FreeStyleResources             CATFreeStyleResources
    CATFrrUtilities                \ # FreeStyleResources             CATFreeStyleResources
    CATFsiItf                      \ # FreeStyleShapeInterface        CATFsiItf
    Mathematics                    \ # Mathematics                    CATMathematics
    YN000MAT                       \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
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
    CATVisualization               \ # Visualization                  CATVisualization
    VE0BASE                        \ # Visualization                  CATVisualization
    VE0MDL                         \ # Visualization                  CATVisualization
    CATViz                         \ # VisualizationBase              CATViz
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
