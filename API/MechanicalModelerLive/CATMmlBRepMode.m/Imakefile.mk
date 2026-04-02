#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
InteractiveInterfacesUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
SystemUUID 
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) \
          SystemUUID \
          CATMecModLiveInterfaces \
          CATObjectModelerBase \
          CATObjectSpecsModeler \
          CATMecModInterfaces \
			    SI0BREPA \
			    CO0RCINT \
			    CO0LSTST \
			    CATGMModelInterfaces \ 
			    AC0SPBAS \
			    YP00IMPL \
			    CATMathematics \
			    CATCGMGeoMath \
			    CATGngGraph \
			    CATMathStream \
          CATCGMGeoMath \
			    CATGeometricObjects \
			    CATMathStream \
			    CATMathematics \
			    CATGMModelInterfaces \
			    CATGMOperatorsInterfaces \
			    ObjectModelerSystem \
			    CATMmlBRepModel \
          CATMecModLiveUseItf \
          CATGngFeatures \
          CATOmxBase \
          

INCLUDED_MODULES = CATMmlBRepMode
           
LOCAL_CCFLAGS= -DSPECDEBUG

OS = AIX
OS = aix_a64
LOCAL_LDFLAGS = -bbigtoc

OS = HP-UX

OS = IRIX

OS = SunOS

OS = Windows_NT

#INSERTION ZONE NOT FOUND, MOVE AND APPEND THIS VARIABLE IN YOUR LINK STATEMENT
#LINK_WITH = ... $(WIZARD_LINK_MODULES) ...
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES =  \
JS0GROUP JS0FM JS0GROUP MechanicalModelerUUID 
# END WIZARD EDITION ZONE
