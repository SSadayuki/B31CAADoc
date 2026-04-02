#---------------------------------------
BUILT_OBJECT_TYPE= SHARED LIBRARY

OS = COMMON

LINK_WITH = CO0RCDBL \
            CO0LSTST \
            NS0S3STR \
            JS0ERROR \
            CATELFMathKernel


IMPACT_ON_IMPORT = YES

OS = AIX
LOCAL_FFLAGS=-qnosave
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
OPTIMIZATION_FORTRAN = -O3
SYS_LIBS = -lftn

OS = HP-UX
# -lf is for HP 10 whereas -lF90 is for HP 11
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90
#endif

OS = hpux_b64 
# -lf is for HP 10 whereas -lF90 is for HP 11 -lcps 
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90 -lcps 
#endif

OS = SunOS
LOCAL_FFLAGS=-stackvar
SYS_LIBS = -lF77
OPTIMIZATION_FORTRAN = -O4

# Added by GTG to introduce /Wp64 option to determine 64 bit level warnings - 15July03
OS = intel_a64
LOCAL_CCFLAGS = /Wp64  
LOCAL_CFLAGS = /Wp64 
SYS_LIBS =

OS = win_b64
LOCAL_POST_FFLAGS= /Qauto

OS = intel_a
LOCAL_POST_FFLAGS= /Qauto
