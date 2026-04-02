#@ autoformat 07:01:11
#
# Makefile for the shared libray of an interfaces Framework
#
 
BUILT_OBJECT_TYPE= NONE

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    InfItf                         \ # InfInterfaces                  CATInfInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    SketcherItf                    \ # SketcherInterfaces             CATSketcherInterfaces
    JS03TRA                        \ # System                         JS0GROUP
    JS0CORBA                       \ # System                         JS0GROUP
    JS0CTYP                        \ # System                         JS0GROUP
    JS0DSPA                        \ # System                         JS0GROUP
    JS0ERROR                       \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
    JS0INF                         \ # System                         JS0GROUP
    JS0LOGRP                       \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
#

INCLUDED_MODULES = PartItfCPP
 
#BUILD=NO

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
#
#endif
#endif
