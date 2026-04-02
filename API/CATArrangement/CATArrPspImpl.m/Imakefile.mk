#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
LINK_WITH = Collections \
            CATMathematics \
			CATApplicationFrame \
            CATObjectModelerBase \
			CATArrangementItfCPP \
            CATPspUUID CATPspModeler CATPspUtilities KnowledgeItf

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID CATPspUUID
#else
LINK_WITH_IID=
#endif

#
OS = COMMON
