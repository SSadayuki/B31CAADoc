#=====================================================================================
#                                     CNEXT - CXR14
#                          COPYRIGHT DASSAULT SYSTEMES 2004 
#-------------------------------------------------------------------------------------
# MODULE      :    CATRouPreCond
# FRAMEWORK   :    CATRoutable
#-------------------------------------------------------------------------------------
# COMMENTS    :    
# This module must be kept as light as possible. 
#
# In CXR14 - System FW enhance the mechanism to declare the "pre-condition tie" in
# the .dic/.dico files. With this enhancement, the .dll containing an interface 
# interface implementation code need not be loaded if the pre-condition is not 
# satified.  This implies that the .dll containing the pre-condition checking code
# be as light as possible.
# 
# AWG 04/2004
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0GROUP AD0XXBAS AC0XXLNK \
  CATEsuUtil CATPspUUID CATArrangementItf

SH_LINK_WITH= $(LINK_WITH)


