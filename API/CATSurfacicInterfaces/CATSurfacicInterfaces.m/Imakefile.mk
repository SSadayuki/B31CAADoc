#@ autoformat 06:08:31
#define LOCAL_DEFINITION_FOR_IID
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
    CATSurfacicInterfacesUUID      \ # CATSurfacicInterfaces          CATSurfacicInterfacesUUID


#
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_FOR_IID)           \
    JS0CORBA                       \ # System                         JS0GROUP
    MechanicalBuildInfraItfCPP     \ # MechanicalBuildInfraItf        MechanicalBuildInfraItf
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

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
#
#endif
#endif
