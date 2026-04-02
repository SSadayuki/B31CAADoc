#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
LINK_WITH = Collections \
            CATMathematics \
            CATObjectModelerBase CATObjectSpecsModeler \
            CATProductStructure1 \
            CATVisualization \
            CATArrangementItf \
			RouRoutable \
            RouRoutableInterfaces

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID
#else
LINK_WITH_IID=
#endif

#
OS = COMMON
