#
# SHARED LIBRARY CATPrsExport.m
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = PRDExport


LINK_WITH = AD0XXBAS \
            YN000MAT\
             AC0SPBAS\
            AS0STARTUP \
            CO0RCINT \
            JS03TRA  \
            JS0CORBA \
            JS0ERROR \
            JS0SCBAK \
            JS0SETT  \
            JS0LIB0  \
            JS0STR   \
            NS0S3STR \
            JS0INF\
            VE0MDL CD0WIN\
            CATMathStream CATViz



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


