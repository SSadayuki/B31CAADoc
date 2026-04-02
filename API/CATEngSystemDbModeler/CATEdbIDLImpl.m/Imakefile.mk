#=====================================================================================
#                          COPYRIGHT DASSAULT SYSTEMES 2005
#-------------------------------------------------------------------------------------
# CATEdbIDLImpl
# vso - 6/2005
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0GROUP \
            SystemUUID \
            CATObjectModelerBase \
            CATEdbUUID CATEdsUtil CATEdbItfCPP CATEdbUtil

SH_LINK_WITH= $(LINK_WITH)
