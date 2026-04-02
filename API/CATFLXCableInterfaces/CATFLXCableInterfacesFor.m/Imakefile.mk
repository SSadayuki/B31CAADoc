#
#  CATFLXCableDNBFor
#
#---------------------------------------
BUILT_OBJECT_TYPE= SHARED LIBRARY

#
OS = AIX
LOCAL_CCFLAGS=-D_FLX_AIX
LOCAL_CFLAGS=-D_FLX_AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

#
OS = HP-UX
LOCAL_CCFLAGS=-D_FLX_HP
LOCAL_CFLAGS=-D_FLX_HP
# -lf is for HP 10 whereas -lF90 is for HP 11
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90
LOCAL_LDFLAGS=-Wl,-Bsymbolic
#endif

#
OS = hpux_b64 
LOCAL_CCFLAGS=-D_FLX_HP
LOCAL_CFLAGS=-D_FLX_HP
# -lf is for HP 10 whereas -lF90 is for HP 11 -lcps 
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90 -lcps
LOCAL_LDFLAGS=-Wl,-Bsymbolic 
#endif

#
OS = IRIX
LOCAL_CCFLAGS=-D_FLX_IRIX
LOCAL_CFLAGS=-D_FLX_IRIX
SYS_LIBS = -lftn  -lblas 

#
OS = SunOS
LOCAL_CCFLAGS=-D_FLX_SUN
LOCAL_CFLAGS=-D_FLX_SUN
SYS_LIBS = -lM77 -lF77
OPTIMIZATION_FORTRAN = -O4

OS = Windows_NT
LOCAL_POST_FFLAGS=/Qauto
LOCAL_CCFLAGS=-D_FLX_WIN_NT
LOCAL_CFLAGS=-D_FLX_WIN_NT
OPTIMIZATION_FORTRAN = /O3 
LOCAL_FFLAGS= /Qunroll:8
