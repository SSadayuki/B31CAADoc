#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
LINK_WITH = Collections \
            CATMathematics \
            CATObjectModelerBase CATObjectSpecsModeler \
            CATFdeApplicationExt \
            CATFdeInterfaces \
            CATPspDictClassImpl KnowledgeItf CATInteractiveInterfaces

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID
#else
LINK_WITH_IID=
#endif

#
OS = COMMON
