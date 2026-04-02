# gdx. 22/10/2003
#
# Imakefile to build ENOVWebCompass
#
# IMPORTANT :
#
# Due to Web viewer prereq restriction this imakefile should never link with
# any module higher than those found in VisualizationBase fw and its prereq
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= JS0FM VE0PIX NS0S3STR YN000M2D CATVizGlider CATMathStream
