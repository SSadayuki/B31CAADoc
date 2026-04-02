#
BUILT_OBJECT_TYPE = NONE
#
OS = COMMON
LINK_WITH =  JS0CTYP JS0CORBA JS0MRSHL JS03TRA NS0S6BST NS0S1MSG

##########################################################################
OS =  Windows
##########################################################################
LOCAL_CCFLAGS = $(COMMON_CCFLAGS) -DNOMINMAX

#
OS = AIX
LOCAL_CCFLAGS=-DCATMAINWIN
SYS_LIBS = -liconv

OS = SunOS
LOCAL_CCFLAGS=-DCATMAINWIN

OS = linux_a
LOCAL_CCFLAGS=-DCATMAINWIN

OS = HP-UX
LOCAL_CCFLAGS=-DCATMAINWIN

OS = IRIX
LOCAL_CCFLAGS=-DCATMAINWIN
