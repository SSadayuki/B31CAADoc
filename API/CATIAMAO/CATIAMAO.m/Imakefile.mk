# 
IMPACT_ON_IMPORT = YES
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
DUMMY_LINK_WITH = JS0CORBA
#
#
OS = COMMON
LINK_WITH = $(DUMMY_LINK_WITH)
SYS_LIBPATH = 

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
LINK_WITH = $(DUMMY_LINK_WITH)
SYS_LIBS = -lftn

OS = intel_a
#if (defined MK_MSCVER) && (MK_MSCVER < 1400)
SYS_LIBS = DFORDLL.LIB
#endif

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

OS = win_a
BUILD = YES
LOCAL_CCFLAGS = -D_WIN98_SOURCE

OS = win_b64
# Added the following definition to set uninitialized variables to zero.
# LOCAL_FFLAGS = /Qzero
