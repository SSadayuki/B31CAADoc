# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module CATCafPrintToolsOptions.m
#======================================================================
# 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

         
LINK_WITH=JS0FM JS0GROUP \
          DI0PANV2 \
		  CATDlgStandard \
          CATIAApplicationFrame \ 
          CATInteractiveInterfaces \ 
          CATObjectModelerBase \
		  CATCafPrintCtrlToolsOptions \
		  CATPrt \
		  InfProIDL
