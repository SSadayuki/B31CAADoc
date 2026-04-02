#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=LOAD MODULE

LINK_WITH = JS0GROUP
#
OS = AIX
SYS_LIBS = -liconv

#
OS = HP-UX
#if os hpux_a
SYS_LIBS= -lf -lcl
#else
SYS_LIBS= -lF90
#endif
#
OS = hpux_b64 
#if os hpux_a
SYS_LIBS= -lf -lcl
#else
SYS_LIBS= -lF90 -lcps 
#endif
#
OS = IRIX
LOCAL_LD_FLAGS = -no_unresolved
SYS_LIBS = -lexc -lmangle
#
OS = SunOS


OS = Windows_NT
SYS_LIBS = wsock32.lib netapi32.lib imagehlp.lib OldNames.lib KERNEL32.lib ADVAPI32.lib ole32.lib OLEAUT32.lib winmm.lib version.lib
