#ifdef CATIAV5R18

####JNV23102006 en R18 : ce module ne build plus
####JNV23102006 On pourra le supprimer quand CGM ne livrera plus en R17

BUILT_OBJECT_TYPE=NONE
BUILD=NO

#else

#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

OS = COMMON
#
DUMMY_LINK_WITH = JS0GROUP \
            Collections BOOPER \
            Y30C1XMM Y300IINT Y3DYNOPE Topology YI00IMPL YP00IMPL \
            Primitives \
            YN000M2D HybOper YN000MAT \
            AdvancedMathematics \

#ifdef CATIAR201
LINK_WITH = $(DUMMY_LINK_WITH)
#else
LINK_WITH = $(DUMMY_LINK_WITH) \
            CATMathStream \ # Module [CATMathStream.m], which is define as an alias, was automatically added in LINK_WITH.
            CATCGMGeoMath # Module [CATCGMGeoMath.m], which is define as an alias, was automatically added in LINK_WITH.

#endif

# CATVioM2ToV5 Sera integre a ce Fw en V5R10
#
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

#endif
