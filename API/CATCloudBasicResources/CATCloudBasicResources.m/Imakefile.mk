#==============================================================================================================
# COPYRIGHT DASSAULT SYSTEMES PROVENCE 2005
#==============================================================================================================
# Imakefile for module CATCloudBasicResources.m
#==============================================================================================================
# 12-Jul-2010 - DNR - Nouveau module CATCldExactPredicates.
# 29-Aug-2008 - DNR - Nouveau module CATCldResProjection. Re-descente de la projection de Resources à 
#                     BasicResources et mise en place d'un format de données neutre.
# 14-Sep-2007 - DNR - Ajout de YP00IMPL dans les "LINK_WITH", pour 3DMesher.
# 09-Mar-2005 - JLH - Création.
# 22-Jun-2006 - YSN - Ajouter YP00IMPL necessaire pour la migration de CATGeoFactory::GetProtectedInterface 
#                     vers CATGeoFactoryProtected::GetFactoryProtectedInterface
#==============================================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = \
  CATCldResCharacteristicPoints \
  CATCldResCompare \
  CATCldResCurvatures  \
  CATCldResFilters \
  CATCldResMeshers \
  CATCldResProjection \
  CATCldResServices

LINK_WITH = \
  CATCldResMeshInria \
  CATCloudExactPredicates \
  CATMathematics \
  JS0ERROR

# System dependant variables
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
