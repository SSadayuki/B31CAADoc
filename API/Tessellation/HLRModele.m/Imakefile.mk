#
# Imakefile for the  module HLRModele
#
# History :
#
# Jan. 1998 JCH Creation
# Nov. 1999 HKL Integrationd es reps
# Jul. 2001 LAT Modification pour decouper le HLR et en faire
#               un composant pour SPATIAL

#
BUILT_OBJECT_TYPE=NONE
#BUILT_OBJECT_TYPE=SHARED LIBRARY
#

#ifdef SPATIAL_SPECIFICATION
LOCAL_CCFLAGS = $(COMMON_CCFLAGS) -DHLR_COMPONENT
#endif

#
OS = COMMON

#
OS = AIX

#
OS = IRIX

#
OS = HP-UX

#
OS = SunOS

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
