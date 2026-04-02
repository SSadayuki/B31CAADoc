# COPYRIGHT DASSAULT SYSTEMES 2016
#======================================================================
# Imakefile for module CATCDSGraph.m
#======================================================================

BUILT_OBJECT_TYPE=NONE

LINK_WITH=JS0GROUP

LOCAL_CCFLAGS_ASSERT=-DNOT_CDS_ASSERT $(MKMK_DEBUG:+"-DCDS_ASSERT")

#if os Windows
LOCAL_CCFLAGS=-D_HAS_EXCEPTIONS=0 $(LOCAL_CCFLAGS_ASSERT)
#else
LOCAL_CCFLAGS=$(LOCAL_CCFLAGS_ASSERT)
#endif

