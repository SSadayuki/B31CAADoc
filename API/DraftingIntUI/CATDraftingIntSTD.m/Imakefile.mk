#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATIAApplicationFrameUUID \
DraftingIntUIUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif

#
# DLL of Standard Editor UI (located in FW DraftingIntUI)
#
# 08.11.02 	fgx	Creation

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP JS0FM ON0MAIN \
            DI0PANV2 CATVisualization  CATViz \
            KnowledgeItf CATLiteralFeatures CATInteractiveInterfaces \
            AC0SPBAS IDFRAME CATDraftingInterfaces \
            ApplicationFrame \
            CATAnnotationModeler \
            CATDraftingFeature \
            CATDraftingBaseInfra \
            CATDraftingBaseInfraUI \
            ObjectModelerSystem \
            CATIAApplicationFrame \

INCLUDED_MODULES = IDSTANDARD

