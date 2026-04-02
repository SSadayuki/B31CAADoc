#@ autoformat 06:09:04
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = NONE

LINK_WITH = \
    AdvancedMathematics            \ # AdvancedMathematics            CATAdvancedMathematics
    YN000FUN                       \ # AdvancedMathematics            CATAdvancedMathematics
    CD0FRAME                       \ # ApplicationFrame               CATApplicationFrame
    CD0WIN                         \ # ApplicationFrame               CATApplicationFrame
    CATFrrUtilities                \ # FreeStyleResources             CATFreeStyleResources
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    Mathematics                    \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    YI00IMPL                       \ # NewTopologicalObjects          CATTopologicalObjects
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
