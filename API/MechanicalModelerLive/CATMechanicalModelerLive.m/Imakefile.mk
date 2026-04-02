#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATVisUUID \
GenericNamingUUID \
GeometricObjectsUUID \
InteractiveInterfacesUUID \
KnowledgeInterfacesUUID \
LiteralFeaturesUUID \
MechanicalModelerLiveUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= \
          JS0FM \
          JS0GROUP \
          CATMecModInterfaces \
          CATObjectSpecsModeler \
          CATMathStream \
          CATGngTopologicalAccess \
          CATGngReport \
          CATGngGraph \
		  SI0REPER \
          CATGMModelInterfaces \
          CATGeometricObjects \
          CATMathematics \
          CATObjectModelerBase \
          CATMecModLiveUseItf \
          CATGMOperatorsInterfaces \
          CATVisualization \
          CATMmiUUID \
          CATInteractiveInterfaces \
          CATMmlSys \
          CATObjectModelerCATIA \
          CATMmlBRepMode \
          CATMecModLiveInterfaces \
          CATSketcherInterfaces \
          DataAdmin \
          CATMecModExtendItf \
          GN0NAME

INCLUDED_MODULES = CATMmlBRepModel CATMmlServices CATMmlActivity CATMmlAlgoConfig  CATMmlBrepAttributes CATMmlLiveShapeInfra


LOCAL_CCFLAGS= -DSPECDEBUG


OS = AIX
OS = aix_a64
LOCAL_LDFLAGS = -bbigtoc

OS = HP-UX

OS = IRIX

OS = SunOS

OS = Windows_NT
