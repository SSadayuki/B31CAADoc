#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
LINK_WITH = Collections \
            CATApplicationFrame \
            CATIAApplicationFrame \
            CATMathematics \
            CATObjectModelerBase CATObjectSpecsModeler \
            CATLiteralFeatures \
            CATVisualization \
            CATProductStructure1 \
            CATDraftingInterfaces \
            CATSketcherInterfaces \
            RouRoutableInterfaces RouRoutableVisu \
            CATArrangementItf \
            ArrArrangementInterfaces KnowledgeItf

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID
#else
LINK_WITH_IID=
#endif

#
OS = COMMON
