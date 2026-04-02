#
BUILT_OBJECT_TYPE=SHARED LIBRARY	
#
INCLUDED_MODULES = XGMModel XGMOpe
#
LINK_WITH_COMMON = \
  JS0GROUP CATSysTS \
  YP00IMPL \
  YN000MAT \
  YN000ANL \
  YN000FUN \
  Y3DYNOPE \
  Y30UIUTI \
  CATMathStream \
  CATMathematics \
  CATAdvancedMathematics \
  CATCGMGeoMath \
  CATGeometricObjects \
  CATGMGeometricInterfaces \
  CATGeometricOperators \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces \
  FrFObjects \
  FrFAdvancedObjects\
  Replay_GeometricOperators 
  
#ifdef CATIAR418
LINK_WITH = $(LINK_WITH_COMMON)
#else
LINK_WITH = $(LINK_WITH_COMMON) ObjectModelerSystem
#endif
 
  
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
