#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#  

#ifdef CATIAR417
DUMMY_LINK_WITH = \
  CATGMModelInterfaces \
  CATCGMGeoMath \
  CATSysTS \
  CATPolyhedralMathematics CATGMModelInterfaces
#else
#ifdef CATIAV5R25
DUMMY_LINK_WITH = \
  CATPolyhedralMathematicsDummy \
  CATTopologicalObjects \
  CATGeometricOperators \
  CATTopologicalObjects
#endif
#endif

LINK_WITH = \
  $(DUMMY_LINK_WITH) \
  JS0GROUP \
  JS0FM \
  CATSysAllocator \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATAdvancedMathematics \
  CATTessellation \
  CATTechTools  TessPolygon PolyModel   CATPolyhedralObjects \
  CATPolyhedralInterfaces


# 
