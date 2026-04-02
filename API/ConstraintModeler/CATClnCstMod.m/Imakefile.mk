#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
MechanicalModelerUUID \
ObjectSpecsModelerUUID
#else
LINK_WITH_FOR_IID =
#endif

#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH = $(LINK_WITH_FOR_IID) \
   AC0SPBAS \
   AC0SPCHECK \
   CATClnBase \
   CATClnSpecs \
   CATConstraintModelerItf \
   CATInteractiveInterfaces \
   CATMecModInterfaces \
   CATObjectModelerBase \
   CATObjectSpecsModeler \
   CATProductStructure1 \
   CATUdfInterfaces \
   JS0GROUP \
   MF0CST \
   MF0DimInt \
   MF0STARTUP
