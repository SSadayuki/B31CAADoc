// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================
//
// Imakefile for big module CATTTRSItf.m
//
//=============================================================================
// Jul 2002  Creation                                                  S. Veron
//=============================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = CATTTRSItfCPP  \

LINK_WITH=  JS0GROUP              \ # System
            SystemUUID            \
            CATMathematics        \
            CATObjectModelerBase  \
            CATMathStream         \
