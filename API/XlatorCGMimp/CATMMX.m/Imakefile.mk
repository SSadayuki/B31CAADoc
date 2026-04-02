### JEL090415 : split XlatorCGM/XlatorCGMimp : XlatorCGMimp/CATMMX.m = implementation imports XXX->V5
### JEL0706_STEP_CD_HP_RI584702 : CATXlatorTools : XlatorVsnprintf() / FCTXLAT_MMMENGINE_IncrTraceCounter()

# SHARED LIBRARY

BUILT_OBJECT_TYPE=SHARED LIBRARY
OS = COMMON

LINK_WITH = \
JS0GROUP \
Collections \
CATMathematics \
CATMathStream \
YP00IMPL \                  # CATMergedCurve CATListPtrCATGeometry CATCGMOperator etc ...
YI00IMPL \                  # CATTopologicalOperator etc ...
Y30A3HGG \                  # CATTryConfusionCrvCrv
YN000FUN \                  # CATMathSetOfPointsND
Primitives \                # CATCreateTopWire CATCreateTopSkin
CATSurfacicTopoOperators \  # CATCreateHealing appele par CATM2V5Engine::HealBody2
CATXlatorToolsimp \
CATMMM \
CATCGMGeoMath \
CATGMModelInterfaces \
CATTopologicalOperatorsLight

### pas d'option O2 car ce module est la copie d'un ancien module de V4CGMInteroperability
### copie faite ALORS QUE CE MODULE NE CONTENAIT PAS D'OPTION O2 dans son Imakefile
