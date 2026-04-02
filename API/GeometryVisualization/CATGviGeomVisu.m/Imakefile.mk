#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATVisUUID \
CGMV5InteroperabilityUUID \
GeometricObjectsUUID \
GeometryVisualizationUUID \
NewTopologicalObjectsUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# 
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = GeomVisu CATCldVisualization
ALIASES_ON_IMPORT = CATGviGeomVisu CATCloudVisualization

LINK_WITH=$(LINK_WITH_FOR_IID)  \
JS03TRA \
JS0CORBA \
JS0ERROR \
JS0FM \
VE0BASE \
VE0LOD \
VE0MDL \
YN000MFL \
YP00IMPL \
YI00IMPL \
YN000FUN \
CO0LSTPV \
TessAPI  \
HLRModele \
HLRGeometry \
CATTessellationHLRCGM \
FrFOpeCrv \
Y3DYNOPE \
CATMathematics \
CATMeasureGeometryInterfaces \
AC0XXLNK \
CATSysAllocator \
GeomVisuErrors \
CATPolyhedralVisuOperators \
CATPolyhedralVisualization \
CATPolyhedralInterfaces \
CATPolyhedralObjects \
CATPolyhedralOperators \
CATPolyhedralMathematicsDummy \
YP0LOGRP
