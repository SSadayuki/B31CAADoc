#
# SHARED LIBRARY
#
OS = COMMON
BUILT_OBJECT_TYPE=NONE
 
LINK_WITH = 

#
# AIX
#
OS = AIX
LOCAL_CFLAGS = -D_AIX_SOURCE -qtbtable=full
LOCAL_CCFLAGS = $(LOCAL_CFLAGS)

#
# IRIX
#
OS = IRIX
SYS_LIBS = -lexc -lmangle

#
# SunOS
#
OS = SunOS

OS = solaris_a64
SYS_LIBS = -ldemangle
#AS = fbe
#LOCAL_ASFLAGS = -P

#
# HP-UX
#
OS = HP-UX
LOCAL_CFLAGS = -DHP_HACK
LOCAL_ASFLAGS = -DHP_HACK 
LOCAL_CCFLAGS = -I/opt/CC/include/CC $(LOCAL_CFLAGS)
SYS_LIBS= -lf -lcl

#
# Windows NT
#
OS = Windows_NT
#SYS_LIBS_PATH= C:\WINNT\System32
SYS_LIBS= imagehlp.lib MSVCRT.lib OldNames.lib
LOCAL_LDFLAGS  = /NODEFAULTLIB 
