#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATSchBase
# FRAMEWORK   :    CATSchPlatformModeler
# AUTHOR      :    VSO
# DATE        :    1.2000
#-------------------------------------------------------------------------------------
# DESCRIPTION :    
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
			ON0PROP  \
			CATProductStructure1  \
            CATMathematics CATMathStream \
            SystemUUID  \
            CATLiteralFeatures CATLifSpecs KnowledgeItf \
            CATObjectSpecsModeler \
            CATEsuProductServices CATEsuUtil \
            CATPspUUID CATPspUtilities CATProductStructureInterfaces 

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=NavigatorInterfacesUUID
#else
LINK_WITH_IID=
#endif

SH_LINK_WITH= $(LINK_WITH)


