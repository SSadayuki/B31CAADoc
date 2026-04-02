//==============================================================================================================
// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2004
//==============================================================================================================
// File: CATICLDGeom.h
//==============================================================================================================
// Usage:
//==============================================================================================================
// 21-Jan-2002 - JLH - Création
//==============================================================================================================

#ifndef CATICLDGeom_h
#define CATICLDGeom_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */ 

#include "ExportedByCATCloudEditorInterfaces.h"
#include "CATBaseUnknown.h"

extern ExportedByCATCloudEditorInterfaces IID IID_CATICLDGeom ;

class ExportedByCATCloudEditorInterfaces CATICLDGeom: public CATBaseUnknown
{
  CATDeclareInterface ;
public:
} ;

CATDeclareHandler (CATICLDGeom, CATBaseUnknown) ;

#endif
