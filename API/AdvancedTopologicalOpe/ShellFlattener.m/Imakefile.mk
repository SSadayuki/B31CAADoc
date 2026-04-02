#
BUILT_OBJECT_TYPE=NONE
OS=COMMON
#

LINK_WITH= CATCGMGeoMath \ 
           FrFTopologicalOpe \
           CATTopologicalObjects \
           YP00IMPL \
           CATMathematics \
           CO0RCDBL  \ # System
           FrFOpeSur \
           YP00IMPL \
           CATMathStream \
           CATCGMGeoMath \
           PrimitivesLight \
           CATGMModelInterfaces \
           Y30E3PMG \
           JS0GROUP
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
# 
