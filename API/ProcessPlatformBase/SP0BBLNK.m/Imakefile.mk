#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE= SHARED LIBRARY

INCLUDED_MODULES = SP0BBLNK

LINK_WITH= JS0GROUP\
	   ObjectModeler AD0XXBAS\
	   CATObjectSpecsModeler\
	   ProcessModelerBase\
	   CD0WIN \
	   CATInteractiveInterfaces

#
OS = AIX

#
OS = HP-UX

#
OS = SunOS

#
OS = IRIX

#
OS = Windows_NT
