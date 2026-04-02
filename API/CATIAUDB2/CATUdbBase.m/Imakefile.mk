# 
IMPACT_ON_IMPORT = YES
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = CATIAUDB2
#
COMDYN_MODULE = V4SysCOMD
#
DUMMY_LINK_WITH = CATCdbEntity  V4SysENV V4SysMEM V4SysUTIL \
		  V4SysB CATIAMAO 
OS = COMMON
LINK_WITH = $(DUMMY_LINK_WITH)
SYS_LIBPATH = 

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
LINK_WITH = $(DUMMY_LINK_WITH)
SYS_LIBS = -lftn

OS = Windows_NT

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

# Added the following two definitions for the intel_a64 architecture - GTG, 23rd May 2003
OS = intel_a64
SYS_LIBS = libf90md.lib
