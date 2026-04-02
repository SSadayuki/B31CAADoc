# VVD - reverting to the CORBA build due to link errors in ENOVClashApplication
# BUILT_OBJECT_TYPE = SHARED LIBRARY
# 
# ECB1CORBA_LINK_WITH = CATCsbCORBA
# 
# CATCsbCORBA = SERVER
# 
# LINK_WITH = $(ECB1CORBA_LINK_WITH) orbix                     
#                                                                       
# OS = AIX
# LOCAL_CCFLAGS = -DSIXTY_FOUR_BIT_LONGS 
# LOCAL_LDFLAGS = -brtl
# 
# CXX_EXCEPTION =                                                       
# SYS_INCPATH =                                                         
# SYS_LIBPATH =                                                         
#                                                                                                                                          
# OS = Windows_NT      
# SYS_LIBS = ITMi.lib
# LOCAL_CCFLAGS = -DORBIX_DLL -DIT_EX_MACROS


BUILT_OBJECT_TYPE = CORBA

CORBA_BUILD_TYPE = SHAREDLIBRARY
CORBA_CPP_CS = SERVER CLIENT
CORBA_CPP_OPTS = -A -B

LINK_WITH = CATCsbCORBA
CATCsbCORBA = SERVER
SYS_LIBS = -lorbix

OS = aix_a
LOCAL_LDFLAGS = -brtl

OS = aix_a64
LOCAL_CCFLAGS = -DSIXTY_FOUR_BIT_LONGS 
LOCAL_LDFLAGS = -brtl

OS = intel_a
SYS_LIBS = ITMi.lib
LOCAL_CCFLAGS = -DORBIX_DLL -DWIN32_LEAN_AND_MEAN -DWIN32 -DIT_EX_MACROS

OS = win_a
SYS_LIBS = ITMi.lib
LOCAL_CCFLAGS = -DORBIX_DLL -DWIN32_LEAN_AND_MEAN -DWIN32 -DIT_EX_MACROS

OS = win_b64
SYS_LIBS = ITMi.lib
LOCAL_CCFLAGS = -DORBIX_DLL -DIT_EX_MACROS

