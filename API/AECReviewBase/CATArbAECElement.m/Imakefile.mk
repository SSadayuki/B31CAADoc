#
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = AECElement
#
LINK_WITH = CD0WIN JS0GROUP ObjectModeler AC0CATPL \
            V4SysALL CATCdbEntity \
            CATMathematics CO0RCDBL \
            AECRegistration AECAttribut \
            AECInfrastructure IAODependancies IAOKernel \
            VE0GROUP \
            CK0FEAT \
            AECReviewItfCPP AS0STARTUP SpecsModeler\
            SpaceAnalysisItf CATIAAecGeoModeler YN000MAT  \
			      AECV4Services

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID= AECReviewInterfacesUUID
#else
LINK_WITH_IID=
#endif

#
OS = COMMON
#
# removed 110601 kny
# CATDMUBase 			CATKnowledgeModeler \
