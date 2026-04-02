# COPYRIGHT DASSAULT SYSTEMES 2004
#======================================================================
# Imakefile for module Plug2D.m
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

LOCAL_CCFLAGS_ASSERT=-DNOT_CDS_ASSERT $(MKMK_DEBUG:+"-DCDS_ASSERT")

#if os Windows
LOCAL_CCFLAGS=-D_HAS_EXCEPTIONS=0 $(LOCAL_CCFLAGS_ASSERT)
#elif os Linux
LOCAL_CCFLAGS=-std=c++0x -DCPP11_AVALAIBLE $(LOCAL_CCFLAGS_ASSERT)
#else
LOCAL_CCFLAGS=$(LOCAL_CCFLAGS_ASSERT)
#endif

