#
#   Makefile non evolutif sur le noyau le plus basique qui puisse
#   exister sur la manipulation des structures de donnees CATIA.
#
# Les seuls services qui peuvent etre necessaire sont definis en late par une
# shared-lib de plus haut niveau (CATIAEnable) bindee dynamiquement
# L'ensemble des services de plus haut niveau est decrit exhaustivement 
# par les methodes virtuelles de la classe CATIAEnable implementee 
# volontairement de facon erronee dans ce framework, mais implementee 
# correctement par classe derivee dans le fw ObjectModelerCATSDM.
#
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
INCLUDED_MODULES = CATIAEntity
#
#
DUMMY_LINK_WITH         =  JS0GROUP
#
# LOCAL_CCFLAGS     = -DOM0RISC_DEBUG 
#
OS = AIX
COMDYN_MODULE = V4SysCOMD
LINK_WITH = $(DUMMY_LINK_WITH)
#
OS = HP-UX
LINK_WITH = $(DUMMY_LINK_WITH) V4SysCOMD
#
OS = IRIX
COMDYN_MODULE = V4SysCOMD
LINK_WITH = $(DUMMY_LINK_WITH)
#
OS = SunOS
COMDYN_MODULE = V4SysCOMD
LINK_WITH = $(DUMMY_LINK_WITH)
#
OS = Windows_NT
COMDYN_MODULE = V4SysCOMD
LINK_WITH = $(DUMMY_LINK_WITH)
SYS_LIBS = netapi32.lib
