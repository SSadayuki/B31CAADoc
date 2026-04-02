#==============================================================================
#
# Copyright DASSAULT SYSTEMES 2001-2018, all rights reserved
#
#==============================================================================
#
# Imakefile pour le Module CATPolyCanonicOperators.m (V5)
#
# Historique : 
# 16.04.2018 : NUA : Watershed n'est dispo qu'a partir de la R421
#
#==============================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH =  \
  CATMathematics \
  CATMathStream \
  CATPolyhedralInterfaces \
  CATPolyhedralMathematics \
  CATPolyhedralObjects \
  CATPolyhedralOperators \
  CATPolyhedralVisualization \
#if defined (CATIAV5R30) || defined (CATIAR422)
  CATPolyhedralOperatorsInterfaces \
#endif
  JS0GROUP \
  YN000FUN

INCLUDED_MODULES = \
  PolyBodyCanonicDetection \
  CATPolyCanonicRecongition \
  CATPolyCanonicProjection \
#if os win_b64  
#if defined (CATIAR421)  
  CATPolyWatershedOperators \
#endif
#endif
  PolyAdvDeform \
#if defined (CATIAV5R30) || defined (CATIAR422)
  PolyOpAdvItf
#endif
