#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATPspUtilities
# FRAMEWORK   :    CATPlantShipModeler
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

LINK_WITH = \
JS0GROUP JS0FM YJ000GSM \
DI0PANV2 \
CATApplicationFrame \
CATInteractiveInterfaces \
CATProductStructure1 CATProductStructureInterfaces \
CATPLMRules CATPDMBase CATPDMBaseEnoviaV5CAA \
CATEnoviaV5AdapterBase CATEnoviaV5AdapterItf \
SystemUUID \
CATTopologicalObjects \
CATCclInterfaces \
CATFeatureDictionary CATFdeInterfaces \
CATKnowledgeModeler CATLiteralFeatures KnowledgeItf \
CATObjectSpecsModeler CATObjectModelerBase \
CATMechanicalModeler MecModItfCPP CATGitInterfaces \
CATDraftingInterfaces CATDraftingBaseInfra \
CATMathematics CATMathStream \
CATVisualization CATViz \
PrjMngtEntities PrjMngtItf \
CATSketcherInterfaces \
CATSkmWireframe \
CATGeometricObjects CATGmoUtilities CATCGMGeoMath \
CATConstraintModeler CATConstraintModelerItf \
CATPartInterfaces \
CATFlexObjectItf CATCclAUTO \
CATRpmXML CATRpmUtilities CATXMLParserItf \
CATEsuUtil CATEsuProductServices \
CATPspPlantShipItf CATPspUUID CATPspItfCPP \
CATClnBase CATEsuUUID

            

SH_LINK_WITH= $(LINK_WITH)
