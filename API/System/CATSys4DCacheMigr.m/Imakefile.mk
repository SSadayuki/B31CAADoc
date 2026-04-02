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
#SYS_LIBS= -lf -lcl
#
OS = IRIX
LOCAL_LD_FLAGS = -no_unresolved
SYS_LIBS = -lexc -lmangle
#
OS = SunOS

OS = solaris_a64
SYS_LIBS =  -ldemangle

OS = Windows_NT
BUILD = NO
SYS_LIBS = wsock32.lib netapi32.lib imagehlp.lib OldNames.lib KERNEL32.lib ADVAPI32.lib ole32.lib OLEAUT32.lib winmm.lib version.lib

OS = Win_a
BUILD = NO
