#
# Load for parent/children
		  
BUILT_OBJECT_TYPE=SHARED LIBRARY
# 
INCLUDED_MODULES = PrtParentChildren

LINK_WITH= PartDesignFeature\
           PartItf\
           CATMmuCommands\
           JS0GROUP\
           MecModItf \
           AC0SPBAS \
           
