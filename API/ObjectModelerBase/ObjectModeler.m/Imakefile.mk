#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= NONE


INCLUDED_MODULES = AC0XXLNK \
				   AC0WINLNK \
                   AD0XXBAS \
                   ON0GRBAS \
                   ON0MAIN  \
                   ON0GREXT \
                   ON0PROP  \
                   CP0CLIP  \
		   AC0DOMAIN

LINK_WITH = CO0LSTPV \
            CO0LSTST \
            CO0RCINT \
            JS03TRA  \
            JS0CORBA \
            JS0ERROR \
            JS0FM    \
            JS0SCBAK \
            JS0SETT  \
            JS0LIB0  \
            JS0STR   \
            NS0S3STR \
            InfItf   \
            JS0INF



#
OS = AIX

#
OS = HP-UX
#SYS_LIBPATH =
#SH_SYS_LIBPATH = $(SYS_LIBPATH)

#
OS = IRIX

#
OS = SunOS

#
OS = Windows_NT


