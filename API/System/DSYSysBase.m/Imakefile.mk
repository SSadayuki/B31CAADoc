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


BUILT_OBJECT_TYPE=NONE

COMMON_MODULES =
COMMON_CCF=

INCLUDED_MODULES = $(COMMON_MODULES) 

COMMON_LINK_WITH =
#COMMON_LINK_WITH = JS0LIB0 CATSysMultiThreading
SYS_INCPATH =
SYS_LIBPATH =

#
OS = AIX
LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMMON_LINK_WITH)
SYS_LIBS = -liconv -lpthread
#ifdef CATIAV5R11
LOCAL_CREATEEXPFLAGS = 
#else
LOCAL_LDFLAGS = 
#endif

#
OS = HP-UX
LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMMON_LINK_WITH)
#if os hpux_a
SYS_LIBS= -lf -lcl
#else
SYS_LIBS= -lF90
#endif
LOCAL_LDFLAGS =  $(WS_LIBPATH)

#
OS = hpux_b64 
#ifdef CATV5_SMALLSYSTEM
LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMMON_LINK_WITH) 
#else
LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMMON_LINK_WITH)
#endif
#if os hpux_a
SYS_LIBS= -lf -lcl
#else
SYS_LIBS= -lF90 -lcps 
#endif
LOCAL_LDFLAGS =  $(WS_LIBPATH)

#
OS = IRIX
#ifdef CATV5_SMALLSYSTEM
LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMMON_LINK_WITH) 
#else
LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMMON_LINK_WITH)
#endif
SYS_LIBS = -lexc -lmangle -lpthread
LOCAL_LDFLAGS = $(LD_LIBPATH) -all -notall

#
OS = SunOS
LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMMON_LINK_WITH)
SYS_LIBS = -ldemangle
LOCAL_LDFLAGS =
# Remove the default Fortran libs
FORTRAN_LIBS = 
SUNMATH_LIBS=

#
OS = solaris_a64
LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMMON_LINK_WITH) 
SYS_LIBS = -ldemangle
LOCAL_LDFLAGS =

#
OS = Linux
LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMMON_LINK_WITH)
SYS_LIBS =-liberty
LOCAL_LDFLAGS =

#
OS = win_b64
LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMMON_LINK_WITH)
INCLUDED_MODULES = $(COMMON_MODULES) JS0CATREG
SYS_LIBS = wsock32.lib netapi32.lib imagehlp.lib OldNames.lib KERNEL32.lib ADVAPI32.lib ole32.lib OLEAUT32.lib winmm.lib version.lib wininet.lib Mpr.lib shfolder.lib psapi.lib setupapi.lib
LOCAL_LDFLAGS = /NODEFAULTLIB:libC.lib $(WS_LIBPATH)

#
OS = Windows_NT
LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMMON_LINK_WITH) NS0S3STR
INCLUDED_MODULES = $(COMMON_MODULES) JS0CATREG 
SYS_LIBS = wsock32.lib netapi32.lib imagehlp.lib OldNames.lib KERNEL32.lib ADVAPI32.lib ole32.lib OLEAUT32.lib winmm.lib version.lib wininet.lib Mpr.lib shfolder.lib gdiplus.lib setupapi.lib
LOCAL_LDFLAGS = /NODEFAULTLIB:libC.lib $(WS_LIBPATH)
