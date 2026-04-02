#On ajoute KnowledgeItf en debug seulement
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAApplicationFrameUUID \
LiteralsEditorUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY          
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = CK0UNIT

LINK_WITH=$(LINK_WITH_FOR_IID) 	CK0FEAT CK0PARAM OM0EDPRO \
                        KnowledgeItf  \
			JS0GROUP  JS0FM\
			CATObjectSpecsModeler  \
			NS0SI18N  \
			Collections \
			DI0PANV2 \
			ON0GREXT ON0MAIN ON0PROP \
			JS0LOGRP \
CATDlgStandard CATKnowledgeModeler CATLiteralFeatures CATFileMenu 

#


