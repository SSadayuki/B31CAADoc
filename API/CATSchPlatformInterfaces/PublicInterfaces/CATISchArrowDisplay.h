#ifndef CATISchArrowDisplay_H
#define CATISchArrowDisplay_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchGRRRoute;

extern "C" const IID IID_CATISchArrowDisplay ;

/**
 * Interface to manage arrow display attributes on routes. 
 * <b>Role</b>: To add/remove arrow display attributes on routes.
 */

class CATISchArrowDisplay : public IUnknown
{
  public:  
  
  /**
  * Add arrow display attributes on the route.
  * @param iGRR
  *   iGRR means apply only to segments of iGRR.
  *   (if iGRR = NULL, apply to segments of all GRR's of the route,
  *    and ignore iSegNum)
  * @param iSegNum
  *   iSegNum = 0 means apply to all segments of iGRR.
  *   iSegnum > 0 means apply to only to segment number iSegNum iGRR.
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
  virtual HRESULT SetArrow (CATISchGRRRoute *iGRR = NULL, int iSegNum = 0) = 0;
    
  /**
  * Remove arrow display attributes on the route.
  * @param iGRR
  *   iGRR means apply only to segments of iGRR.
  *   (if iGRR = NULL, apply to segments of all GRR's of the route,
  *    and ignore iSegNum)
  * @param iSegNum
  *   iSegNum = 0 means apply to all segments of iGRR.
  *   iSegnum > 0 means apply to only to segment number iSegNum iGRR.
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
  virtual HRESULT UnsetArrow (CATISchGRRRoute *iGRR = NULL, int iSegNum = 0) = 0;

  /**
  * Query whether flow arrows are shown (arrow attributes exist).
  * @param oBYes
  *   If TRUE,  then Flow arrows are shown     (arrow attributes exist).
  *   If FALSE, then Flow arrows are not shown (arrow attributes do not exist).
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
  virtual HRESULT IsArrowShown (CATBoolean *oBYes) = 0;
};

#endif
