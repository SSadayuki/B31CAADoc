#
#--- visualisation des elements 
#    d'ingenierie 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
COMDYN_MODULE=V4SysCOMD
INCLUDED_MODULES = RepAECGeo V4AECServices
#
LINK_WITH =   \
JS0GROUP      \
VE0GROUP      \
VI0GROUP      \
AC0CATPL      \
CATV4epsilon  \
CATCdbEntity  \
Mathematics   \
EngToolVisu   \
CATV4Geometry \ 
CATV4Maths    \
CATV4System   \
CATVisualization \
CATGviUtilities \
CATIABaseIAO

# The following OS lines were added due to an IRIX link error
# These lines were copied from AECReviewBase\AECV4Services.m\Imakefile.mk

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
#
OS = IRIX
SYS_LIBS = -lftn
#
OS = Windows_NT
SYS_LIBS = 
#
OS = HP-UX
#if os hpux_a
# -lf is for HP 10 whereas -lF90 is for HP 11
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90
#endif
#
OS = hpux_b64 
#if os hpux_a
# -lf is for HP 10 whereas -lF90 is for HP 11 -lcps 
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90 -lcps 
#endif
#
OS = SunOS
SYS_LIBS = -lF77

# Removed 110601 kny
#CATObjectModelerBase \
