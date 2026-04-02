#@ autoformat 16:08:07
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

BUILD = YES

INCLUDED_MODULES=GSMVisuGraph

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    JS0CORBA                       \
    AC0SPBAS                       \
    CATMecModExtendItf             \
    CATGmoMecMod                   \
	GSMVisuUtilities               \ # GSMVisu						  GSMVisuUtilities
    CATMmrSpecToVisu               \
    CATMecModLiveInterfaces        \
	KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    MecModItfCPP                   \
    CATMecModUseItf                \
    CATGitInterfaces               \
    CATMmlSys                      \
    PrtEnv                         \
    CATGraphicProperties           \
    CATOMY                         \
    CATOmnMain					   \
	CATGotInterfaces			   \
	CATGmoInterfaces

#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
CATGMModelInterfaces			 \
CATSurfacicResources             \
CATVisItf                        \
SceneGraphManager				 \
CATMecModLiveUseItf				 \
CATSysTS                         \ # SystemTS                       CATSysTS
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
CATVisualization                 \
CATInteractiveInterfaces         \  
NS0S3STR                         \ # System                         JS0GROUP
#
#endif
#endif
