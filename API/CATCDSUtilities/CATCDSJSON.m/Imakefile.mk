# COPYRIGHT DASSAULT SYSTEMES 2020
#======================================================================
# Imakefile for module CATCDSJSON.m
#======================================================================

BUILT_OBJECT_TYPE=NONE

LINK_WITH=JS0GROUP

LOCAL_CCFLAGS_ASSERT=-DNOT_CDS_ASSERT $(MKMK_DEBUG:+"-DCDS_ASSERT")

#if os Windows
LOCAL_CCFLAGS=-D_HAS_EXCEPTIONS=0 $(LOCAL_CCFLAGS_ASSERT)
#else
LOCAL_CCFLAGS=$(LOCAL_CCFLAGS_ASSERT)
#endif

