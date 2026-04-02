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
BUILT_OBJECT_TYPE= NONE

COMDYN_MODULE = V4SysCOMD

LINK_WITH         = JS0GROUP
#
#LOCAL_CCFLAGS     = -DOM0RISC_DEBUG 
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
SYS_LIBS = netapi32.lib
