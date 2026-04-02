#@ autoformat 10:02:05
#ifdef LOCAL_DEFINITION_FOR_IID
   LINK_WITH_FOR_IID = \
    GSMInterfacesUUID              \ # GSMInterfaces                  GSMInterfacesUUID
    GSMModelUUID                   \ # GSMModel                       GSMModelUUID
    GeometricObjectsUUID           \ # GeometricObjects               GeometricObjectsUUID
    InteractiveInterfacesUUID      \ # InteractiveInterfaces          InteractiveInterfacesUUID
    KnowledgeInterfacesUUID        \ # KnowledgeInterfaces            KnowledgeInterfacesUUID
    LiteralFeaturesUUID            \ # LiteralFeatures                LiteralFeaturesUUID
    MechanicalModelerUUID          \ # MechanicalModeler              MechanicalModelerUUID
    ObjectModelerBaseUUID          \ # ObjectModelerBase              ObjectModelerBaseUUID
    ObjectSpecsModelerUUID         \ # ObjectSpecsModeler             ObjectSpecsModelerUUID
    SystemUUID                     \ # System                         SystemUUID
#
#else
   LINK_WITH_FOR_IID =
#endif

#
# SHARED LIBRARY CATGmoIntegration
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

ALIASES_ON_IMPORT=CATGmoInterfaces CATSurfacicInterfaces

#
OS = COMMON
LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_FOR_IID)           \
    NS0S3STR                       \ # System                         JS0GROUP
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
#
#endif
#endif
