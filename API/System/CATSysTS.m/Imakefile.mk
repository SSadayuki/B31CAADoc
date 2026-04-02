BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH = CATSysMultiThreading SSLArch
SRC_LINK_WITH = CATSysTS01

OS = AIX
SYS_LIBS = -liconv 


OS = Windows_NT
SYS_LIBS =  wsock32.lib  Ws2_32.lib 


OS = IRIX
SYS_LIBS = -lpthread
