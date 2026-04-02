#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= NONE
BUILD = NO

LINK_WITH =

#
OS = AIX
SYS_LIBS = -lg -lxlf -lxlf90 -lxlfpad

#
OS = HP-UX
SYS_LIBS = -lf

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

