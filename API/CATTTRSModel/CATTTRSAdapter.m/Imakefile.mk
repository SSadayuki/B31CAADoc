// COPYRIGHT DASSAULT SYSTEMES 2004
//=============================================================================
//
// Imakefile for load module CATTTRSAdapter.m
//
//=============================================================================
// Jul. 2004  Creation                                                  T. Pech
//=============================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH=  JS0GROUP                      \ # System
            CATGeometricObjects           \
			AC0SPBAS                      \ # ObjectSpecsLegacy for CATISpecObject
			AD0XXBAS                      \ # ObjectModelerBase
            YI00IMPL                      \ # NewTopologicalObjects
            CATNewTopologicalObjects      \
            CATCGMGeoMath                 \
			MecModItfCPP                  \ # MecModInterfaces
			CATTTRSItf                    \ # CATTTRSInterfaces for CreateCATITTRSVersionningServices
