#@ autoformat 14:06:24
#
# SHARED LIBRARY
#
#if defined(_DS_COMPUTE_SERVER)
BUILT_OBJECT_TYPE = NONE
BUILD=NO
#else
BUILT_OBJECT_TYPE=SHARED LIBRARY
#endif

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

#
OS = COMMON
LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMUtilitiesServices
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATConstraintModeler           \ # ConstraintModeler              CATConstraintModeler
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoInterfaces               \ # GSMModel                       CATGmoInterfaces
    CATGmoUtilities                \ # GSMModel                       CATGmoUtilities
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    YN000MAT                       \ # Mathematics                    CATMathematics
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    NS0S3STR                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#

# 
OS = AIX
INSTANCIATION_MODE = -qnotempinc -qNOOPTimize
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATOmxKernel                   \ # ObjectModelerCollection        CATOmxKernel
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
#
#endif
#endif
