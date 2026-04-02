BUILT_OBJECT_TYPE= NONE

LINK_WITH=CATIAEntity \
  CO0LSTPV \
  CO0RCINT \
  JS0CORBA \
  JS03TRA \
  JS0ERROR \
  AD0XXBAS \
  YP00IMPL \
  JS0STR \
  Mathematics \
          AC0CATPL \
  YP001PR4 \
  YI00IMPL \
  CATVioFortran \
  Primitives \
  YN000FUN \
  Y3DYNOPE \
  Y300IINT \ 
		  M2ToV5 

IMPACT_ON_IMPORT=YES

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn

OS = Windows_NT
#if (defined MK_MSCVER) && (MK_MSCVER < 1400)
SYS_LIBS = DFORDLL.LIB
#endif

OS = HP-UX
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90
#endif

OS = hpux_b64 
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90 -lcps 
#endif

OS = SunOS
SYS_LIBS = -lF77

