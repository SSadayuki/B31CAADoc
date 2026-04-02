#@ autoformat 06:08:31
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATCamModel
#======================================================================
# CREATED  30 Jun 2003 BY STX
# MODIFIED xx xxx xxxx BY xxx
#          modification reason   
#======================================================================
#
# SHARED LIBRARY


BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= \
    CD0FRAME                       \ # ApplicationFrame               CATApplicationFrame
    CATCamItfCPP                   \ # CATCameraInterfaces            CATCamItf
    CATCclInterfaces               \ # ComponentsCatalogsInterfaces   CATCclInterfaces
    DI0PANV2                       \ # Dialog                         DI0PANV2
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLifRelations                \ # KnowledgeModeler               CATKnowledgeModeler
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    YN000MFL                       \ # Mathematics                    CATMathematics
    CATNavigator2Itf               \ # Navigator2Interfaces           CATNavigator2Itf
    CATNavigatorItf                \ # NavigatorInterfaces            CATNavigatorItf
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerCATIA          \ # ObjectModelerCATIA             CATObjectModelerCATIA
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    AS0STARTUP                     \ # ProductStructure               CATProductStructure1
    ProductStructureItf            \ # ProductStructureInterfaces     CATProductStructureInterfaces
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    VE0BASE                        \ # Visualization                  CATVisualization
    CATViz                         \ # VisualizationBase              CATViz
#
