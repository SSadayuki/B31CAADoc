# COPYRIGHT DASSAULT SYSTEMES 2005
#======================================================================
# Imakefile for module CATClnMold.m
#======================================================================
#
#  Apr 2005  Creation: juw
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH = JS0GROUP JS0FM CATClnBase CATMoldItfCPP CATObjectSpecsModeler  \
            CATClnSpecs CATProductStructure1 CATObjectModelerBase 


