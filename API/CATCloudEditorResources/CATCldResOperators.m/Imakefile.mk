#==============================================================================================================
# COPYRIGHT DASSAULT SYSTEMES PROVENCE 1999
#==============================================================================================================
# Imakefile for module CATCldResOperators.m
#==============================================================================================================
# 28-Feb-2008 - YNS - Ajout de CATCldResMeshMorphing et de TopoMorph
# 06-Déc-2006 - DNR - Ajout dans les LINK_WITH de CATCbtSmoothing 
# 25-Aug-2006 - CQO - Suppression temporaire de CATCqgServices cause pb packaging dans 161 produits
# 02-Aug-2006 - JLH - Nettoyage pour la V5R18.
# 14-Nov-2005 - YSN - Supprimer CATGmoUtilities 
# 04-Apr-2005 - JLH - Renomination en CATCldResProjections
# 09-Sep-2003 - JLH - Suppression de CATFreeStyleResources, CATSurfacicUIResources et CATSurfacicResources
# 08-Aug-2003 - CQO - Ajout de CATSurfacicUIResources et CATSurfacicResources
# 06-Nov-2002 - JLH - Split de CATCldResOperators avec CATCldResMeshers
# ??-Oct-1999 - STA - Creation
#==============================================================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY 

INCLUDED_MODULES = \
  CATCldBreakLines \
  CATCldQLC \
  CATCldResMeshMorphing \
  CATCldResMeshExtend \
  CATCldResOperImport \
  CATCldResOperServices \
  CATCldResProjections \
  CATCldResRegistration \
  CATMshOperators \
  CATPolyFillHoleOperators

COMMON_LINK_WITH = \
  AC0SPBAS \
  BasicTopology \
  CATCGMGeoMath \
  CATCbtSmoothing  \
  CATCldResMeshInria \
  CATCldVisualization \
  CATCloudBasicResources \
  CATCloudCGMUtilities \
  CATCloudEditorItf \
  CATFaiItf \
  CATFsiItf \
  CATFuzzyPolyOper \
  CATGeometricObjects \
  CATGitInterfaces \
  CATInteractiveInterfaces \
  CATMathStream \
  CATMathematics \
  CATPolyCanonicOperators \
  CATPolyhedralInterfaces \
  CATPolyhedralOperators \
  CATQsrResAlgoUtilities \
  CATQsrResAlgorithms \
  CATSmgAdvOperators \
  CATSubdivisionObjects \
  CATVisualization \
  CATViz \
  CD0WIN \
  CK0FEAT \
  CO0LSTPV \
  CO0RCINT \
  FrFFitting \
  FrFLoft \
  JS0FM \
  JS0GROUP \
  MathMeshParam \
  MecModItfCPP \
  ObjectModeler \
  PlateFE \
  PolyMeshImpl \
  Primitives \
  SolverInterface \
  TessAPI \
  TopoMorph \
  Y30A3HGG \
  YI00IMPL \
  YN000FUN

#  DNR : Pour excavation 3D a mettre quand les operateurs booleens seront livres.  

# if (os Windows_NT || os win_b64)

LINK_WITH = ${COMMON_LINK_WITH} \
  CATR3DIndexedBoolean \
  CATR3DSweepAndMS

#else

LINK_WITH = ${COMMON_LINK_WITH}

#endif

ALIASES_ON_IMPORT = CATCldResOperators CATCloudBasicResources

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
