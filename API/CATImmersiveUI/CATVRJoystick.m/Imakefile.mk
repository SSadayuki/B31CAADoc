# COPYRIGHT DASSAULT SYSTEMES 2001
#======================================================================
# Imakefile for module VRFly.m
#======================================================================
#
#  May 2001  Creation: CID
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH = DI0PANV2 VE0BASE JS0CORBA CATVisVR YN000MFL CO0RCINT JS0FM CD0FRAME CD0WIN CATVisualization CATViz

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
