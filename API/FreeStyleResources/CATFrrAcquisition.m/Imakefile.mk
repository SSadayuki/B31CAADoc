#@ autoformat 06:09:04
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = NONE

LINK_WITH = \
    CD0FRAME                       \ # ApplicationFrame               CATApplicationFrame
    CD0WIN                         \ # ApplicationFrame               CATApplicationFrame
    SELECT                         \ # CATIAApplicationFrame          CATIAApplicationFrame
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    CATFaiItf                      \ # FreeStyleAnalysisInterface     CATFaiItf
    CATFrrComponents               \ # FreeStyleResources             CATFreeStyleResources
    CATFrrOperators                \ # FreeStyleResources             CATFreeStyleResources
    CATFrrReps                     \ # FreeStyleResources             CATFreeStyleResources
    CATFrrUtilities                \ # FreeStyleResources             CATFreeStyleResources
    CATFsiItf                      \ # FreeStyleShapeInterface        CATFsiItf
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    Mathematics                    \ # Mathematics                    CATMathematics
    YN000M2D                       \ # Mathematics                    CATMathematics
    MF0GEOM                        \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    YI00IMPL                       \ # NewTopologicalObjects          CATTopologicalObjects
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModeler                  \ # ObjectModelerBase              CATObjectModelerBase
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    JS0SCBAK                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
    VE0BASE                        \ # Visualization                  CATVisualization
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
