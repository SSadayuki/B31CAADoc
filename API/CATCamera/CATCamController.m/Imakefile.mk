#@ autoformat 06:08:31
# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module CATCamController
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
    CATCamModel                    \ # CATCamera                      CATCamModel
    CATCamItfCPP                   \ # CATCameraInterfaces            CATCamItf
    ViewAngleUI                    \ # CATIAApplicationFrame          CATIAApplicationFrame
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATNavigator2Itf               \ # Navigator2Interfaces           CATNavigator2Itf
    CATNavigatorItf                \ # NavigatorInterfaces            CATNavigatorItf
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    AS0STARTUP                     \ # ProductStructure               CATProductStructure1
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    VE0BASE                        \ # Visualization                  CATVisualization
    CATViz                         \ # VisualizationBase              CATViz
#


