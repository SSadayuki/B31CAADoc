// COPYRIGHT DASSAULT SYSTEMES 2003
//=============================================================================
//
// Imakefile for big module CATExchange3DAnnotation.m
//
//=============================================================================
// Feb 2003  Creation                                                C. Guillot
//=============================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = CATExchange3DAnnotationCPP \

LINK_WITH = CATTPSXCADInterfacesUUID \ # XCAD Interfaces for 3D Annotations
            JS0GROUP                 \ # System
