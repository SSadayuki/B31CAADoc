#@ autoformat 10:02:05
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    
#

OS = COMMON
#if defined(CATIAR215)
LINK_WITH_V6_ONLY= \
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATAfrFrame                    \ # AfrFoundation                  AfrFoundation
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    CATLiveShapeExposedInterfaces  \ # CATLiveShapeExposedInterfaces  CATLiveShapeExposedInterfaces
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    NewTopologicalObjectsItf       \ # GMModelInterfaces              NewTopologicalObjectsItf
    JS0FM                          \ # System                         JS0FM
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    NS0S3STR                       \ # System                         JS0GROUP
#
#else
#if defined(CATIAV5R23)
LINK_WITH_V5_ONLY= \
#
#endif
#endif
