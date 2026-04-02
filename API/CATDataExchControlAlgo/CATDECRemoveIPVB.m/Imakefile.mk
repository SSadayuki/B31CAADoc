# COPYRIGHT DASSAULT SYSTEMES 2020
#======================================================================
#
# SHARED LIBRARY : CATDECRemoveIPVB
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH = JS0CATLM                   \
            CATDataExchPubIDL          \
            AC0XXLNK                   \
            InfProIDL                  \
            CD0FRAME                   \
            CATDECServicesAlgo         \
			CATDataExchControlAlgo	   \
			CATDataExchControlIntf     \
			CATProductStructure1       \
			CATMecModInterfaces        \

# System dependant variables
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
