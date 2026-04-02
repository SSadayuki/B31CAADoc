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

LINK_WITH = AC0SPBAS JS0GROUP JS0FM JS0FILE \
			ON0PROP  \
			CATInteractiveInterfaces \
			CATProductStructure1  \
      SystemUUID  \
      CATLiteralFeatures KnowledgeItf \
      CATObjectSpecsModeler \
	  CATConstraintModeler CATConstraintModelerItf \
	  CATMechanicalModeler CATMecModInterfaces \
	  CATFdeInterfaces CATFdeApplicationExt \
      CATPspUUID CATPspUtilities ComponentsCatalogsInterfacesUUID \
	  CATAECMigrationItfCPP CATFdeEditor CATEsuUtil CATCclContainer \
	  CATCclInterfaces CATEnoviaV5AdapterBase CATPspItfCPP CATEsuProductServices 

#-------------------------
# Partie specifique irix_a
#-------------------------
OS                  = IRIX
LINK_WITH           = XMLUtils xmlxerces xmlicuuc AC0SPBAS JS0GROUP JS0FM JS0FILE \
			ON0PROP  \
			CATInteractiveInterfaces \
			CATProductStructure1  \
      SystemUUID  \
      CATLiteralFeatures KnowledgeItf \
      CATObjectSpecsModeler \
	  CATConstraintModeler CATConstraintModelerItf \
	  CATMechanicalModeler CATMecModInterfaces \
	  CATFdeInterfaces CATFdeApplicationExt \
      CATPspUUID CATPspUtilities ComponentsCatalogsInterfacesUUID \
	  CATAECMigrationItfCPP CATFdeEditor CATEsuUtil CATCclContainer \
    CATCclInterfaces CATEnoviaV5AdapterBase CATPspItfCPP CATEsuProductServices

LOCAL_CCFLAGS       = -DIRIX  -DNATIVE_EXCEPTION
CXX_EXCEPTION       =
LOCAL_LDFLAGS       = -v
CXX_TEMPLATE_INC    = -auto_include
CXX_TEMPLATE_PRELK  = -prelink
CXX_TEMPLATE_INST   = -ptused



SH_LINK_WITH= $(LINK_WITH)


