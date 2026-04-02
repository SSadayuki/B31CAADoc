# @rewritten [2015:11:27]: LINK_WITH format
# @rewritten [2015:11:27]: LINK_WITH normalization: YN000MAT replaced by CATMathematics
# @rewritten [2015:11:27]: LINK_WITH normalization: CATLifSpecs replaced by KnowledgeItf
#@ autoformat 10:11:23
# COPYRIGHT DASSAULT SYSTEMES 2010
#=========================================================================================
# Imakefile du module CATDibModelerInterfaces
#=========================================================================================
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = \
    CATMathematics        \ # Mathematics                    CATMathematics.m
    JS0GROUP              \ # System                         JS0GROUP.m
    SystemUUID            \ # System                         SystemUUID.m
#
 











