#==============================================================================
# Imakefile for module CATExpShewchuk.m
#==============================================================================
#
# Historique :
#  28/05/2019 : TE9 : Creation
#
#==============================================================================
#

BUILT_OBJECT_TYPE=ARCHIVE

#==============================================================================

#if defined(CATIAR421) || defined(CATIAV5R29)
BUILD=YES
#else
BUILD=NO
#endif

ALLOW_STATIC_LINK=YES

OS = Linux
# CPT on 2020/11/12: to prevent to link with unresolved symbols
# set LOCAL_2NDLDFLAGS only if ( MKMK_GCC_SANITIZER does not exist or is empty )
LOCAL_2NDLDFLAGS=$(MKMK_GCC_SANITIZER:%-"-Wl,-z,defs ")
