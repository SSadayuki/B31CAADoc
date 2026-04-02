##########################################################################
#
#       makefile customization lib:  KR0FFF + KR0MMM
#
##########################################################################
#
# SHARED LIBRARY
#
# -------------------------------------------------------------------------

BUILT_OBJECT_TYPE=SHARED LIBRARY


INCLUDED_MODULES = KR0HHH KR0OOO KR0III KR0RRR KR0WWW KR0DDD


# CC flags
LOCAL_CCFLAGS   = -DWITHOUT_EXCEPTION

LINK_WITH =   KR0DRIV KR0CPP KR0CCC KR0VVV KR0QQQ KR0XXX         \
	      KS0LATE KS0SIMPL JS0CORBA NS0S3STR CO0LSTPV JS0STR KnowledgeItf

# TVQ enlevé : CATLiteralFeatures 

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

#INSTANCIATION_MODE = -pta -ptv

# -------------------------------------------------------------------------

OS = Windows_NT

