#INSERTION ZONE NOT FOUND, MOVE AND APPEND THIS VARIABLE IN YOUR LINK STATEMENT
#LINK_WITH = ... $(WIZARD_LINK_MODULES) ...
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES =  \
JS0GROUP 

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
NavigatorInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = NavigatorProIDL NavigatorPubIDL

LINK_WITH=$(LINK_WITH_FOR_IID)   \
			JS0FM                \
			NS0SI18N             \
			SELECT               \
            CD0FRAME             \
			CATVisualization     \
			CATInfInterfaces     \
			CATObjectModelerBase \
			CATNavigator2Itf     \
            CATViz
 
