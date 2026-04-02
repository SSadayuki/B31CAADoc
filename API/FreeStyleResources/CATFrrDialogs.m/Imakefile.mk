#@ autoformat 12:03:19
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = NONE

LINK_WITH = \
    CD0FRAME                       \ # ApplicationFrame               CATApplicationFrame
    CATClassACoreInterfaces        \ # CATClassACoreInterfaces        CATClassACoreInterfaces
    CATClassACoreInterfacesUUID    \ # CATClassACoreInterfaces        CATClassACoreInterfacesUUID
    VE0GEDIT                       \ # CATIAApplicationFrame          CATIAApplicationFrame
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATFrrReps                     \ # FreeStyleResources             CATFreeStyleResources
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    Mathematics                    \ # Mathematics                    CATMathematics
    YN000M2D                       \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    JS0SCBAK                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
    VE0BASE                        \ # Visualization                  CATVisualization
    VE0PIX                         \ # VisualizationBase              CATViz
#

#
OS = AIX
SYS_INCPATH =
SYS_LIBPATH =
SYS_LIBS = 

#
OS = IRIX 
SYS_INCPATH = 
SYS_LIBPATH =
SYS_LIBS = 

#
OS = HP-UX
SYS_INCPATH = 
SYS_LIBPATH = 
SYS_LIBS = 
 
#
OS = SunOS 
SYS_INCPATH = 
SYS_LIBPATH =
SYS_LIBS = 

#
OS = Windows_NT 

OS=irix_a64
LOCAL_CCFLAGS=-G0
