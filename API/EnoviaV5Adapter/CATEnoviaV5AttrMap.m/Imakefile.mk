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

LINK_WITH=$(LINK_WITH_FOR_IID) AC0CATPL\
                               AC0SPDOC\
                               CATEnoviaV5AdapterBase\
                               CATEnoviaV5AdapterItf\
                               CATLiteralFeatures \
                               CATObjectModelerBase\
                               CATOmbDocAttributes \
                               CATPDMBase\
                               CATPDMBaseItf\
                               CATPrdEnoviaV5Interface\
                               CATViz\
                               JS0GROUP\
                               KnowledgeItf\
                               XMLParserItf\
                               CATVisualization\
                               CATEnoviaV5VPMNav \
                               CATAssemblyInterfaces
            
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



