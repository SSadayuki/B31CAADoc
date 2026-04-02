# SHARED LIBRARY

BUILT_OBJECT_TYPE=SHARED LIBRARY
OS = COMMON

# JEL060901 : demande GALTON R203 pour "ALIASES_ON_IMPORT" : ajout de CATGMModelInterfaces de GMModelInterfaces

LINK_WITH = \
JS0GROUP \
JS0ERROR \
CATCGMGeoMath \
CATMathStream \
Y3DYNOPE \
YN000MAT \
YI00IMPL \
YP00IMPL \
Primitives \
CATGMModelInterfaces \
CATTopologicalOperatorsLight
