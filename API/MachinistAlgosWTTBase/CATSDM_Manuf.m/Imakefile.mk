# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module CATWTT_SDManuf.m
#======================================================================
#
#  Jan 2006  : CSO ; Creation.
#  May 2008  : CSO ; Utilisation de CATWTTesselationBase au lieu Manuf_Domain
#  May 2010  : CSO ; Move the module from MachinistAlgosBase to AlgosWTTBase, 
#                   along with the 3 Protected: CATExpSDM_Manuf.h  CATSDM_Manuf.h  CATSDM_ManufHDomain.h
# 		    and the suppression of SysCascadeMfg here below
#                  BUT reverse delivery as we cannot do this after the GA   pfffff 
#  Sep 2010 : CSO - R21 OK Move the module to WTTBase
#======================================================================
# SHARED LIBRARY 
#
# Toolkit contenant la Structure de Donnees maillage (SDM)
BUILT_OBJECT_TYPE = SHARED LIBRARY


#Modules constitutifs.
INCLUDED_MODULES = CATSDM_Manuf


LINK_WITH =   CATCGMGeoMath  CATMathStream  \
             JS0GROUP CATGeometricObjects CATTopologicalObjects  \
              CATMathematics  CATWTTesselationBase 

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


