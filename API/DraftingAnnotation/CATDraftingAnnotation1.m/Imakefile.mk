# 
#      LIB : IDV4ANN
# 
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
COMDYN_MODULE = V4SysCOMD
#
DUMMY_LINK_WITH = V4SysUTIL V4SysB V4SysMEM NS0SI18N JS0GROUP \
                  IDV4STD \
                  VE0BASE \
                  CATCdbEntity \
                  CATIAMAO CATCmvMAO \
                  CATIAUDB2 \
                  YN000M2D CATViz \
                  V4Maths1 V4Maths2 \
                  V4Geom1 V4Geom3 \
                  ObjectModeler DraftingItf CATV4Procedural CATV4gUtilities

#                  V4Topo1 \
#                  CATAIXEngine CATAIXTools \
#                  AC0CATPL \
#                  CATV4epsilon VI0MAO  \
                                     
#
INCLUDED_MODULES = IDV4ANN  IDV4BA1 \
                   IDV4BA2 \
                   IDV4GRA \
                   IDV4PRJ \
                   IDV4CP \
                   IDV4UTI \
                   IDV4APP
#
IMPACT_ON_IMPORT=YES
#
OS = COMMON
LINK_WITH = $(DUMMY_LINK_WITH)
#
OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
#
OS = IRIX
LOCAL_LDFLAGS = -no_unresolved 
SYS_LIBS = -lftn
#
OS = Windows_NT
#OPTIMIZATION_FORTRAN = /optimize:1
#
OS = HP-UX
#
OS = SunOS
#

