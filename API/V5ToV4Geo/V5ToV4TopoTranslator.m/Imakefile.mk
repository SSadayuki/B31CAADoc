BUILT_OBJECT_TYPE=SHARED LIBRARY
#
LINK_WITH=CO0LSTPV CO0RCINT \
	      JS0CORBA JS03TRA JS0ERROR JS0STR \
          AD0XXBAS \
	      AC0CATPL \
	      YI00IMPL \
	      YP00IMPL YN000MAT BODYNOPE \
	      CATV4Geometry CATV4epsilon CATGeomEva CATGeomOpe \
          CATCdbEntity \
          CATV4Topology \
	      CATV4Procedural V4SysMEM Y30A3HGG V5ToV4Fortran \
	      V5ToV4GeomTranslator V5ToV4GeoError TopologicalAdapter \
          V5ToV4ReportServices GN0GRAPH \
		  CATMathStream CATCGMGeoMath V5ToV4Tools JS0SCBAK
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
