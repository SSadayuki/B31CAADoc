#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
ObjectSpecsModelerUUID
#else
LINK_WITH_FOR_IID =
#endif
##########################################################################
#
#       makefile customization lib:  KR0OM
#
##########################################################################
#
# SHARED LIBRARY
#
# -------------------------------------------------------------------------

BUILT_OBJECT_TYPE=SHARED LIBRARY

# CC flags
LOCAL_CCFLAGS   = 

LINK_WITH=$(LINK_WITH_FOR_IID)        KR0CPP KR0DRIV KR0XXX KR0CCC\
                  AC0XXLNK AC0SPBAS AD0XXBAS NS0S3STR \
                  JS0CORBA JS0ERROR JS0SCBAK JS0STR JS03TRA \
                  CO0LSTPV CO0LSTST CO0LSTPV CO0RCINT  CO0RCDBL\
                  CK0FEAT KnowledgeItf CATExpertDriver CATKnowledgeModeler

# -------------------------------------------------------------------------

OS 	= AIX

# templates aix
INSTANCIATION_MODE = -qnotempinc

# -------------------------------------------------------------------------

OS 	= IRIX

# templates irix
INSTANCIATION_MODE = -no_auto_include -no_prelink

# -------------------------------------------------------------------------

OS = HP-UX

INSTANCIATION_MODE = -pta -ptv

# -------------------------------------------------------------------------

OS = SunOS

#INSTANCIATION_MODE = -pta -ptv

# -------------------------------------------------------------------------

OS = Windows_NT

