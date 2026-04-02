BUILT_OBJECT_TYPE=SHARED LIBRARY 

#if os Windows
CXX_WARNINGPROMOTE=CATCkeWarningPromote.h
#endif
 
LINK_WITH = JS0GROUP JS0FM CATClnSpecs CATClnBase ObjectModelerBaseUUID KnowledgeItf \
CATLiteralFeatures CATObjectSpecsModeler MecModItfCPP AD0XXBAS CATInteractiveInterfaces \
CATProductStructureInterfaces

