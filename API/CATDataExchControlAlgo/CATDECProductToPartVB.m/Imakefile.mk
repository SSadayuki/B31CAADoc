# COPYRIGHT DASSAULT SYSTEMES 2004
#======================================================================
#
# SHARED LIBRARY : CATDECProductToPartVB
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH = JS0CATLM                   \
            CATDECProductToPartAlgo    \
            CATDataExchPubIDL          \
            CATDECProductToPartCAA     \
            AC0XXLNK                   \
            InfProIDL                  \
            CD0FRAME                   \
            CATDECServicesAlgo         \

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
