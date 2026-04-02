# COPYRIGHT DASSAULT SYSTEMES 2004, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module CATFuzCallbacks.m
#======================================================================
#
# Mar 2004 Creation: ndo
#======================================================================
#if defined (CATIAV5R17) || defined (CATIAR201)

BUILT_OBJECT_TYPE=NONE 
BUILD=NO

#else

BUILT_OBJECT_TYPE=SHARED LIBRARY 

# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = \
JS0FM JS0GROUP 
# END WIZARD EDITION ZONE

LINK_WITH = $(WIZARD_LINK_MODULES) \
  CATPolyhedralInterfaces \
  CATMathStream

INCLUDED_MODULES = 

# System dependant variables
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

#endif

