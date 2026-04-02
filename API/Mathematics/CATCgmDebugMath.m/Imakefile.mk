#if   defined  ( CATIAR217 ) || defined ( CATIAV5R25 )
BUILT_OBJECT_TYPE= SHARED LIBRARY
BUILD = NO
#else
BUILT_OBJECT_TYPE=SHARED LIBRARY
LINK_WITH= \
  JS0GROUP \
  CATMathematics \
  CATMathStream
#
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#endif
