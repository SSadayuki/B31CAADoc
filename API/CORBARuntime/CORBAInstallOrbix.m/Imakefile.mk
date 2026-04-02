#
BUILT_OBJECT_TYPE=LOAD MODULE
#
# LOAD MODULE 
#
OS = COMMON

PROGRAM_NAME = CORBARuntime_post

LINK_WITH = 

#
OS = AIX
LOCAL_CCFLAGS = -D_BSD=43

#
OS = HP-UX

#
OS = IRIX

#
OS = SunOS
SYS_LIBS = -lresolv -lsocket -lnsl

#
OS = Windows_NT
#BUILD = NO
