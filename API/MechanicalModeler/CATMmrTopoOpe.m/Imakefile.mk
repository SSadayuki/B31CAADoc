#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATMmiUUID \
CATVisUUID \
GenericNamingUUID \
GeometricObjectsUUID \
InteractiveInterfacesUUID \
KnowledgeInterfacesUUID \
LiteralFeaturesUUID \
MechanicalCommandsUUID \
MechanicalModelerUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
ProductStructureUUID \
SketcherInterfacesUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  \
            JS0GROUP                 \
            CATMathematics      CATMathStream     \
            CATObjectSpecsModeler    \
            CATTopologicalOperators  \
            CATGeometricObjects    CATCGMGeoMath  \
            CATNewTopologicalObjects \
            CATGeometricOperators    \
            CATBasicTopologicalOpe   \
            CATObjectModelerBase     \
            CATGngReportUtilities    \
            CATMecModInterfaces      \
            CATMechanicalModeler \
            CATCGMGeoMath \
            CATMathStream \
            CATMmlSys \
            CATMecModUseItf \

#LOCAL_CCFLAGS= -DSPECDEBUG


OS = AIX

OS = HP-UX

OS = IRIX

OS = SunOS

OS = Windows_NT
