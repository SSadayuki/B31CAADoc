#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
BasicTopologicalOpeUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#

#ifndef CATIAR212
#if defined(CATIAV5R23)
VERSIONNED_INCL = XHealing
#elif defined(CATIAV5R22)
VERSIONNED_INCL = XHealing \
  AutoParallel CATHybridVariableOffset CATUnFoldedAero FrFShellUnfold FuncTopology CATFuzzySurfaceOffset
#else
VERSIONNED_INCL = FuncTopology
#endif
#endif

INCLUDED_MODULES = AdvancedFillet AdvancedDraft AdvGenHeal \
				   BasicTopology CATCleverOffset CATRegularisator \ 
				   YJ000GSM  BasicTopoOpeItf \
				   CATBorderDerivationCleaner Distance Pick Replay_BasicTopologicalOpe \
				   CATBtoSmoothing   \
                                   $(VERSIONNED_INCL)

VERSIONNED_LINK = CATCurveBasedTopoOperators CATPolyhedralObjects CATPolyhedralOperators CATPolyhedralMathematicsDummy CATPolyhedralInterfaces

VERSIONNED_LINK_2 =
#if defined(CATIAV5R27)
VERSIONNED_LINK2 = CATGMPolyOperators
#elif defined(CATIAR419)
VERSIONNED_LINK2 = CATGMPolyOperators

#endif

LINK_WITH= CATStatsTreeUtilities \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  JS03TRA \
  JS0SCBAK \
  CATMathematics \
  CATMathStream \
  CATTechTools \
  CATGeometricObjects \
  CATGeometricObjects_MProc \
  MPROCTools \
  CATCGMGeoMath \
  CATAdvancedMathematics \
  CATGeometricOperators \
  CATTopologicalObjects \
  CATTopologicalOperators \
  TopHeal \
  CATTopologicalOperatorsLight \
  CATFDGImpl \
  CATFreeFormOperators \
  CATAdvancedTopologicalOpe \
  TessAPI \
  TessPolygon \
  HLRTools \
  CATTesHLRUtilities \
  CATFreeFormOperatorsFFit \
  CATSurfacicTopoOperators \
  CATSurfacicMathematics \
  CATSurfacicGeoOperators \
  CATFuzzyPolyOper \
  CATFuzzyOperators \
  CATSysMultiThreading \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces \
  CATSGMOperatorsInterfaces \
  $(VERSIONNED_LINK) \
  $(VERSIONNED_LINK2) \

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATBasicTopologicalOpe CATGMModelInterfaces CATGMOperatorsInterfaces CATGMAdvancedOperatorsInterfaces CATSGMOperatorsInterfaces CATTopologicalOperatorsLight
#endif

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

