#
BUILT_OBJECT_TYPE=NONE
OS=COMMON
#

LINK_WITH= \
  FrFAdvancedObjects \
  FrFOpeSur \
  FrFAdvancedOpeSur \
            FrFAdvancedOpeUtil \
  FrFOpeCrv \
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
  Y30UIUTI \
  BO0LOGRP \
  YP0LOGRP \
  BODYNOPELight \
  PrimitivesLight \
  YI00IMPL \
  BOOERROR \
  BOOPER \
  Extrude \
  YN000TRE \
  HybOper \
  AnalysisToolsLight
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
