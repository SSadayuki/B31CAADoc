// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// Imakefile for big module CATTPSItf.m
//
//=============================================================================
//    1998  Creation                                                    G. Bapt
//=============================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = CATTPSItfCPP  \
                   CATTPSProIDL  \
                   CATTPSPubIDL

LINK_WITH=  JS0GROUP              \ # System
            JS0FM                 \
            SystemUUID            \
            CATVisualization      \
            CATViz                \
            CATApplicationFrame   \ # ApplicationFrame
            CATObjectModelerBase  \
            CATTTRSItf            \ # CATTTRSInterfaces
            CATTTRSUUID           \ # CATTTRSInterfaces
            DraftingItfCPP        \ # DraftingInterfaces
            CATMecModInterfaces   \ # MecModInterfaces
            CATTPSUUID            \ # CATTPSInterfaces
            CATCclInterfaces      \ # ComponentsCatalogsInterfaces
