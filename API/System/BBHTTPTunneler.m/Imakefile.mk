#

# SHARED LIBRARY

#

BUILT_OBJECT_TYPE=LOAD MODULE



LINK_WITH =  CATSysCommunication JS0GROUP JS0MT



SYS_LIBS =


OS = SunOS
LOCAL_LDFLAGS =  -lpthread -lsocket -lnsl
LOCAL_CCFLAGS =

OS = solaris_a64
SYS_LIBS = -ldemangle

OS = AIX

LOCAL_LDFLAGS =-F:$(LD)

SYS_LIBPATH =

SYS_INCPATH =

SYS_LIBS = -lc_r -blibpath:/usr/lib/threads:/lib:/usr/lib





OS = HP-UX

SYS_INCPATH = 

SYS_LIBS = 

SYS_LIBPATH =



OS = IRIX

SYS_INCPATH =

SYS_LIBPATH =

SYS_LIBS =

LOCAL_CCFLAGS = 

LOCAL_CFLAGS = 





OS = Windows_NT

SYS_LIBS = wsock32.lib

