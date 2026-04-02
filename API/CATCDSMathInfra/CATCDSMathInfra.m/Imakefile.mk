#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES= \ 
   CDSProfile \
   CDSApprox \
   CDSLinearAlgebra \
   WBUtilities


LINK_WITH= \
  JS0GROUP \
  CATCDS \
  CATWBx \
  CATCDSUtilities \
  CATMathematics \
  CATAdvancedMathematics \
  CATGMModelInterfaces \
  CATGeometricObjects \
  CATGMGeometricInterfaces \
  CATMathStream 

LOCAL_CCFLAGS_ASSERT=-DNOT_CDS_ASSERT $(MKMK_DEBUG:+"-DCDS_ASSERT")

#if os Windows
LOCAL_CCFLAGS=-D_HAS_EXCEPTIONS=0 $(LOCAL_CCFLAGS_ASSERT)
#elif os Linux
LOCAL_CCFLAGS=-std=c++0x -DCPP11_AVALAIBLE $(LOCAL_CCFLAGS_ASSERT)
#else
LOCAL_CCFLAGS=$(LOCAL_CCFLAGS_ASSERT)
#endif


OS = Linux
# CPT on 2020/11/12: to prevent to link with unresolved symbols
# set LOCAL_2NDLDFLAGS only if ( MKMK_GCC_SANITIZER does not exist or is empty )
LOCAL_2NDLDFLAGS=$(MKMK_GCC_SANITIZER:%-"-Wl,-z,defs ")
