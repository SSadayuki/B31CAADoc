BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = V4ToV5
COMDYN_MODULE = V4SysCOMD

# JEL060901 : demande GALTON R203 pour "ALIASES_ON_IMPORT" : ajout de CATGMModelInterfaces de GMModelInterfaces
# JEL070611 : CATVioMMM devient CATMMM en V5R18 et R203

DUMMY_LINK_WITH1 = V4SysMEM V4SysB CATIAEntity V4SysUTIL \
          CO0LSTPV CO0RCINT CATV4epsilon \
          JS0CORBA JS03TRA JS0ERROR AD0XXBAS \
          YP00IMPL JS0STR Mathematics CATV4Maths \
          AC0CATPL CATV4Geometry CATGeomEva\
          YP001PR4 CATV4Procedural YI00IMPL \
          Primitives CATV4Topology YN000FUN Y3DYNOPE Y300IINT \
          CATVioFortran CATMathStream CATCGMGeoMath \
          CATXlatorToolsimp

#ifdef CATIAR203
DUMMY_LINK_WITH = $(DUMMY_LINK_WITH1) CATGMModelInterfaces
#else
DUMMY_LINK_WITH = $(DUMMY_LINK_WITH1)
#endif

#if defined(CATIAV5R18) || defined(CATIAR203)
LINK_WITH = \
  $(DUMMY_LINK_WITH) \
  CATMMM
#else
LINK_WITH = \
  $(DUMMY_LINK_WITH) \
  CATVioMMM
#endif

IMPACT_ON_IMPORT=YES

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn

OS = Windows_NT

OS = intel_a64
SYS_LIBS = 

OS = HP-UX
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90
#endif                

OS = hpux_b64 
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90 -lcps 
#endif                

OS = SunOS
SYS_LIBS = -lF77
