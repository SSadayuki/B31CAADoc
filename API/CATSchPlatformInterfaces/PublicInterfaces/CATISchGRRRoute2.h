#ifndef CATISchGRRRoute2_H
#define CATISchGRRRoute2_H

//	COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

// CATSchPlatformInterfaces
#include "CATSchGeneralEnum2.h"

extern "C" const IID IID_CATISchGRRRoute2 ;

class CATISchGRRRoute2;

/**
 * Interface to manage a Schematic route graphic object. 
 * <b>Role</b>: Defines Schematic route graphic object content.
 */
class CATISchGRRRoute2 : public IUnknown
{

  public:   
  
  /**
  * Set the reshape mode.
  * @param iReshapeMode
  *   Whether or not the route shape is fixed for the purpose of reshaping the route.
  *        = SchFixedShapeOff   : no restriction on how to reshape the route.
  *        = SchFixedShapeOn    : reshape only the route's extremity (the segment directly 
  *                               connected to the object that's being moved).
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT SetReshapeMode (CATSchGRRRouteReshapeMode iReshapeMode) = 0;

  /**
  * Get the reshape mode.
  * @param oReshapeMode
  *   Whether or not the route shape is fixed for the purpose of reshaping the route.
  *        = SchFixedShapeOff   : no restriction on how to reshape the route.
  *        = SchFixedShapeOn    : reshape only the route's extremity (the segment directly 
  *                               connected to the object that's being moved).
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetReshapeMode (CATSchGRRRouteReshapeMode &oReshapeMode) = 0;

};
#endif
