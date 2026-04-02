# CATMathStream.m
#if (os iossimul_a || os iosdevice_a)
BUILT_OBJECT_TYPE=ARCHIVE
#else
BUILT_OBJECT_TYPE=SHARED LIBRARY
#endif

LINK_WITH= \
  JS0GROUP \
  JS0MT JS0FM  \
  CATMathematics \
  JS0COMP JS0ZLIB 

# Data_Mathematics64 brings specific asm utilities
#if os win_b64
INCLUDED_MODULES = Data_Mathematics Data_Mathematics64 CATTechTools
#else
INCLUDED_MODULES = Data_Mathematics CATTechTools
#endif
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
SYS_LIBS = psapi.lib

OS = AIX
LOCAL_LDFLAGS=-bbigtoc
