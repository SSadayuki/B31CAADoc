BUILT_OBJECT_TYPE=SHARED LIBRARY
#
LINK_WITH=CATCdbEntity \
          CO0LSTPV CO0RCINT CATV4Geometry CATV4epsilon CATGeomEva\
          YP00IMPL JS0STR \
          AC0CATPL Y3DYNOPE \
          CATObjectModelerBase \
	      Mathematics \
          CATV4Topology \
		  CATV4Maths\
	      FrFOpeCrv FrFOpeSur FrFOpeUtil FrFObjects \
	      V5ToV4GeoError \
		  V5ToV4Tools V5ToV4Fortran\
		  CATMathStream CATCGMGeoMath 
#
#######LOCAL_CCFLAGS=-DCNEXT_CLIENT
#
IMPACT_ON_IMPORT=YES
#
OS = intel_a
#
OS = alpha_a
#
OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
#
OS = IRIX
SYS_LIBS = -lftn
#
OS = HP-UX
#if os hpux_a
# libf or libcl is for HP 10.20 libF90 for HP 11
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90
#endif
#
OS = hpux_b64 
#if os hpux_a
# libf or libcl is for HP 10.20 libF90 for HP 11
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90 -lcps 
#endif
#
OS = SunOS
SYS_LIBS = -lF77
