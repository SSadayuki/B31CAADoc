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

LINK_WITH=$(LINK_WITH_FOR_IID) CATEnoviaV5AttrMap AD0XXBAS AC0CATPL AC0SPDOC JS0GROUP JS0FM  CATIAApplicationFrame CO0LSTPV \
                               DI0PANV2 AC0ITEMS CO0HDICO CATViz KnowledgeItf CATPrint \
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
                               VVSUrlUtils VVSNetBase VVSCoreStructure JS0FILE CATEnoviaV5VPMNav JS0ZLIB\
                               CATProductStructureInterfaces CATEnoviaV5Save\
                               AC0SPNewXML

#CATImmItf


LOCAL_CCFLAGS = -DCATPDMLogIntegration -DOldLogFlg 

OS = AIX
# 
OS = HP-UX
CXX_EXCEPTION =
LOCAL_CCFLAGS = -DNATIVE_EXCEPTION  -DCATPDMLogIntegration -DOldLogFlg
#
OS = IRIX
#
OS = SunOS

OS = Windows_NT
SYS_LIBS = Wsock32.LIB

#INSERTION ZONE NOT FOUND, MOVE AND APPEND THIS VARIABLE IN YOUR LINK STATEMENT
#LINK_WITH = ... $(WIZARD_LINK_MODULES) ...
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES =  \
JS0GROUP  \
JS0GROUP 
# END WIZARD EDITION ZONE
