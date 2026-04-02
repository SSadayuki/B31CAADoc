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
    CATCamModel                    \ # CATCamera                      CATCamModel
    CATCamItfCPP                   \ # CATCameraInterfaces            CATCamItf
    CATClnBase                     \ # CATDataCompatibilityInfra      CATClnBase
    YN000MFL                       \ # Mathematics                    CATMathematics
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    CATClnSpecs                    \ # ObjectSpecsModeler             CATClnSpecs
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0CORBA                       \ # System                         JS0GROUP
    VE0BASE                        \ # Visualization                  CATVisualization
#

