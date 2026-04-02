################################################
#  Imakefile du module CATTocV4Utilities.m
###############################################

LINK_WITH_FOR_IID =
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

DUMMY_LINK_WITH = \
            V4SysB V4SysUTIL V4SysMEM V4SysENV \
            CATCdbEntity JS0CORBA NS0S3STR \
            V4SysLMCALL V4SysANL \
            CATObjectModelerBase CATCdbEntity AC0CATPL\
            BftierV5 CATV4Geometry CSGUtilities \
            CATSolPrimUtilities CATTocV4Topology \
            CATMathematics CATMathStream CATV4gUtilities 

#LOCAL_CCFLAGS = 
#
OS = COMMON
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  $(DUMMY_LINK_WITH)
          

