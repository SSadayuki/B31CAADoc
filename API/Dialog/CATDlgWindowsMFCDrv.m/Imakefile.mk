#======================================================================
# Imakefile for module CATDlgWindowsMFCDrv.m
#======================================================================
# Nov 2017 Created by NCT
#======================================================================
# Shared Library
#======================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY

BUILD = NO

#
OS = Windows
#if defined(ENABLE_DI0PANV2_SPECIFIC_BUILD)
BUILD=YES
#endif
# For official CATIAV5Precompiled.h to include afxwin.h
MKMFC_DEPENDENCY = YES
