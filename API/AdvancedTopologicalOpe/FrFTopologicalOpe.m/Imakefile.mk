#
BUILT_OBJECT_TYPE=NONE
OS=COMMON
#

LINK_WITH= \
  AdvTopoUtil \
  FrFAdvancedObjects \
  FrFOpeSur \
  FrFAdvancedOpeSur \
            FrFAdvancedOpeUtil \
            FrFAdvancedOpeCrv \
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
  BO0SWEEP \
  BODYNOPE \
  Primitives \
  YI00IMPL \
  TopoOperError \
  BOOERROR \
  BOOPER \
  Extrude \
  YN000TRE \
  HybOper \
  Assembler \
  AnalysisTools \
  BOIMPOPE \
            CATAdvancedTopologicalOpeLight
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
