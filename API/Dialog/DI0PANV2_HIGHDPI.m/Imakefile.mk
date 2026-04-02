#======================================================================
# Imakefile for module DI0PANV2_HIGHDPI.m
#======================================================================
# Feb 2018 Created by NCT
#======================================================================
# Shared Library
#======================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY

DELIVERABLE = NO

BUILD = NO

#if defined(ENABLE_DI0PANV2_SPECIFIC_BUILD)
BUILD=YES
#endif

COMMON_LINK_WITH = \
  CATSysFile CATSysMultiThreading CATSysRunBrw JS0FM JS0GROUP \ # System
  CATVBAInfra VBAIntegration \ # VBA

#
OS = UNIX
BUILD = NO
LINK_WITH = $(COMMON_LINK_WITH) CATDlgBitmap
LOCAL_CCFLAGS = -DNO_BITMAP_SUPPORT_OLD_API
SRC_LINK_WITH = DI0PANV2
SYS_LIBS = -lXm -lXmu -lXt -lxkbfile -lX11

#
OS = Windows
LINK_WITH = $(COMMON_LINK_WITH) CATDlgBitmap
# Remove some annoying warnings
LOCAL_CCFLAGS = /D"OEMRESOURCE" /wd4275 /wd4577 /D"NO_BITMAP_SUPPORT_OLD_API"
SRC_LINK_WITH = DI0PANV2
# To be added to LOCAL_CCFLAGS when needed
# /D"TRACES_HIGHDPI"
# For official CATIAV5Precompiled.h to include afxwin.h
MKMFC_DEPENDENCY = YES
