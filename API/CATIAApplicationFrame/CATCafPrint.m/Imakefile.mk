#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAApplicationFrameTstUUID \
CATIAApplicationFrameUUID
#else
LINK_WITH_FOR_IID =
#endif
BUILT_OBJECT_TYPE=SHARED LIBRARY
LINK_WITH=$(LINK_WITH_FOR_IID) CATMMediaBase CATMMediaVideo CATMMediaCapture CATPrint CATPrt \
                               JS0GROUP DI0PANV2 CATApplicationFrame JS0FM \
							   CATIAApplicationFrame CATVisualization CATViz \
							   CATInfInterfaces VE0GRPH2 ON0GRAPH YN000MFL CATMathStream AC0XXLNK 

