#===================================================================================================
# COPYRIGHT DASSAULT SYSTEMES 2002
#===================================================================================================
# Imakefile for module CATQsrResAlgoUtilities.m
#===================================================================================================
# 19-Dec-2012 - JLH - Ajout de CATGMOperatorsInterfaces
# 13-Jul-2004 - YSN - Ajout de CATViz
# 24-Feb-2003 - YSN - Ajout de AD0XXBAS
# 08-Aug-2003 - CQO - Ajout de CATSurfacicUIResources et CATSurfacicResources
# ??-Feb-2002 - TTD - Suppression LINK_WITH inutiles
#                     YN000FUN CATAdvancedTopologicalOpe CATCldResOperators CATFrrOperators
#                     Y30A3HGG MF0STARTUP CATSurfacicTopoOperators
# ??-Jan-2002 - GDD - Création
#===================================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY 
 
LINK_WITH = \
  AC0SPBAS \
  AD0XXBAS \
  CATAdvancedMathematics \
  CATCGMGeoMath \
  CATCldResOperators \
  CATCloudBasicResources \
  CATGMOperatorsInterfaces \
  CATGeometricObjects \
  CATMathStream \
  CATMathematics \
  CATViz \
  FrFAdvancedOpeCrv \
  JS0GROUP \
  YI00IMPL

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
