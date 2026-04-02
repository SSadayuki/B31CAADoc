# COPYRIGHT DASSAULT SYSTEMES 2004
#======================================================================
# Imakefile for module Plug2DBase.m
#======================================================================
#
#  Mar 2004  Creation:                Evgueni ROUKOLEEV, LEDAS Ltd.
#======================================================================
#
# NONE 
#
BUILT_OBJECT_TYPE=NONE 
 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = JS0GROUP
# END WIZARD EDITION ZONE

LINK_WITH = $(WIZARD_LINK_MODULES)

#if os Windows
LOCAL_CCFLAGS=-D_HAS_EXCEPTIONS=0
#OPTIMIZATION_CPP=/O2
#endif
