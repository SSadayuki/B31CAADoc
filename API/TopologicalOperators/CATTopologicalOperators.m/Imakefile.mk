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
INCLUDED_MODULES = BODYNOPE BONEWOPE  Replay_TopologicalOperators \
                   Draft Fillet Ribbon Thick GenHeal \
                   BO0LOGRP BO0SWEEP BOHYBOPE \
                   HybBoolean  \
                   TopoOperError Primitives HybFillet AnalysisTools CATTopCheck \
                   BOTOPOPE BOIMPOPE WireExtrapol Parallel BodiesMapping SkinWireImp \
                   CFSEngine TopologicalOpeItf AdvTopoSketch  AdvOpeInfra AdvTrimOpe \
                   BodyDatumiserBridgeImpl MultiWireCoupling \ 
#ifdef CATIAV5R22
                   CATThickImpl CATTopImpl PBE BOO THK \
                   CATFDGImpl RIB FIL DRF PAR FacRepSur RLM \
                   CATTopTool aRIB aTHK aBOO TopoMatch
#endif

#
#  //-------------------------------------------------------------------------------------
#  // TCX 28-09-99 : interdiction absolue et definitive de referencer GeometricObjectsCGM
#  //   Les outils de DEBUG sont offerts dans GeometricObjects :
#  //       CATCGMDebug.h et CATCX_NCGM.h
#  //-------------------------------------------------------------------------------------
#
#ifdef CATIAV5R27
DUMMY_LINK_WITH=CATGMPolyOperators
#else
DUMMY_LINK_WITH=
#endif

LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  Extrude \
  CATMathematics \
  CATMathStream \
  CATTechTools \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATAdvancedMathematics \
  CATGeometricOperators \
  CATTopologicalObjects \
  CATTopTool \
  CATTopImpl \
  CATThickImpl \
  CATSysMultiThreading \
  CATFDGImpl \
  CATTopologicalOperatorsLight \
  CATGMOperatorsInterfaces \
  CATGMModelInterfaces \
  $(DUMMY_LINK_WITH) \
  MPROCTools

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATTopologicalOperators CATTopologicalOperatorsLight CATGMModelInterfaces CATGMOperatorsInterfaces
#endif
#             
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

#ifdef CATIAV5R22
OS = AIX
LOCAL_LDFLAGS =  -bbigtoc
#endif
