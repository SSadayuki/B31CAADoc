# 
IMPACT_ON_IMPORT = YES
# 
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
COMDYN_MODULE = V4SysCOMD
#
INCLUDED_MODULES = IAOBase  CATIAPrmArray IAODataPack IAODebug IAODependancies IAOKernel CATIAUnite
#
OS = COMMON
LINK_WITH = CATIAEntity \
			CATV4gUtilities \
            CATV4Maths \
			CATV4Procedural \
            CATV4System
#
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
