#
# Copyright Dassault Systemes Provence 2013, all rights reserved
#
#==============================================================================
# Imakefile for module CATExpPoolAllocator.m
#==============================================================================
#
# Historique :
#  14/06/2019 : RNO : Build Linux
#  2013-05-10 : T6L : Creation
#
#==============================================================================
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 

INCLUDED_MODULES =

LINK_WITH = 

#==============================================================================

BUILD = YES

OS = AIX
BUILD = NO

OS = Linux
# CPT on 2020/11/12: to prevent to link with unresolved symbols
# set LOCAL_2NDLDFLAGS only if ( MKMK_GCC_SANITIZER does not exist or is empty )
LOCAL_2NDLDFLAGS=$(MKMK_GCC_SANITIZER:%-"-Wl,-z,defs ")
#rem: set MY_LTOOPT_RELEASE only if ( MKMK_GCC_SANITIZER does not exist or is empty ) and if ( MKMK_DEBUG does not exist or is empty )
MY_LTOOPT=$(MKMK_GCC_SANITIZER:%-"-flto")
MY_LTOOPT_RELEASE=$(MKMK_DEBUG:%-MY_LTOOPT)
LOCAL_POST_CFLAGS= $(MY_LTOOPT_RELEASE)
LOCAL_POST_CCFLAGS= $(MY_LTOOPT_RELEASE)
