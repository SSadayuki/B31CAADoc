#=====================================================================================
#                                     CNEXT - CXR12
#                          COPYRIGHT DASSAULT SYSTEMES 2003
#-------------------------------------------------------------------------------------
# MODULE      :    CATCpuImpl
# FRAMEWORK   :    CATCompartmentUI
# AUTHOR      :    EHH
# DATE        :    4.2003
#-------------------------------------------------------------------------------------
# COMMENTS    :    
#-------------------------------------------------------------------------------------
# MODIFICATIONS     user  date        purpose
#    HISTORY        ----  ----        -------
#
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

# client site simulation for traces
# LOCAL_CCFLAGS=-DCNEXT_CLIENT 

LINK_WITH = AC0SPBAS AD0XXBAS JS0GROUP JS0FM \
            CATProductStructure1 CATApplicationFrame SELECT \
            CATVisualization SystemUUID CATMathematics \
            CATLiteralFeatures  CATObjectSpecsModeler \
            CATEsuUtil CATEsuProductServices CATArrangementItf \
            CATPspUUID CATPspUtilities CATPspModeler CATPspUIUtils \
            CATCptUUID  

SH_LINK_WITH= $(LINK_WITH)
