#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
ROOT_LINK_WITH=  JS0GROUP CATComServices CATSysMultiThreading CATSysMainThreadMQ

LINK_WITH = $(ROOT_LINK_WITH) mqic

OS = aix_a
LINK_WITH= $(ROOT_LINK_WITH) mqic_r

OS = hpux_b
LINK_WITH= $(ROOT_LINK_WITH) mqic_r

OS = SunOS
LINK_WITH = $(ROOT_LINK_WITH) mqic mqmcs
SYS_LIBS = -lsocket -lnsl -ldl

OS = Windows
LINK_WITH = $(ROOT_LINK_WITH)
SYS_LIBS = mqic32.lib wsock32.lib

OS=win_b64
BUILD=NO

OS=IRIX
BUILD=NO

OS=win_a
BUILD=NO

OS=aix_a64
LINK_WITH= $(ROOT_LINK_WITH) mqic_r

############################################################################







