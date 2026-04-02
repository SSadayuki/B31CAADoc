#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAApplicationFrameUUID \
FeatureCommandsUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
# 
LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP JS0FM\
            ObjectModeler\
            KnowledgeItf CK0FEAT\
            DI0PANV2\
            ApplicationFrame\
            OM0EDPRO\
            CATLiteralFeatures CK0PARAM \
            CATGraph CATInteractiveInterfaces \
            VE0GROUP CATViz \
            AC0CATPL \
            DI0STATE \
            CATFileMenu \
            CATStandardContainer \
            SpecsModeler

#OS = ALL
