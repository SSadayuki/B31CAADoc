# ----------------------------------------------------------------
# Cut/Copy/Paste
# ----------------------------------------------------------------

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= \
  CATApplicationFrame CATDialogEngine DI0PANV2 JS0MRSHL AS0STARTUP AD0XXBAS AC0SPBAS YP00IMPL \
  JS03TRA JS0STR JS0CORBA JS0FM JS0LIB0 JS0SCBAK CK0UNIT \
  CATMathematics SELECT CATVisualization CATConstraintModelerItf \
  CATProductStructureInterfaces KnowledgeItf CATLifDictionary \
  CATEsuProductServices CATEsuUtil \
  ArrUtility ArrSelect CATArrProductServices CATArrangementInterfacesUUID ArrArrangementInterfaces CATArrangementItfCPP CATAruAnalysis \
  CATPspUUID CATPspUtilities   

OS = COMMON

