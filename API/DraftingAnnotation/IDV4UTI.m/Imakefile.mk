# 
#      LIB : IDANNV4UTIL
# 
BUILT_OBJECT_TYPE = NONE
# COMDYN_MODULE = V4SysCOMD
#
# DUMMY_LINK_WITH = CATCdbEntity \
#                   V4SysUTIL   \
#                   V4SysMEM 
#
# IMPACT_ON_IMPORT=YES
#
# OS = COMMON
# BUILD = NO
# LINK_WITH = $(DUMMY_LINK_WITH)
#SYS_LIBPATH = 
# 
# OS = AIX
# SYS_LIBS = -lxlf -lxlf90 -lxlfpad
# 
# OS = IRIX
#LINK_WITH = $(COMDYN_MODULE) $(DUMMY_LINK_WITH)
# LOCAL_LDFLAGS = -no_unresolved
# SYS_LIBS = -lftn
# 
# OS = Windows_NT
#SYS_LIBS = LIBC.LIB DFORDLL.LIB
# 
# OS = HP-UX
#SYS_INCPATH =
#SYS_LIBS = -lf
# 
# OS = SunOS
#SYS_INCPATH = 
#SYS_LIBS = -lF77
#SYS_LIBPATH =
