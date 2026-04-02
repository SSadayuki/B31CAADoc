#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= NONE

LINK_WITH=  AC0SPBAS AD0XXBAS \
            CK0FEAT KnowledgeItf MecModItf CP0SPEC CP0CLIP  \
            JS0GROUP JS0LOGRP  \
            NS0SI18N \
            ON0PROP\
			JS0FM\
			ObjectModeler \
			Collections  \
			JS0INF  \
			ON0GREXT ON0MAIN ProductStructureItf 


LOCAL_CCFLAGS= -DSPECDEBUG


OS = AIX

OS = HP-UX

OS = IRIX

OS = SunOS

OS = Windows_NT

