#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = M2ToV5

OS = COMMON

# JEL060901 : demande GALTON R203 pour "ALIASES_ON_IMPORT" : ajout de CATGMModelInterfaces de GMModelInterfaces
# JEL070611 : CATVioMMM devient CATMMM en V5R18 et R203

DUMMY_LINK_WITH1 = JS0GROUP JS0ERROR \
			Collections BOOPER \
			Y30C1XMM Y300IINT Y3DYNOPE Topology YI00IMPL YP00IMPL \
			Primitives \
			YN000M2D HybOper YN000MAT \
			AdvancedMathematics \
			CATSurfacicTopoOperators \
			CATMathStream CATCGMGeoMath \
      CATXlatorToolsimp

#ifdef CATIAR203
DUMMY_LINK_WITH = $(DUMMY_LINK_WITH1) CATGMModelInterfaces
#else
DUMMY_LINK_WITH = $(DUMMY_LINK_WITH1)
#endif

#if defined(CATIAV5R18) || defined(CATIAR203)
LINK_WITH = \
  $(DUMMY_LINK_WITH) \
  CATMMM
#else
LINK_WITH = \
  $(DUMMY_LINK_WITH) \
  CATVioMMM
#endif
