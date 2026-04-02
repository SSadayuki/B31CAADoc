# ----------------------------------------------------------------
# CATFdeWorkUI
# ----------------------------------------------------------------

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= \
  CATApplicationFrame DI0PANV2 \
  JS03TRA JS0STR JS0CORBA JS0FM JS0LIB0 JS0SCBAK \
  AD0XXBAS AC0SPBAS CATFdeInterfaces \
  ON0FRAME ON0MAIN CD0WIN AC0XXLNK \
  ON0GREXT \
  CO0LSTST \
	YN000MAT \
	CATFdeEditor \  #AGQ_Change
  AC0PROJECT CATFdeInterfaces CATInteractiveInterfaces

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID= 
#else
LINK_WITH_IID=
#endif

# -----------------------------------------------------------------------------
# Framework - module information
# -----------------------------------------------------------------------------
# ApplicationFrame: CATApplicationFrame CD0WIN
#
# Dialog: DI0PANV2
#
# ObjectModelerBase: AD0XXBAS ON0MAIN AC0XXLNK ON0GREXT
#
# ObjectSpecsModeler: AC0SPBAS AC0PROJECT
#
# System: JS03TRA JS0STR JS0CORBA JS0FM JS0LIB0 JS0SCBAK CO0LSTST
# 
# -----------------------------------------------------------------------------

OS = COMMON
