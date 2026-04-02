#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAApplicationFrameUUID \
Navigator4DUIUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  AD0XXBAS Collections\
            DI0PANV2 JS0FM JS0GROUP NS0S3STR \
			CK0UNIT CATLifRelations CATLiteralFeatures\
            ObjectModeler OM0EDPRO CD0WIN CATVisualization \
			CATNavigatorItf CATNavigator2Itf CATDlgStandard \
      KnowledgeItf CATViz CATObjectModelerCATIA

#


OS = COMMON

