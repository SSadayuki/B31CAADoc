# 
IMPACT_ON_IMPORT = YES
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
INCLUDED_MODULES = CATAIXServices CATUNITServices
#
DUMMY_LINK_WITH = V4SysALL JS0GROUP CATCdbEntity
#
COMDYN_MODULE = V4SysCOMD
#
#
OS = COMMON
LINK_WITH = $(DUMMY_LINK_WITH)
SYS_LIBPATH = 

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
LINK_WITH = $(COMDYN_MODULE) $(DUMMY_LINK_WITH)
SYS_LIBS = -lftn

OS = Windows_NT
#if (defined MK_MSCVER) && (MK_MSCVER < 1400)
SYS_LIBS = DFORDLL.LIB
#endif

OS = win_b64
SYS_LIBS =
LOCAL_LDFLAGS = /EXPORT:majact /EXPORT:trcwmk

OS = HP-UX
#if os hpux_a
# libf or libcl is for HP 10.20 libF90 for HP 11
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90
#endif

OS = hpux_b64 
#if os hpux_a
# libf or libcl is for HP 10.20 libF90 for HP 11
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90 -lcps 
#endif

OS = SunOS
SYS_LIBS = -lF77
SYS_LIBPATH =

# Added the following two definitions for the intel_a64 architecture - GTG, 16th June 2003
OS = intel_a64
SYS_LIBS = libf90md.lib
