# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module CATWTTesselation.m
#======================================================================
#
#  Jul 2004  Creation: CTJ
#  02/06/2005 : CSO - devient une dll independante (besoin ServicesWTTItf)
# rem : la dependance avec algos doit disparaitre (Tesssurfacesupport et catfpmeshattr.)
#  16/06/2005 : LAM : Ajout CATGENLib et SysCascadeMfg pour la tesselation de la SS
#  01/07/2005 : CSO : Suppression dependance MachinistAlgos1 (Catfpmesh)
#  28/11/2005 : CSO : Ajout CATCloudBasicResources pour utiliser CATCldPixellision
# rem : Dependance CATTesselation : CATGENLib et SysCascadeMfg Only.
#  11/10/2005 : CSO : Pour tests debug memory on remet MachinistAlgos1
#  10/11/2005 : CSO : MESH PH2 - Suppression de CATWTT_SDManuf des Includes_modules
#                                Suppression de MachinistAlgos1
#                                Ajout de CATSDM_ManufDomain.dll pour la SDM
#  05/06/2006 : CSO - Archi WTT/CGM . Utilisation de CATWTTesselationBase au lieu Manuf_Domain
#                     Suppression de CATGENLib et SysCascadeMfg 
#                     suppression de CATObjectModelerBase CATGeometricOperators CATPolyhedralInterfaces (inutiles)
#  27/07/2006 : SCT : Correction PB packaging : Suppression auto reference a CATWTTesselation dans le
#                     BUILT_OBJECT_TYPE
#  04/04/2007 : CTJ : Ajout de Y30UIUTIPour calculer des courbures dans le WTT
#  21/11/2008 : TYF : Ajout de CATPolyhedralMathematicsDummy pour utiliser des CATMapOf
#======================================================================
#
# SHARED LIBRARY 
#
# Toolkit contenant les algos  WTT
BUILT_OBJECT_TYPE = SHARED LIBRARY


#Modules constitutifs.
INCLUDED_MODULES = CATWTTesselationNoyau 

LINK_WITH =   CATCGMGeoMath  CATMathStream  \
             JS0GROUP CATGeometricObjects CATTopologicalObjects  \
               CATMathematics AdvancedMathematics \	  
                 CATCloudBasicResources FrFTopologicalOpe \
			   CATHealingAssistantAlgos  CATPolyhedralOperators\
               CATWTTesselationBase Y30UIUTI CATPolyhedralMathematicsDummy MPROCTools
			 

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
