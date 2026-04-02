#@ autoformat 06:11:07
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

#ifdef CNEXT_CLIENT
   LINK_WITH_DEV_OPT=
#else
   LINK_WITH_DEV_OPT= \
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
#
#endif

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_DEV_OPT)           \
    YN000FUN                       \ # AdvancedMathematics            CATAdvancedMathematics
	CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMTopoServices
    CATMathStream                  \ # CATMathStream                  CATMathStream
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    CATGupComponents               \ # GSMUIPrivate                   CATGupComponents
    CATCGMGeoMath                  \ # GeometricObjects               CATCGMGeoMath
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    CATMathematics                 \ # Mathematics                    CATMathematics
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    CO0LSTPV                       \ # System                         JS0GROUP
    JS0CORBA                       \ # System                         JS0GROUP
    JS0ERROR                       \ # System                         JS0GROUP
    JS0SCBAK                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrProgressTask             \ # AfrStandard                    CATAfrProgressTask
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATViz                         \ # VisualizationBase CATViz
    CATVisualization               \ # Visualization
    CATApplicationFrame            \ # ApplicationFrame
#
#endif
#endif
