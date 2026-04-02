#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE= SHARED LIBRARY

LINK_WITH= VE0BASE VE0LOD YN000MFL O20COLLI JS0LIB0 JS0CORBA YN000MAT O20MEASU O203DMAP LODDMU\
           CATPolyhedralOperators CATPolyhedralInterfaces CATPolyhedralObjects CATMathStream\
		   SpaceMapPolyMeshOperators CATPolyhedralVisuOperators CATPolyhedralVisualization \
#
OS = AIX
SYS_LIBS = 

#
OS = HP-UX
SYS_LIBPATH =  -I/usr/include/Motif1.2 -I/usr/include/X11R5 -I/MIT/X11R5/include 
SYS_LIBS = 

#
OS = IRIX
#SYS_LIBS = -lX11 -lmalloc_cv
SYS_LIBS = 

#
OS = SunOS
LOCAL_CCFLAGS= -xprefetch=explicit
OPTIMIZATION_CPP="-xO3"
SYS_LIBS = 
