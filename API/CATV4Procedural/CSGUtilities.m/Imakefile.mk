# ###############################################
#  Imakefile du module CSGUtilities.m
###############################################

LINK_WITH_FOR_IID =
#
BUILT_OBJECT_TYPE = NONE

DUMMY_LINK_WITH = \
            V4SysB V4SysUTIL V4SysMEM V4SysENV \
            CATCdbEntity JS0CORBA NS0S3STR \
            V4SysLMCALL V4SysANL \
            CATV4Geometry CATV4epsilon \
            CATV4Procedural  BftierV5 \
            CATV4Topology CATMathematics \
            CATMathStream JS0FILE

#LOCAL_CCFLAGS = 
#
OS = COMMON
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  $(DUMMY_LINK_WITH)

            

