#
#
#if MOBILE
BUILD=NO
#endif

BUILT_OBJECT_TYPE=SHARED LIBRARY

#
OS=COMMON
#

#
LINK_WITH= \
  JS0ERROR \
  JS0CORBA \
  JS03TRA \
  CO0LSTPV \
          CATMathematics \
          CATGeometricObjects \
  CATAdvancedMathematics \
  CATGMOperatorsInterfaces

COMDYN=

OS = AIX
SYS_INCPATH = 
SYS_LIBS =  -lxlf -lxlf90 -lxlfpad
SYS_LIBPATH = 

OS = HP-UX
SYS_INCPATH =  
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90
#endif                
SYS_LIBPATH =

OS = hpux_b64 
SYS_INCPATH =  
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90 -lcps 
#endif                
SYS_LIBPATH =

OS = IRIX
SYS_INCPATH = 
SYS_LIBS = -lftn
SYS_LIBPATH =

OS = SunOS
SYS_INCPATH = 
SYS_LIBS = -lF77 -lM77
SYS_LIBPATH =
#
OS = Linux
SYS_LIBS      = -lifcoremt -limf -lsvml -lirc
#
OS = Darwin
SYS_LIBS      =  -lifcoremt -limf -lsvml -lirc
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#LOCAL_FFLAGS= /I $(LOCIPATH)
