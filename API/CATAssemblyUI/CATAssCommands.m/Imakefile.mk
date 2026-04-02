#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATAssemblyUIUUID \
CATIAApplicationFrameUUID \
GeometricObjectsUUID \
MechanicalModelerUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
ProductStructureUIUUID \
ProductStructureUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LOCAL_CCFLAGS = -DASMTRACE

LINK_WITH=$(LINK_WITH_FOR_IID)  \
           CATObjectSpecsModeler CATObjectModelerBase CATAssSelection CATProductStructure1 \
           CATAssCouMdl CATAssemblyInterfaces CATInteractiveInterfaces \
           CATApplicationFrame CATIAApplicationFrame CATLiteralFeatures CATLieUnit \
           JS0GROUP DI0PANV2 CATDialogEngine JS0FM \
           CATMechanicalModeler CATMechanicalModelerUI CATMecModInterfaces \
           CATProductStructure2 CATProductStructureInterfaces \
           CATVisualization CATMathematics CATGeometricObjects \
           CATCclInterfaces VE0GRPH2 SpaceAnalysisItf \
           KnowledgeItf \
           CATConstraintModeler MF0DimInt \
           CATConstraintModelerItf \
           CATConstraintModelerUI \
           CATViz \
           CATMathStream \
           CATCGMGeoMath \
           PartItf \
           CATUdfInterfaces \
           CATKnowledgeModeler \ 
           CATSmarTeamIntegItf \
           #CATTesHLRUtilities

# for tracing :
# LOCAL_CCFLAGS= -DCATAsmTRACE

