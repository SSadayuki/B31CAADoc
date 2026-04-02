#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATShmInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# FDD - 29.09.98 - Creation
# FDD - 14.01.02 - Ajout du module KnowledgeItf suite evlution LiteralFeatures


BUILT_OBJECT_TYPE = SHARED LIBRARY
 
INCLUDED_MODULES = CATShmInterfacesCPP CATShmMapInterfacesCPP
#CATShmPubIDL CATShmProIDL 

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP \
#ifdef CATIAV5R10
			CATLiteralFeatures		 \
#endif
			KnowledgeItf \
			CATMecModInterfaces \
			CATGeometricObjects
