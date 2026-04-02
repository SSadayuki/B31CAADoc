
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = CATV4IntegrationBaseUUID \
                    ObjectModelerBaseUUID    \
                    ObjectModelerCATIAUUID
#else
LINK_WITH_FOR_IID =
#endif

BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = AC0V4INT AC0V4MIGR CATSaveAsSession AC0V4LINK

LINK_WITH=$(LINK_WITH_FOR_IID) JS0GROUP CATSysFile                          \
                               CATObjectModelerCATIA                        \
                               CATObjectModelerBase                         \
                               CATCdbEntity                                 \
                               CATOmaBinaryFormat CATOmaPrjBrowser          \
                               CATObjectSpecsModeler                        \
                               CATMathematics CATMathStream                 \
                               GeometricObjectsCATIA                        \
                               CATV4Procedural CATV4System                  \
                               CATGngGraph MecModItfCPP CATMmiUUID          \
                               TECHNLNK CATViz CATVisualization             \
                               CATAfrUUID                                   \
                               ProductStructureItf                          \
                               CATProductStructure1 CATPrsExport            \
                               CATBatchUtils CATBatProtocol CATXMLParserItf \
                               CATApplicationFrame CATIAApplicationFrame    \
                               CATIAModelVisu CATMechanicalModeler          \
                               KnowledgeItf CATGitInterfaces CATV4iSettings \
                               CATV4iInteropReport 
