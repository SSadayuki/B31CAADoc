#======================================================================
# Imakefile for module Itf.m
#======================================================================
# 30-01-2004 : CSO : Creation wizzard + maj .
#======================================================================



BUILT_OBJECT_TYPE = SHARED LIBRARY
LINK_WITH=JS0GROUP JS0FM JS0GROUP MachinistAlgosServicesItfUUID 


OS=COMMON
LOCAL_CFLAGS=-DCSFDB -DST_Pointer=CATINTPTR -DCV5
LOCAL_CCFLAGS=-DCSFDB -DST_Pointer=CATINTPTR -DANSI -DCV5
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
LOCAL_CFLAGS=-DWNT -DCSFDB -DST_Pointer=CATINTPTR -DWIN32 -D_WINDOWS -DCV5
LOCAL_CCFLAGS=-DWNT -DCSFDB -DST_Pointer=CATINTPTR -DWIN32 -D_WINDOWS -DANSI -D_AFXDLL -DCV5
5


#INSERTION ZONE NOT FOUND, MOVE AND APPEND THIS VARIABLE IN YOUR LINK STATEMENT
#LINK_WITH = ... $(WIZARD_LINK_MODULES) ...
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
#WIZARD_LINK_MODULES =  \
#JS0GROUP JS0FM JS0GROUP MachinistAlgosServicesItfUUID 
 
