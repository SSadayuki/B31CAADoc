#
# Makefile for the shared libray of an interfaces Framework
#
 
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = CATSmInterfacesGenerated CATSmInterfacesTSRC CATSmInterfacesSrc CATSmInterfacesDef CATSmInterfacesProIDL CATSmInterfacesPubIDL

LINK_WITH= JS0CORBA JS0GROUP NS0SI18N NS0S3STR JS0INF \
           CATSmInterfacesUUID \
#           CATViz \
#           CATObjectModelerBase \
#           CATVisualization \
#           CATConstraintModeler CATConstraintModelerItf InfItf 
           MF0ERROR 

