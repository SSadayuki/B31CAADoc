#=====================================================================================
#                                     CNEXT - CXR7+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATPspModeler
# FRAMEWORK   :    CATPlantShipModeler
# AUTHOR      :    AWG
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

LINK_WITH = JS0GROUP \
      SystemUUID \
      CATApplicationFrame \
      CATInteractiveInterfaces \
      CATAssSelection \
            CATMathematics CATMathStream \
            CATGeometricObjects CATCGMGeoMath \
            CATProductStructure1 CATProductStructureInterfaces \
            CATVisualization CATViz \
            CATCclInterfaces \
            CATKWERule \
            CATLiteralFeatures KnowledgeItf \
            CATObjectSpecsModeler CATObjectModelerBase \
            CATPDMBaseItf CATPDMBase \
            AECReviewItf \
            CATNavigatorItf \
            CATEnoviaV5AdapterBase \
            CATEsuUtil CATEsuProductServices CATEsuUUID \
            CATPspUUID CATPspUtilities CATPspItfCPP \
            CATMecModInterfaces CATConstraintModelerItf 

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID= NavigatorInterfacesUUID
#else
LINK_WITH_IID=
#endif


#-------------------------
# Partie specifique irix_a
#-------------------------
OS          = IRIX
LINK_WITH   = XMLUtils xmlxerces xmlicuuc \
      JS0GROUP \
      SystemUUID \
      CATApplicationFrame \
      CATInteractiveInterfaces \
      CATAssSelection \
            CATMathematics CATMathStream \
            CATGeometricObjects CATCGMGeoMath \
            CATProductStructure1 CATProductStructureInterfaces \
            CATVisualization CATViz \
            CATCclInterfaces \
            CATKWERule \
            CATLiteralFeatures KnowledgeItf \
            CATObjectSpecsModeler CATObjectModelerBase \
            CATPDMBaseItf CATPDMBase \
            AECReviewItf \
            CATNavigatorItf \
            CATEnoviaV5AdapterBase \
            CATEsuUtil CATEsuProductServices CATEsuUUID \
            CATPspUUID CATPspUtilities CATPspItfCPP \
            CATMecModInterfaces CATConstraintModelerItf

LOCAL_CCFLAGS       = -DIRIX  -DNATIVE_EXCEPTION
CXX_EXCEPTION       =
LOCAL_LDFLAGS       = -v
CXX_TEMPLATE_INC    = -auto_include
CXX_TEMPLATE_PRELK  = -prelink
CXX_TEMPLATE_INST   = -ptused



SH_LINK_WITH= $(LINK_WITH)


