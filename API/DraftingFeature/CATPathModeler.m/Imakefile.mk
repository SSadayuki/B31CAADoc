#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATDfiUUID \
CATIAApplicationFrameUUID \
ObjectSpecsModelerUUID \
SketcherInterfacesUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 1999
#=========================================================================================
#
# CATPathModeler
#
#=========================================================================================


BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  \
          CATObjectSpecsModeler \
          JS0GROUP              \
          CATObjectModelerBase  \
          CATMathematics        \
          CATSketcherInterfaces \
          CATIAApplicationFrame \
          CATDraftingInterfaces \
          SystemUUID            \
          CATGeometricObjects   \
          CATDraftingBaseInfra  \
          YN000FUN \
          CATNewTopologicalObjects \
          Primitives \
          CATVizBase \
          CATVisualization \
          CATDraftingInfrastructureUI \
          CATAnnotationModeler \



