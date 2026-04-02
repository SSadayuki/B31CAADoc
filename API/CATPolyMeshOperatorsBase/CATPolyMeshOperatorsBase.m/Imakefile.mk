# COPYRIGHT DASSAULT SYSTEMES 2003-2004, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module CATPolyMeshOperatorsBase.m
#======================================================================
#
# June 2003 Creation NDO
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = \
JS0FM JS0GROUP 
# END WIZARD EDITION ZONE

LINK_WITH_FOR_IID = \
YP00IMPL

LINK_WITH = $(WIZARD_LINK_MODULES) $(LINK_WITH_FOR_IID) \
CATMathematics \
CATTessellation \
AdvancedMathematics \
Y30A3HGG \
HLRTools \
CATNewTopologicalObjects \
CATCGMGeoMath \
CATPolyhedralInterfaces \
CATPolyhedralOperators \
PolyFactoryImpl \
CATFuzzyPolyOper \
CATMathStream TessPolygon

INCLUDED_MODULES = CATCldOperatorsBase \
CATCldUtilitiesBase \
CATCldMeshCrv \
CATCldExtensions \
CATCldBoundingVol \
CATCldMeshOptimize

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
