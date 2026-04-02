#
# Copyright Dassault Systemes Provence 2013-2014, all rights reserved
#
#==============================================================================
# Imakefile for module CATExpNumbersComparisons.m
#==============================================================================
#
# Historique :
#  14/06/2019 : RNO : Build Linux
#  15/05/2014 : MMO : correction des cycles sur Android a partir de R25 et R417
#  02/05/2013 : T6L : Creation
#
#==============================================================================
#

BUILD = YES
BUILT_OBJECT_TYPE= NONE

#==============================================================================

OS = AIX
BUILD = NO

OS = Windows_NT
LOCAL_CCFLAGS=-DWNT /EHsc

OS = Linux
# CPT on 2020/11/12: to prevent to link with unresolved symbols
# set LOCAL_2NDLDFLAGS only if ( MKMK_GCC_SANITIZER does not exist or is empty )
LOCAL_2NDLDFLAGS=$(MKMK_GCC_SANITIZER:%-"-Wl,-z,defs ")
#rem: set MY_LTOOPT_RELEASE only if ( MKMK_GCC_SANITIZER does not exist or is empty ) and if ( MKMK_DEBUG does not exist or is empty )
MY_LTOOPT=$(MKMK_GCC_SANITIZER:%-"-flto")
MY_LTOOPT_RELEASE=$(MKMK_DEBUG:%-MY_LTOOPT)
LOCAL_POST_CFLAGS= $(MY_LTOOPT_RELEASE)
LOCAL_POST_CCFLAGS= $(MY_LTOOPT_RELEASE)
