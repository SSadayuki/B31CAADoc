BUILT_OBJECT_TYPE=SHARED LIBRARY

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
KnowledgeInterfacesUUID \
LiteralFeaturesUUID \
CATLiteralFeaturesUUID \
ObjectModelerBaseUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif

#if os Windows
CXX_WARNINGPROMOTE=CATCkeWarningPromote.h
#endif

LINK_WITH=$(LINK_WITH_FOR_IID)   AC0SPBAS AD0XXBAS \
            CP0SPEC CP0CLIP  \
            JS0GROUP JS0LOGRP  \
            NS0SI18N \
            ON0PROP\
			ObjectModeler \
			Collections  \
			JS0INF  \
			ON0GREXT ON0MAIN  \
			KnowledgeItf \
			JS0CATLM CATLiteralFeatures CATAutoItf CATProductStructureInterfaces MecModItf\
			CATInteractiveInterfaces CATVisualization CATOmuCluster


