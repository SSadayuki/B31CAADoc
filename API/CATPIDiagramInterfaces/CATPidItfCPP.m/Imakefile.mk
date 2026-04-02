#=====================================================================================
#                                     CNEXT - CXR12
#                          COPYRIGHT DASSAULT SYSTEMES 2003
#-------------------------------------------------------------------------------------
# MODULE      :    CATPidItfCCP
# FRAMEWORK   :    CATPIDiagramInterfaces
# AUTHOR      :    VSO
# DATE        :    3.2003           CATPIDPubIDL
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = CATObjectModelerBase CATObjectSpecsModeler JS0GROUP JS0FM SystemUUID \
            ApplicationFrame 	

SH_LINK_WITH= $(LINK_WITH)
INCLUDED_MODULES = CATPIDPubIDL  CATPIDProIDL CATPidItfCPP
