#ifdef CATIAV5R22
BUILT_OBJECT_TYPE = NONE
#else

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GeometricObjectsUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = THK
#
#  //-------------------------------------------------------------------------------------
#  // TCX 21-12-00 : interdiction de modification du LINK_WITH
#  // Ce module est la Partie Haute d'implementation des Operateurs Topologiques V5
#  //   Le LINK_WITH est bidirectionnel entre CATTopImpl et CATTopologicalOperators
#  //-------------------------------------------------------------------------------------
#
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  CATMathematics \
  CATMathStream \
  CATTechTools \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATAdvancedMathematics \
  CATFreeFormOperators \
  CATGeometricOperators \
  CATTopologicalObjects \
  CATTopologicalOperatorsLight \
  CATTopologicalOperators \
  CATFDGImpl \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces
             

             
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

#endif
