BUILT_OBJECT_TYPE= SHARED LIBRARY
COMDYN_MODULE = V4SysCOMD
LINK_WITH=CATCdbEntity V4SysUTIL
IMPACT_ON_IMPORT=YES

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn

OS = Windows_NT


OS = intel_a64
SYS_LIBS = 

OS = HP-UX
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90
#endif                

OS = hpux_b64 
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90 -lcps 
#endif                

OS = SunOS
SYS_LIBS = -lF77
