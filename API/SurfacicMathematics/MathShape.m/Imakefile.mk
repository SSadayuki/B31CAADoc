# COPYRIGHT DASSAULT SYSTEMES 2015
#======================================================================
# Imakefile for module MathShape.m
#======================================================================
#
# Jul 2015 JX2 Creation
# 
BUILT_OBJECT_TYPE = NONE

OS = Linux
# CPT on 2020/11/12: to prevent to link with unresolved symbols
# set LOCAL_2NDLDFLAGS only if ( MKMK_GCC_SANITIZER does not exist or is empty )
LOCAL_2NDLDFLAGS=$(MKMK_GCC_SANITIZER:%-"-Wl,-z,defs ")
