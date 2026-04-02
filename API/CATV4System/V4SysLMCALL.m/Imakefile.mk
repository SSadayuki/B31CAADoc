IMPACT_ON_IMPORT = YES
BUILT_OBJECT_TYPE=NONE
LINK_WITH=

OS = AIX
LOCAL_CFLAGS = -D_AIX_SOURCE -I/usr/lpp/xlC/include -I/usr/ibmcxx/include  

OS = Windows_NT
#if (defined MK_MSCVER) && (MK_MSCVER < 1400)
SYS_LIBS = DFORDLL.LIB
#endif
LOCAL_LDFLAGS = /EXPORT:lmcall /EXPORT:lmcalc /EXPORT:lmdel
LOCAL_CCFLAGS = /D_CATNoWarningPromotion_  
LOCAL_CFLAGS = /D_CATNoWarningPromotion_ 

OS = HP-UX
SYS_INCPATH =
SYS_LIBS = -lf

OS = SunOS
SYS_INCPATH = 
SYS_LIBS = -lF77
SYS_LIBPATH =
