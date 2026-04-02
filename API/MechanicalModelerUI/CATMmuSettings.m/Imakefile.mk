#// --------------------------------------------------------
#// 
#//  @quickReview PCC CLP 01:09:20
#//  @quickReview APP CLP 01:08:07
#//

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAApplicationFrameUUID \
MechanicalModelerUIUUID \
CATMmiUUID \
SystemUUID 
#else
LINK_WITH_FOR_IID =
#endif
#
# PARTEDT
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  ApplicationFrame \
            ObjectModeler \
            DI0PANV2 \
            OM0EDPRO\
            JS0GROUP \
            JS0FM \
            CATVisualization \
            CATDlgStandard \
            CATInteractiveInterfaces\
            CATKnowledgeModeler\
            CK0FEAT\
            CK0UNIT CATFecUtilities \
            CATMmrSys \
            JS0GROUP AC0SPBAS CATMechanicalModeler \
			CATMmlSys \ #IID_CATIMmiPartInfrastructureSettingsListener
     # END WIZARD EDITION ZONE
   
ALIASES_ON_IMPORT=CATMmuSettings CATConstraintSettings CATMmrSys
