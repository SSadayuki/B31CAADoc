##########################################################################
#
#       makefile customization lib:  KR0XXX + KR0QQQ + KR0VVV + KR0DRIV + 
#                                    KR0CCP + KR0CCC
# Module for Expression
#
##########################################################################
#
# SHARED LIBRARY
#
# -------------------------------------------------------------------------

BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = KR0XXX KR0QQQ KR0VVV KR0CPP KR0DRIV KR0CCC

LOCAL_CCFLAGS   = -DWITHOUT_EXCEPTION

LINK_WITH =    CK0FEAT \
JS0CORBA NS0S3STR CO0LSTST \
KnowledgeItf

# -------------------------------------------------------------------------

OS 	= AIX

# templates aix
#INSTANCIATION_MODE = -qnotempinc

# -------------------------------------------------------------------------

OS 	= IRIX

# templates irix
#INSTANCIATION_MODE = -no_auto_include -no_prelink

# -------------------------------------------------------------------------

OS = HP-UX

INSTANCIATION_MODE = -pta -ptv

# -------------------------------------------------------------------------

OS = SunOS

#INSTANCIATION_MODE = -pta -ptv

# -------------------------------------------------------------------------

OS = Windows_NT
