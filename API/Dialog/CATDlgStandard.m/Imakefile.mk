#==================================================================================================#
#==================================================================================================#
#=                                                                                                =#
#=         WARNING - THIS FILE IS IDENTICAL BETWEEN V5 AND V6 - PLEASE KEEP IT IDENTICAL          =#
#=                                                                                                =#
#==================================================================================================#
#==================================================================================================#

#======================================================================
# Imakefile for module CATDlgStandard.m
#======================================================================
#
#======================================================================
# Shared Library
#======================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

CUSTOM_LINK_WITH =

# JS0FILE is needed in V5
#if !defined (CATIAR201)
CUSTOM_LINK_WITH = JS0FILE \ # System
#endif

LINK_WITH = $(CUSTOM_LINK_WITH) \
  DI0PANV2 \ # Dialog
  JS0FM JS0GROUP \ # System

#
OS = Windows
# Remove some annoying warnings
LOCAL_CCFLAGS = /wd4275 /wd4577
# For official CATIAV5Precompiled.h to include afxwin.h
MKMFC_DEPENDENCY = YES

# On iOS, use CATDlgCocoaDrv
OS = iOS
BUILD = NO

# On Android, use CATDlgAndroidDrv
OS = Android
ALIASES_ON_IMPORT = CATDlgAndroidDrv
BUILD = NO
