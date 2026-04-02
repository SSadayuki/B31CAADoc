# COPYRIGHT DASSAULT SYSTEMES 2015
#======================================================================
# Imakefile for module CATCDSUtilities.m
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES=CDSMathematics CATCDSGraph CATCDSJSON

LOCAL_CCFLAGS_ASSERT=-DNOT_CDS_ASSERT $(MKMK_DEBUG:+"-DCDS_ASSERT")

#if os Windows
LOCAL_CCFLAGS=-D_HAS_EXCEPTIONS=0 $(LOCAL_CCFLAGS_ASSERT)
#elif os Linux
LOCAL_CCFLAGS=-std=c++0x -DCPP11_AVALAIBLE $(LOCAL_CCFLAGS_ASSERT)
LOCAL_POST_CCFLAGS=-fvisibility=default
#elif os SunOS
LOCAL_CCFLAGS=-D_RWSTD_NO_MUTABLE=1 $(LOCAL_CCFLAGS_ASSERT)
#else
LOCAL_CCFLAGS=$(LOCAL_CCFLAGS_ASSERT)
#endif

# to link with our own new/delete operators
LOCAL_LD_ADDED_OBJECTS=

LINK_WITH=


