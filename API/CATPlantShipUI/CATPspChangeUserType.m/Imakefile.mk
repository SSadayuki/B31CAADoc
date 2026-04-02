#=====================================================================================
#                                     CNEXT - CXR10
#                          COPYRIGHT DASSAULT SYSTEMES 2002 
#-------------------------------------------------------------------------------------
# MODULE      :    CATPspChangeUserType
# FRAMEWORK   :    CATPlantShipUI
# AUTHOR      :    EHH
# DATE        :    11.2002
#
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH = CATApplicationFrame CATDialogEngine DI0PANV2 \
  JS03TRA JS0STR JS0CORBA JS0FM JS0LIB0 JS0SCBAK AS0STARTUP \
  AD0XXBAS AC0SPBAS ON0FRAME YN000MAT \
  CATVisualization CATEsuUtil CATFdeInterfaces CATSktAssistant \
  CATPspUtilities CATPspUUID CATPspApplication CATPspUIUtils 

#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
