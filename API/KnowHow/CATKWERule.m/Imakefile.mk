#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GenKnowledgeInterfacesUUID \
KnowHowUUID \
KnowledgeInterfacesUUID \
LiteralFeaturesUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
##########################################################################
#
#       makefile customization lib:  KR0BBB
#
##########################################################################
#
# SHARED LIBRARY
#
# -------------------------------------------------------------------------

BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = RuleAuto Rule Report

# CC flags
LOCAL_CCFLAGS   = -DWITHOUT_EXCEPTION
#ifdef CATIAV5R9		
#if os SunOS		
LINK_WITH_DEBUG = KR0BBB
#else
LINK_WITH_DEBUG =
#endif
#else
LINK_WITH_DEBUG =
#endif
LINK_WITH=$(LINK_WITH_FOR_IID)   	CATGraph KR0GGG\
		KR0CCC KR0DRIV KR0CPP                    \
		KR0DDD KR0FFF KR0HHH KR0III                \
		KR0MMM KR0OOO KR0QQQ \
		KR0RRR KR0VVV KR0WWW KR0XXX                       \
		AD0XXBAS AC0XXLNK AC0SPBAS AC0SPDOC      \
		CATViz VE0GRPH2 VE0MDL           \
		NS0S3STR CO0LSTST CO0LSTPV CO0RCINT CD0FRAME  ON0FRAME \
		JS0CORBA JS0ERROR JS03TRA JS0SCBAK \
		JS0STR JS0GROUP  \
		CK0FEAT GenerativeKnowledgeItf \
		 AS0STARTUP CATMecModInterfaces  \
		CK0FEAT GenerativeKnowledgeItf MecModItf MecModItfCPP \
		CATExpertDriver KnowledgeItf \
		CATKnowledgeModeler CATKweDocument \
		CATInteractiveInterfaces CATLifRelations CATProductStructureInterfaces \
		KS0SIMPL $(LINK_WITH_DEBUG)

# Attention : KS0SIMPL est inutile partout .. sauf sur irix_a !!!

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

# -------------------------------------------------------------------------

OS = Windows_NT



