#======================================================================
# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module CATFdeApplicationExt.m
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH = CATObjectModelerBase CATObjectSpecsModeler \
	JS0GROUP JS0CORBA JS0SCBAK JS0STR NS0S3STR \
	CO0LSTST CO0LSTPV CO0RCINT \
	CP0SPEC AC0SPBAS AC0SPCHECK AC0SPDOC \
	CATFdeViewController CATInteractiveInterfaces \
  CATFdeInterfaces AC0CATPL

#	CATFileMenu CATFdeViewController CATMcoInterfaces CD0WIN \

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
