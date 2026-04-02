// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// Imakefile for load module CATTPSHeadersServices.m
//
//=============================================================================
// Usage notes:
//
//=============================================================================
// Nov. 2000  Creation                                                  T. Pech
//=============================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = CATDfuHdr                 \
 
LINK_WITH =   JS0GROUP                      \ # System
              CATApplicationFrame           \ # ApplicationFrame
              CATTPSItf                     \ # CATTPSInterfaces
              CATTPSUUID                    \ # CATTPSInterfaces
              CATProductStructureInterfaces \
              CATPrsWksPRDWorkshop          \
              AS0STARTUP                    \ # ProductStructure
              CATViz                        \
              AD0XXBAS                      \
              CATMechanicalModelerUI        \
