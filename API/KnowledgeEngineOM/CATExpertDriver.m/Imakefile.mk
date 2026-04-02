#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
KnowledgeInterfacesUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
##########################################################################
#
#       makefile customization lib:  KR0OM
#       Ce composant est une implémentation du driver KR0DRIV sur OM
#
##########################################################################
#
# SHARED LIBRARY
#
# -------------------------------------------------------------------------

BUILT_OBJECT_TYPE=SHARED LIBRARY

# CC flags
LOCAL_CCFLAGS   =

LINK_WITH=$(LINK_WITH_FOR_IID)  KR0DRIV KR0QQQ KR0VVV\
		  KR0CCC\
		  AC0XXLNK AC0SPBAS AD0XXBAS \
		  NS0S3STR \
		  JS0CORBA JS0ERROR JS0SCBAK JS0STR JS03TRA \
		  NS0S3STR \
		  CO0LSTPV CO0LSTST CO0LSTPV CO0RCINT  CO0RCDBL CK0FEAT \
		  KnowledgeItf CATKnowledgeModeler CATLifGenerativeParser

# TVQ enlevé : KR0OM 

# -------------------------------------------------------------------------

OS 	= AIX

# templates aix
#INSTANCIATION_MODE = -qnotempinc

# -------------------------------------------------------------------------

OS 	= IRIX

# templates irix
#INSTANCIATION_MODE = -no_auto_include -no_prelink

# -------------------------------------------------------------------------

OS = HP-UX

INSTANCIATION_MODE = -pta -ptv

# -------------------------------------------------------------------------

OS = SunOS

#INSTANCIATION_MODE = -pta -ptv

