#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATDfiUUID \
ObjectSpecsModelerUUID \
SystemUUID \
SketcherInterfacesUUID \
#else
LINK_WITH_FOR_IID =
#endif
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) 	JS0GROUP                  \
                                CATDraftingInterfaces     \
                                SystemUUID                \
                                CATDraftingInfrastructure \
                                CATClnSpecs               \
                                CATObjectModelerBase      \
                                CATObjectSpecsModeler     \
                                CATClnBase                \
                                CATSketcherInterfaces     \
                                CATVisualization          \
                                YN000MAT                  \
                                CATLiteralFeatures        \
                                CATDraftingFeature        \
                                CATAnnotationModeler      \
                                CATLayoutInfraCatalog      \
                                CATPDMBaseItf 


