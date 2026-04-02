#
BUILT_OBJECT_TYPE = SHARED LIBRARY 
INCLUDED_MODULES = CDMAInteropCommands
#
OS = COMMON

LINK_WITH=	NS0S3STR AD0XXBAS JS0FM\
            DI0PANV2 DI0STATE AS0STARTUP CATPrsRep \
            CD0WIN CATVisualization \
            AC0SPBAS CATIPSInteroperability CDMAMapping \
            PR0BASE CDMAServer CDMAdoc  \
            CATPDMBase CATVPMBase CATPDMBaseItfCPP CATPDMBaseInterfaces XMLParserItf CATXMLBase CATCinDocument


