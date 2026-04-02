#@ autoformat 06:08:31
#ifdef LOCAL_DEFINITION_FOR_IID
   LINK_WITH_FOR_IID = \
    CATSurfacicOpeInterfacesUUID   \ # CATSurfacicOpeInterfaces       CATSurfacicOpeInterfacesUUID
#
#else
   LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY CATSopOperators.m
#
BUILT_OBJECT_TYPE =	SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
#

OS = COMMON

LOCAL_CCFLAGS= -DNewExtract

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_FOR_IID)           \
    CATSoiInterfaces               \ # CATSurfacicOpeInterfaces       CATSoiInterfaces
	CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATSurfacicTopoOperators       \ # SurfacicTopoOperators          CATSurfacicTopoOperators
    JS0CORBA                       \ # System                         JS0GROUP
#

#         Y30C3XGG YN000FUN YN000MAT YP00IMPL \
#         AdvTopoUtil   CATBasicTopologicalOpe \
#         CATCGMGeoMath    CATMathStream \
#         CATTopologicalObjects \
#         FrFAdvancedObjects 

#
OS = AIX
INSTANCIATION_MODE = -qnotempinc -qNOOPTimize
SYS_INCPATH =
SYS_LIBS = 
SYS_LIBPATH = 
#
OS = HP-UX
SYS_INCPATH = 
SYS_LIBS =
SYS_LIBPATH =
#
OS = IRIX
SYS_INCPATH = 
SYS_LIBS = 
SYS_LIBPATH =
#
OS = SunOS
SYS_INCPATH =
SYS_LIBS = 
SYS_LIBPATH =
#
OS = Windows_NT
SYS_INCPATH =
SYS_LIBS = 
SYS_LIBPATH =


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
	CATMathStream                  \ # CATMathStream                  CATMathStream
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	Mathematics                    \ # Mathematics                    Mathematics
#
#endif
#endif
