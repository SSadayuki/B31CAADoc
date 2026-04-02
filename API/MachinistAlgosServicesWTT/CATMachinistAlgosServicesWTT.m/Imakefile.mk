#
# Toolkit contenant les services de base WTT 
# CSO : 02/06/2005 Creation 
# CSO : 27/01/2006 Maj avec les SDM Domain.
# CSO : 05/06/2006 Remplace CATSDM_ManufDomain par CATWTTesselationBase
# TYF : 06/11/2008 Ajout de CATPolyhedralMathematicsDummy pour utilsation chainage des SDMTriangles
# TYF : 22/04/2009 Ajout de CATPolyhedralObjects pour la creation de CATIPolyMesh

#
BUILT_OBJECT_TYPE = SHARED LIBRARY

#Modules constitutifs.
INCLUDED_MODULES = CATMachinistAlgosServicesWTT

LINK_WITH = JS0GROUP JS0FM CATMachinistAlgosServicesWTTItf MachinistAlgosServicesWTTItfUUID \
CATWTTesselation CATWTTesselationBase CATMathematics CATTopologicalObjects CATPolyhedralMathematicsDummy  CATPolyhedralObjects



OS=COMMON
LOCAL_CCFLAGS=-DCSFDB -DST_Pointer=CATINTPTR -DANSI -DCV5
#
OS = Windows_NT
LOCAL_CCFLAGS=-DWNT -DCSFDB -DST_Pointer=CATINTPTR -DWIN32 -D_WINDOWS -DANSI -D_AFXDLL -DCV5

