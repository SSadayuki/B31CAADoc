#ifdef CATIAV5R23
BUILT_OBJECT_TYPE = NONE
#else
#
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
LINK_WITH= \
  JS0GROUP \
  CATMathematics \
  CATMathStream
#
# 26/08/2002 CXR10rel 
# 04/04/07 NLD Ajout GeometricImpl pour CATGetTolerance
#   Pour rattrapage temporaire Bug impact mkmk
#   IMPACT_ON_IMPORT=YES
#
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
#endif
