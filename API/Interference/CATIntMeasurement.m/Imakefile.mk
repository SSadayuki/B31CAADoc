
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = O20MEASU

LINK_WITH= CO0LSTPV \
           JS0CORBA \
           JS0ERROR \
           O20COLLI \
           YN000MAT \ # FW Mathematics - lib CATMathematics \
           YN000FUN \ # FW AdvancedMathematics - lib CATAdvancedMathematics.m - CATMathSetOfPointsND
           CATViz \
           CATIntInterfaces \
           #CATMathStream \ # FW Mathematics - lib CATMathStream -- CATSoftwareConfiguration
           #YP00IMPL \ # FW GeometricObjects & CATCGMGeoMath - lib CATGeometricObjects.m -- CATGeoFactory - CATCurve ...
           #CATCGMGeoMath \ # FW GeometricObjects -- CATCrvLimits - CATCrvParam \
           #Y300IINT \ # FW GeometricOperators - lib CATGeometricOperators.m -- CATDistanceMinPtCrv - CATDistanceMinCrvCrv - 
           #YN000MFL \ # FW Mathematics - lib CATMathematics \
           #VE0BASE \
