#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES=SkinWire VarSweepDriver WBxUtilities 

LINK_WITH_V6=
#if defined(CATIAR201) 
LINK_WITH_V6=CATGMOperatorsInterfaces
#endif
 
LINK_WITH_WBX=
#if !defined(CATIAV5R32) && !defined(CATIAR424)
LINK_WITH_WBX=CATWBx CATWhiteBoxSolver
#endif

LINK_WITH_R32_R424=
#if defined(CATIAV5R32) || defined(CATIAR424)
LINK_WITH_R32_R424=CATCDSGMInfra
#endif

LINK_WITH= \
  $(LINK_WITH_V6) \
  $(LINK_WITH_WBX) \
  $(LINK_WITH_R32_R424) \
  JS0GROUP CATSysTS \
  CATCDS \
  CATCDSUtilities \
  CATMathematics \
  CATMathStream \
  CATAdvancedMathematics \
  CATTopologicalOperators \
  CATCGMGeoMath \
  CATGeometricObjects \
  CATGeometricOperators \
  CATFreeFormOperators  \
  CATGMModelInterfaces
 
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
