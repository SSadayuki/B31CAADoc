#@ autoformat 07:01:11
# COPYRIGHT DASSAULT SYSTEMES 2004
#======================================================================
# Imakefile for module CATPrtTechResUI.m
#======================================================================
#
#  Jul 2004  Creation:   juw
#======================================================================
#
# NONE 
#
BUILT_OBJECT_TYPE=NONE 

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH = 
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \

#INSERTION ZONE NOT FOUND, MOVE AND APPEND THIS VARIABLE IN YOUR LINK STATEMENT
#LINK_WITH = ... $(WIZARD_LINK_MODULES) ...
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = \
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATMathematics                 \ # Mathematics                    CATMathematics
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
#
# END WIZARD EDITION ZONE

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
