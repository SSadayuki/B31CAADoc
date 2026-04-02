BUILT_OBJECT_TYPE=JAVA
TYPE=COMMON

# == VVD == - We now want this module to be build irrespective of the macro MK_ORBIXJAVA33
LINK_WITH=OrbixWeb PLBObaseJc

##ifdef MK_ORBIXJAVA33
#OS=COMMON
#BUILD=NO
#
#OS=irix_a
#BUILD=YES
#LINK_WITH=OrbixWeb PLBObaseJc
##else
#LINK_WITH=OrbixWeb PLBObaseJc
##endif

#Build with java target level 1.7
#ifdef CATIAV5R26
_MK_TRGOPTS_FORTOOLS = 1.7
#endif

