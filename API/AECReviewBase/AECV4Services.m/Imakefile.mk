#
IMPACT_ON_IMPORT = YES
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
COMDYN_MODULE = V4SysCOMD
#
#
OS = COMMON
LINK_WITH = CATV4System  \
			CATCdbEntity AECComputeFR \
			AECV4Modeler CATAtgAECAttribut

#            CATV4gUtilities \
#            CATV4Procedural \
# 			 CATV4Topology \
#
# removed 110601 kny
#	CATV4Maths CATV4Geometry \
OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
#
OS = IRIX
SYS_LIBS = -lftn
#
OS = Windows_NT
SYS_LIBS = 
#
OS = HP-UX
#if os hpux_a
# -lf is for HP 10 whereas -lF90 is for HP 11
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90
#endif
#
OS = hpux_b64 
#if os hpux_a
# -lf is for HP 10 whereas -lF90 is for HP 11 -lcps 
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90 -lcps 
#endif
#
OS = SunOS
SYS_LIBS = -lF77
