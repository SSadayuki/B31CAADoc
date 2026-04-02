# @rewritten [2015:12:11]: LINK_WITH format
#@ autoformat 14:06:24

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = \
    CATMathematics                 \ # Mathematics                    CATMathematics.m
    JS0GROUP                       \ # System                         JS0GROUP.m
    SystemUUID                     \ # System                         SystemUUID.m
    CATSysTS                       \ # SystemTS                       CATSysTS.m
#
 

INCLUDED_MODULES =  CATAnnotationItfCPP
