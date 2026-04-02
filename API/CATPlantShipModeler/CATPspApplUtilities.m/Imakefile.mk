#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
# LOCAL_CCFLAGS = -DPRODSTRU_DEBUG
# LOCAL_CCFLAGS = -DASMTRACE

#CATStrDetailPartWSCfg \
LINK_WITH = JS0GROUP \           
            CATGitInterfaces \            
            CATMathematics \                       
            CATObjectSpecsModeler \
            CATObjectModelerBase \
            CATTopologicalObjects \
            CATPspUtilities \
            SystemUUID \
            CATXMLParserItf \
            KnowledgeItf \
            CATLifToolkit \
            CATEsuUtil
            
            
            
