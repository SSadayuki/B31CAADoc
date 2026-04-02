//==============================================================================================================
// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2005
//==============================================================================================================
// File: CATICldCAAUtilities.h
//==============================================================================================================
// Usage:
//==============================================================================================================
// 04-Jul-2005 - JLH - Creation
//==============================================================================================================

#ifndef CATICldCAAUtilities_h
#define CATICldCAAUtilities_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */ 

#include "ExportedByCATCloudEditorInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

class CATCldBody ;
class CATISpecObject_var ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCloudEditorInterfaces IID IID_CATICldCAAUtilities ;
#else
extern "C" const IID IID_CATICldCAAUtilities ;
#endif

/**
 * Class providing static methods for CAA Cloud Management
 */

class ExportedByCATCloudEditorInterfaces CATICldCAAUtilities : public CATBaseUnknown
{
  CATDeclareInterface ;

public:

  /**
   * Inserts a CLDGeom feature in the procedural view under a GeometricalSet:<br>
   * <ul>
   * <li>If the current tool is a GeometricalSet, it inserts the feature in it.
   * <li>If not, it will search for the last GeometricalSet in the part.
   * <li>If there is no GeometricalSet, it creates one.
   * </ul>
   * @param iFeature
   * The feature to insert.
   * @param iAfterCurrent
   * If <tt>TRUE</tt>, the feature will be inserted after the current feature if this one is in a current GeometricalSet.
   * Otherwise, it will appended in the GeometricalSet.
   * @param iAsCurrent
   * if <tt>TRUE</tt>, the inserted feature becomes the current one (and so the GeometricalSet too by side effect).
   * @return
   * <tt>S_OK</tt> if successful, <tt>E_FAIL</tt> otherwise.
   */
  virtual HRESULT InsertInProceduralView (const CATISpecObject_var &iFeature,
                                          const CATBoolean          iAfterCurrent = TRUE,
                                          const CATBoolean          iAsCurrent = TRUE) = 0 ;

  /**
   * Updates the geometrical result of the given CLDGeom feature with generation of visualization modification event.
   * @param iFeature
   * The CLDGeom feature to update.
   * @param iGeometry
   * New geometry.
   * @param iUpdate
   * If <tt>TRUE</tt>, an <i>Update</i> will be done.<br>
   * Must be <tt>FALSE</tt> in an Undo/Redo context to avoid writing a already closed transaction.
   */
  virtual HRESULT UpdateResult (const CATISpecObject_var &iFeature,
                                CATCldBody*               iGeometry,
                                const CATBoolean          iUpdate = TRUE) = 0 ;

  /**
   * Returns the geometrical result of a CLDGeom datum-feature.
   */
  virtual CATCldBody* GetCldGeometry (const CATISpecObject_var &iFeature) = 0 ;

} ;

CATDeclareHandler (CATICldCAAUtilities, CATBaseUnknown) ;

#endif
