#@ autoformat 06:08:31
# COPYRIGHT DASSAULT SYSTEMES 2005
#======================================================================
# Imakefile for module CATImmersiveCameraBase
#======================================================================
# CREATED  30 May 2005 BY AQRs
# MODIFIED xx xxx xxxx BY xxx
#          modification reason   
#======================================================================
#
# SHARED LIBRARY


BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= \
    CATMathematics                 \ # Mathematics                    CATMathematics
    YN000MAT                       \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    JS0CORBA                       \ # System                         JS0GROUP
    JS0SETT                        \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
    CATVisualization               \ # Visualization                  CATVisualization
    CATViz                         \ # VisualizationBase              CATViz
#
		   
		   	          
