#if defined(CATIAR201)

BUILD=NO
BUILT_OBJECT_TYPE=NONE

#else

BUILT_OBJECT_TYPE=SHARED LIBRARY
 
LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH = CATObjectModelerBase CATObjectSpecsModeler \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
                                       CATTopologicalObjects \
                                       CATPartInterfaces \
                                       JS0GROUP \
    CATMechanicalModeler \
    CATSketcherInterfaces \
    CATGitInterfaces \
                                       CATGeometricObjects \ 
    AS0STARTUP \
    CATMatItfCPP \
    CATInteractiveInterfaces \
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATProductStructure1 \
#
#endif
#endif

#endif
