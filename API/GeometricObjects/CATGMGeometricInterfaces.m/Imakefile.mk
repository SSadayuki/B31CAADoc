
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

#if defined ( CATIAV5R24 ) || defined ( CATIAR216 )

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GeometricObjectsUUID \
MathematicsUUID
#else
LINK_WITH_FOR_IID =
#endif

BUILT_OBJECT_TYPE=SHARED LIBRARY         

LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  CATSysTS \
  CATMathematics

#else

BUILT_OBJECT_TYPE=NONE

#endif

OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
