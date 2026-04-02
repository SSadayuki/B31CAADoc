#======================================================================
# Imakefile for module CATEMCV5Base
# 05-06-06 : CSO ; Creation pour Archi WTT/CGM
#======================================================================
# 
BUILT_OBJECT_TYPE = NONE

# System dependant variables
OS = COMMON
LOCAL_CFLAGS= -DCSFDB -DST_Pointer=int  -DCV5
LOCAL_CCFLAGS= -DCSFDB -DST_Pointer=int  -DANSI -D_AFXDLL -DCV5
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
LOCAL_CFLAGS=-DWNT -DCSFDB -DST_Pointer=int -DWIN32 -D_WINDOWS -DCV5
LOCAL_CCFLAGS=-DWNT -DCSFDB -DST_Pointer=int -DWIN32 -D_WINDOWS -DANSI -D_AFXDLL -DCV5 -DWNT


