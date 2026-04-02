# COPYRIGHT DASSAULT SYSTEMES 2003, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module CATFuzzyOperators.m
#======================================================================
#
# Sep 2003 Creation LVL
#======================================================================
## Activate the following in r1.x #define ENABLE_PROXIMITY_QUERY_CHU
BUILT_OBJECT_TYPE=SHARED LIBRARY 

# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = \
JS0FM JS0GROUP 
# END WIZARD EDITION ZONE

LINK_WITH = $(WIZARD_LINK_MODULES) \
CATMathematics \
CATMathStream \
CATFuzOperators	\
CATPolyhedralInterfaces \
#ifdef ENABLE_PROXIMITY_QUERY_CHU
CATViz
#endif

# System dependant variables
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
