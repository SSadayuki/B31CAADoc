// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// Imakefile for big module CATTPSTypeLib.m
//
//=============================================================================
// Usage notes:
//
//=============================================================================
//    1999  Creation                                                    G. Bapt
//=============================================================================

BUILT_OBJECT_TYPE=TYPELIB
# no more BUILD_PRIORITY=50

LINK_WITH = InfTypeLib MecModTypeLib DraftingTypeLib PSTypeLib
