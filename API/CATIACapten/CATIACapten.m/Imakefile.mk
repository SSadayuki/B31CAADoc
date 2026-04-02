# MODULE=R7001GMD
# 
IMPACT_ON_IMPORT = YES
#
INCLUDED_MODULES = CaptenBase  CaptenEnv CaptenIAODriver CaptenQuery 
# 
BUILT_OBJECT_TYPE = SHARED LIBRARY
COMDYN_MODULE = V4SysCOMD
DUMMY_LINK_WITH = CATV4System    \
                  CATIAEntity    \
				  CATV4epsilon   \
                  CATIAMAO       \
                  CATIABaseIAO  
                  
#
OS = COMMON
LINK_WITH = $(DUMMY_LINK_WITH)
SYS_LIBPATH = 

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
LINK_WITH = $(COMDYN_MODULE) $(DUMMY_LINK_WITH)
SYS_LIBS = -lftn

OS = Windows_NT
SYS_LIBS = 

OS = HP-UX
#if os hpux_a
# libf or libcl is for HP 10.20 libF90 for HP 11
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90
#endif

OS = hpux_b64 
#if os hpux_a
# libf or libcl is for HP 10.20 libF90 for HP 11
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90 -lcps 
#endif

OS = SunOS
SYS_LIBS = -lF77
SYS_LIBPATH =
