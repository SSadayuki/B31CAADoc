#=====================================================================================
#                          COPYRIGHT DASSAULT SYSTEMES 2005
#-------------------------------------------------------------------------------------
# CATEdbAppImpl		awg - Mar 2005
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0GROUP SystemUUID CATObjectModelerBase \
            CATMathematics CATMathStream \
			CATEdbEnovPlugClient \
			CATEdbCRUDImpl CATEdbUUID CATEdbUtil CATEdbAppBase

SH_LINK_WITH= $(LINK_WITH)
