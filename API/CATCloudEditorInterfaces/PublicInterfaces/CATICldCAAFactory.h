//==============================================================================================================
// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2004
//==============================================================================================================
// File: CATICldCAAFactory.h
//==============================================================================================================
// Usage:
//==============================================================================================================
// 08-Sep-2004 - JLH - Création
//==============================================================================================================

#ifndef CATICldCAAFactory_h
#define CATICldCAAFactory_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */ 

#include "ExportedByCATCloudEditorInterfaces.h"

#include "CATBaseUnknown.h"

class CATICLDGeom_var ;
class CATCldBody ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCloudEditorInterfaces IID IID_CATICldCAAFactory ;
#else
extern "C" const IID IID_CATICldCAAFactory ;
#endif

class ExportedByCATCloudEditorInterfaces CATICldCAAFactory: public CATBaseUnknown
{
  CATDeclareInterface ;
public:

  /**
   * Creates a CLDGeom datum with <tt>iBody</tt> as geometry.
   * @param iBody
   * Geometry to agregate to the datum.
   */
  virtual CATICLDGeom_var CreateCLDGeom (CATCldBody* iGeometry = NULL) = 0 ;

} ;

CATDeclareHandler (CATICldCAAFactory, CATBaseUnknown) ;

#endif
