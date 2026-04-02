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
INCLUDED_MODULES = aRIB aTHK aBOO
#
#  //-------------------------------------------------------------------------------------
#  // TCX 21-12-00 : interdiction de modification du LINK_WITH
#  // Ce module est la Partie Basse d'implementation des Operateurs Topologiques V5
#  //-------------------------------------------------------------------------------------
#
#
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATCGMGeoMath \
          CATTopologicalObjects
#             
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

#endif
