# COPYRIGHT DASSAULT SYSTEMES 2004
# 
#  CATDECGenerateCATPartFromCATPart.m
#======================================================================
#
# LOAD MODULE
#

BUILT_OBJECT_TYPE = LOAD MODULE

LINK_WITH =                            \
            JS0GROUP                   \
            JS0FM                      \
	         AC0XXLNK	                  \
            CATDataExchControlAlgo     \
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
