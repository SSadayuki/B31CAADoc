#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) JS0GROUP CATSysMultiThreading

#
OS = AIX
SYS_INCPATH =
SYS_LIBS = -lXm -lXt -lXi -lX11

#
OS = HP-UX
SYS_LIBS = -lXm -lXt -lXi -lX11

#
OS = IRIX
SYS_INCPATH =
SYS_LIBPATH =
SYS_LIBS = -lXm -lXt -lXi -lX11

LOCAL_CCFLAGS  = -float
LOCAL_CFLAGS   = -float 


#
OS = SunOS
SH_LINK_WITH = $(LINK_WITH)
SYS_INCPATH = -I/usr/dt/include -I/usr/openwin/include -I/opt/SUNWits/Graphics-sw/xgl/include
#SYS_LIBPATH = -L/usr/dt/lib -L/usr/dt/lib -L//opt/SUNWits/Graphics-sw/xgl/lib
SYS_LIBS = -lXm -lXt -lXi -lX11


OS = Windows_NT
SYS_LIBS = netapi32.lib wsock32.lib
