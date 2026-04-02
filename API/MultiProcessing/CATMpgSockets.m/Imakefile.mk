#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
BUILD = NO
INCLUDED_MODULES = JS0SOCK

LINK_WITH =

#
OS = AIX
SYS_LIBS = -lg -lxlf -lxlf90 -lxlfpad

#
OS = HP-UX
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90
#endif

#
OS = hpux_b64 
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90 -lcps 
#endif

#
OS = IRIX
SYS_LIBS = -lftn

#
OS = SunOS
SYS_LIBS = -lF77 -lsocket -lnsl

#
OS = Windows_NT
BUILD = NO
LOCAL_CCFLAGS = /D_CATNoWarningPromotion_  
LOCAL_CFLAGS = /D_CATNoWarningPromotion_ 

