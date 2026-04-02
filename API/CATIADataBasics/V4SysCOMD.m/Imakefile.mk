# 
IMPACT_ON_IMPORT = YES
BUILT_OBJECT_TYPE = SHARED LIBRARY
BUILD_PRIORITY=0
# 
LINK_WITH = 
#
OS = COMMON
SYS_LIBPATH = 

OS = AIX
INCLUDED_MODULES = V4SysCOMDAIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn

OS = intel_a
#if (defined MK_MSCVER) && (MK_MSCVER < 1400)
SYS_LIBS = DFORDLL.LIB
#else
#endif

OS = intel_a64
SYS_LIBS = 

OS = HP-UX
# lf or lcl is for HP 10 - lF90 is for HP 11
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90
#endif

OS = hpux_b64 
# lf or lcl is for HP 10 - lF90 is for HP 11
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90 -lcps 
#endif

OS = SunOS
SYS_LIBS = -lF77
SYS_LIBPATH =
