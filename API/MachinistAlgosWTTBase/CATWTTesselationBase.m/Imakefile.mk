
BUILT_OBJECT_TYPE = SHARED LIBRARY


#Modules constitutifs.
INCLUDED_MODULES =    \
  CATEMCV5Base        \
  CATINTIntersector3D \
  CATMfgOffset2D      \
  CATPartAuto         \
  CATSDM_ManufDomain  \
  CATToolsBase


OS = Windows_NT
LINK_WITH =                     \
  CATCGMGeoMath                 \
  CATExpIntersectionPredicates  \
  CATExpOrientationPredicates   \
  CATGeometricObjects           \
  CATMathStream                 \
  CATMathematics                \
  CATPolyhedralInterfaces       \
  CATPolyhedralMathematicsDummy \
  CATPolyhedralObjects          \
  CATPolyhedralOperators        \
  CATTopologicalObjects         \
  JS0GROUP


OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
LINK_WITH =  CATCGMGeoMath  CATMathStream  \
             JS0GROUP CATGeometricObjects CATTopologicalObjects  \
             CATMathematics \
             CATPolyhedralMathematicsDummy CATPolyhedralObjects CATPolyhedralInterfaces CATPolyhedralOperators


OS = IRIX
SYS_LIBS = -lftn
LINK_WITH =  CATCGMGeoMath  CATMathStream  \
             JS0GROUP CATGeometricObjects CATTopologicalObjects  \
             CATMathematics \
             CATPolyhedralMathematicsDummy CATPolyhedralObjects CATPolyhedralInterfaces CATPolyhedralOperators


OS = HP-UX
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90
#endif
LINK_WITH =  CATCGMGeoMath  CATMathStream  \
             JS0GROUP CATGeometricObjects CATTopologicalObjects  \
             CATMathematics \
             CATPolyhedralMathematicsDummy CATPolyhedralObjects CATPolyhedralInterfaces CATPolyhedralOperators \
             CATCloudBasicResources


OS = SunOS
SYS_LIBS = -lF77 -lM77
LINK_WITH = JS0CORBA CATWTTesselationBase
