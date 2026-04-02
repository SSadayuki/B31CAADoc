#@ autoformat 12:03:19
# COPYRIGHT Dassault Systemes 2007
#======================================================================
# Imakefile for module CATFrrCPParameters.m
#======================================================================
#
#  Mar 2007  Creation:  hvj
#======================================================================
#
#
BUILT_OBJECT_TYPE=NONE 
 


LINK_WITH = \
    CATFreeStyleResources          \ # FreeStyleResources             CATFreeStyleResources
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    Mathematics                    \ # Mathematics                    CATMathematics
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0CORBA                       \ # System                         JS0GROUP
#
   

# System dependant variables
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT

#INSERTION ZONE NOT FOUND, MOVE AND APPEND THIS VARIABLE IN YOUR LINK STATEMENT
#LINK_WITH = ... $(WIZARD_LINK_MODULES) ...
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = \
    JS0GROUP                       \ # System                         JS0GROUP
#
# END WIZARD EDITION ZONE
