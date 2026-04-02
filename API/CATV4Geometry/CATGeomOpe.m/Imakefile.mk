# ###############################################
#  Imakefile du module CATGeomOpe.m
###############################################

LINK_WITH_FOR_IID =
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

DUMMY_LINK_WITH = \
            CATCdbEntity JS0CORBA \
            BftierV5 CATV4Maths CATV4Geometry  \
            CATMathematics CATMathStream CATGeomEva

#LOCAL_CCFLAGS = 
#
OS = COMMON
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  $(DUMMY_LINK_WITH)

            

