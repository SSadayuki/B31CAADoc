#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATIAApplicationFrameUUID \
DraftingIntUIUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP JS0FM ON0MAIN \
            DI0PANV2 CATVisualization  CATViz \
            KnowledgeItf CATLiteralFeatures CATInteractiveInterfaces \
            AC0SPBAS \
            CATDlgStandard \
            CATAnnotationModeler \
            ApplicationFrame \
            CATMathematics \
            CATIAApplicationFrame \
            CATDraftingFeature \
            CATFileMenu \
            CATDuiPropTB \
            CATDraftingInfrastructure \
            CATDraftingBaseInfraUI \          
            CATDraftingInterfaces \
            CATDraftingBaseInfra \
            ObjectModelerSystem \
            CATDraftingUI \
            CATDraftingInfrastructureUI \
            DibModelerServices \
