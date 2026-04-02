### JEL090415 : split XlatorCGM/XlatorCGMimp : XlatorCGM/CATMMM.m = couche interface des imports X->CATIA

# SHARED LIBRARY

BUILT_OBJECT_TYPE=SHARED LIBRARY
OS=COMMON

LINK_WITH = \
JS0GROUP \
Collections \
CATMathematics \
CATMathStream

### comme (feu) CATVioMMM de CGMV5Interoperability {
OS=Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
### comme (feu) CATVioMMM de CGMV5Interoperability }
