# Imakefile of the object TessAPIV4
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
LINK_WITH = \
  CATTessellation \
  CATTesHLRUtilities \
  CATAdvancedMathematics \
  CATCGMGeoMath \
  CATCdbEntity \
  CATMathematics \
  CATMathStream \
  CATObjectModelerCATIA \
  CATV4gUtilities \
  CATV4Procedural \
  CATV4System \
  JS0GROUP

OS = COMMON

OS = AIX

OS = IRIX

OS = HP-UX

OS = SunOS

OS = Windows_NT
