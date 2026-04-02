#
BUILT_OBJECT_TYPE=NONE
OS=COMMON
#

LINK_WITH= \
  FrFAdvancedObjects \
  FrFOpeSur \
  FrFOpeUtil \
  FrFObjects \
  YP00IMPL \
  YN000MAT \
  YN000FUN \
  JS0ERROR \
  JS0CORBA \
  JS03TRA \
  CO0LSTPV \
  BOOPER \
  Y300IINT \
  YP00SWEP \
  FrFFitting \
  YI00IMPL \
  Extrude \
  FrFAdvancedOpeCrv \
  FrFAdvancedOpeUtil
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#          

