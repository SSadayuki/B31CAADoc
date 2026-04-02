##################################
#	DASSAULT SYSTEMES	2009 (vxg)
##################################
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
PROGRAM_NAME=DSYSysIRMSysAdapter
BUILT_OBJECT_TYPE = SHARED LIBRARY

COMMON_LINK_WITH = JS0CORBA JS0MT JS0ZLIB JS03TRA

#
OS = AIX
SYS_LIBS =  -lpthread
LINK_WITH = $(COMMON_LINK_WITH)

#
OS = HP-UX
SYS_LIBS= -lf -lcl
LINK_WITH = $(COMMON_LINK_WITH)
LOCAL_LDFLAGS =  $(WS_LIBPATH)

#
OS = hpux_b64 
SYS_LIBS= -lf -lcl
LINK_WITH = $(COMMON_LINK_WITH)
LOCAL_LDFLAGS =  $(WS_LIBPATH)

#
OS = SunOS
LINK_WITH = $(COMMON_LINK_WITH)
SYS_LIBS = -ldemangle
LOCAL_POST_CCFLAGS=-features=bool

#
OS = solaris_a64
LINK_WITH = $(COMMON_LINK_WITH)
SYS_LIBS = -ldemangle

#
OS = Linux
LINK_WITH = $(COMMON_LINK_WITH)
SYS_LIBS =-lpthread

#
OS = Windows_NT
SYS_LIBS = wsock32.lib netapi32.lib imagehlp.lib OldNames.lib KERNEL32.lib ADVAPI32.lib ole32.lib OLEAUT32.lib winmm.lib version.lib wininet.lib Mpr.lib shfolder.lib gdiplus.lib setupapi.lib
LINK_WITH = $(COMMON_LINK_WITH)

#
OS = Darwin
LINK_WITH = $(COMMON_LINK_WITH)
SYS_LIBS = -lpthread
