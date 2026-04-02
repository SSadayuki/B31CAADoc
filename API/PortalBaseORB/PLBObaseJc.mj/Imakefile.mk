# == VVD == - modified the imake file to allow a build of this module even with MK_ORBIXJAVA33 set. This module will now be used as a preq directly.

BUILT_OBJECT_TYPE=JAVA
TYPE=COMMON

OS=COMMON
LINK_WITH=OrbixWeb

#Build with java target level 1.7
#ifdef CATIAV5R26
_MK_TRGOPTS_FORTOOLS = 1.7
#endif


# VVD - OLD ENTRIES

#BUILT_OBJECT_TYPE=JAVA
#TYPE=COMMON
#
##ifdef MK_ORBIXJAVA33
#OS=COMMON
#BUILD=NO
#
#OS=irix_a
#BUILD=YES
#LINK_WITH=OrbixWeb
##else
#LINK_WITH=OrbixWeb
##endif
#
##Build with java target level 1.7
##ifdef CATIAV5R26
#_MK_TRGOPTS_FORTOOLS = 1.7
##endif
#
