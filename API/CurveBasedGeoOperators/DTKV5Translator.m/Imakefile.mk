# Copyright Dassault Systemes Provence 1999-2012, all rights reserved
#==============================================================================
# Imakefile for module DTKV5Translator.m
#==============================================================================
#  Aug 2012 On ne build pas sur iOS (voir MOBILE)                           mmo
#  Jul 2004 Optimisation O2                                                 amr
#  Oct 2002 plus de reference a la R9                                       mmo
#  Fev 2002 Ajout des options pour le compilateur Fortran SUN en R9         mmo
#  Jan 2000 This module is in CATCurveBasedGeoOperatorsA.m                  mmo
#  Nov 1999 BUILT_OBJECT_TYPE=NONE for the bigger module                    mmo
#           CATCurveBasedGeoOperators.m
#  Jul 1999 Add LOCAL_CCFLAGS = -DOS_AIX for AIX                        mmo,jpi
#==============================================================================
#

# SHARED LIBRARY sauf sur les mobiles ou on ne compile pas a cause du FORTRAN

#if os MOBILE
BUILD=NO
#else
BUILT_OBJECT_TYPE=NONE
#endif

#
OS = COMMON

LOCAL_CCFLAGS=-DSMARTTRACEON
LOCAL_CCFLAGS=-DCXTRACEON

#
OS = AIX
LOCAL_CCFLAGS = -DOS_AIX

#
OS = IRIX

#
OS = HP-UX

#
OS = SunOS

OPTIMIZATION_CPP = -xO4
OPTIMIZATION_FORTRAN = -xO4

#
OS = Windows_NT
LOCAL_CCFLAGS = /D "WNT" /D "CSFDB"
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif


