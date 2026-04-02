#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAApplicationFrameUUID \
ProductStructureUIUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  AD0XXBAS Collections\
            DI0PANV2 JS0FM JS0GROUP NS0S3STR\
            ObjectModeler OM0EDPRO CATDlgStandard\
            CK0UNIT CATLiteralFeatures CATLifDictionary CATLifRelations \
			CATVisualization CATFileMenu AS0STARTUP\
      CATViz KnowledgeItf

OS = COMMON

