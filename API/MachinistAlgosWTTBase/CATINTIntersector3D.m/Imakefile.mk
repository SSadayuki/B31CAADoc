# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module CATWTT_SDManufDomain.m
#======================================================================
#
#  Jan 2006  : CSO ; Creation pour autonomie algos (Domain SDM + SDMAttribute)
#  May 2006  : CSO ; Archi WTT/CGM - integre dans la dll CATWTTesselationBase
#    
#======================================================================
# SHARED LIBRARY 
#
# Structure de Donnees maillage (SDM)
BUILT_OBJECT_TYPE = NONE


# System dependant variables
OS = COMMON
LOCAL_CFLAGS= -DCSFDB -DST_Pointer=int  -DCV5
LOCAL_CCFLAGS= -DCSFDB -DST_Pointer=int  -DANSI -D_AFXDLL -DCV5
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
LOCAL_CFLAGS=-DWNT -DCSFDB -DST_Pointer=int -DWIN32 -D_WINDOWS -DCV5
LOCAL_CCFLAGS=-DWNT -DCSFDB -DST_Pointer=int -DWIN32 -D_WINDOWS -DANSI -D_AFXDLL -DCV5 -DWNT

OPTIMIZATION_CPP = /O2
