#@ autoformat 06:08:31
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATCamView
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
    CD0WIN                         \ # ApplicationFrame               CATApplicationFrame
    CATCamModel                    \ # CATCamera                      CATCamModel
    CATCamItfCPP                   \ # CATCameraInterfaces            CATCamItf
    CATGraphicProperties           \ # CATGraphicProperties           CATGraphicProperties
    SELECT                         \ # CATIAApplicationFrame          CATIAApplicationFrame
    DI0PANV2                       \ # Dialog                         DI0PANV2
    YN000MFL                       \ # Mathematics                    CATMathematics
    CATNavigator2Itf               \ # Navigator2Interfaces           CATNavigator2Itf
    CATDMUManip                    \ # Navigator4DBase                CATDMUManip
    CATNavigatorItf                \ # NavigatorInterfaces            CATNavigatorItf
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    AS0STARTUP                     \ # ProductStructure               CATProductStructure1
    DNBSimulationBaseLegacy        \ # SimulationBaseLegacy           DNBSimulationBaseLegacy
    SimulationItfCPP               \ # SimulationInterfaces           CATSimulationInterfaces
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    VE0BASE                        \ # Visualization                  CATVisualization
    CATViz                         \ # VisualizationBase              CATViz
    CATLifToolkit                  \ # LiteralFeatures                CATLifToolkit
    CATLifDictionary               \ # LiteralFeatures                CATLifDictionary
#
