# COPYRIGHT DASSAULT SYSTEMES 2001
#==============================================================================
# Imakefile for module DNBDPMItf.m 
#==============================================================================
#
#  Feb 2001  Creation:                                                      PAR
#==============================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = \
JS0GROUP 
# END WIZARD EDITION ZONE

LINK_WITH = $(WIZARD_LINK_MODULES) \
			CATObjectModelerBase \


INCLUDED_MODULES = \
                  ExecutionItfCPP \
                  DNBDpmProIDL \
                  DNBDpmPubIDL \


OS = Windows_NT
#LOCAL_CCFLAGS=-FR
