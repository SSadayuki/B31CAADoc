# COPYRIGHT DASSAULT SYSTEMES 2004
#======================================================================
# Imakefile for module CATCDSPlug2DBase.m
#======================================================================
#
#  Mar 2004  Creation:                Evgueni ROUKOLEEV, LEDAS Ltd.
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

INCLUDED_MODULES=Plug2DBase
 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = JS0GROUP
# END WIZARD EDITION ZONE

#if defined(CATIAR215) || defined (CATIAV5R29)
LINK_WITH = \
  $(WIZARD_LINK_MODULES)
#else
LINK_WITH = \
 $(WIZARD_LINK_MODULES) \
 CS0DCM 
#endif

#if os Windows
LOCAL_CCFLAGS=-D_HAS_EXCEPTIONS=0
#OPTIMIZATION_CPP=/O2
#endif
