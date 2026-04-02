#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
EnoviaV5AdapterUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
ProductStructureUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= SHARED LIBRARY

# flag '-DENCODE_BASE64' added by JNI 22/01/2001: this flags whether to using 
# encoding/decoding to/from Base 64 rather than base 16 (hexa) for DocUUIDs encoded
# inside an ENOVIA5 doc descriptor.

LINK_WITH=$(LINK_WITH_FOR_IID) CATEnoviaV5AttrMap CATEnoviaV5AdapterBase \
                               AD0XXBAS AC0CATPL AC0SPDOC JS0GROUP JS0FM  CATIAApplicationFrame \
                               DI0PANV2 AC0ITEMS CO0HDICO CATViz KnowledgeItf\
                               CATPrdEnoviaV5Interface JS0FM CATObjectModelerBase\
                               CATMathematics CATApplicationFrame CATVisualization CATInteractiveInterfaces\
                               CATEnoviaPlugInterfaces CATEnoviaV5AdapterItf CATCclInterfaces CATPDMBase CATDispatcher CATPDMTOS CATPDMBaseItf\
                               CATProductStructure1 CATPrsRep \
                               CATPDMBaseInterfaces CATPDMBaseUUID\
                               CATPDMBaseContainer\
                               XMLUtils xmlxerces xmlicuuc XMLParserItf CATLiteralFeatures\
                               VE0BASE CATPDMBaseUI CATMathStream \
                               CD0AUTOSTART CATOsmAutoSave \
                               CATPPRHubLocator CATSysCommunication CATFileMenu CATOmiClusterItf CATTechnologicalPackageUIItf\
			                         CATOmbDocAttributes\
                               VVSUrlUtils VVSNetBase VVSCoreStructure JS0FILE CATEnoviaV5VPMNav CATProductStructureInterfaces

LOCAL_CCFLAGS =

OS = AIX
# 
OS = HP-UX
CXX_EXCEPTION =
LOCAL_CCFLAGS =
#
OS = IRIX
#
OS = SunOS

OS = Windows_NT



