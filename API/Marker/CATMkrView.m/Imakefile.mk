#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATIAApplicationFrameUUID \
CATVisUUID \
MarkerUUID \
NavigatorInterfacesUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#

INCLUDED_MODULES = CATMarkerDic

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0CORBA JS0FM JS0SCBAK JS0STR JS03TRA JS0LIB0 JS0ERROR\
            AD0XXBAS AC0XXLNK VE0BASE NS0S3STR NS0S1MSG CD0WIN CD0FRAME CATMathStream \
            DI0STATE DI0PANV2 YN000MFL AC0SPBAS CATVisualization CATViz \
	    CATNavigatorItf CATNavigator2Itf SELECT OSMInterfacesItfCPP JS0CTYP CATMkrBase CATInfInterfaces\
	    CATInteractiveInterfaces CATFileMenu CATFmuServices CATGraphicProperties \
	    SIMItf XMLUtils xmlxerces CATGraph CATClnBase CATClnSpecs CATDlgStandard CATCamItfCPP CAT3DXmlBaseServices CAT3DXmlLightBaseServices CAT3DXmlInterfaces CATLightXml \
CATBinaryXml CATXMLParserItf

################
OS = HP-UX
CXX_EXCEPTION =
LOCAL_CCFLAGS = -DNATIVE_EXCEPTION



