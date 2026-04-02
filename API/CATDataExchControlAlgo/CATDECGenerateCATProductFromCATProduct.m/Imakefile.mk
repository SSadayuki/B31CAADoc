# COPYRIGHT DASSAULT SYSTEMES 2004
# 
#  CATDECGenerateCATProductFromCATProduct.m
#======================================================================
#
# LOAD MODULE
#

BUILT_OBJECT_TYPE = LOAD MODULE

LINK_WITH =                            \
            JS0GROUP                   \
            JS0FM                      \
	         AC0XXLNK	                  \
            CATDECProductToPartAlgo    \
            CATInteractiveInterfaces   \

            
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
