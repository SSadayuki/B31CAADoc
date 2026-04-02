#
#
#if os iOS
BUILT_OBJECT_TYPE=ARCHIVE
#else
BUILT_OBJECT_TYPE=SHARED LIBRARY
#endif

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = MathematicsUUID SystemUUID 
#else
LINK_WITH_FOR_IID =
#endif

#
#
ALIASES_ON_IMPORT=CATMathematics CATMathStream
#if os intel_a
INCLUDED_MODULES = Mathematics CATOpDataItf  YN000ANL YN000M2D YN000MAT YN000MFL YN000TRE YN000WAV CATCGMBreakPoints \
                   CATCGMKernel Mesures32 CATCGMKernel32 CATLinearAlgebra CATLinearAlgebra32
OPTIMIZATION_CPP = /O2
#elif os win_b64
INCLUDED_MODULES = Mathematics CATOpDataItf  YN000ANL YN000M2D YN000MAT YN000MFL YN000TRE YN000WAV CATCGMBreakPoints \
                   CATCGMKernel Mesures32 CATCGMKernel64A CATCGMKernel64I Mesures64            \
                   CATLinearAlgebra CATLinearAlgebra64 CATLinearAlgebra64A CATLinearAlgebra64I \
                   CATLinearAlgebraAvx
### A VOIR AVEC ABI !!! ###
### OPTIMIZATION_CPP = /GL /Ox
### LOCAL_LDFLAGS    = /LTCG
#else
INCLUDED_MODULES = Mathematics CATOpDataItf YN000ANL YN000M2D YN000MAT YN000MFL YN000TRE CATCGMBreakPoints \
                   CATCGMKernel Mesures32 CATLinearAlgebra
#endif
LINK_WITH= \
  $(LINK_WITH_FOR_IID) SystemUUID \
  JS0GROUP JS0ERROR \
  CATSysAllocator \
  JS0MT \
  JS0ZLIB
#
OS = Windows_NT
#
SYS_LIBS = psapi.lib
