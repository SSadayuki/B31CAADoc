##########################################################################
#
#       makefile customization lib:  KR0BBB
#
##########################################################################
#
# SHARED LIBRARY
#
# -------------------------------------------------------------------------

BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = KR0BBB

# CC flags
LOCAL_CCFLAGS   = -DWITHOUT_EXCEPTION

LINK_WITH =   KR0CCC KR0DRIV KR0CPP                                \
		  KR0VVV KR0DDD KR0QQQ KR0XXX KR0RRR KR0III        \
		  JS0CORBA NS0S3STR CO0LSTPV KS0SIMPL
# Attention : KS0SIMPL est inutile partout .. sauf sur irix_a !!!

# -------------------------------------------------------------------------

OS 	= AIX

# templates aix
INSTANCIATION_MODE = -qnotempinc

# -------------------------------------------------------------------------

OS 	= IRIX

# templates irix
INSTANCIATION_MODE = -no_auto_include -no_prelink

# -------------------------------------------------------------------------

OS = HP-UX

INSTANCIATION_MODE = -pta -ptv

# -------------------------------------------------------------------------

OS = SunOS

# -------------------------------------------------------------------------

OS = Windows_NT



