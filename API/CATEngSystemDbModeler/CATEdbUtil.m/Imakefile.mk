#=====================================================================================
#                          COPYRIGHT DASSAULT SYSTEMES 2004
#-------------------------------------------------------------------------------------
# CATEdbUtil
# vso - 5/2004
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0GROUP \
			SystemUUID \
            CATObjectModelerBase \
			CATEdbUUID CATEdsUtil CATEdbAppBase

SH_LINK_WITH= $(LINK_WITH)
