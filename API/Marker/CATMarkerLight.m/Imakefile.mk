#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

###############################
# WARNING !!!!!!!!!!!!!!!!
#
# Cette lib doit rester LIGHT : ne pas faire grossir l'imakefile
###############################

LINK_WITH =	$(LINK_WITH_FOR_IID)          \
			JS0CORBA                      \
			CAT3DXmlInterfaces            \
			CATObjectModelerBase
