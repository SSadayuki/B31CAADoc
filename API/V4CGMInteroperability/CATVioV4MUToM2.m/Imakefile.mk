#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = V4MUToM2

DUMMY_LINK_WITH = CATVioV4ToM2 \
                  V4ToV5 \ # V4ToV5 : pour les vars
                  CATIAEntity \
                  CATV4Topology CSGUtilities JS0GROUP \
                  V4SysMEM CATV4Geometry  \
                  Y300IINT CATGeometricObjects CATMathematics \
                  CATVioFortran CATV4epsilon CATV4Maths \
                  CATMathStream CATCGMGeoMath \
                  CATSolPrimUtilities CATV4Procedural \
                  YN000FUN CATXlatorToolsimp BOOERROR

#ifdef CATIAV5R18
LINK_WITH = $(DUMMY_LINK_WITH) \
            CATMMM
#else

#ifdef CATIAR201
LINK_WITH = $(DUMMY_LINK_WITH) \
            CATMMM
#else
LINK_WITH = $(DUMMY_LINK_WITH) \
            CATVioMMM
#endif

#endif         

#
#LOCAL_CCFLAGS= -DCATV4MUToM2Debug
#

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
SYS_LIBS = -lF90
#endif

OS = hpux_b64
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90 -lcps
#endif

OS = SunOS
SYS_LIBS = -lF77
