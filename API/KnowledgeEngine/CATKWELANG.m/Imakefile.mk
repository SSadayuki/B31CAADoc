##########################################################################
#
#       makefile customization lib:  KR0GGG + KR0YYY
#
##########################################################################
#
# SHARED LIBRARY
#
# -------------------------------------------------------------------------

BUILT_OBJECT_TYPE= SHARED LIBRARY

INCLUDED_MODULES = KR0YYY KR0GGG

# CC flags
# LOCAL_CCFLAGS   = -D_CPP_IOSTREAMS -D__EXTERN_C__ -DSDAI_CPP_LATE_BINDING -DWITHOUT_EXCEPTION
LOCAL_CCFLAGS   = -DSDAI_CPP_LATE_BINDING -DWITHOUT_EXCEPTION

LINK_WITH = KR0DRIV KR0CPP                            \
	    KR0CCC KR0VVV KR0QQQ KR0DDD KR0XXX        \
	    KR0OOO KR0RRR KR0WWW KR0HHH KR0III \
	    JS0CORBA NS0S3STR CO0LSTPV CK0FEAT KnowledgeItf

# TVQ : enlevé KR0YYY
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
