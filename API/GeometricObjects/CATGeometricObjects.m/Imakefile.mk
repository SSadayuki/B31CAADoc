
#-------------------------------------------------------------------------------------------------------------------
#        DO NOT ADD STATIC PREREQUISITE : INTERFACE FRAMEWORK BY SPECIFICATION 
#  For Optimal Cold Start of deafult Interactive Application with Minimal Modeling FootPrint 
#  Responsible : current 666 initial shared lib loaded for initial blank pages of commercial CATIA ALX 
#                (far more in BSF,... and after V6R2104 3d experience new GUI , 2013 switched )
#-------------------------------------------------------------------------------------------------------------------
# Current Statement ( 2013.Week 37 ) :  
#    #1) The Module Interface "CATGMGeometricInterfaces" of GeometricObjects Framework
#          is build without CATMathStream CATTechTools AdvancedMathematics and remaing GeometricObjects Core (Clone,Journal,..)
#         -> for CATIAApplicationFrame\CATIAApplicationFrame.m\Imakefile.mk 
#    #2) Derivated frameworks (operators) GMAdvancedOperatorsInterfaces GMOperatorsInterfaces
#            are statically build with only Mathematics and GeometricObjects frameworks
#    #2) Derivated frameworks (underlying model)  GMModelInterfaces
#            is statically build with only Mathematics and GeometricObjects and AdvancedMathematics frameworks
#-------------------------------------------------------------------------------------------------------------------

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GeometricObjectsUUID \
MathematicsUUID
#else
LINK_WITH_FOR_IID =
#endif
 
BUILT_OBJECT_TYPE=SHARED LIBRARY
 
#if defined ( CATIAV5R24 ) || defined ( CATIAR216 )
#if defined (CATIAR216)
ALIASES_ON_IMPORT=CATGeometricObjects CATGMGeometricInterfaces
#else
ALIASES_ON_IMPORT=CATGeometricObjects CATGMGeometricInterfaces CATGeometricObjects_MProc
#endif
#else
   #if defined ( CATIAV5R23 )
ALIASES_ON_IMPORT=CATGeometricObjects CATGeometricObjects_MProc
   #else
ALIASES_ON_IMPORT=CATGeometricObjects CATCGMGeoMath  CATGeometricObjects_MProc 
   #endif
#endif
 
#if defined ( CATIAV5R24 ) || defined ( CATIAR216 )
INCLUDED_MODULES = YP00TMP YP00IMPL GeometricObjItf \
                   Data_GeometricObjects  Replay_GeometricObjects CATGeometricObjects_Run CATCGMStreamImpl  CATCGMFusion \
                   YP0LOGRP YP0PROXY JournalCGM CloneManager GeometricImpl CGMGeoMath  \
                   CATCGMGeoMath
#else
#if defined ( CATIAV5R23 )
INCLUDED_MODULES = YP00TMP YP00IMPL GeometricObjItf \
                   CATGMGeometricInterfaces \
                   Data_GeometricObjects  Replay_GeometricObjects CATGeometricObjects_Run CATCGMStreamImpl  CATCGMFusion \
                   YP0LOGRP YP0PROXY JournalCGM CloneManager GeometricImpl CGMGeoMath  \
                   CATCGMGeoMath
 
#else
INCLUDED_MODULES = YP00TMP YP00IMPL GeometricObjItf \
                   CATGMGeometricInterfaces \
                   Data_GeometricObjects  Replay_GeometricObjects CATGeometricObjects_Run CATCGMStreamImpl  CATCGMFusion \
                   YP0LOGRP YP0PROXY JournalCGM CloneManager GeometricImpl CGMGeoMath
#endif
#endif
                   

#if defined ( CATIAV5R24 ) || defined ( CATIAR216 )
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  CATGMGeometricInterfaces \
  CATMathematics \
  CATTechTools \
  CATMathStream \
  AdvancedMathematics \
  JS0GROUP \
  CATSysTS \
  CompactFunction
#else
#if defined ( CATIAV5R23 )
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  CATMathematics \
  CATTechTools \
  CATMathStream \
  AdvancedMathematics \
  JS0GROUP \
  CATSysTS \
  CompactFunction
#else
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  CATMathematics \
  CATTechTools \
  CATMathStream \
  AdvancedMathematics \
  JS0GROUP \
  CATSysTS \
  CATCGMGeoMath \
  CompactFunction
#endif
#endif


OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
