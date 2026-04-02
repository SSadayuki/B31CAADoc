//==============================================================================================================
// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2009
//==============================================================================================================
// File: CATICldCAAImportManager.h
//==============================================================================================================
// Usage:
//==============================================================================================================
// 03-Jun-2009 - JLH - Creation
//==============================================================================================================

#ifndef CATICldCAAImportManager_h
#define CATICldCAAImportManager_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "ExportedByCATCloudEditorInterfaces.h"
#include "CATBaseUnknown.h"

class CATISpecObject_var ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCloudEditorInterfaces IID IID_CATICldCAAImportManager ;
#else
extern "C" const IID IID_CATICldCAAImportManager ;
#endif

class ExportedByCATCloudEditorInterfaces CATICldCAAImportManager: public CATBaseUnknown
{

  CATDeclareInterface ;

public:

  /**
   * Imports a STL file with a given name.
   * @param iFileName
   * The STL file name
   * @param oObject
   * The created CLDGeom feature
   * @return
   * The import status:
   * <ul>
   * <li>-1: Unauthorized call (licensing, ...)
   * <li>0: Success
   * <li>1: Problem when retrieving the factories
   * <li>2: Problem when retrieving the readers
   * <li>3: Problem when retrieving data (no vertices or triangles)
   * <li>4: Problem when creating result
   * <li>5: Problem when creating resulting CLDGeom feature
   * <li>6: Problem when inserting resulting CLDGeom feature in the SpecTree.
   * </ul>
   */
  virtual unsigned int ImportSTL (const char *        iFileName,
                                  CATISpecObject_var &oObject) = 0 ;

} ;

CATDeclareHandler (CATICldCAAImportManager, CATBaseUnknown) ;

#endif
