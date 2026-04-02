#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAApplicationFrameUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SoftKeybord Interactive commandes & Interfaces
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  CATApplicationFrame \
            CATInteractiveInterfaces CATMathematics CATMathStream CATObjectModelerBase \
            JS0FM DI0PANV2 JS0GROUP \
            VE0BASE CATVisualization CATViz
