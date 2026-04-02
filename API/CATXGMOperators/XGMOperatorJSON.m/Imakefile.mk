#
BUILT_OBJECT_TYPE=SHARED LIBRARY	
#
#if defined(CATIAV5R30) || defined(CATIAR422)
BUILD=NO
#else
BUILD=YES
#endif

LINK_WITH_COMMON =  JS0GROUP CATSysTS \
                    YN000MAT YP00IMPL YN000FUN \
					CATMathStream \
					XGMOpe

  
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#


OS = Linux
# CPT on 2020/11/12: to prevent to link with unresolved symbols
# set LOCAL_2NDLDFLAGS only if ( MKMK_GCC_SANITIZER does not exist or is empty )
LOCAL_2NDLDFLAGS=$(MKMK_GCC_SANITIZER:%-"-Wl,-z,defs ")
