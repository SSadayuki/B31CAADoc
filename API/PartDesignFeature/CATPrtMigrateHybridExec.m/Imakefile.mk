#if defined(CATIAR201)

BUILD=NO
BUILT_OBJECT_TYPE=NONE

#else

BUILT_OBJECT_TYPE=LOAD MODULE 

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH = CATObjectModelerBase CATObjectSpecsModeler \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
                                       CATPartInterfaces \
                                       JS0GROUP \
                                       CATMechanicalModeler \
                                       CATSketcherInterfaces CATGitInterfaces \
									   NS0S3STR AC0SPBAS MF0STARTUP




OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
#
#endif
#endif

#endif
