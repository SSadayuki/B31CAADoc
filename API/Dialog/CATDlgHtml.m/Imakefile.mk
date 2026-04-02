#==================================================================================================#
#==================================================================================================#
#=                                                                                                =#
#=         WARNING - THIS FILE IS IDENTICAL BETWEEN V5 AND V6 - PLEASE KEEP IT IDENTICAL          =#
#=                                                                                                =#
#==================================================================================================#
#==================================================================================================#

#======================================================================
# Imakefile for module CATDlgHtml.m
#======================================================================
#
#======================================================================
# Shared Library
#======================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = JS0GROUP CATSysTS JS0FM DI0PANV2

#
OS = Windows
# Remove some annoying warnings
LOCAL_CCFLAGS = /wd4275 /wd4577
# For official CATIAV5Precompiled.h to include afxwin.h
MKMFC_DEPENDENCY = yes

#
OS = Darwin
LOCAL_LDFLAGS = -framework Cocoa -framework WebKit

#
# On iOS, use CATDlgCocoaDrv
OS = iOS
BUILD = NO

#
# On Android, use CATDlgAndroidDrv
OS = Android
ALIASES_ON_IMPORT = CATDlgAndroidDrv
BUILD = NO
