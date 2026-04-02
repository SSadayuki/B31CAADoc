#ifdef CATIAV5R12
BUILT_OBJECT_TYPE=NONE
#else
BUILT_OBJECT_TYPE=SHARED LIBRARY
 
INCLUDED_MODULES =	CATUnFoldedAero


LINK_WITH= Y30A3HGG \
		   CATAdvancedMathematics \
		   CATFreeFormOperators \
           NS0S3STR \
           YN000MAT \
		   CATBasicTopologicalOpe  \
           Primitives \
		   CATTopologicalObjects \
           YP0LOGRP\
		   CATMathStream\
		   CATCGMGeoMath\

#endif
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

