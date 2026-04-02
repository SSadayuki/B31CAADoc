#======================================================================
# COPYRIGHT DASSAULT SYSTEMES 2001
#======================================================================
# Imakefile for module CATCuiOptions.m
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH = JS0SETT CATObjectModelerBase CD0STWIN \
            DI0PANV2 CO0LSTST CO0LSTPV CO0RCINT \
            JS0CORBA JS0ERROR JS0SCBAK JS0FM JS0STR JS0SETT JS03TRA \
            JS0LIB0\
            JS0DSPA JS0LOGRP JS0CTYP JS0INF\
            AD0XXBAS AC0XXLNK CP0CLIP\
            NS0S3STR\
            CO0LSTPV CO0LSTST CO0RCINT\
            NS0S1MSG ON0FRAME CATDlgStandard \
            CATFileMenu
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
