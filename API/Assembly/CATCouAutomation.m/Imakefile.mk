#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATMmiUUID \
ProductStructureInterfacesUUID \
CATAssemblyInterfacesUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = PX0AUTO

LINK_WITH=$(LINK_WITH_FOR_IID)   MF0STARTUP CP0CLIP AS0STARTUP \
            JS0LOGRP JS0GROUP JS0DSPA JS0COL JS0INF \
            NS0SI18N AC0SPBAS CK0FEAT \
            ON0PROP ObjectModeler MF0AUTO AS0SEL  \
            AC0SPBAS   CATAssCouMdl YN000MAT \
            MecModItf ProductStructureItf CATAssemblyInterfaces CATInfInterfaces \
            CATScriptReplayInteractions \
            CATConstraintModeler  MF0DimInt \
            CATConstraintModelerItf \
            KnowledgeItf \
            CATMathStream \
			CATSaiSpaceAnalysisItf \


LOCAL_CCFLAGS= -DSPECDEBUG


OS = AIX

OS = HP-UX

OS = IRIX

OS = SunOS

OS = Windows_NT

