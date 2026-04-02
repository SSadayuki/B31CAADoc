# COPYRIGHT DASSAULT SYSTEMES 2012
#======================================================================
# Imakefile for module MechanicalBuildInfraDbg.m
#======================================================================
#
# SHARED LIBRARY MechanicalBuildInfraDbg
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH =							 \
			JS0CORBA				  \
			JS0ERROR				  \
			AD0XXBAS				  \
			CATObjectSpecsModeler	  \				
			MechanicalBuildInfraItf		  \
			MecModItfCPP YP00IMPL GN0NAME \
			MF0Tracer GN0GRAPH 
# System dependant variables
#
LOCAL_CCFLAGS = 

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
