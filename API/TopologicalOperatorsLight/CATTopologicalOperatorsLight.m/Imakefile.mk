#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GeometricObjectsUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
INCLUDED_MODULES = FlexibleBRep TopExtLight TopHeal TopUtilLight TopoOpeLightItf TopPersistentLight \
                   AdvTopoSketchLight ParallelLight RibbonLight AnalysisToolsLight HybOper BOHYBOPELight PARLight RIBLight SHL TopoOperModel  PrimitivesLight PBELight BOOLight \
                   BODYNOPELight ThickLight NewTopoObjGMOpeItf BO0SWEEPLight DistanceLight
#  //-------------------------------------------------------------------------------------
#  // TCX 21-12-00 : interdiction de modification du LINK_WITH
#  // Ce module est la Partie Haute d'implementation des Operateurs Topologiques V5
#  //   Le LINK_WITH est bidirectionnel entre CATTopImpl et CATTopologicalOperators
#  //-------------------------------------------------------------------------------------
#

#  //  15/06/2005 PKC/CWM pour variable G1

          
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  CATMathematics  \
  CATGeometricObjects \
  CATMathStream \
  CATTechTools \
  CATCGMGeoMath \
  CATGeometricOperators \
  CATTopologicalObjects \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces \
  CATGeometricObjectsCGM \
  CATAdvancedMathematics \
  PolyMathIntersectors \
  PolyhedralModel \
  PolyMeshImpl \
  PolyFactoryImpl \
  HLRTools \
  TessAPI \
  TessPolygon \
#if defined (CATIAV5R27) || defined(CATIAR419)
  GMPolyBasicOper \
#endif

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATTopologicalOperatorsLight CATGMModelInterfaces CATGMOperatorsInterfaces
#endif

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

