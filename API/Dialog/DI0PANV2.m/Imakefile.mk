#======================================================================
# Imakefile for module DI0PANV2.m
#======================================================================
#
#======================================================================
# Shared Library
#======================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = CATDlgDSGen

COMMON_LINK_WITH = \
  CATSysFile CATSysMultiThreading CATSysRunBrw JS0FM JS0GROUP \ # System
  CATVBAInfra VBAIntegration \ # VBA

#
OS = UNIX
LINK_WITH = $(COMMON_LINK_WITH) CATDlgBitmap
SYS_LIBS = -lXm -lXmu -lXt -lxkbfile -lX11

#
OS = Windows
LINK_WITH = $(COMMON_LINK_WITH) CATDlgBitmap
# Remove some annoying warnings
LOCAL_CCFLAGS = /D"OEMRESOURCE" /wd4275 /wd4577
# To be added to LOCAL_CCFLAGS when needed
# /D"TRACES_HIGHDPI"
# For official CATIAV5Precompiled.h to include afxwin.h
MKMFC_DEPENDENCY = YES
