#=====================================================================================
#                                     CNEXT - CXR12
#                          COPYRIGHT DASSAULT SYSTEMES 2003
#-------------------------------------------------------------------------------------
# MODULE      :    CATWgdItfCCP
# FRAMEWORK   :    CATWGDiagramInterfaces
# AUTHOR      :    VSO
# DATE        :    3.2003
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = CATObjectModelerBase CATObjectSpecsModeler JS0GROUP JS0FM SystemUUID \
            ApplicationFrame 	

SH_LINK_WITH= $(LINK_WITH)
