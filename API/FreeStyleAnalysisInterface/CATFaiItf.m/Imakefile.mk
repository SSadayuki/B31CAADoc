#@ autoformat 06:09:04
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
    FreeStyleAnalysisInterfaceUUID \ # FreeStyleAnalysisInterface     FreeStyleAnalysisInterfaceUUID
#
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#

LINK_WITH= \
    $(LINK_WITH_FOR_IID)           \
    JS0CORBA                       \ # System                         JS0GROUP
#
								JS0GROUP JS0FM CATFaiItf FreeStyleAnalysisInterfaceUUID CATClassACoreInterfaces YP00IMPL    


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
