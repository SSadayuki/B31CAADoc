# COPYRIGHT DASSAULT SYSTEMES 2004
#======================================================================
#
# SHARED LIBRARY : CATDECProductToPartCAA
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH = JS0CATLM                   \
            CATDECProductToPartAlgo    \

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
