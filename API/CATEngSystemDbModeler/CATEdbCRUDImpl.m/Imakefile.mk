#=====================================================================================
#                          COPYRIGHT DASSAULT SYSTEMES 2004
#-------------------------------------------------------------------------------------
# CATEdbCRUDImpl
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0GROUP JS0FM SystemUUID CATObjectModelerBase \
  CATEdbUUID  CATEdbUtil CATEdsUtil CATEdbEnovPlugClient CATMathematics

SH_LINK_WITH= $(LINK_WITH)
