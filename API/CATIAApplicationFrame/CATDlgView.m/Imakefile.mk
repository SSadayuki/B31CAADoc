# COPYRIGHT DASSAULT SYSTEMES 2007
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH = \
			JS0GROUP JS0FM\
			DI0PANV2\
			CATMathematics CATMathStream\
                        NS0S1MSG \
                        CATViz \
                        VE0BASE

OS = aix_a
SYS_LIBS = -lXm -lXt -lxkbfile -lXmu -lXi -lX11 -lm

OS = aix_a64
SYS_LIBS = -lXm -lXt -lxkbfile -lXmu -lXi -lX11 -lm

OS = HP-UX
SYS_LIBS = -lXm -lXt -lX11

OS = IRIX
SYS_LIBS = -lXm -lxkbfile -lXt -lXmu -lX11

OS = SunOS
SYS_LIBS = -lXm -lXt -lXmu -lX11
