#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
ALIASES_ON_IMPORT = CATMmlRefPlane CATMecModLiveInterfaces

LINK_WITH=JS0CORBA \
          CATMecModExtendItf \ 
          MecModItfCPP \
          CATInteractiveInterfaces \
		  CATMecModLiveInterfaces
