#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = CATInterferenceInterfaces

LINK_WITH_BASE= YN000MFL YN000MAT CATMathStream \
                CO0LSTPV \
                JS0CORBA JS0ERROR \
                O20COLLI \
                CATViz \
                CATVoxelServices \

LINK_WITH=$(LINK_WITH_BASE)

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
