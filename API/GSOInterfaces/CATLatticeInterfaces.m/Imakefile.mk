
BUILT_OBJECT_TYPE= SHARED LIBRARY

#if defined(CATIAV5R21)
BUILD = NO
#endif

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY= \
				    #CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)             \
    $(LINK_WITH_V6_ONLY)             \
						JS0GROUP                 \
	 	        JS0FM                    \
			      #ObjectModelerSystem      \ # ObjectModelerSystem            ObjectModelerSystem
				    # MecModItfCPP             \ # MecModInterfaces               CATMecModInterfaces
				    # CATMechanicalModeler     \ # MechanicalModeler              CATMechanicalModeler
				    # MF0STARTUP               \ # MechanicalModeler              CATMechanicalModeler
				 	  # CATMechanicalModelerUI   \ # MechanicalModelerUI            CATMechanicalModelerUI

OS = Windows_NT

