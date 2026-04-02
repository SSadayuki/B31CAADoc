#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
ObjectModelerBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#CD0WIN
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = V42CNext
#
OS = COMMON

#ifdef CATIAR201

# JEL060901 : demande GALTON R203 pour "ALIASES_ON_IMPORT" : ajout de CATGMModelInterfaces de GMModelInterfaces
# JEL060901 : demande ARDOIN R203 : suppression CATViz VE0MDL
# JNV070604 : demande GALTON R204 : ajout de ObjectModelerSystem de ObjectModelerSystem

LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  AD0XXBAS \
  CATIAEntity \
  CATV4Topology \
  CATV4epsilon \
  DI0PANV2 \
  CO0HTAB \
  AC0CATPL \
  YP00IMPL \
  CATVioV4ToM2 \
  CATVioV4ToV5 \
  CATMMM \
  YI00IMPL \
  Primitives \
  YN000MAT \
  CATV4Procedural \
  CATMathStream \
  CATCGMGeoMath \
  CATXlatorToolsimp \
  CATVisFoundation \
  CATGMModelInterfaces \
  ObjectModelerSystem

#else

DUMMY_LINK_WITH_PHASE1 = $(LINK_WITH_FOR_IID)  AD0XXBAS \
                         CATIAEntity CATV4Topology CATV4epsilon \
                         DI0PANV2 CO0HTAB AC0CATPL YP00IMPL \
                         CATVioV4ToM2 CATVioV4ToV5 \
                         YI00IMPL Primitives YN000MAT CATV4Procedural CATMathStream CATCGMGeoMath \
                         CATXlatorToolsimp \
                         CATViz VE0MDL

#ifdef CATIAV5R18
LINK_WITH = $(DUMMY_LINK_WITH_PHASE1) \
            CATMMM
#else
LINK_WITH = $(DUMMY_LINK_WITH_PHASE1) \
            CATVioMMM
#endif         

#endif

# BLI RI428481  22/01/04
------------
OS = AIX
INSTANCIATION_MODE =

#------------
OS = HP-UX
INSTANCIATION_MODE =

SYS_INCPATH =
SYS_LIBS =

SYS_LIBPATH =

#------------
OS = IRIX
SYS_INCPATH =

SYS_LIBS =

SYS_LIBPATH =

#------------
OS = SunOS
SYS_INCPATH =

SYS_LIBS =

SYS_LIBPATH =
