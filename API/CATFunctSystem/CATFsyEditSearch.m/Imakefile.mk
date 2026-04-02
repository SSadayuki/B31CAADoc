# COPYRIGHT DASSAULT SYSTEMES 2001
#==============================================================================
#
# Imakefile for code module CATFsyEditSearch.m
#
#==============================================================================
# Usage notes:
#
#==============================================================================
# nov. 2003  Creation                                                 E. Sellem
#==============================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY

# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES =  JS0GROUP 


# END WIZARD EDITION ZONE

LINK_WITH=  $(WIZARD_LINK_MODULES) \
            CATCafAutomation \
            CATLiteralFeatures \
            CATLifAutomation \
            CATFunctSystemItf \
            KnowledgeItf \
            AC0SPBAS 

