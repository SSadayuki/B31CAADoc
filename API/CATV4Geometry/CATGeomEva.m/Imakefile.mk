# ###############################################
#  Imakefile du module CATGeomEva.m
###############################################

LINK_WITH_FOR_IID =
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

DUMMY_LINK_WITH = \
            V4SysB V4SysUTIL V4SysMEM V4SysENV \
            CATCdbEntity JS0CORBA NS0S3STR \
            V4SysLMCALL V4SysANL \
            BftierV5 CATV4Maths CATV4Geometry  \
            CATMathematics CATMathStream

#LOCAL_CCFLAGS = 
#
OS = COMMON
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  $(DUMMY_LINK_WITH)

            

