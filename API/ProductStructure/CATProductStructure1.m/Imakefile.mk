#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

CORE_INCLUDED_MODULES = AS0STARTUP  AS0STNAV CATPrdEnoviaV5Interface CATPrsNumbering \
                        CATPrdIntegration CATPrsConnect CATPrsCCP CATPrsLifeCycle CATPrdPDMImpl CATPrsNaming CATPrsTechno

INCLUDED_MODULES = $(CORE_INCLUDED_MODULES) CATPDMItfOld

LINK_WITH = JS0SCBAK JS0CORBA JS0STR JS03TRA JS0ERROR JS0FM JS0GROUP JS0FILE\
            InfItf KnowledgeItf\
            AD0XXBAS AC0CATPL AC0XXLNK CK0FEAT \
            CATKnowledgeModeler \
            AC0SPBAS CATOsmItf GN0NAME\
            CK0FEAT\
            ON0MAIN ON0FRAME ON0PROP TECHNLNK\
            NS0S3STR \
            Collections YN000MAT \
            CD0FRAME CD0WIN CD0STWIN VE0MDL \
            DI0PANV2 VE0GRPH2 \
            CD0AUTOSTART \
            VE0BASE CATGraphicProperties YN000MFL CP0CLIP CP0SPEC  \
            OM0EDPRO YP00TMP YP00IMPL\
            CATIAEntity \
            ProductStructureItf CATPrsRep \
            CATInteractiveInterfaces CATPrsScene CATWBS CATOsmAutoSave CATXDocLinkItf \
            CATMathStream CATVisualization CATViz CATCGMGeoMath \
			CATPDMBaseItfCPP CATPLMRules \
			CATOmuCluster CATOmiClusterItf \
			MecModItf  \
			CATOmbDocAttributes


# LOCAL_CCFLAGS = -DPRODSTRU_DEBUG
# LOCAL_CCFLAGS = -DASMTRACE

